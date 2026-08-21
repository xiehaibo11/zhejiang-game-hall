
/* v8::ObjectTemplate::MarkAsUndetectable() */

void __thiscall v8::ObjectTemplate::MarkAsUndetectable(ObjectTemplate *this)

{
  int *piVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  undefined4 uVar5;
  ulong *puVar6;
  long lVar7;
  ulong uVar8;
  Isolate *pIVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar4 = *(uint *)(this + 4);
  pIVar9 = (Isolate *)((ulong)uVar4 << 0x20);
  piVar1 = (int *)((ulong)uVar4 << 0x20 | 0x95b0);
  uVar5 = *(undefined4 *)(pIVar9 + 0x2c60);
  *(undefined4 *)(pIVar9 + 0x2c60) = 5;
  puVar2 = (undefined8 *)((ulong)uVar4 << 0x20 | 0x95a0);
  plVar3 = (long *)((ulong)uVar4 << 0x20 | 0x95a8);
  uVar11 = *puVar2;
  lVar10 = *plVar3;
  *piVar1 = *piVar1 + 1;
  puVar6 = (ulong *)FUN_00ea6c84(pIVar9,this);
  uVar8 = *puVar6;
  if (((*(uint *)(uVar8 + 0x27) & 1) != 0) &&
     (*(short *)((uVar8 & 0xffffffff00000000 | 7) +
                (ulong)*(uint *)((uVar8 & 0xffffffff00000000 | (ulong)*(uint *)(uVar8 + 0x27)) - 1))
      == 0xa6)) {
    lVar7 = base::Thread::GetThreadLocal(internal::Isolate::isolate_key_);
    if (lVar7 != 0) {
      if (*(code **)(lVar7 + 0xb738) != (code *)0x0) {
        (**(code **)(lVar7 + 0xb738))
                  ("v8::ObjectTemplate::MarkAsUndetectable","FunctionTemplate already instantiated")
        ;
        *(undefined1 *)(lVar7 + 0xb6b9) = 1;
        uVar8 = *puVar6;
        goto LAB_00ea6c08;
      }
    }
    base::OS::PrintError
              ("\n#\n# Fatal error in %s\n# %s\n#\n\n","v8::ObjectTemplate::MarkAsUndetectable",
               "FunctionTemplate already instantiated");
                    /* WARNING: Subroutine does not return */
    base::OS::Abort();
  }
LAB_00ea6c08:
  *(uint *)(uVar8 + 0x2b) = *(uint *)(uVar8 + 0x2b) & 0xfffffffc | 2;
  if (uVar4 != 0) {
    *puVar2 = uVar11;
    *piVar1 = *piVar1 + -1;
    if (*plVar3 != lVar10) {
      *plVar3 = lVar10;
      internal::HandleScope::DeleteExtensions(pIVar9);
    }
  }
  *(undefined4 *)(pIVar9 + 0x2c60) = uVar5;
  return;
}

