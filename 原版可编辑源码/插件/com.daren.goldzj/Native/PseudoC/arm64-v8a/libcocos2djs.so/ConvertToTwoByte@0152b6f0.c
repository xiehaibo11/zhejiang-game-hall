
/* v8::internal::LiteralBuffer::ConvertToTwoByte() */

void __thiscall v8::internal::LiteralBuffer::ConvertToTwoByte(LiteralBuffer *this)

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(this + 0x10);
  uVar7 = *(ulong *)(this + 8);
  iVar2 = uVar9 * 2;
  if (iVar2 < (int)uVar7) {
    pvVar8 = *(void **)this;
    pvVar3 = pvVar8;
  }
  else {
    iVar1 = uVar9 << 3;
    if (0x2aaaa < (int)uVar9) {
      iVar1 = iVar2 + 0x100000;
    }
    uVar7 = (ulong)iVar1;
    pvVar3 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
    if (pvVar3 == (void *)0x0) {
      plVar4 = (long *)V8::GetCurrentPlatform();
      (**(code **)(*plVar4 + 0x18))();
      pvVar3 = operator_new__(uVar7,(nothrow_t *)&std::nothrow);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
      }
      uVar9 = *(uint *)(this + 0x10);
    }
    pvVar8 = *(void **)this;
  }
  if (0 < (int)uVar9) {
    uVar5 = (ulong)uVar9;
    do {
      uVar6 = uVar5 - 1;
      *(ushort *)((long)pvVar3 + uVar5 * 2 + -2) = (ushort)*(byte *)((long)pvVar8 + (uVar5 - 1));
      uVar5 = uVar6;
    } while (0 < (long)uVar6);
  }
  pvVar8 = *(void **)this;
  if (pvVar8 != pvVar3) {
    if (pvVar8 != (void *)0x0) {
      operator_delete__(pvVar8);
    }
    *(void **)this = pvVar3;
    *(ulong *)(this + 8) = uVar7;
  }
  *(int *)(this + 0x10) = iVar2;
  this[0x14] = (LiteralBuffer)0x0;
  return;
}

