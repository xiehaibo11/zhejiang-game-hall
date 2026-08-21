
/* v8::internal::ArrayList::Add(v8::internal::Isolate*,
   v8::internal::Handle<v8::internal::ArrayList>, v8::internal::Handle<v8::internal::Object>) */

ulong * v8::internal::ArrayList::Add(undefined8 param_1,ulong *param_2,ulong *param_3)

{
  long lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  ulong *puVar5;
  ulong uVar6;
  int iVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  
  uVar4 = *(uint *)(*param_2 + 3);
  if (uVar4 < 2) {
    iVar11 = 0;
  }
  else {
    iVar11 = *(int *)(*param_2 + 7) >> 1;
  }
  iVar7 = (int)uVar4 >> 1;
  puVar5 = param_2;
  if (iVar7 <= iVar11 + 1) {
    iVar2 = iVar11 + 2;
    iVar3 = iVar2;
    if (iVar2 < 0) {
      iVar3 = iVar11 + 3;
    }
    iVar3 = iVar3 >> 1;
    if (iVar3 < 3) {
      iVar3 = 2;
    }
    puVar5 = (ulong *)Factory::CopyFixedArrayAndGrow(param_1,param_2,(iVar2 - iVar7) + iVar3);
  }
  if (iVar7 == 0) {
    uVar10 = *puVar5;
    uVar8 = *(undefined8 *)(((ulong)*(uint *)((long)param_2 + 4) << 0x20) + 0x1b8);
    iVar7 = (int)uVar8;
    if (iVar7 != 0) {
      Heap::VerifyObjectLayoutChange((Heap *)(uVar10 & 0xffffffff00000000 | 0x8850),uVar10,uVar8);
    }
    *(int *)(uVar10 - 1) = iVar7;
    *(undefined4 *)(*puVar5 + 7) = 0;
  }
  uVar9 = *puVar5;
  uVar10 = *param_3;
  lVar1 = uVar9 + (long)(iVar11 * 4 + 4);
  *(int *)(lVar1 + 7) = (int)uVar10;
  if ((uVar10 & 1) != 0) {
    uVar6 = *(ulong *)((uVar10 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar9,lVar1,uVar10);
      uVar6 = *(ulong *)(uVar10 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar9 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar9,lVar1,uVar10);
    }
  }
  *(int *)(*puVar5 + 7) = (iVar11 + 1) * 2;
  return puVar5;
}

