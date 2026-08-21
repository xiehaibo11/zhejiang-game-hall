
void FUN_010970c0(undefined8 param_1,ulong *param_2,ulong *param_3,ulong param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  
  uVar3 = *param_2;
  if ((uint)(*(int *)((uVar3 & 0xffffffff00000000 | (ulong)*(uint *)(uVar3 + 7)) + 3) >> 1) <
      param_5) {
    FUN_01098020(param_2,param_5 & 0xffffffff);
    uVar3 = *param_2;
    if ((*(byte *)((uVar3 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar3 - 1)) & 0xf8) != 0x38)
    {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","Subclass::kind() == receiver->GetElementsKind()");
    }
  }
  if (param_4 < param_5) {
    lVar7 = param_5 - param_4;
    iVar8 = (int)param_4 << 2;
    do {
      uVar2 = *(uint *)(uVar3 + 7);
      uVar5 = *param_3;
      uVar6 = uVar3 & 0xffffffff00000000 | (ulong)uVar2;
      *(int *)(uVar6 + (long)iVar8 + 7) = (int)uVar5;
      if ((uVar5 & 1) != 0) {
        uVar4 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
        lVar1 = uVar6 + (long)iVar8 + 7;
        if (((uint)uVar4 >> 0x12 & 1) != 0) {
          v8::internal::Heap_MarkingBarrierSlow(uVar6,lVar1,uVar5);
          uVar4 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar4 & 0x18) != 0) &&
           ((*(byte *)((uVar3 & 0xffffffff00000000 | (ulong)uVar2 & 0xfffffffffffc0000) + 8) & 0x18)
            == 0)) {
          v8::internal::Heap_GenerationalBarrierSlow(uVar6,lVar1,uVar5);
        }
      }
      uVar3 = *param_2;
      lVar7 = lVar7 + -1;
      iVar8 = iVar8 + 4;
    } while (lVar7 != 0);
  }
  return;
}

