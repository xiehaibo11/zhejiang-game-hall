
/* v8::internal::Factory::NewPreparseData(int, int) */

ulong * __thiscall v8::internal::Factory::NewPreparseData(Factory *this,int param_1,int param_2)

{
  long lVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  ulong *puVar6;
  undefined4 *puVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  
  uVar2 = *(undefined4 *)(this + 0x240);
  uVar5 = Heap::AllocateRawWithRetryOrFailSlowPath
                    ((Heap *)(this + 0x8850),(param_1 + 0xfU & 0xfffffffc) + param_2 * 4,1,1,0);
  *(undefined4 *)(uVar5 - 1) = uVar2;
  if (*(CanonicalHandleScope **)(this + 0x95b8) == (CanonicalHandleScope *)0x0) {
    puVar6 = *(ulong **)(this + 0x95a0);
    if (puVar6 == *(ulong **)(this + 0x95a8)) {
      puVar6 = (ulong *)HandleScope::Extend((Isolate *)this);
    }
    *(ulong **)(this + 0x95a0) = puVar6 + 1;
    *puVar6 = uVar5;
  }
  else {
    puVar6 = (ulong *)CanonicalHandleScope::Lookup(*(CanonicalHandleScope **)(this + 0x95b8),uVar5);
    uVar5 = *puVar6;
  }
  *(int *)(uVar5 + 3) = param_1;
  *(int *)(*puVar6 + 7) = param_2;
  uVar5 = *puVar6;
  if (param_2 == 0) goto LAB_00f76e78;
  uVar2 = *(undefined4 *)(this + 0xb0);
  lVar1 = uVar5 + (long)(int)(*(int *)(uVar5 + 3) + 0xfU & 0xfffffffc);
  uVar5 = (ulong)param_2;
  if ((uint)param_2 < 8) {
    uVar9 = 0;
LAB_00f76e60:
    lVar8 = uVar5 - uVar9;
    puVar7 = (undefined4 *)(lVar1 + -1 + uVar9 * 4);
    do {
      lVar8 = lVar8 + -1;
      *puVar7 = uVar2;
      puVar7 = puVar7 + 1;
    } while (lVar8 != 0);
  }
  else {
    uVar9 = uVar5 & 0xfffffffffffffff8;
    puVar10 = (undefined8 *)(lVar1 + 0xf);
    uVar11 = uVar9;
    do {
      puVar10[-1] = CONCAT44(uVar2,uVar2);
      puVar10[-2] = CONCAT44(uVar2,uVar2);
      puVar10[1] = CONCAT44(uVar2,uVar2);
      *puVar10 = CONCAT44(uVar2,uVar2);
      uVar11 = uVar11 - 8;
      puVar10 = puVar10 + 4;
    } while (uVar11 != 0);
    if (uVar9 != uVar5) goto LAB_00f76e60;
  }
  uVar5 = *puVar6;
LAB_00f76e78:
  iVar3 = *(int *)(uVar5 + 3);
  iVar4 = ((iVar3 + 0xfU & 0xfffffffc) - iVar3) + -0xc;
  if (iVar4 != 0) {
    memset((void *)(uVar5 + (long)iVar3 + 0xb),0,(long)iVar4);
  }
  return puVar6;
}

