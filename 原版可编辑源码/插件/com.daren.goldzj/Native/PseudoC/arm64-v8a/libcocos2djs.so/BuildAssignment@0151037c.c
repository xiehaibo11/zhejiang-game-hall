
/* v8::internal::interpreter::BytecodeGenerator::BuildAssignment(v8::internal::interpreter::BytecodeGenerator::AssignmentLhsData
   const&, v8::internal::Token::Value, v8::internal::LookupHoistingMode) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildAssignment
          (BytecodeGenerator *this,undefined4 *param_1,undefined8 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long *plVar5;
  BytecodeArrayBuilder *pBVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  int iVar10;
  
  switch(*param_1) {
  case 0:
    lVar9 = *(long *)(param_1 + 2);
    uVar1 = *(uint *)(lVar9 + 4) & 0x3f;
    if ((lVar9 != 0) && (uVar1 == 0x16)) {
      BuildDestructuringObjectAssignment(this,lVar9,param_3,param_4);
      return;
    }
    if ((lVar9 != 0) && (uVar1 == 0x17)) {
      BuildDestructuringArrayAssignment(this,lVar9,param_3,param_4);
      return;
    }
    if (uVar1 != 0x35) {
      lVar9 = 0;
    }
    BuildVariableAssignment
              (this,*(undefined8 *)(lVar9 + 8),param_3,*(uint *)(lVar9 + 4) >> 0xb & 1,param_4);
    return;
  case 1:
    BuildStoreNamedProperty
              (this,*(undefined8 *)(param_1 + 8),param_1[6],*(undefined8 *)(param_1 + 10));
    return;
  case 2:
    uVar3 = 3;
    if ((*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) {
      uVar3 = 0xd;
    }
    uVar3 = FeedbackVectorSpec::AddSlot
                      ((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),uVar3);
    if (*(int *)(*(long *)(this + 0x300) + 0x18) == 1) {
      iVar10 = 0x7fffffff;
    }
    else {
      iVar10 = *(int *)(this + 0x118);
      iVar2 = *(int *)(this + 0x11c);
      plVar5 = *(long **)(this + 0x120);
      if (iVar2 <= iVar10 + 1) {
        iVar2 = iVar10 + 1;
      }
      *(int *)(this + 0x118) = iVar10 + 1;
      *(int *)(this + 0x11c) = iVar2;
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
      }
      BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar10)
      ;
    }
    BytecodeArrayBuilder::StoreKeyedProperty
              (this + 0x18,param_1[6],param_1[7],uVar3,
               *(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1);
    iVar2 = *(int *)(*(long *)(this + 0x300) + 0x18);
    break;
  case 3:
    pBVar6 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),param_1[4] + 3);
    uVar8 = *(undefined8 *)(param_1 + 4);
    uVar7 = 0x27;
    goto LAB_015104ec;
  case 4:
    pBVar6 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister
                       ((BytecodeArrayBuilder *)(this + 0x18),param_1[4] + 3);
    uVar8 = *(undefined8 *)(param_1 + 4);
    uVar7 = 0x26;
LAB_015104ec:
    BytecodeArrayBuilder::CallRuntime(pBVar6,uVar7,uVar8);
    return;
  case 5:
    lVar9 = *(long *)(param_1 + 2);
    uVar7 = 0x106;
    goto LAB_0151056c;
  case 6:
    lVar9 = *(long *)(param_1 + 2);
    uVar7 = 0x108;
LAB_0151056c:
    if ((*(uint *)(lVar9 + 4) & 0x3f) != 0x2c) {
      lVar9 = 0;
    }
    BuildInvalidPropertyAccess(this,uVar7,lVar9);
    return;
  case 7:
  case 8:
    iVar10 = *(int *)(this + 0x118);
    iVar2 = *(int *)(this + 0x11c);
    plVar5 = *(long **)(this + 0x120);
    if (iVar2 <= iVar10 + 1) {
      iVar2 = iVar10 + 1;
    }
    *(int *)(this + 0x118) = iVar10 + 1;
    *(int *)(this + 0x11c) = iVar2;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,iVar10);
    }
    BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),iVar10);
    lVar9 = *(long *)(param_1 + 2);
    if ((*(uint *)(lVar9 + 4) & 0x3f) != 0x2c) {
      lVar9 = 0;
    }
    uVar3 = VisitForRegisterValue(this,*(Expression **)(lVar9 + 8));
    uVar4 = VisitForRegisterValue(this,*(Expression **)(lVar9 + 0x10));
    BuildPrivateBrandCheck(this,lVar9,uVar3,0x105);
    BuildPrivateSetterAccess(this,uVar3,uVar4,iVar10);
    iVar2 = *(int *)(*(long *)(this + 0x300) + 0x18);
    break;
  default:
    goto switchD_015103b8_default;
  }
  if (iVar2 != 1) {
    BytecodeArrayBuilder::LoadAccumulatorWithRegister((BytecodeArrayBuilder *)(this + 0x18),iVar10);
    return;
  }
switchD_015103b8_default:
  return;
}

