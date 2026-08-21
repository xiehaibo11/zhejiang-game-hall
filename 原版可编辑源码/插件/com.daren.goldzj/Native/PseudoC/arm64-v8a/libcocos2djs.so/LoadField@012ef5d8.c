
/* v8::internal::compiler::SimplifiedOperatorBuilder::LoadField(v8::internal::compiler::FieldAccess
   const&) */

Operator * __thiscall
v8::internal::compiler::SimplifiedOperatorBuilder::LoadField
          (SimplifiedOperatorBuilder *this,FieldAccess *param_1)

{
  long lVar1;
  Zone *this_00;
  Operator *pOVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = tpidr_el0;
  lVar3 = *(long *)(lVar1 + 0x28);
  this_00 = *(Zone **)(this + 8);
  pOVar2 = *(Operator **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)pOVar2) < 0x70) {
    pOVar2 = (Operator *)Zone::NewExpand(this_00,0x70);
  }
  else {
    *(Operator **)(this_00 + 0x10) = pOVar2 + 0x70;
  }
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar8 = *(undefined8 *)(param_1 + 0x18);
  uVar7 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = *(undefined8 *)(param_1 + 0x28);
  uVar5 = *(undefined8 *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  Operator::Operator(pOVar2,0xea,0x70,"LoadField",1,1,1,1,1,0);
  *(undefined ***)pOVar2 = &PTR__Operator_01cc3890;
  *(undefined8 *)(pOVar2 + 0x60) = uVar4;
  *(undefined8 *)(pOVar2 + 0x48) = uVar8;
  *(undefined8 *)(pOVar2 + 0x40) = uVar7;
  *(undefined8 *)(pOVar2 + 0x58) = uVar6;
  *(undefined8 *)(pOVar2 + 0x50) = uVar5;
  *(undefined8 *)(pOVar2 + 0x38) = uVar10;
  *(undefined8 *)(pOVar2 + 0x30) = uVar9;
  if (*(long *)(lVar1 + 0x28) == lVar3) {
    return pOVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

