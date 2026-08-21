
/* v8::internal::Factory::NewFunctionFromSharedFunctionInfo(v8::internal::Handle<v8::internal::Map>,
   v8::internal::Handle<v8::internal::SharedFunctionInfo>,
   v8::internal::Handle<v8::internal::Context>, v8::internal::Handle<v8::internal::FeedbackCell>,
   v8::internal::AllocationType) */

ulong * v8::internal::Factory::NewFunctionFromSharedFunctionInfo
                  (long param_1,undefined8 param_2,undefined8 *param_3,undefined8 param_4,
                  ulong *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  ulong uVar5;
  ulong local_28;
  
  puVar1 = (ulong *)NewFunction();
  uVar3 = *param_5;
  if (*(int *)(uVar3 - 1) == *(int *)(param_1 + 0x210)) {
    uVar5 = *(ulong *)(param_1 + 0x220);
    iVar4 = (int)uVar5;
  }
  else {
    if (*(int *)(uVar3 - 1) != *(int *)(param_1 + 0x220)) goto LAB_00f76bd8;
    uVar5 = *(ulong *)(param_1 + 0x1f8);
    iVar4 = (int)uVar5;
  }
  if (iVar4 == 0) {
    *(undefined4 *)(uVar3 - 1) = 0;
  }
  else {
    Heap::VerifyObjectLayoutChange((Heap *)((uVar3 & 0xffffffff00000000) + 0x8850),uVar3,uVar5);
    *(int *)(uVar3 - 1) = (int)uVar5;
    if (((uVar5 & 1) != 0) && ((*(byte *)((uVar5 & 0xfffffffffffc0000) + 10) >> 2 & 1) != 0)) {
      Heap_MarkingBarrierSlow(uVar3,0,uVar5);
    }
  }
LAB_00f76bd8:
  uVar5 = *param_5;
  uVar3 = uVar5 & 0xffffffff00000000 | (ulong)*(uint *)(uVar5 + 3);
  if (*(short *)((uVar5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(uVar3 - 1)) == 0x9f) {
    local_28 = uVar3;
    FeedbackVector::EvictOptimizedCodeMarkedForDeoptimization
              ((FeedbackVector *)&local_28,*param_3,"new function from shared function info");
    uVar5 = *param_5;
  }
  uVar3 = *puVar1;
  *(int *)(uVar3 + 0x13) = (int)uVar5;
  if ((uVar5 & 1) != 0) {
    uVar2 = *(ulong *)((uVar5 & 0xfffffffffffc0000) + 8);
    if (((uint)uVar2 >> 0x12 & 1) != 0) {
      Heap_MarkingBarrierSlow(uVar3,uVar3 + 0x13,uVar5);
      uVar2 = *(ulong *)(uVar5 & 0xfffffffffffc0000 | 8);
    }
    if (((uVar2 & 0x18) != 0) && ((*(byte *)((uVar3 & 0xfffffffffffc0000) + 8) & 0x18) == 0)) {
      Heap_GenerationalBarrierSlow(uVar3,uVar3 + 0x13,uVar5);
    }
  }
  Compiler::PostInstantiation(puVar1);
  return puVar1;
}

