
/* v8::internal::Debug::InstallCoverageInfo(v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::CoverageInfo>) */

void __thiscall
v8::internal::Debug::InstallCoverageInfo(undefined8 param_1,undefined8 param_2,ulong *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  
  puVar1 = (ulong *)GetOrCreateDebugInfo();
  *(uint *)(*puVar1 + 0x1b) = *(uint *)(*puVar1 + 0x1b) & 0xfffffffe | 8;
  uVar4 = *puVar1;
  uVar3 = *param_3;
  *(int *)(uVar4 + 0x1f) = (int)uVar3;
  if ((uVar3 & 1) != 0) {
    uVar2 = *(ulong *)((uVar3 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar4,uVar4 + 0x1f,uVar3);
      uVar2 = *(ulong *)(uVar3 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar4 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar4,uVar4 + 0x1f,uVar3);
      return;
    }
  }
  return;
}

