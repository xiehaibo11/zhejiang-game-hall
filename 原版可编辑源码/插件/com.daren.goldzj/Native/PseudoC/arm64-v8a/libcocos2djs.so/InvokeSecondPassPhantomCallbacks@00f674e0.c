
/* v8::internal::GlobalHandles::InvokeSecondPassPhantomCallbacks() */

void __thiscall v8::internal::GlobalHandles::InvokeSecondPassPhantomCallbacks(GlobalHandles *this)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true> aPStack_38 [16];
  long local_28;
  
  lVar2 = tpidr_el0;
  local_28 = *(long *)(lVar2 + 0x28);
  if (this[0xa1] == (GlobalHandles)0x0) {
    this[0xa1] = (GlobalHandles)0x1;
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::PerIsolateAssertScope
              (aPStack_38,*(Isolate **)this);
    while (lVar1 = *(long *)(this + 0x90), *(long *)(this + 0x88) != lVar1) {
      pcVar3 = *(code **)(lVar1 + -0x20);
      local_60 = *(undefined8 *)this;
      uStack_58 = *(undefined8 *)(lVar1 + -0x18);
      uStack_48 = *(undefined8 *)(lVar1 + -0x10);
      local_40 = *(undefined8 *)(lVar1 + -8);
      *(undefined8 **)(this + 0x90) = (undefined8 *)(lVar1 + -0x20);
      local_50 = 0;
      (*pcVar3)(&local_60);
    }
    this[0xa1] = (GlobalHandles)0x0;
    PerIsolateAssertScope<(v8::internal::PerIsolateAssertType)0,true>::~PerIsolateAssertScope
              (aPStack_38);
  }
  if (*(long *)(lVar2 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

