

int main() {
    
    long a,b;
    float x,y;

    //cast a to a long, with no conversion. pure bits
    y = * (float *) &a;
    //other way round
    b = *(long *) &x;
    //get reference to x, cast pointer to long, dereference.
    

    
    return 0;
}