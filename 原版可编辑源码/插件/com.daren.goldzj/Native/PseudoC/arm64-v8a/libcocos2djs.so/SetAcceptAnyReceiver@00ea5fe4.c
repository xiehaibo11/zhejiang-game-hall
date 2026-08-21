
/* v8::FunctionTemplate::SetAcceptAnyReceiver(bool) */

void __thiscall v8::FunctionTemplate::SetAcceptAnyReceiver(FunctionTemplate *this,bool param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  
  uVar3 = *(uint *)(*(ulong *)this + 0x27);
  uVar5 = *(ulong *)this & 0xffffffff00000000;
  if (((uVar3 & 1) != 0) &&
     (*(short *)((uVar5 | 7) + (ulong)*(uint *)((uVar5 | uVar3) - 1)) == 0xa6)) {
    lVar4 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar4 != 0) {
      if (*(code **)(lVar4 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar4 + 0xb738))
                  ("v8::FunctionTemplate::SetAcceptAnyReceiver",
                   "FunctionTemplate already instantiated");
        *(undefined1 *)(lVar4 + 0xb6b9) = 1;
        uVar5 = (ulong)*(uint *)(this + 4) << 0x20;
        goto LAB_00ea606c;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::SetAcceptAnyReceiver",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea606c:
  uVar2 = *(undefined4 *)(uVar5 + 0x2c60);
  *(undefined4 *)(uVar5 + 0x2c60) = 5;
  uVar3 = *(int *)(*(long *)this + 0x2b) >> 1;
  uVar1 = uVar3 | 0x20;
  if (!param_1) {
    uVar1 = uVar3 & 0x7fffffdf;
  }
  *(int *)(*(long *)this + 0x2b) = uVar1 << 1;
  *(undefined4 *)(uVar5 + 0x2c60) = uVar2;
  return;
}

