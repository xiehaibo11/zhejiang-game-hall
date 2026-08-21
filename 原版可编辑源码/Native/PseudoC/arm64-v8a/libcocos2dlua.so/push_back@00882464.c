
/* std::__ndk1::deque<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> > >::push_back(std::__ndk1::function<void
   ()>&&) */

void __thiscall
std::__ndk1::
deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
push_back(deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
          *this,function *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  function *pfVar4;
  long lVar5;
  ulong uVar6;
  
  lVar2 = *(long *)(this + 8);
  lVar5 = *(long *)(this + 0x10);
  lVar3 = *(long *)(this + 0x28);
  uVar1 = 0;
  if (lVar5 - lVar2 != 0) {
    uVar1 = (lVar5 - lVar2 >> 3) * 0x55 - 1;
  }
  uVar6 = lVar3 + *(long *)(this + 0x20);
  if (uVar1 == uVar6) {
    __add_back_capacity(this);
    lVar3 = *(long *)(this + 0x28);
    lVar2 = *(long *)(this + 8);
    lVar5 = *(long *)(this + 0x10);
    uVar6 = *(long *)(this + 0x20) + lVar3;
  }
  if (lVar5 == lVar2) {
    lVar2 = 0;
    pfVar4 = *(function **)(param_1 + 0x20);
  }
  else {
    lVar2 = *(long *)(lVar2 + (uVar6 / 0x55) * 8) + (uVar6 % 0x55) * 0x30;
    pfVar4 = *(function **)(param_1 + 0x20);
  }
  if (pfVar4 == (function *)0x0) {
    *(undefined8 *)(lVar2 + 0x20) = 0;
  }
  else if (param_1 == pfVar4) {
    *(long *)(lVar2 + 0x20) = lVar2;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x18))();
    lVar3 = *(long *)(this + 0x28);
  }
  else {
    *(function **)(lVar2 + 0x20) = pfVar4;
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  *(long *)(this + 0x28) = lVar3 + 1;
  return;
}

