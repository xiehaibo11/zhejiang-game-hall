
void FUN_009d676c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar1 = *(long *)(lVar4 + 0x118);
  if (lVar1 != *(long *)(lVar4 + 0x120)) {
    plVar3 = *(long **)(param_1 + 0x40);
    if (plVar3 == (long *)0x0) {
      *(undefined8 *)(lVar1 + 0x20) = 0;
    }
    else if ((long *)(param_1 + 0x20) == plVar3) {
      *(long *)(lVar1 + 0x20) = lVar1;
      (**(code **)(**(long **)(param_1 + 0x40) + 0x18))(*(long **)(param_1 + 0x40),lVar1);
    }
    else {
      uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3);
      *(undefined8 *)(lVar1 + 0x20) = uVar2;
    }
    *(long *)(lVar4 + 0x118) = lVar1 + 0x30;
                    /* try { // try from 009d67f0 to 00ad6803 has its CatchHandler @ 009d7fe0 */
    return;
  }
  std::__ndk1::
  vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
  __push_back_slow_path<std::__ndk1::function<void()>const&>
            ((vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
              *)(lVar4 + 0x110),(function *)(param_1 + 0x20));
  return;
}

