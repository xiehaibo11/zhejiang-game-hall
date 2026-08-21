
/* std::__ndk1::vector<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> >
   >::vector(std::__ndk1::vector<std::__ndk1::function<void ()>,
   std::__ndk1::allocator<std::__ndk1::function<void ()> > > const&) */

void __thiscall
std::__ndk1::
vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::vector
          (vector<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
           *this,vector *param_1)

{
  long *plVar1;
  long *plVar2;
  ulong uVar3;
  void *pvVar4;
  long *plVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)this = 0;
  uVar3 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar3 != 0) {
    if (0x555555555555555 < (ulong)(((long)uVar3 >> 4) * -0x5555555555555555)) {
                    /* WARNING: Subroutine does not return */
      __vector_base_common<true>::__throw_length_error();
    }
    pvVar4 = operator_new(uVar3);
    *(void **)this = pvVar4;
    *(void **)(this + 8) = pvVar4;
    *(void **)(this + 0x10) = (void *)((long)pvVar4 + ((long)uVar3 >> 4) * 0x10);
    plVar2 = *(long **)(param_1 + 8);
    for (plVar1 = *(long **)param_1; plVar1 != plVar2; plVar1 = plVar1 + 6) {
      plVar5 = (long *)plVar1[4];
      if (plVar5 == (long *)0x0) {
        *(undefined8 *)((long)pvVar4 + 0x20) = 0;
      }
      else if (plVar1 == plVar5) {
        *(void **)((long)pvVar4 + 0x20) = pvVar4;
        (**(code **)(*(long *)plVar1[4] + 0x18))((long *)plVar1[4],pvVar4);
      }
      else {
        uVar6 = (**(code **)(*plVar5 + 0x10))();
        *(undefined8 *)((long)pvVar4 + 0x20) = uVar6;
      }
      pvVar4 = (void *)(*(long *)(this + 8) + 0x30);
      *(void **)(this + 8) = pvVar4;
    }
  }
  return;
}

