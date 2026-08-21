
/* WsThreadHelper::~WsThreadHelper() */

void __thiscall WsThreadHelper::~WsThreadHelper(WsThreadHelper *this)

{
  long lVar1;
  long *plVar2;
  long lVar3;
  thread *this_00;
  long *plVar4;
  long *plVar5;
  
  this_00 = *(thread **)(this + 0x30);
  if (*(long *)this_00 != 0) {
    std::__ndk1::thread::join(this_00);
    this_00 = *(thread **)(this + 0x30);
  }
  if (this_00 != (thread *)0x0) {
    std::__ndk1::thread::~thread(this_00);
    operator_delete(this_00);
  }
  plVar4 = *(long **)this;
  *(undefined8 *)(this + 0x30) = 0;
  if (plVar4 != (long *)0x0) {
    if (plVar4[2] != 0) {
      lVar1 = *plVar4;
      plVar2 = (long *)plVar4[1];
      lVar3 = *plVar2;
      *(undefined8 *)(lVar3 + 8) = *(undefined8 *)(lVar1 + 8);
      **(long **)(lVar1 + 8) = lVar3;
      plVar4[2] = 0;
      while (plVar2 != plVar4) {
        plVar5 = (long *)plVar2[1];
        operator_delete(plVar2);
        plVar2 = plVar5;
      }
    }
    operator_delete(plVar4);
  }
  std::__ndk1::mutex::~mutex((mutex *)(this + 8));
  return;
}

