
/* v8::internal::Heap::CallGCPrologueCallbacks(v8::GCType, v8::GCCallbackFlags) */

void __thiscall
v8::internal::Heap::CallGCPrologueCallbacks(Heap *this,uint param_2,undefined4 param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
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
    local_70 = (RuntimeCallStats *)(*(long *)(this + 0xcd0) + 0x58a0);
    RuntimeCallStats::Enter(local_70,(ulong)&local_70 | 8,0x8a);
  }
  puVar1 = *(undefined8 **)(this + 0x618);
  for (puVar2 = *(undefined8 **)(this + 0x610); puVar2 != puVar1; puVar2 = puVar2 + 3) {
    if ((*(uint *)(puVar2 + 1) & param_2) != 0) {
      (*(code *)*puVar2)(this + -0x8850,param_2,param_3,puVar2[2]);
    }
  }
  if (local_70 != (RuntimeCallStats *)0x0) {
    RuntimeCallStats::Leave(local_70,(RuntimeCallTimer *)((ulong)&local_70 | 8));
  }
  return;
}

