
void FUN_0108c644(ulong *param_1,int param_2,ulong *param_3,int param_4)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *param_1;
  bVar2 = *(byte *)((uVar4 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar4 - 1));
  bVar3 = bVar2 >> 3;
  if ((bVar3 < 0xd && (1 << (ulong)bVar3 & 0x1030U) != 0) ||
     (param_4 != *(int *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7)) + 3) >> 1)) {
    FUN_0108bd9c(param_1,param_4);
  }
  else {
    if ((bVar2 < 0x30) && (bVar3 != 3)) {
      v8::internal::JSObject::TransitionElementsKind(param_1,3);
    }
    if (bVar2 < 0x20) {
      v8::internal::JSObject::EnsureWritableFastElements(param_1);
    }
  }
  uVar7 = *param_3;
  uVar5 = (ulong)*(uint *)(*param_1 + 7);
  uVar4 = *param_1 & 0xffffffff00000000;
  uVar8 = uVar4 | uVar5;
  lVar1 = uVar8 + (long)(param_2 << 2);
  *(int *)(lVar1 + 7) = (int)uVar7;
  if ((uVar7 & 1) != 0) {
    uVar6 = *(ulong *)((uVar7 & 0xfffffffffffc0000) + 8);
    lVar1 = lVar1 + 7;
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar8,lVar1,uVar7);
      uVar6 = *(ulong *)(uVar7 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar4 | uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)
       ) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar8,lVar1,uVar7);
      return;
    }
  }
  return;
}

