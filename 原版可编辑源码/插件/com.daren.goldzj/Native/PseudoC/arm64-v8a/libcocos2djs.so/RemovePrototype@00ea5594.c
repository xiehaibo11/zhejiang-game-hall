
/* v8::FunctionTemplate::RemovePrototype() */

void __thiscall v8::FunctionTemplate::RemovePrototype(FunctionTemplate *this)

{
  undefined4 uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(uint *)(*(ulong *)this + 0x27);
  uVar4 = *(ulong *)this & 0xffffffff00000000;
  if (((uVar2 & 1) != 0) &&
     (*(short *)((uVar4 | 7) + (ulong)*(uint *)((uVar4 | uVar2) - 1)) == 0xa6)) {
    lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar3 != 0) {
      if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar3 + 0xb738))
                  ("v8::FunctionTemplate::RemovePrototype","FunctionTemplate already instantiated");
        *(undefined1 *)(lVar3 + 0xb6b9) = 1;
        uVar4 = (ulong)*(uint *)(this + 4) << 0x20;
        goto LAB_00ea5614;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::FunctionTemplate::RemovePrototype",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea5614:
  uVar1 = *(undefined4 *)(uVar4 + 0x2c60);
  *(undefined4 *)(uVar4 + 0x2c60) = 5;
  *(uint *)(*(long *)this + 0x2b) = *(uint *)(*(long *)this + 0x2b) & 0xfffffffe | 0x10;
  *(undefined4 *)(uVar4 + 0x2c60) = uVar1;
  return;
}

