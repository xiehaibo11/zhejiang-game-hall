
/* v8::Array::New(v8::Isolate*, v8::Local<v8::Value>*, unsigned long) */

undefined8 v8::Array::New(Isolate *param_1,Local *param_2,ulong param_3)

{
  long lVar1;
  undefined4 uVar2;
  ulong uVar3;
  ulong *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  Logger *this;
  ulong uVar7;
  long lVar8;
  RuntimeCallStats *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_70 = 0;
  uStack_88 = 0;
  local_90 = (RuntimeCallStats *)0x0;
  uStack_78 = 0;
  uStack_80 = 0;
  if (internal::TracingFlags::runtime_stats != 0) {
    local_90 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    internal::RuntimeCallStats::Enter(local_90,(ulong)&local_90 | 8,0x35c);
  }
  this = *(Logger **)(param_1 + 0x9558);
  uVar3 = internal::Logger::is_logging(this);
  if ((uVar3 & 1) != 0) {
    internal::Logger::ApiEntryCall(this,"v8::Array::New");
  }
  uVar2 = *(undefined4 *)(param_1 + 0x2c60);
  *(undefined4 *)(param_1 + 0x2c60) = 5;
  puVar4 = (ulong *)internal::Factory::NewFixedArray((Factory *)param_1,param_3 & 0xffffffff,0);
  if (0 < (int)param_3) {
    lVar8 = 0;
    do {
      uVar7 = *puVar4;
      uVar3 = **(ulong **)param_2;
      lVar1 = uVar7 + (long)(int)lVar8;
      *(int *)(lVar1 + 7) = (int)uVar3;
      if ((uVar3 & 1) != 0) {
        uVar6 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
        lVar1 = lVar1 + 7;
        if (((uint)uVar6 >> 0x12 & 1) != 0) {
          internal::Heap_MarkingBarrierSlow(uVar7,lVar1,uVar3);
          uVar6 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
        }
        if (((uVar6 & 0x18) != 0) && ((*(byte *)((uVar7 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
          internal::Heap_GenerationalBarrierSlow(uVar7,lVar1,uVar3);
        }
      }
      lVar8 = lVar8 + 4;
      param_2 = (Local *)((long)param_2 + 8);
    } while ((param_3 & 0xffffffff) * 4 - lVar8 != 0);
  }
  uVar5 = internal::Factory::NewJSArrayWithElements(param_1,puVar4,2,param_3 & 0xffffffff,0);
  *(undefined4 *)(param_1 + 0x2c60) = uVar2;
  if (local_90 != (RuntimeCallStats *)0x0) {
    internal::RuntimeCallStats::Leave(local_90,(RuntimeCallTimer *)((ulong)&local_90 | 8));
  }
  return uVar5;
}

