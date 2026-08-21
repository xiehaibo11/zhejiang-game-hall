
void FUN_010a85ec(undefined8 param_1,ulong *param_2,long param_3,ulong param_4)

{
  long lVar1;
  undefined4 *puVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar4 | *(uint *)(*param_2 + 7);
  uVar3 = (*(int *)(uVar5 + 3) >> 1) - 2;
  if ((uint)param_3 < uVar3) {
    uVar6 = *(uint *)(uVar5 + 7 + (long)(int)((uint)param_3 * 4 + 8));
    uVar3 = *(uint *)(uVar5 + 7);
  }
  else {
    uVar8 = uVar4 | *(uint *)(uVar5 + 0xb);
    lVar1 = uVar8 + ((long)((param_3 - (ulong)uVar3) * 0xc00000000 + 0x1400000000) >> 0x20);
    uVar3 = *(uint *)(lVar1 + 7);
    if (((uVar3 & 1) == 0) ||
       (uVar7 = uVar4 | uVar3, *(short *)((uVar4 | 7) + (ulong)*(uint *)(uVar7 - 1)) != 0x53)) {
      puVar2 = (undefined4 *)(lVar1 + 7);
      *puVar2 = (int)param_4;
      if ((param_4 & 1) == 0) {
        return;
      }
      uVar4 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      uVar3 = (uint)uVar4;
      goto joined_r0x010a86c4;
    }
    uVar3 = *(uint *)(uVar5 + 7);
    uVar6 = *(uint *)(uVar7 + 3);
  }
  uVar8 = uVar4 | uVar3;
  lVar1 = uVar8 + (long)(int)((uVar6 & 0x7ffffffe) << 1);
  *(int *)(lVar1 + 7) = (int)param_4;
  if ((param_4 & 1) == 0) {
    return;
  }
  uVar4 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
  puVar2 = (undefined4 *)(lVar1 + 7);
  uVar3 = (uint)uVar4;
joined_r0x010a86c4:
  if ((uVar3 >> 0x12 & 1) != 0) {
    v8::internal::Heap_MarkingBarrierSlow(uVar8,puVar2,param_4);
    uVar4 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
  }
  if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar8 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
    v8::internal::Heap_GenerationalBarrierSlow(uVar8,puVar2,param_4);
    return;
  }
  return;
}

