
void FUN_0108ca3c(long param_1,ulong *param_2,ulong *param_3,int param_4,int param_5,int param_6)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((param_4 == 0) && (100 < param_6)) {
    uVar2 = v8::internal::Heap::CanMoveObjectStart((Heap *)(param_1 + 0x8850),*param_3);
    if ((uVar2 & 1) == 0) {
LAB_0108cb40:
      lVar1 = *param_3 + 7;
      v8::internal::Heap::MoveRange
                ((Heap *)(param_1 + 0x8850),*param_3,lVar1 + (param_4 << 2),lVar1 + (param_5 << 2),
                 param_6,4);
      return;
    }
    uVar2 = v8::internal::Heap::LeftTrimFixedArray((Heap *)(param_1 + 0x8850),*param_3,param_5);
    *param_3 = uVar2;
    uVar5 = *param_2;
    *(int *)(uVar5 + 7) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 7,uVar2);
        uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 7,uVar2);
      }
    }
    if ((param_5 != 0) && (param_5 < 0)) {
      uVar5 = *param_3;
      iVar3 = 0;
      uVar2 = (ulong)(uint)-param_5;
      do {
        uVar2 = uVar2 - 1;
        *(undefined4 *)(uVar5 + 7 + (long)iVar3) =
             *(undefined4 *)((uVar5 & 0xffffffff00000000) + 0xa8);
        iVar3 = iVar3 + 4;
      } while (uVar2 != 0);
    }
  }
  else if (param_6 != 0) goto LAB_0108cb40;
  return;
}

