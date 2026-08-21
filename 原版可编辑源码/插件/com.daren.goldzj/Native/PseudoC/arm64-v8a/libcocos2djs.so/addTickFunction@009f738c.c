
/* universe::core::Service::addTickFunction(std::__ndk1::function<void (float)> const&) */

void __thiscall universe::core::Service::addTickFunction(Service *this,function *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  lVar1 = *(long *)(this + 0x100);
  if (lVar1 != *(long *)(this + 0x108)) {
    plVar2 = *(long **)(param_1 + 0x20);
    if (plVar2 == (long *)0x0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else if ((long *)param_1 == plVar2) {
      *(long *)(lVar1 + 0x20) = lVar1;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar1);
    }
    else {
                    /* try { // try from 009f73bc to 00af74b7 has its CatchHandler @ 009f73bc
                       catch() { ... } // from try @ 009f73bc with catch @ 009f73bc
                       catch() { ... } // from try @ 009f76ac with catch @ 009f73bc
                       catch() { ... } // from try @ 009f7750 with catch @ 009f73bc
                       catch() { ... } // from try @ 009f7824 with catch @ 009f73bc */
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
    }
    *(long *)(this + 0x100) = *(long *)(this + 0x100) + 0x30;
    return;
  }
  std::__ndk1::
  vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
  ::__push_back_slow_path<std::__ndk1::function<void(float)>const&>
            ((vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
              *)(this + 0xf8),param_1);
  return;
}

