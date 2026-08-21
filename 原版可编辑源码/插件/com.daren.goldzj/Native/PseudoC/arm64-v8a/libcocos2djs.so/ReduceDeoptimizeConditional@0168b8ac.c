
/* v8::internal::compiler::CommonOperatorReducer::ReduceDeoptimizeConditional(v8::internal::compiler::Node*)
    */

Node * __thiscall
v8::internal::compiler::CommonOperatorReducer::ReduceDeoptimizeConditional
          (CommonOperatorReducer *this,Node *param_1)

{
  short sVar1;
  short sVar2;
  long lVar3;
  ulong *puVar4;
  long *plVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long *plVar13;
  Graph *this_00;
  Node *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  ulong uStack_88;
  ulong uStack_80;
  ulong uStack_78;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  sVar1 = *(short *)(*(Operator **)param_1 + 0x10);
  puVar4 = (ulong *)DeoptimizeParametersOf(*(Operator **)param_1);
  uStack_88 = puVar4[1];
  local_90 = *puVar4;
  uStack_78 = puVar4[3];
  uStack_80 = puVar4[2];
  plVar5 = (long *)NodeProperties::GetValueInput(param_1,0);
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,1);
  uVar7 = NodeProperties::GetEffectInput(param_1,0);
  uVar8 = NodeProperties::GetControlInput(param_1,0);
  lVar12 = *plVar5;
  sVar2 = *(short *)(lVar12 + 0x10);
  if (sVar2 == 0x17) {
    iVar11 = 1;
    if (*(int *)(lVar12 + 0x2c) == 0) {
      iVar11 = 2;
    }
  }
  else {
    if (sVar2 != 0x1e) {
      if (sVar2 == 199) {
        plVar13 = plVar5 + 4;
        if ((~*(uint *)((long)plVar5 + 0x14) & 0xf000000) == 0) {
          plVar13 = (long *)(*plVar13 + 0x10);
        }
        NodeProperties::ReplaceValueInput(param_1,(Node *)*plVar13,0);
        if (sVar1 == 0xd) {
          pOVar9 = (Operator *)CommonOperatorBuilder::DeoptimizeIf();
        }
        else {
          pOVar9 = (Operator *)
                   CommonOperatorBuilder::DeoptimizeUnless
                             (*(CommonOperatorBuilder **)(this + 0x20),local_90 & 0xff,
                              local_90._1_1_,(ulong)&local_90 | 8,1);
        }
        NodeProperties::ChangeOp(param_1,pOVar9);
      }
      else {
        param_1 = (Node *)0x0;
      }
      goto LAB_0168bac0;
    }
    ObjectRef::ObjectRef
              ((ObjectRef *)&local_a8,*(undefined8 *)(this + 0x18),*(undefined8 *)(lVar12 + 0x30),0)
    ;
    uVar10 = ObjectRef::IsHeapObject((ObjectRef *)&local_a8);
    if ((uVar10 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","IsHeapObject()");
    }
    uVar10 = ObjectRef::BooleanValue((ObjectRef *)&local_a8);
    iVar11 = 1;
    if ((uVar10 & 1) == 0) {
      iVar11 = 2;
    }
  }
  if ((sVar1 == 0xd) == (iVar11 != 1)) {
    this_00 = *(Graph **)(this + 0x10);
    pOVar9 = (Operator *)
             CommonOperatorBuilder::Deoptimize
                       (*(CommonOperatorBuilder **)(this + 0x20),local_90 & 0xff,local_90._1_1_,
                        (ulong)&local_90 | 8);
    local_a8 = pNVar6;
    uStack_a0 = uVar7;
    local_98 = uVar8;
    pNVar6 = (Node *)Graph::NewNode(this_00,pOVar9,3,&local_a8,false);
    NodeProperties::MergeControlToEnd
              (*(Graph **)(this + 0x10),*(CommonOperatorBuilder **)(this + 0x20),pNVar6);
    (**(code **)(**(long **)(this + 8) + 0x18))
              (*(long **)(this + 8),*(undefined8 *)(*(long *)(this + 0x10) + 0x10));
  }
  else {
    (**(code **)(**(long **)(this + 8) + 0x20))
              (*(long **)(this + 8),param_1,*(undefined8 *)(this + 0x30),uVar7,uVar8);
  }
  param_1 = *(Node **)(this + 0x30);
LAB_0168bac0:
  if (*(long *)(lVar3 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}

