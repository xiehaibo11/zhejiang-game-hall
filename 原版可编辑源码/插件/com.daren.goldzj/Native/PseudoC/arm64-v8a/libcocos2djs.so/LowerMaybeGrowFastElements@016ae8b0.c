
/* v8::internal::compiler::EffectControlLinearizer::LowerMaybeGrowFastElements(v8::internal::compiler::Node*,
   v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::EffectControlLinearizer::LowerMaybeGrowFastElements
          (EffectControlLinearizer *this,Node *param_1,Node *param_2)

{
  GraphAssembler *this_00;
  long lVar1;
  undefined8 *puVar2;
  Node *pNVar3;
  CallDescriptor *pCVar4;
  Node *pNVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  Operator *pOVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined8 local_150 [2];
  int *local_140;
  Node *local_138;
  int *piStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  GraphAssemblerLabel local_108 [4];
  undefined4 local_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  GraphAssemblerLabel local_d0 [4];
  undefined4 local_cc;
  BasicBlock *local_c8;
  undefined8 uStack_c0;
  undefined8 local_a8;
  undefined1 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  lVar1 = tpidr_el0;
  local_70 = *(long *)(lVar1 + 0x28);
  puVar2 = (undefined8 *)GrowFastElementsParametersOf(*(Operator **)param_1);
  local_80 = puVar2[2];
  uStack_88 = puVar2[1];
  local_90 = *puVar2;
  pNVar3 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar3 = (Node *)(*(long *)pNVar3 + 0x10);
  }
  uVar10 = *(undefined8 *)pNVar3;
  pNVar5 = *(Node **)(pNVar3 + 8);
  pNVar6 = *(Node **)(pNVar3 + 0x10);
  pNVar3 = *(Node **)(pNVar3 + 0x18);
  this_00 = (GraphAssembler *)(this + 0x38);
  local_c8 = (BasicBlock *)GraphAssembler::NewBasicBlock(this_00,false);
  uStack_c0 = 0;
  local_d0[0] = (GraphAssemblerLabel)0x0;
  local_cc = 1;
  local_98 = 8;
  local_100 = GraphAssembler::NewBasicBlock(this_00,true);
  uStack_f8 = 0;
  local_108[0] = (GraphAssemblerLabel)0x0;
  local_104 = 0;
  GraphAssembler::NewBasicBlock(this_00,false);
  pNVar3 = (Node *)GraphAssembler::Uint32LessThan(this_00,pNVar6,pNVar3);
  GraphAssembler::GotoIfNot<>(this_00,pNVar3,local_108);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar5);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<0ul>(this_00,local_108);
  uVar11 = 0x54;
  if ((char)local_90 != '\0') {
    uVar11 = 0x55;
  }
  Builtins::CallableFor((Builtins *)local_150,*(undefined8 *)(*(long *)this + 0x168),uVar11);
  local_138 = (Node *)&PTR__CallInterfaceDescriptor_01ca0fc8;
  piStack_130 = local_140;
  pCVar4 = (CallDescriptor *)
           Linkage::GetStubCallDescriptor
                     (*(undefined8 *)**(undefined8 **)this,&local_138,local_140[2] - *local_140,0,
                      0x70,0);
  pNVar3 = (Node *)GraphAssembler::HeapConstant(this_00,local_150[0]);
  if (*(char *)(*(long *)(*(long *)this + 0x10) + 0x10) == '\x05') {
    pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,1);
    pNVar6 = (Node *)GraphAssembler::Word32Shl(this_00,pNVar6,pNVar5);
    uVar7 = GraphAssembler::BitcastWord32ToWord64(this_00,pNVar6);
  }
  else {
    pNVar5 = (Node *)GraphAssembler::IntPtrConstant(this_00,1);
    uVar7 = GraphAssembler::WordShl(this_00,pNVar6,pNVar5);
  }
  uVar8 = GraphAssembler::NoContextConstant(this_00);
  pOVar9 = (Operator *)
           CommonOperatorBuilder::Call
                     (*(CommonOperatorBuilder **)(*(long *)(this + 0x50) + 8),pCVar4);
  uStack_110 = *(undefined8 *)(this + 0x60);
  local_118 = *(undefined8 *)(this + 0x58);
  local_138 = pNVar3;
  piStack_130 = (int *)uVar10;
  local_128 = uVar7;
  uStack_120 = uVar8;
  pNVar3 = (Node *)Graph::NewNode((Graph *)**(undefined8 **)(this + 0x50),pOVar9,
                                  *(int *)(pOVar9 + 0x18) + *(int *)(pOVar9 + 0x1c) + 4,&local_138,
                                  false);
  *(Node **)(this + 0x58) = pNVar3;
  pNVar3 = (Node *)GraphAssembler::AddNode(this_00,pNVar3);
  pNVar6 = (Node *)GraphAssembler::Int32Constant(this_00,1);
  pNVar6 = (Node *)GraphAssembler::Word32And(this_00,pNVar3,pNVar6);
  pNVar5 = (Node *)GraphAssembler::Int32Constant(this_00,0);
  uVar10 = GraphAssembler::Word32Equal(this_00,pNVar6,pNVar5);
  GraphAssembler::DeoptimizeIf(this_00,3,(ulong)&local_90 | 8,uVar10,param_2,1);
  GraphAssembler::MergeState<v8::internal::compiler::Node*>(this_00,local_d0,pNVar3);
  GraphAssembler::GotoBasicBlock(this_00,local_c8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  GraphAssembler::Bind<1ul>(this_00,local_d0);
  if (*(long *)(lVar1 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_a8);
}

