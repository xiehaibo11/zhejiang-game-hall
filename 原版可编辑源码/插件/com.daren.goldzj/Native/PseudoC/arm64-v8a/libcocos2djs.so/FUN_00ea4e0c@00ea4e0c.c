
ulong * FUN_00ea4e0c(Factory *param_1,ulong *param_2,ulong param_3)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  int iVar5;
  ulong uVar6;
  Logger *this;
  ulong uVar7;
  RuntimeCallStats *local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  local_60 = 0;
  uStack_78 = 0;
  local_80 = (RuntimeCallStats *)0x0;
  uStack_68 = 0;
  uStack_70 = 0;
  if (v8::internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    v8::internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x3ac);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = v8::internal::Logger::is_logging(this);
  if ((uVar3 & 1) != 0) {
    v8::internal::Logger::ApiEntryCall(this,"v8::ObjectTemplate::New");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar4 = (ulong *)v8::internal::Factory::NewStruct(param_1,0x4f,1);
  iVar5 = 0;
  *(undefined4 *)(*puVar4 + 0xb) = 0;
  *(undefined4 *)(*puVar4 + 3) = 2;
  if ((param_3 & 1) == 0) {
    uVar1 = (*(int *)(param_1 + 0xfe8) >> 1) + 1;
    iVar5 = uVar1 * 2;
    *(ulong *)(param_1 + 0xfe8) = -(ulong)(uVar1 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar1 << 1;
  }
  *(int *)(*puVar4 + 7) = iVar5;
  if (param_2 != (ulong *)0x0) {
    uVar7 = *puVar4;
    uVar3 = *param_2;
    *(int *)(uVar7 + 0x17) = (int)uVar3;
    if ((uVar3 & 1) != 0) {
      uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar6 >> 0x12 & 1) != 0) {
        v8::internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0x17,uVar3);
        uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        v8::internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0x17,uVar3);
      }
    }
  }
  *(undefined4 *)(*puVar4 + 0x1b) = 0;
  *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  if (local_80 != (RuntimeCallStats *)0x0) {
    v8::internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return puVar4;
}

