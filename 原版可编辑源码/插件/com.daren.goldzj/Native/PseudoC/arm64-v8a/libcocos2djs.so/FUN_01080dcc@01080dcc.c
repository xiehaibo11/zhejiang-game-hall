
void FUN_01080dcc(undefined8 param_1,ulong *param_2,int param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = (ulong)*(uint *)(*param_2 + 7);
  uVar2 = *param_2 & 0xffffffff00000000;
  uVar5 = uVar2 | uVar4;
  lVar1 = uVar5 + (long)(param_3 << 2);
  *(int *)(lVar1 + 7) = (int)param_4;
  if ((param_4 & 1) != 0) {
    uVar3 = *(ulong *)((param_4 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar5,lVar1,param_4);
      uVar3 = *(ulong *)(param_4 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar2 | uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar5,lVar1,param_4);
      return;
    }
  }
  return;
}

