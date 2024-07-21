/************ 定义ZNN的C接口 ************/

#ifndef _ZNN_H_
#define _ZNN_H_

typedef void* ZNNNet;
typedef void* ZNNSession;

enum ZNNStatus {
    StatusOK,
    StatusError,
    StatusBadAlloc,
};

ZNNNet ZNNNetCreate();

ZNNSession ZNNCreateSession(ZNNNet net);

ZNNStatus ZNNWarmUp(ZNNSession sess);

ZNNStatus ZNNRun(ZNNSession sess);

ZNNStatus ZNNCoolDown(ZNNSession sess);


#endif // _ZNN_H_
