
void FUN_010ab38c(undefined8 param_1,ulong *param_2,uint param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar6 = *param_2;
  uVar4 = uVar6 & 0xffffffff00000000;
  uVar2 = *(uint *)((uVar4 | *(uint *)(uVar6 + 0xb)) + 7);
  if (uVar2 <= param_3) {
    uVar3 = *(uint *)(uVar6 + 7);
    uVar6 = uVar4 | uVar3;
    lVar1 = uVar6 + (long)(int)((param_3 - uVar2) * 4);
    *(int *)(lVar1 + 7) = (int)param_4;
    if ((param_4 & 1) != 0) {
      uVar5 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
      lVar1 = lVar1 + 7;
      if (((uint)uVar5 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar6,lVar1,param_4);
        uVar5 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar5 & 0x18) != 0) &&
         ((*(byte *)((uVar4 | (ulong)uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar6,lVar1,param_4);
        return;
      }
    }
  }
  return;
}

