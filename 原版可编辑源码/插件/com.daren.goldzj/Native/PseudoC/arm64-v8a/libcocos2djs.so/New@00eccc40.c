
/* v8::Private::New(v8::Isolate*, v8::Local<v8::String>) */

ulong * v8::Private::New(long param_1,ulong *param_2)

{
  undefined4 uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  Logger *this;
  ulong uVar5;
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
    internal::RuntimeCallStats::Enter(local_80,(ulong)&local_80 | 8,0x3b8);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar2 = internal::Logger::is_logging(this);
  if ((uVar2 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Private::New");
  }
  uVar1 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar3 = (ulong *)internal::Factory::NewPrivateSymbol(param_1,1);
  if (param_2 != (ulong *)0x0) {
    uVar5 = *puVar3;
    uVar2 = *param_2;
    *(int *)(uVar5 + 0xb) = (int)uVar2;
    if ((uVar2 & 1) != 0) {
      uVar4 = *(ulong *)((uVar2 & 0xfffffffffffc0000) + 8);
      if (((uint)uVar4 >> 0x12 & 1) != 0) {
        internal::Heap_MarkingBarrierSlow(uVar5,uVar5 + 0xb,uVar2);
        uVar4 = *(ulong *)(uVar2 & 0xfffffffffffc0000 | 8);
      }
      if (((uVar4 & 0x18) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
        internal::Heap_GenerationalBarrierSlow(uVar5,uVar5 + 0xb,uVar2);
      }
    }
  }
  *(undefined4 *)(param_1 + 0x2c60) = uVar1;
  if (local_80 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_80,(RuntimeCallTimer *)((ulong)&local_80 | 8));
  }
  return puVar3;
}

