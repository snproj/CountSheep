#include <iostream>
#include <string>
#include <vector>

int* zeroes_elem_transfer(int* array_input, int array_input_size, int* array_with_zeroes, int array_with_zeroes_size)
{
    int* zeroes_ptr = array_with_zeroes;
    int* new_ptr = array_input;

    for (int i = 0; i < array_with_zeroes_size; i++)
    {
        if (*zeroes_ptr != 0)
        {
            *new_ptr = *zeroes_ptr;

            new_ptr++;
        }

        zeroes_ptr++;
    }

    return array_input;

}


int array_offset_finder(int* array_start, int array_start_size)
{
    int* ptr = array_start;

    int last_min_value = *ptr;
    int offset = 0;

    for (int i = 0; i < array_start_size; i++)
    {
        if (*ptr < last_min_value)
        {
            last_min_value = *ptr;
        }

        ptr++;
    }

    offset = last_min_value;

    return offset;

}

int array_max_finder(int* array_start, int array_start_size)
{
    int* ptr = array_start;

    int last_max_value = *ptr;
    int offset = 0;

    for (int i = 0; i < array_start_size; i++)
    {
        if (*ptr > last_max_value)
        {
            last_max_value = *ptr;
        }

        ptr++;
    }

    offset = last_max_value;

    return offset;

}


int* new_array_initializer(int* array_start, int array_start_size)
{
    int offset = array_offset_finder(array_start, array_start_size);
    int max = array_max_finder(array_start, array_start_size);

    int number_of_elements = max - offset;

    int* new_array = new int[number_of_elements];

    for (int i = 0; i < number_of_elements; i++)
    {
        new_array[i] = 0;
    }

    return new_array;

}

int* sort(int* array_start, int array_start_size)
{
    int* ptr_start = array_start;
    int* array_end = new_array_initializer(array_start, array_start_size);

    int max = array_max_finder(array_start, array_start_size);

    int* ptr_end = array_end;

    int offset = array_offset_finder(array_start, array_start_size);

    for (int i = 0; i < array_start_size; i++)
    {
        int raw_number = *ptr_start;
        int end_array_index = raw_number - offset;

        //std::cout << "raw number is: " << raw_number << std::endl;
         //std::cout << "end array index number is: " << end_array_index << std::endl;

        *(ptr_end + end_array_index) = raw_number;

        ptr_start++;
    }

    int* new_array = zeroes_elem_transfer(array_start, array_start_size, array_end, max);

    return new_array;

}


int main()
{

    int array_start[5] = { 12, 13, 11, 14, 10 };
    int array_TEST[10] = { 1, 23, 74, 34, 854, 22, 98, 324, 11, 99 };

    std::cout << "offset is " << array_offset_finder(array_TEST, 10) << std::endl;

    std::cout << "max is " << array_max_finder(array_TEST, 10) << std::endl;


    int* new_array = sort(array_TEST, 10);

    for (int i = 0; i < 10; i++)
    {
        std::cout << *(new_array + i) << std::endl;
    }




}