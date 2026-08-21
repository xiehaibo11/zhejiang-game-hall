
/* v8::internal::RuntimeCallStats::Leave(v8::internal::RuntimeCallTimer*) */

void __thiscall
v8::internal::RuntimeCallStats::Leave(RuntimeCallStats *this,RuntimeCallTimer *param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_38;
  
  if (*(RuntimeCallTimer **)this != (RuntimeCallTimer *)0x0) {
    if (*(RuntimeCallTimer **)this != param_1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","stack_top == timer");
    }
    if (*(long *)(param_1 + 0x10) == 0) {
      lVar2 = *(long *)(param_1 + 8);
    }
    else {
      lVar1 = (*(code *)RuntimeCallTimer::Now)();
      lVar2 = *(long *)(param_1 + 0x10);
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(long *)(param_1 + 0x18) = (lVar1 - lVar2) + *(long *)(param_1 + 0x18);
      *(long *)(*(long *)param_1 + 8) = *(long *)(*(long *)param_1 + 8) + 1;
      local_38 = *(undefined8 *)(param_1 + 0x18);
      lVar4 = *(long *)param_1;
      lVar2 = base::TimeDelta::InMicroseconds((TimeDelta *)&local_38);
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar2;
      *(undefined8 *)(param_1 + 0x18) = 0;
      lVar2 = *(long *)(param_1 + 8);
      if (lVar2 != 0) {
        *(long *)(lVar2 + 0x10) = lVar1;
      }
    }
    *(long *)this = lVar2;
    uVar3 = 0;
    if (*(undefined8 **)this != (undefined8 *)0x0) {
      uVar3 = **(undefined8 **)this;
    }
    *(undefined8 *)(this + 8) = uVar3;
  }
  return;
}

