#ifndef ARRAY_UTILS_H
#define ARRAY_UTILS_H

#include <iostream>

namespace array_utils {

    template<typename T, int size>
    bool is_sorted(T(&data)[size])
    {
        if (size <= 2) {
            return true;
        }

        bool result = true;
        for (int i = 0; (i < size - 2) && result; ++i)
        {
            bool check_upper = data[i] < data[i + 1] && data[i + 1] < data[i + 2];
            bool check_down = data[i] > data[i + 1] && data[i + 1] > data[i + 2];
            result = check_upper || check_down;
        }

        return result;
    }

    template<typename T, int size>
    int binary_search(T(&data)[size], T key)
    {
        int left = 0, right = size - 1;
        while (left < right)
        {
            if (key == data[left])
            {
                return left;
            }

            if (key == data[right])
            {
                return right;
            }

            int middle = left + (right - left) / 2;

            if (key == data[middle])
            {
                return middle;
            }



            if (key < data[middle])
            {
                right = middle - 1;
            }
            else {
                left = middle + 1;
            }

        }
        return -1;
    }
}

#endif //ARRAY_UTILS_H
