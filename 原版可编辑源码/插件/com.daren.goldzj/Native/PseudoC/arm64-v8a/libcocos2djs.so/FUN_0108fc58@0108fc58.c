
void FUN_0108fc58(long param_1,ulong *param_2,ulong *param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  
  if ((param_4 == 0) && (100 < param_6)) {
    uVar2 = v8::internal::Heap::CanMoveObjectStart((Heap *)(param_1 + 0x8850),*param_3);
    if ((uVar2 & 1) == 0) {
LAB_0108fd44:
      v8::internal::MemMove
                ((void *)(*param_3 + 7 + (long)param_4 * 8),
                 (void *)(*param_3 + 7 + (long)param_5 * 8),(long)(param_6 << 3));
      return;
    }
    uVar2 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(param_1 + 0x8850),*param_3,param_5);
    *param_3 = uVar2;
    uVar5 = *param_2;
    *(int *)(uVar5 + 7) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar3 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar3 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar2);
        uVar3 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar2);
      }
    }
    if ((param_5 != 0) && (param_5 < 0)) {
      uVar2 = *param_3;
      iVar4 = 7;
      do {
        *(undefined8 *)(uVar2 + (long)iVar4) = 0xfff7fffffff7ffff;
        bVar1 = param_5 != -1;
        param_5 = param_5 + 1;
        iVar4 = iVar4 + 8;
      } while (bVar1);
    }
  }
  else if (param_6 != 0) goto LAB_0108fd44;
  return;
}

