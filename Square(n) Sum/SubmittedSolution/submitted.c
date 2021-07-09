int square_sum(const int *values, size_t count){
    size_t sum = 0, i, square;
    
    for(i = 0; i < count; i++)
    {
        square = values[i] * values[i];
        sum = sum + square;
    }
    return sum;
}
