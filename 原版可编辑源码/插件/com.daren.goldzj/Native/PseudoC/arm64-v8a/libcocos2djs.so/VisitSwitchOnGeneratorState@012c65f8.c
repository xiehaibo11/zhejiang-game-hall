
/* v8::internal::compiler::SerializerForBackgroundCompilation::VisitSwitchOnGeneratorState(v8::internal::interpreter::BytecodeArrayIterator*)
    */

void v8::internal::compiler::SerializerForBackgroundCompilation::VisitSwitchOnGeneratorState
               (BytecodeArrayIterator *param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  JSHeapBroker *pJVar4;
  
  pJVar4 = *(JSHeapBroker **)param_1;
  uVar2 = bytecode_array((SerializerForBackgroundCompilation *)param_1);
  lVar3 = JSHeapBroker::GetBytecodeAnalysis
                    (pJVar4,uVar2,*(undefined4 *)(param_1 + 0x6c),*(uint *)(param_1 + 0x68) >> 2 & 1
                     ,0);
  lVar1 = *(long *)(lVar3 + 0x90);
  for (lVar3 = *(long *)(lVar3 + 0x88); lVar3 != lVar1; lVar3 = lVar3 + 0xc) {
    ContributeToJumpTargetEnvironment
              ((SerializerForBackgroundCompilation *)param_1,*(int *)(lVar3 + 4));
  }
  return;
}

