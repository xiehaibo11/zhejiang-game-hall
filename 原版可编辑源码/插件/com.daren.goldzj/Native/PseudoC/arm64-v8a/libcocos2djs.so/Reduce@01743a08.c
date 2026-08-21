
/* v8::internal::compiler::JSIntrinsicLowering::Reduce(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSIntrinsicLowering::Reduce(JSIntrinsicLowering *this,Node *param_1)

{
  int iVar1;
  long lVar2;
  undefined4 *puVar3;
  int *piVar4;
  Node *pNVar5;
  AccessBuilder *this_00;
  CallDescriptor *pCVar6;
  Node *pNVar7;
  Node *pNVar8;
  Node *pNVar9;
  Operator *pOVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 *puVar13;
  Zone *pZVar14;
  SimplifiedOperatorBuilder *this_01;
  undefined **local_a0 [2];
  undefined8 local_90;
  undefined4 local_88;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  if (*(short *)(*(Operator **)param_1 + 0x10) != 0x307) {
LAB_01743af0:
    pNVar5 = (Node *)0x0;
    goto switchD_01743ad8_caseD_1eb;
  }
  puVar3 = (undefined4 *)CallRuntimeParametersOf(*(Operator **)param_1);
  piVar4 = (int *)Runtime::FunctionForId(*puVar3);
  iVar1 = *piVar4;
  if (iVar1 == 0x198) {
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
    pNVar5 = (Node *)JSGraph::FalseConstant(*(JSGraph **)(this + 0x10));
    goto switchD_01743ad8_caseD_1eb;
  }
  if (iVar1 == 0x1b7) {
    pNVar5 = (Node *)ReduceTurbofanStaticAssert(this,param_1);
    goto switchD_01743ad8_caseD_1eb;
  }
  if (piVar4[1] != 1) goto LAB_01743af0;
  pNVar5 = (Node *)0x0;
  switch(iVar1) {
  case 0x1db:
    pNVar5 = (Node *)ReduceIsInstanceType(this,param_1,0x423);
    goto switchD_01743ad8_caseD_1eb;
  case 0x1dc:
    Builtins::CallableFor
              ((Builtins *)&local_90,*(undefined8 *)(*(long *)(this + 0x10) + 0x168),0x300);
    puVar13 = (undefined8 *)**(undefined8 **)(this + 0x10);
    uVar11 = 0;
    goto LAB_01743d30;
  case 0x1dd:
    lVar12 = CallRuntimeParametersOf(*(Operator **)param_1);
    local_a0[0] = (undefined **)CONCAT44(local_a0[0]._4_4_,0x7fc00000);
    local_90 = 0;
    local_88 = 0xffffffff;
    pOVar10 = (Operator *)
              JSOperatorBuilder::Call
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170),
                         *(undefined8 *)(lVar12 + 8),local_a0,&local_90,2,1,1);
    goto LAB_01743d94;
  case 0x1de:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0xd3;
    break;
  case 0x1df:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0xd4;
    break;
  case 0x1e0:
    pOVar10 = (Operator *)
              JSOperatorBuilder::AsyncFunctionEnter
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01743d94;
  case 0x1e1:
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    pOVar10 = (Operator *)
              JSOperatorBuilder::AsyncFunctionReject
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01743d94;
  case 0x1e2:
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,param_1,0);
    pOVar10 = (Operator *)
              JSOperatorBuilder::AsyncFunctionResolve
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01743d94;
  case 0x1e3:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x269;
    break;
  case 0x1e4:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x26a;
    break;
  case 0x1e5:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x261;
    break;
  case 0x1e6:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x260;
    break;
  case 0x1e7:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x262;
    break;
  case 0x1e8:
    pNVar5 = (Node *)ReduceCreateJSGeneratorObject(this,param_1);
    goto switchD_01743ad8_caseD_1eb;
  case 0x1e9:
    pNVar5 = (Node *)ReduceGeneratorClose(this,param_1);
    goto switchD_01743ad8_caseD_1eb;
  case 0x1ea:
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
    pNVar7 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    this_00 = (AccessBuilder *)NodeProperties::GetControlInput(param_1,0);
    this_01 = *(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178);
    AccessBuilder::ForJSGeneratorObjectResumeMode(this_00);
    pOVar10 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)&local_90);
    pNVar5 = (Node *)Change(this,param_1,pOVar10,pNVar5,pNVar7,(Node *)this_00);
  default:
    goto switchD_01743ad8_caseD_1eb;
  case 0x1ed:
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::ObjectIsSmi
                        (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
    goto LAB_01743e1c;
  case 0x1ee:
    lVar12 = *(long *)(this + 0x10);
    uVar11 = 0x92;
    break;
  case 0x1f0:
    pNVar5 = (Node *)NodeProperties::GetValueInput(param_1,0);
    pNVar7 = (Node *)NodeProperties::GetValueInput(param_1,1);
    pNVar8 = (Node *)NodeProperties::GetContextInput(param_1);
    pNVar9 = (Node *)NodeProperties::GetEffectInput(param_1,0);
    pOVar10 = (Operator *)
              JSOperatorBuilder::CreateIterResultObject
                        (*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    pNVar5 = (Node *)Change(this,param_1,pOVar10,pNVar5,pNVar7,pNVar8,pNVar9);
    goto switchD_01743ad8_caseD_1eb;
  case 0x1f2:
    pOVar10 = (Operator *)
              SimplifiedOperatorBuilder::ObjectIsReceiver
                        (*(SimplifiedOperatorBuilder **)(*(long *)(this + 0x10) + 0x178));
LAB_01743e1c:
    (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,param_1,0,0);
    NodeProperties::RemoveNonValueInputs(param_1);
    goto LAB_01743d94;
  case 499:
    pOVar10 = (Operator *)
              JSOperatorBuilder::ToLength(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01743d94;
  case 0x1f5:
    pOVar10 = (Operator *)
              JSOperatorBuilder::ToObject(*(JSOperatorBuilder **)(*(long *)(this + 0x10) + 0x170));
    goto LAB_01743d94;
  case 0x1f6:
    pNVar5 = (Node *)ReduceToString(this,param_1);
    goto switchD_01743ad8_caseD_1eb;
  case 0x1f8:
    pNVar5 = (Node *)ReduceDeoptimizeNow(this,param_1);
    goto switchD_01743ad8_caseD_1eb;
  }
  Builtins::CallableFor((Builtins *)&local_90,*(undefined8 *)(lVar12 + 0x168),uVar11);
  puVar13 = (undefined8 *)**(undefined8 **)(this + 0x10);
  uVar11 = 1;
LAB_01743d30:
  local_a0[0] = &PTR__CallInterfaceDescriptor_01ca0fc8;
  pCVar6 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*puVar13,local_a0,0,uVar11,*(undefined1 *)(*(long *)param_1 + 0x12),0);
  pZVar14 = (Zone *)**(undefined8 **)*(JSGraph **)(this + 0x10);
  pNVar5 = (Node *)JSGraph::HeapConstant(*(JSGraph **)(this + 0x10),local_90);
  Node::InsertInput(param_1,pZVar14,0,pNVar5);
  pOVar10 = (Operator *)
            CommonOperatorBuilder::Call
                      (*(CommonOperatorBuilder **)(*(long *)(this + 0x10) + 8),pCVar6);
LAB_01743d94:
  NodeProperties::ChangeOp(param_1,pOVar10);
  pNVar5 = param_1;
switchD_01743ad8_caseD_1eb:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(pNVar5);
}

