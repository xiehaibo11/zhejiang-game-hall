
/* v8::Context::SetAbortScriptExecution(void (*)(v8::Isolate*, v8::Local<v8::Context>)) */

void __thiscall
v8::Context::SetAbortScriptExecution(Context *this,_func_void_Isolate_ptr_Local *param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = *(ulong *)this;
  if (param_1 == (_func_void_Isolate_ptr_Local *)0x0) {
    uVar6 = *(ulong *)((Factory *)(uVar5 & 0xffffffff00000000) + 0xa0);
    puVar1 = (undefined4 *)(uVar5 + 0x277);
    *puVar1 = (int)uVar6;
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar5,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar4 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar5 & 0xfffffffffffc0000) + 8);
  }
  else {
    puVar3 = (ulong *)internal::Factory::NewForeign
                                ((Factory *)(uVar5 & 0xffffffff00000000),(ulong)param_1);
    uVar5 = *(ulong *)this;
    uVar6 = *puVar3;
    puVar1 = (undefined4 *)(uVar5 + 0x277);
    *puVar1 = (int)uVar6;
    if ((uVar6 & 1) == 0) {
      return;
    }
    uVar4 = *(ulong *)((uVar6 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar4 >> 0x12 & 1) != 0) {
      internal::Heap_MarkingBarrierSlow(uVar5,puVar1,uVar6);
      uVar4 = *(ulong *)(uVar6 & 0xfffffffffffc0000 | 8);
    }
    if ((uVar4 & 0x18) == 0) {
      return;
    }
    bVar2 = *(byte *)((uVar5 & 0xfffffffffffc0000) + 8);
  }
  if ((bVar2 & 0x18) != 0) {
    return;
  }
  internal::Heap_GenerationalBarrierSlow(uVar5,puVar1,uVar6);
  return;
}

