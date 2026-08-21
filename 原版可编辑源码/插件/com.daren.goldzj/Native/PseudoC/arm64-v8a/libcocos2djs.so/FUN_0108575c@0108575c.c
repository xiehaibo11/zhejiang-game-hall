
void FUN_0108575c(undefined8 param_1,ulong *param_2,int param_3,ulong *param_4,undefined8 param_5,
                 int param_6)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = *param_2;
  bVar2 = *(byte *)((uVar4 & 0xffffffff00000000 | 10) + (ulong)*(uint *)(uVar4 - 1));
  bVar3 = bVar2 >> 3;
  if ((bVar3 < 0xd && (1 << (ulong)bVar3 & 0x1030U) != 0) ||
     (param_6 != *(int *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 7)) + 3) >> 1)) {
    FUN_01086934(param_2,param_6);
  }
  else {
    if ((bVar2 < 0x30) && (bVar3 != 1)) {
      v8::internal::JSObject::TransitionElementsKind(param_2,1);
    }
    if (bVar2 < 0x20) {
      v8::internal::JSObject::EnsureWritableFastElements(param_2);
    }
  }
  uVar7 = *param_4;
  uVar5 = (ulong)*(uint *)(*param_2 + 7);
  uVar4 = *param_2 & 0xffffffff00000000;
  uVar8 = uVar4 | uVar5;
  lVar1 = uVar8 + (long)(param_3 << 2);
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

