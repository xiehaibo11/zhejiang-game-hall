
/* v8::internal::Map::SetPrototype(v8::internal::Isolate*, v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::HeapObject>, bool) */

void v8::internal::Map::SetPrototype(long param_1,ulong *param_2,ulong *param_3,uint param_4)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  RuntimeCallStats *local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  local_50 = 0;
  uStack_68 = 0;
  local_70 = (RuntimeCallStats *)0x0;
  uStack_58 = 0;
  uStack_60 = 0;
  if (TracingFlags::runtime_stats != 0) {
    local_70 = (RuntimeCallStats *)(*(long *)(param_1 + 0x9520) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x98);
  }
  uVar3 = *param_3;
  if (0xa9 < *(ushort *)((uVar3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1))) {
    JSObject::OptimizeAsPrototype(param_3,param_4 & 1);
    uVar3 = *param_3;
  }
  uVar4 = *param_2;
  iVar1 = *(int *)(param_1 + 0xb0);
  *(int *)(uVar4 + 0xf) = (int)uVar3;
  if (((uVar3 & 1) != 0) && ((int)uVar3 != iVar1)) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0xf,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0xf,uVar3);
    }
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

