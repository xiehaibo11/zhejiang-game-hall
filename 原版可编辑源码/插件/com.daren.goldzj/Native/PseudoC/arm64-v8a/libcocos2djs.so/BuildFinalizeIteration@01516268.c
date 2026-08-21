
/* v8::internal::interpreter::BytecodeGenerator::BuildFinalizeIteration(v8::internal::interpreter::BytecodeGenerator::IteratorRecord,
   v8::internal::interpreter::Register, v8::internal::interpreter::Register) */

void v8::internal::interpreter::BytecodeGenerator::BuildFinalizeIteration
               (BytecodeGenerator *param_1,ulong param_2,undefined8 param_3,undefined4 param_4,
               undefined4 param_5)

{
  BytecodeArrayBuilder *this;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined4 uVar9;
  BytecodeArrayBuilder *pBVar10;
  undefined8 uVar11;
  long *plVar12;
  BytecodeLabel *pBVar13;
  long ****pppplVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined **local_100;
  BytecodeGenerator *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined **local_e0;
  BytecodeArrayBuilder *pBStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined1 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  BytecodeLabel local_a8 [8];
  undefined8 local_a0;
  long ***local_98;
  long ***local_90;
  long local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  lVar8 = tpidr_el0;
  local_70 = *(long *)(lVar8 + 0x28);
  this = (BytecodeArrayBuilder *)(param_1 + 0x18);
  uStack_80 = *(undefined8 *)(param_1 + 0x10);
  iVar2 = *(int *)(param_1 + 0x118);
  local_98 = (long ***)&local_98;
  local_78 = 0;
  local_88 = 0;
  local_90 = local_98;
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(this,param_4);
  uVar11 = BytecodeLabels::New((BytecodeLabels *)&local_98);
  BytecodeArrayBuilder::JumpIfTrue(pBVar10,0,uVar11);
  iVar3 = *(int *)(param_1 + 0x118);
  iVar4 = *(int *)(param_1 + 0x11c);
  plVar12 = *(long **)(param_1 + 0x120);
  if (iVar4 <= iVar3 + 1) {
    iVar4 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x118) = iVar3 + 1;
  *(int *)(param_1 + 0x11c) = iVar4;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,iVar3);
  }
  uVar15 = *(undefined8 *)(*(long *)(param_1 + 0x1d8) + 0x1a8);
  uVar11 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(param_1 + 0x1d0) + 0x38),5);
  pBVar10 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::LoadNamedProperty(this,param_2 >> 0x20,uVar15,uVar11);
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,iVar3);
  pBVar13 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)&local_98);
  BytecodeArrayBuilder::JumpIfUndefinedOrNull(pBVar10,pBVar13);
  iVar5 = *(int *)(param_1 + 0x118);
  local_e0 = &PTR__TryCatchBuilder_01cc7168;
  pBStack_d8 = this;
  local_d0 = HandlerTableBuilder::NewHandlerEntry((HandlerTableBuilder *)(param_1 + 0xf0));
  uStack_cc = 0;
  local_c8 = 0;
  local_b8 = 0;
  uStack_b0 = 0;
  local_c0 = 0xffffffffffffffff;
  iVar6 = *(int *)(param_1 + 0x118);
  iVar4 = *(int *)(param_1 + 0x11c);
  plVar12 = *(long **)(param_1 + 0x120);
  if (iVar4 <= iVar6 + 1) {
    iVar4 = iVar6 + 1;
  }
  *(int *)(param_1 + 0x118) = iVar6 + 1;
  *(int *)(param_1 + 0x11c) = iVar4;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,iVar6);
  }
  uVar9 = Register::current_context();
  BytecodeArrayBuilder::MoveRegister(this,uVar9,iVar6);
  TryCatchBuilder::BeginTry((TryCatchBuilder *)&local_e0,iVar6);
  uStack_e8 = *(undefined8 *)(param_1 + 0x2f8);
  local_f0 = *(undefined8 *)(param_1 + 0x2f0);
  local_100 = &PTR__ControlScope_01cc70e0;
  *(undefined ****)(param_1 + 0x2f0) = &local_100;
  local_a8[0] = (BytecodeLabel)0x0;
  local_a0 = 0xffffffffffffffff;
  local_f8 = param_1;
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CompareTypeOf(this,6);
  BytecodeArrayBuilder::JumpIfTrue(pBVar10,1,local_a8);
  uVar7 = *(uint *)(param_1 + 0x118);
  plVar12 = *(long **)(param_1 + 0x120);
  iVar4 = uVar7 + 2;
  iVar1 = *(int *)(param_1 + 0x11c);
  if (*(int *)(param_1 + 0x11c) <= iVar4) {
    iVar1 = iVar4;
  }
  uVar16 = (ulong)uVar7 | 0x200000000;
  *(int *)(param_1 + 0x118) = iVar4;
  *(int *)(param_1 + 0x11c) = iVar1;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x18))(plVar12,uVar16);
  }
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(this,0x13e);
  pBVar10 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,(ulong)uVar7);
  pBVar10 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::LoadLiteral
                      (pBVar10,*(AstRawString **)(*(long *)(param_1 + 0x1d8) + 0x110));
  pBVar10 = (BytecodeArrayBuilder *)
            BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,uVar7 + 1);
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CallRuntime(pBVar10,0x9a,uVar16);
  BytecodeArrayBuilder::Throw(pBVar10);
  plVar12 = *(long **)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = uVar7;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar4 - uVar7,uVar7));
  }
  BytecodeArrayBuilder::Bind(this,local_a8);
  uVar11 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(param_1 + 0x1d0) + 0x38),4);
  BytecodeArrayBuilder::CallProperty(this,iVar3,param_2 >> 0x20 | 0x100000000,uVar11);
  if ((int)param_2 == 1) {
    BuildAwait(param_1,-1);
  }
  pBVar13 = (BytecodeLabel *)BytecodeLabels::New((BytecodeLabels *)&local_98);
  BytecodeArrayBuilder::JumpIfJSReceiver(this,pBVar13);
  iVar3 = *(int *)(param_1 + 0x118);
  iVar4 = *(int *)(param_1 + 0x11c);
  plVar12 = *(long **)(param_1 + 0x120);
  if (iVar4 <= iVar3 + 1) {
    iVar4 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x118) = iVar3 + 1;
  *(int *)(param_1 + 0x11c) = iVar4;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x10))(plVar12,iVar3);
  }
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::StoreAccumulatorInRegister(this,iVar3);
  BytecodeArrayBuilder::CallRuntime(pBVar10,0xac,iVar3);
  plVar12 = *(long **)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar3;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar4 - iVar3,iVar3));
  }
  local_100 = &PTR__ControlScope_01cc7020;
  *(undefined8 *)(local_f8 + 0x2f0) = local_f0;
  TryCatchBuilder::EndTry((TryCatchBuilder *)&local_e0);
  BytecodeArrayBuilder::StoreAccumulatorInRegister(this,iVar6);
  local_100 = (undefined **)((ulong)local_100 & 0xffffffffffffff00);
  local_f8 = (BytecodeGenerator *)0xffffffffffffffff;
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(this,0);
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::CompareReference(pBVar10,param_5);
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::JumpIfTrue(pBVar10,1,&local_100);
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar10,iVar6)
  ;
  pBVar10 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::ReThrow(pBVar10);
  BytecodeArrayBuilder::Bind(pBVar10,(BytecodeLabel *)&local_100);
  TryCatchBuilder::EndCatch((TryCatchBuilder *)&local_e0);
  TryCatchBuilder::~TryCatchBuilder((TryCatchBuilder *)&local_e0);
  plVar12 = *(long **)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar5;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar4 - iVar5,iVar5));
  }
  BytecodeLabels::Bind((BytecodeLabels *)&local_98,this);
  if (local_88 != 0) {
    (*local_90)[1] = (long *)local_98[1];
    *local_98[1] = (long *)*local_90;
    local_88 = 0;
    if ((long ****)local_90 != &local_98) {
      pppplVar14 = (long ****)local_90;
      do {
        pppplVar14 = (long ****)pppplVar14[1];
      } while (pppplVar14 != &local_98);
    }
  }
  plVar12 = *(long **)(param_1 + 0x120);
  iVar4 = *(int *)(param_1 + 0x118);
  *(int *)(param_1 + 0x118) = iVar2;
  if (plVar12 != (long *)0x0) {
    (**(code **)(*plVar12 + 0x20))(plVar12,CONCAT44(iVar4 - iVar2,iVar2));
  }
  if (*(long *)(lVar8 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

