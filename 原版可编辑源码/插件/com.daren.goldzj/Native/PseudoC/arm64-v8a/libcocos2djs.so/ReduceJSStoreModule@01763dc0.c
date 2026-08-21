
/* v8::internal::compiler::JSTypedLowering::ReduceJSStoreModule(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSStoreModule(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  AccessBuilder *pAVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Operator *pOVar5;
  undefined8 uVar6;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  AccessBuilder *local_c0;
  undefined8 uStack_b8;
  AccessBuilder *local_b0;
  undefined8 uStack_a8;
  FieldAccess aFStack_a0 [56];
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  pAVar2 = (AccessBuilder *)NodeProperties::GetEffectInput(param_1,0);
  uVar3 = NodeProperties::GetControlInput(param_1,0);
  uVar4 = NodeProperties::GetValueInput(param_1,1);
  local_c0 = (AccessBuilder *)BuildGetModuleCell(this,param_1);
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  local_b0 = pAVar2;
  if (*(char *)(*(long *)local_c0 + 0x24) != '\0') {
    local_b0 = local_c0;
  }
  AccessBuilder::ForCellValue(local_c0);
  pOVar5 = (Operator *)SimplifiedOperatorBuilder::StoreField(this_01,aFStack_a0);
  uStack_b8 = uVar4;
  uStack_a8 = uVar3;
  uVar6 = Graph::NewNode(this_00,pOVar5,4,(Node **)&local_c0,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar6,uVar6,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

