//
// Created by onedayrex on 2017/4/3.
//
#include <stdio.h>

//三人借五本书，有多少种借法
int browerbook(){
    /*算法通过穷举，每本书都有一个编号，当a选一本，其它人就没法选，最终三人的书是不一样的
     * 改进：在前两个人借到书后，先判断两个人的书是否是一样的，这样如果两个人的书不一样才
     * 去穷举第三个人的书，不用因为前两人的书一样还去穷举第三个人的书5次*/
    for (int i = 1; i <= 5; ++i) {
        for (int j = 1; j <= 5; ++j) {
            for (int k = 1; k <=5; ++k) {
                if (i != j && j != k && i!=k) {
                    printf("|A:%d B:%d C:%d ",i,j,k);
                }
            }
        }
    }
    return 0;
}

