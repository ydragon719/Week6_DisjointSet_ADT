# Week6_DisjointSet_ADT
不相交集学习笔记
本周主要学习了不相交集和第十章的算法设计技巧的部分内容，同时补充了上周没有完成的关于排序的笔记，不想交集ADT部分的内容比较简单，重要的是理解不相交集的概念和性质（这部分和离散数学结合的应该比较紧密）：一个集合S上的元素之间存在的等价关系是对集合S的一个划分，相互等价的元素可以划分到一个子集中，而没有等价关系的两个元素肯定不会被分到同一个子集中，所以按照等价关系划分可以将S划分为多个子集，每个子集中的元素都相互等价，这些子集是不相交的，而且他们的并正好是集合S。具有这种特性的集合可以视为一个不相交集。在了解了不相交集后我们可以利用它的特点进行一些特定的操作，如合并与查找。同时又衍生出对union操作的改进：按大小求并（这个思想是打破随意将一个集合接到另一个集合上的做法，而是根据大小将树合并，即永远将小的集合挂到大的集合上，这种实现方式很简单，并且使得森林中树的结构都不会特别复杂，避免了最坏情况的发生，存储时，将树的根节点的内容存储为此时树的大小的负数）、按高度求并（根据高度将树合并，即永远将矮的集合挂到高的集合上，存储时，将树的根节点的内容存储为此时树的高度的负数）。对find操作的改进：路径压缩（在每一次find后，将find的数据到根节点的沿途的每个节点都挂到根节点上，从而对路径进行压缩，而下次查找同一个元素或者其同子集下的元素就会非常省时间，且降低了树的高度和深度）。第十章算法设计技巧部分还未学完，具体笔记总结下周再写。
笔记如下：
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272549034.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272560389.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272575326.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272594225.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272602135.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272613157.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272622422.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272633246.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272643828.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272654022.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272663303.jpg)
![Images](https://github.com/ydragon719/Week6_DisjointSet_ADT/blob/main/Images/1636272672746.jpg)
