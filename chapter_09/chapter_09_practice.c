#include<stdio.h>


typedef struct Date
{
    int dd;
    int mm;
    int yyyy;
} DT;


int compare(DT d1, DT d2){
    if (d1.dd == d2.dd && d1.mm==d2.mm && d1.yyyy==d2.yyyy){
        return 0;
    }
    if (d1.yyyy>d2.yyyy){
        return 1;
    }
    else if (d1.yyyy<d2.yyyy)
    {
        return -1;
    }
    else if (d1.mm>d2.mm)
    {
        return 1;
    }
    else if (d1.mm<d2.mm)
    {
        return -1;
    }
    else if (d1.dd>d2.dd)
    {
        return 1;
    }
    else if (d1.dd<d2.dd)
    {
        return-1;
    }
}




struct vector
{
    int i;
    int j;
    int k;
};


void sumVector(struct vector v1, struct vector v2){
    struct vector v3;
    v3.i = v1.i + v2.i;
    v3.j = v1.j + v2.j;
    v3.k = v1.k + v2.k;
    printf("The sum of those vercot is %di+%dj+%dk\n",v3.i,v3.j,v3.k);
}


int main(){
    struct vector v1;
    struct vector v2;
    v1.i = 2;
    v1.j = 2;
    v1.k = 2;
    v2.i = 4;
    v2.j = 4;
    v2.k = 4;
    sumVector(v1,v2);

    DT d1 = {1,2,2032};
    DT d2 = {21,4,2025};

    printf("%d\n",compare(d1,d2));

    return 0;
}