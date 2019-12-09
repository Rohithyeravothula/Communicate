//
// Created by rohith on 12/8/19.
//

#ifndef COMMUNICATE_DISTRIBUTED_COLLECTION_H
#define COMMUNICATE_DISTRIBUTED_COLLECTION_H

namespace rohithy { namespace collections {
template <class T>
class DC {
private:
    T **data;
public:
    int partitions, size;
    DC(int _size){
        partitions = 4;
        this(_size, partitions);
    }
    DC(int _size, int _partitions){
        partitions = _partitions;
        data = new T[partitions][size];
    }
    void addData(T *_data)=0;
    void sort()=0;
    T GetMax()=0;
    T GetMin()=0;
};
} // namespace collections ends
} // namespace rohithy ends


#endif //COMMUNICATE_DISTRIBUTED_COLLECTION_H
