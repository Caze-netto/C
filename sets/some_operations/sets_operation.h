#ifndef SETS_OPERATION_H
#define SETS_OPERATION_H

int *intersect(int *set1, int size1, int *set2, int size2, int *resultSize); 
int *diff(int *set1, int size1, int *set2, int size2, int *resultSize);
int *unionSet(int *set1, int size1, int *set2, int size2, int *resultSize);

#endif