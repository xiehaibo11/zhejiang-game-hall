
/* v8::Array::New(v8::Isolate*, int) */

ulong * v8::Array::New(Isolate *param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  ulong *puVar5;
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
  if (internal::TracingFlags::runtime_stats != 0) {
    local_80 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x35c);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = internal::Logger::is_logging(this);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Array::New");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  uVar1 = param_2 & (param_2 >> 0x1f ^ 0xffffffffU);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar4 = (ulong *)internal::Factory::NewJSArray((Factory *)param_1,3,0,uVar1,1,0);
  puVar5 = (ulong *)internal::Factory::NewNumberFromInt((Factory *)param_1,uVar1);
  uVar7 = *puVar4;
  uVar3 = *puVar5;
  *(int *)(uVar7 + 0xb) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar6 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar7,uVar7 + 0xb,uVar3);
      uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      internal::Heap_GenerationalBarrierSlow(uVar7,uVar7 + 0xb,uVar3);
    }
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return puVar4;
}

