
void FUN_016f8d5c(long param_1,undefined8 *param_2)

{
  GraphAssembler *pGVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  pGVar1 = *(GraphAssembler **)(param_1 + 8);
  puVar2 = *(undefined8 **)(param_1 + 0x10);
  uVar6 = *param_2;
  local_48 = **(undefined8 **)(param_1 + 0x18);
  local_38 = **(undefined8 **)(param_1 + 0x28);
  uStack_40 = **(undefined8 **)(param_1 + 0x20);
  uVar5 = 0x2c4;
  if (*(int *)(puVar2 + 3) != 0) {
    uVar5 = 0x2bf;
  }
  uVar3 = v8::internal::compiler::CreateJavaScriptBuiltinContinuationFrameState
                    (*puVar2,puVar2 + 1,uVar5,puVar2[5],puVar2[4],&local_48,3,puVar2[6],0);
  v8::internal::compiler::GraphAssembler::Checkpoint(pGVar1,uVar3);
  plVar4 = *(long **)(*(long *)(param_1 + 0x30) + 0x20);
  local_48 = uVar6;
  if (plVar4 != (long *)0x0) {
    uVar3 = (**(code **)(*plVar4 + 0x30))(plVar4,&local_48);
    v8::internal::compiler::GraphAssembler::CheckIf(pGVar1,uVar3,0x29);
    auVar7 = v8::internal::compiler::IteratingArrayBuiltinReducerAssembler::SafeLoadElement
                       ((IteratingArrayBuiltinReducerAssembler *)pGVar1,
                        **(undefined1 **)(param_1 + 0x38),**(undefined8 **)(param_1 + 0x18),uVar6);
    if ((**(byte **)(param_1 + 0x38) & 0xfe) == 4) {
      uVar6 = v8::internal::compiler::GraphAssembler::NumberIsFloat64Hole();
    }
    else {
      uVar6 = v8::internal::compiler::GraphAssembler::IsTheHole(pGVar1);
    }
    v8::internal::compiler::GraphAssembler::
    GotoIfNot<v8::internal::TNode<v8::internal::UnionT<v8::internal::Smi,v8::internal::HeapNumber>>,v8::internal::TNode<v8::internal::Object>>
              (pGVar1,uVar6,*(undefined8 *)(param_1 + 0x40),auVar7._0_8_,auVar7._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_008589d0();
}

