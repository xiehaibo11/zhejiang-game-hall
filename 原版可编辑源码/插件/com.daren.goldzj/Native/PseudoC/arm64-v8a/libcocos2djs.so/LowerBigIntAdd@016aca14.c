
/* v8::internal::compiler::EffectControlLinearizer::LowerBigIntAdd(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

Node * __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerBigIntAdd
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  undefined8 uVar1;
  long lVar2;
  CallDescriptor *pCVar3;
  Node *pNVar4;
  undefined8 uVar5;
  Operator *pOVar6;
  Node *pNVar7;
  Node *pNVar8;
  undefined8 uVar9;
  undefined8 local_b0 [2];
  int *local_a0;
  Node *local_98;
  int *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  pNVar4 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar4 = (Node *)(*(long *)pNVar4 + 0x10);
  }
  uVar9 = *(undefined8 *)pNVar4;
  uVar1 = *(undefined8 *)(pNVar4 + 8);
  Builtins::CallableFor((Builtins *)local_b0,*(undefined8 *)(*(long *)this + 0x168),0x2d5);
  local_98 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  local_90 = local_a0;
  pCVar3 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_98,local_a0[2] - *local_a0,0,0x38,
                      0);
  this_00 = (GraphAssembler *)(this + 0x38);
  pNVar4 = (Node *)GraphAssembler::HeapConstant(this_00,local_b0[0]);
  uVar5 = GraphAssembler::NoContextConstant(this_00);
  pOVar6 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar3);
  uStack_70 = *(undefined8 *)(this + 0x60);
  local_78 = *(undefined8 *)(this + 0x58);
  local_98 = pNVar4;
  local_90 = (int *)uVar9;
  local_88 = uVar1;
  uStack_80 = uVar5;
  pNVar4 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar6,
                                  *(int *)(pOVar6 + 0x18) + *(int *)(pOVar6 + 0x1c) + 4,&local_98,
                                  false);
  *(Node **)(this + 0x58) = pNVar4;
  pNVar4 = (Node *)GraphAssembler::AddNode(this_00,pNVar4);
  local_98 = (Node *)0x0;
  local_90 = (int *)CONCAT44(local_90._4_4_,0xffffffff);
  pNVar7 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar7 = (Node *)GraphAssembler::Word32And(this_00,pNVar4,pNVar7);
  pNVar8 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar9 = GraphAssembler::Word32Equal(this_00,pNVar7,pNVar8);
  GraphAssembler::DeoptimizeIf(this_00,1,&local_98,uVar9,param_2,1);
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return pNVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

