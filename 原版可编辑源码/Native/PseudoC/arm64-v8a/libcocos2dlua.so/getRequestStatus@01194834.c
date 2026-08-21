
/* dtPathQueue::getRequestStatus(unsigned int) const */

undefined4 __thiscall dtPathQueue::getRequestStatus(dtPathQueue *this,uint param_1)

{
  long lVar1;
  
  if (*(uint *)this == param_1) {
    lVar1 = 0;
  }
  else if (*(uint *)(this + 0x48) == param_1) {
    lVar1 = 1;
  }
  else if (*(uint *)(this + 0x90) == param_1) {
    lVar1 = 2;
  }
  else if (*(uint *)(this + 0xd8) == param_1) {
    lVar1 = 3;
  }
  else if (*(uint *)(this + 0x120) == param_1) {
    lVar1 = 4;
  }
  else if (*(uint *)(this + 0x168) == param_1) {
    lVar1 = 5;
  }
  else if (*(uint *)(this + 0x1b0) == param_1) {
    lVar1 = 6;
  }
  else {
    if (*(uint *)(this + 0x1f8) != param_1) {
      return 0x80000000;
    }
    lVar1 = 7;
  }
  return *(undefined4 *)(this + lVar1 * 0x48 + 0x34);
}

