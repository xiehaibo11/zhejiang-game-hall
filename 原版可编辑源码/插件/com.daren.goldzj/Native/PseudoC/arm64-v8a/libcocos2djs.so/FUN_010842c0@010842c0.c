
void FUN_010842c0(undefined8 *param_1,ulong *param_2,int param_3,ulong *param_4,int param_5)

{
  long lVar1;
  undefined4 *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_38;
  
  uVar4 = *param_2;
  if (param_5 != 0) {
    local_38 = *param_1;
    v8::internal::JSObject::RequireSlowElements((JSObject *)&local_38,uVar4);
  }
  uVar5 = *param_4;
  lVar6 = (ulong)(uint)(param_3 * 3) << 0x22;
  lVar1 = uVar4 + 7;
  puVar2 = (undefined4 *)(lVar1 + (lVar6 + 0x1400000000 >> 0x20));
  *puVar2 = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar3 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar3 >> 0x12 & 1) != 0) {
      v8::internal::Heap_MarkingBarrierSlow(uVar4,puVar2,uVar5);
      uVar3 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar3 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      v8::internal::Heap_GenerationalBarrierSlow(uVar4,puVar2,uVar5);
    }
  }
  lVar6 = lVar6 + 0x1800000000 >> 0x20;
  *(uint *)(lVar1 + lVar6) = *(uint *)(lVar1 + lVar6) & 0xfffffe00 | param_5 << 4 | 0x180;
  return;
}

