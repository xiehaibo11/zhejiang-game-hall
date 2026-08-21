
/* v8::internal::compiler::JSTypedLowering::BuildGetModuleCell(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::JSTypedLowering::BuildGetModuleCell(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  AccessBuilder *this_00;
  Operator *pOVar7;
  long lVar8;
  SimplifiedOperatorBuilder *this_01;
  Graph *pGVar9;
  uint uVar10;
  int *local_e8;
  Node *local_e0;
  Node *pNStack_d8;
  undefined8 local_d0;
  undefined1 local_c8 [16];
  undefined8 local_b8;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined1 local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  uVar4 = NodeProperties::GetEffectInput(param_1,0);
  uVar5 = NodeProperties::GetControlInput(param_1,0);
  uVar10 = *(uint *)(*(long *)param_1 + 0x2c);
  pNVar6 = (Node *)NodeProperties::GetValueInput(param_1,0);
  auVar2._8_8_ = local_c8._8_8_;
  auVar2._0_8_ = local_c8._0_8_;
  local_e8 = *(int **)(pNVar6 + 8);
  if ((((ulong)local_e8 & 1) == 0) && (local_c8 = auVar2, *local_e8 == 0)) {
    lVar8 = Type::AsHeapConstant((Type *)&local_e8);
    local_c8 = ObjectRef::AsSourceTextModule((ObjectRef *)(lVar8 + 8));
    SourceTextModuleRef::GetCell((int)local_c8);
    if (local_90._0_1_ != (FieldAccess)0x0) {
      JSGraph::Constant(*(JSGraph **)(this + 0x10),(ObjectRef *)&uStack_88);
      goto LAB_01763c44;
    }
  }
  uStack_84 = 0;
  uStack_80 = 0;
  uStack_8c = 0;
  uStack_88 = 0;
  local_7c = 0;
  uVar3 = (ulong)_local_70 >> 0x18;
  uStack_68 = 0;
  local_90 = CONCAT31(local_90._1_3_,1);
  local_78 = 1;
  _local_70 = CONCAT44(1,(int)CONCAT53((int5)uVar3,0x50000));
  local_60 = 0;
  this_00 = (AccessBuilder *)SourceTextModuleDescriptor::GetCellIndexKind(uVar10);
  if ((int)this_00 == 1) {
    AccessBuilder::ForModuleRegularExports(this_00);
    uVar10 = uVar10 - 1;
  }
  else {
    AccessBuilder::ForModuleRegularImports(this_00);
    uVar10 = ~uVar10;
  }
  uStack_88 = local_c8._8_4_;
  uStack_84 = local_c8._12_4_;
  local_90 = local_c8._0_4_;
  uStack_8c = local_c8._4_4_;
  uStack_80 = (undefined4)local_b8;
  local_7c = (undefined4)((ulong)local_b8 >> 0x20);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  pOVar7 = (Operator *)
           SimplifiedOperatorBuilder::LoadField
                     ((SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f],
                      (FieldAccess *)&local_90);
  local_c8._0_8_ = pNVar6;
  local_c8._8_8_ = uVar4;
  local_b8 = uVar5;
  pNVar6 = (Node *)Graph::NewNode(pGVar9,pOVar7,3,(Node **)local_c8,false);
  pGVar9 = (Graph *)**(undefined8 **)(this + 0x10);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  AccessBuilder::ForFixedArraySlot((AccessBuilder *)local_c8,(long)(int)uVar10,5);
  pOVar7 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,(FieldAccess *)local_c8);
  local_e0 = pNVar6;
  pNStack_d8 = pNVar6;
  local_d0 = uVar5;
  Graph::NewNode(pGVar9,pOVar7,3,&local_e0,false);
LAB_01763c44:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

