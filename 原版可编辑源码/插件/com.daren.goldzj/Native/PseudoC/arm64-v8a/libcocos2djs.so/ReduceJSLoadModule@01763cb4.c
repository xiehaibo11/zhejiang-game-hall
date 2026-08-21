
/* v8::internal::compiler::JSTypedLowering::ReduceJSLoadModule(v8::internal::compiler::Node*) */

undefined8 __thiscall
v8::internal::compiler::JSTypedLowering::ReduceJSLoadModule(JSTypedLowering *this,Node *param_1)

{
  long lVar1;
  AccessBuilder *pAVar2;
  undefined8 uVar3;
  Operator *pOVar4;
  undefined8 uVar5;
  Graph *this_00;
  SimplifiedOperatorBuilder *this_01;
  AccessBuilder *local_a8;
  AccessBuilder *pAStack_a0;
  undefined8 local_98;
  FieldAccess aFStack_90 [56];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  pAVar2 = (AccessBuilder *)NodeProperties::GetEffectInput(param_1,0);
  uVar3 = NodeProperties::GetControlInput(param_1,0);
  local_a8 = (AccessBuilder *)BuildGetModuleCell(this,param_1);
  this_00 = (Graph *)**(undefined8 **)(this + 0x10);
  this_01 = (SimplifiedOperatorBuilder *)(*(undefined8 **)(this + 0x10))[0x2f];
  pAStack_a0 = pAVar2;
  if (*(char *)(*(long *)local_a8 + 0x24) != '\0') {
    pAStack_a0 = local_a8;
  }
  AccessBuilder::ForCellValue(local_a8);
  pOVar4 = (Operator *)SimplifiedOperatorBuilder::LoadField(this_01,aFStack_90);
  local_98 = uVar3;
  uVar5 = Graph::NewNode(this_00,pOVar4,3,(Node **)&local_a8,false);
  (**(code **)(**(long **)(this + 8) + 0x20))(*(long **)(this + 8),param_1,uVar5,uVar5,uVar3);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

