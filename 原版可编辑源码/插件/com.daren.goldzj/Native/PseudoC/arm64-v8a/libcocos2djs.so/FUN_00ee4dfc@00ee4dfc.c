
ulong * FUN_00ee4dfc(long param_1,ParseInfo *param_2,undefined8 param_3,int *param_4,
                    undefined4 param_5)

{
  ulong *puVar1;
  ulong uVar2;
  Logger *this;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)v8::internal::ParseInfo::CreateScript
                              (param_2,param_1,param_3,param_5,param_4[8]);
  if (*(ulong **)(param_4 + 2) != (ulong *)0x0) {
    uVar4 = *puVar1;
    uVar3 = **(ulong **)(param_4 + 2);
    *(int *)(uVar4 + 7) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 7,uVar3);
        uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 7,uVar3);
      }
    }
    *(int *)(*puVar1 + 0xb) = *param_4 << 1;
    *(int *)(*puVar1 + 0xf) = param_4[1] << 1;
  }
  if (*(ulong **)(param_4 + 4) != (ulong *)0x0) {
    uVar4 = *puVar1;
    uVar3 = **(ulong **)(param_4 + 4);
    *(int *)(uVar4 + 0x37) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x37,uVar3);
        uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x37,uVar3);
      }
    }
  }
  if (*(ulong **)(param_4 + 6) != (ulong *)0x0) {
    uVar4 = *puVar1;
    uVar3 = **(ulong **)(param_4 + 6);
    *(int *)(uVar4 + 0x3b) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar2 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x3b,uVar3);
        uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x3b,uVar3);
      }
    }
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = v8::internal::Logger::is_logging(this);
  if ((uVar3 & 1) != 0) {
    v8::internal::Logger::ScriptDetails(this,*puVar1);
  }
  return puVar1;
}

