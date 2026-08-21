
/* cocos2d::experimental::ThreadPool::newFixedThreadPool(int) */

ThreadPool * cocos2d::experimental::ThreadPool::newFixedThreadPool(int param_1)

{
  ThreadPool *this;
  
  this = operator_new(0x170,(nothrow_t *)&std::nothrow);
  if (this != (ThreadPool *)0x0) {
    *(undefined8 *)(this + 0xb2) = 0;
    *(undefined8 *)(this + 0xaa) = 0;
    *(undefined8 *)(this + 0x98) = 0;
    *(undefined8 *)(this + 0x90) = 0;
    *(undefined8 *)(this + 0xa8) = 0;
    *(undefined8 *)(this + 0xa0) = 0;
    *(undefined8 *)(this + 0x78) = 0;
    *(undefined8 *)(this + 0x70) = 0;
    *(undefined8 *)(this + 0x88) = 0;
    *(undefined8 *)(this + 0x80) = 0;
    *(undefined8 *)(this + 0x58) = 0;
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x68) = 0;
    *(undefined8 *)(this + 0x60) = 0;
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    *(undefined8 *)(this + 0xc4) = 0;
    *(undefined8 *)(this + 0xbc) = 0;
    *(undefined8 *)(this + 0x114) = 0;
    *(undefined8 *)(this + 0x10c) = 0;
    *(undefined8 *)(this + 0x124) = 0;
    *(undefined8 *)(this + 0x11c) = 0;
    *(undefined8 *)(this + 0x134) = 0;
    *(undefined8 *)(this + 300) = 0;
    *(undefined4 *)(this + 0x13c) = 0;
    *(undefined8 *)(this + 0xd4) = 0;
    *(undefined8 *)(this + 0xcc) = 0;
    *(undefined8 *)(this + 0xe4) = 0;
    *(undefined8 *)(this + 0xdc) = 0;
    *(undefined8 *)(this + 0xf4) = 0;
    *(undefined8 *)(this + 0xec) = 0;
    *(undefined8 *)(this + 0x104) = 0;
    *(undefined8 *)(this + 0xfc) = 0;
    *(int *)(this + 0x140) = param_1;
    *(int *)(this + 0x144) = param_1;
    *(undefined4 *)(this + 0x148) = 0;
    *(undefined4 *)(this + 0x160) = 0x40a00000;
    *(undefined8 *)(this + 0x164) = 0x200000002;
    this[0x16c] = (ThreadPool)0x0;
    init(this);
    this[0x16c] = (ThreadPool)0x1;
  }
  return this;
}

