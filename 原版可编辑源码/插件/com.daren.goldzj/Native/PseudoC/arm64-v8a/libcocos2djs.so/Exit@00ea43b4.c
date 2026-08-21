
/* v8::Context::Exit() */

void __thiscall v8::Context::Exit(Context *this)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  uVar1 = *(uint *)(this + 4);
  lVar6 = (ulong)uVar1 << 0x20;
  uVar2 = *(undefined4 *)(lVar6 + 0x2c60);
  *(undefined4 *)(lVar6 + 0x2c60) = 5;
  lVar3 = *(long *)((ulong)uVar1 << 0x20 | 0x95c0);
  if ((*(long *)(lVar3 + 0x30) != 0) &&
     (lVar4 = *(long *)(lVar3 + 0x30) + -1,
     (int)*(undefined8 *)(*(long *)(lVar3 + 0x20) + lVar4 * 8) == *(int *)this)) {
    *(long *)(lVar3 + 0x30) = lVar4;
    *(long *)(lVar3 + 0x48) = *(long *)(lVar3 + 0x48) + -1;
    lVar4 = *(long *)(lVar3 + 0x60) + -1;
    uVar5 = *(undefined8 *)(*(long *)(lVar3 + 0x50) + lVar4 * 8);
    *(long *)(lVar3 + 0x60) = lVar4;
    *(undefined8 *)(lVar6 + 0x2bc8) = uVar5;
LAB_00ea446c:
    *(undefined4 *)(lVar6 + 0x2c60) = uVar2;
    return;
  }
  lVar3 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
  if (lVar3 != 0) {
    if (*(code **)(lVar3 + 0xb738) != (code *)0x0) {
      (**(code **)(lVar3 + 0xb738))("v8::Context::Exit()","Cannot exit non-entered context");
      *(undefined1 *)(lVar3 + 0xb6b9) = 1;
      goto LAB_00ea446c;
    }
  }
  base::OS::PrintError
            ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::Context::Exit()",
             "Cannot exit non-entered context");
                    /* WARNING: Subroutine does not return */
  base::OS::Abort();
}

