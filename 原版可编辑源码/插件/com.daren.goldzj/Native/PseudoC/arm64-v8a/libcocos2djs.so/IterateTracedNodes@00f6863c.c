
/* v8::internal::GlobalHandles::IterateTracedNodes(v8::EmbedderHeapTracer::TracedGlobalHandleVisitor*)
    */

void __thiscall
v8::internal::GlobalHandles::IterateTracedNodes
          (GlobalHandles *this,TracedGlobalHandleVisitor *param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long local_18;
  
  lVar2 = *(long *)(*(long *)(this + 0x28) + 0x10);
  if (lVar2 != 0) {
    uVar3 = 0;
    do {
      local_18 = lVar2 + uVar3 * 0x20;
      if ((*(byte *)(local_18 + 0xb) & 3) != 0) {
        if ((*(byte *)(local_18 + 0xb) >> 4 & 1) == 0) {
          pcVar1 = *(code **)(*(long *)param_1 + 0x18);
        }
        else {
          pcVar1 = *(code **)(*(long *)param_1 + 0x10);
        }
        (*pcVar1)(param_1,&local_18);
      }
      uVar3 = uVar3 + 1;
      if (0xff < uVar3) {
        lVar2 = *(long *)(lVar2 + 0x2018);
        uVar3 = 0;
      }
    } while (lVar2 != 0);
  }
  return;
}

