
/* v8::internal::compiler::LoopFinderImpl::ResizeBackwardMarks() */

void __thiscall v8::internal::compiler::LoopFinderImpl::ResizeBackwardMarks(LoopFinderImpl *this)

{
  void *pvVar1;
  int iVar2;
  Zone *this_00;
  void *__s;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  int iVar12;
  
  iVar2 = *(int *)(this + 0xd4);
  this_00 = *(Zone **)this;
  __s = *(void **)(this_00 + 0x10);
  uVar11 = *(long *)(*(long *)(this + 200) + 0x50) - *(long *)(*(long *)(this + 200) + 0x48);
  iVar10 = (int)((long)iVar2 + 1);
  iVar12 = (int)(uVar11 >> 2);
  uVar5 = iVar10 * iVar12;
  uVar9 = -(ulong)(uVar5 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar5 << 2;
  uVar3 = uVar9 + 7 & 0xfffffffffffffff8;
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)__s) < uVar3) {
    __s = (void *)Zone::NewExpand(this_00,uVar3);
  }
  else {
    *(ulong *)(this_00 + 0x10) = uVar3 + (long)__s;
  }
  memset(__s,0,uVar9);
  uVar5 = *(uint *)(this + 0xd4);
  uVar3 = (ulong)uVar5;
  if ((0 < (int)uVar5) && (0 < iVar12)) {
    lVar4 = 0;
    uVar9 = 0;
    pvVar1 = __s;
    do {
      if (0 < (int)uVar5) {
        lVar8 = *(long *)(this + 0xd8);
        lVar7 = 0;
        do {
          lVar6 = lVar7 * 4;
          lVar7 = lVar7 + 1;
          *(undefined4 *)((long)pvVar1 + lVar6) =
               *(undefined4 *)(lVar8 + lVar4 * (int)uVar5 + lVar6);
          uVar3 = (ulong)*(int *)(this + 0xd4);
        } while (lVar7 < (long)uVar3);
      }
      uVar5 = (uint)uVar3;
      uVar9 = uVar9 + 1;
      pvVar1 = (void *)((long)pvVar1 + ((long)iVar2 + 1) * 4);
      lVar4 = lVar4 + 4;
    } while (uVar9 != (uVar11 >> 2 & 0xffffffff));
  }
  *(int *)(this + 0xd4) = iVar10;
  *(void **)(this + 0xd8) = __s;
  return;
}

