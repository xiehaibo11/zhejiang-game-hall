
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
                    /* try { // try from 009d62b0 to 00ad62c3 has its CatchHandler @ 009d7fe8 */
      uVar3 = (**(code **)(*plVar2 + 0x10))();
      *(undefined8 *)(lVar1 + 0x20) = uVar3;
    }
    *(long *)(this + 0x100) = lVar1 + 0x30;
    return;
  }
                    /* try { // try from 009d62c8 to 00ad6333 has its CatchHandler @ 009d80b4 */
  std::__ndk1::
  vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
  ::__push_back_slow_path<std::__ndk1::function<void(float)>const&>
            ((vector<std::__ndk1::function<void(float)>,std::__ndk1::allocator<std::__ndk1::function<void(float)>>>
              *)(this + 0xf8),param_1);
  return;
}

