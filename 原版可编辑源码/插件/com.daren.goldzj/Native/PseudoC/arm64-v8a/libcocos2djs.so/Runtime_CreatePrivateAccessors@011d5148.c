
/* v8::internal::Runtime_CreatePrivateAccessors(int, unsigned long*, v8::internal::Isolate*) */

ulong v8::internal::Runtime_CreatePrivateAccessors(int param_1,ulong *param_2,Isolate *param_3)

{
  undefined8 uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if (TracingFlags::runtime_stats != 0) {
    uVar6 = FUN_011d5300(param_1,param_2,param_3);
    return uVar6;
  }
  uVar1 = *(undefined8 *)(param_3 + 0x95a0);
  lVar2 = *(long *)(param_3 + 0x95a8);
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + 1;
  puVar3 = (ulong *)Factory::NewAccessorPair((Factory *)param_3);
  uVar7 = *puVar3;
  uVar6 = param_2[-1];
  uVar5 = *param_2;
  iVar9 = (int)uVar5;
  iVar8 = (int)uVar6;
  if ((uVar5 & 1) == 0) {
    *(int *)(uVar7 + 3) = iVar9;
  }
  else if (iVar9 != *(int *)((uVar5 & 0xffffffff00000000) + 0xb0)) {
    *(int *)(uVar7 + 3) = iVar9;
    uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 3,uVar5);
      uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 3,uVar5);
    }
  }
  if ((uVar6 & 1) == 0) {
    *(int *)(uVar7 + 7) = iVar8;
  }
  else if (iVar8 != *(int *)((uVar6 & 0xffffffff00000000) + 0xb0)) {
    *(int *)(uVar7 + 7) = iVar8;
    uVar5 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar5 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar7,uVar7 + 7,uVar6);
      uVar5 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar5 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar7,uVar7 + 7,uVar6);
    }
  }
  uVar6 = *puVar3;
  *(undefined8 *)(param_3 + 0x95a0) = uVar1;
  *(int *)(param_3 + 0x95b0) = *(int *)(param_3 + 0x95b0) + -1;
  if (*(long *)(param_3 + 0x95a8) != lVar2) {
    *(long *)(param_3 + 0x95a8) = lVar2;
    HandleScope::DeleteExtensions(param_3);
  }
  return uVar6;
}

