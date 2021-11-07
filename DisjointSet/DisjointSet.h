#ifndef _DISJSET_H
#define _DISJSET_H



#define NumSets 5000
typedef int DisjSet[NumSets+1];
typedef int SetType;
typedef int ElementType;

void initialize(DisjSet S);
void SetUnion(DisjSet S, SetType root1, SetType root2);
SetType Find(ElementType X, DisjSet S);




#endif
