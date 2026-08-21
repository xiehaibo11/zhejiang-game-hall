
/* universe::core::Flags::post(std::__ndk1::function<void ()> const&) */

void __thiscall universe::core::Flags::post(Flags *this,function *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  std::__ndk1::mutex::lock((mutex *)(this + 0x68));
  lVar6 = *(long *)(this + 8);
  lVar4 = *(long *)(this + 0x10);
  uVar1 = 0;
  if (lVar4 - lVar6 != 0) {
    uVar1 = (lVar4 - lVar6 >> 3) * 0x55 - 1;
  }
  uVar5 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
  if (uVar1 == uVar5) {
    std::__ndk1::
    deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
    __add_back_capacity((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                         *)this);
    lVar6 = *(long *)(this + 8);
    lVar4 = *(long *)(this + 0x10);
    uVar5 = *(long *)(this + 0x20) + *(long *)(this + 0x28);
  }
  if (lVar4 == lVar6) {
    lVar6 = 0;
    plVar2 = *(long **)(param_1 + 0x20);
  }
  else {
    lVar6 = *(long *)(lVar6 + (uVar5 / 0x55) * 8) + (uVar5 % 0x55) * 0x30;
    plVar2 = *(long **)(param_1 + 0x20);
  }
  if (plVar2 == (long *)0x0) {
    *(undefined8 *)(lVar6 + 0x20) = 0;
  }
  else if ((long *)param_1 == plVar2) {
    *(long *)(lVar6 + 0x20) = lVar6;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar6);
  }
  else {
    uVar3 = (**(code **)(*plVar2 + 0x10))();
    *(undefined8 *)(lVar6 + 0x20) = uVar3;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  if ((this[0x60] == (Flags)0x0) && (*(int *)(this + 100) == 0)) {
    createTask(this);
  }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 009ffca4 with catch @ 009ffc44
                       catch(type#1 @ 00000000) { ... } // from try @ 009ffe6c with catch @ 009ffc44
                        */
  std::__ndk1::mutex::unlock((mutex *)(this + 0x68));
  return;
}

