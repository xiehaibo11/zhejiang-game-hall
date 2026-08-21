
/* v8::internal::interpreter::BytecodeGenerator::BuildVariableAssignment(v8::internal::Variable*,
   v8::internal::Token::Value, v8::internal::HoleCheckMode, v8::internal::LookupHoistingMode) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildVariableAssignment
          (BytecodeGenerator *this,undefined8 *param_1,char param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  long lVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  BytecodeArrayBuilder *pBVar9;
  BytecodeArrayBuilder *pBVar10;
  long *plVar11;
  long lVar12;
  ulong uVar13;
  
  uVar4 = *(ushort *)(param_1 + 5);
  uVar2 = *(uint *)(this + 0x118);
  if (((uVar4 >> 7 ^ 0xffff) & 7) == 0) goto LAB_0150d868;
  uVar1 = uVar4 & 0xf;
  switch(uVar4 >> 7 & 7) {
  case 1:
    if (*(int *)(param_1 + 4) == -1) {
      uVar6 = BytecodeArrayBuilder::Receiver((BytecodeArrayBuilder *)(this + 0x18));
    }
    else {
      uVar6 = BytecodeArrayBuilder::Parameter
                        ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4));
    }
    goto joined_r0x0150d484;
  case 2:
    uVar6 = BytecodeArrayBuilder::Local((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4))
    ;
joined_r0x0150d484:
    if (param_4 == 0) {
      iVar7 = *(int *)(this + 0x118);
      iVar8 = *(int *)(this + 0x11c);
      plVar11 = *(long **)(this + 0x120);
      if (iVar8 <= iVar7 + 1) {
        iVar8 = iVar7 + 1;
      }
      *(int *)(this + 0x118) = iVar7 + 1;
      *(int *)(this + 0x11c) = iVar8;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,iVar7);
      }
      pBVar10 = (BytecodeArrayBuilder *)(this + 0x18);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,iVar7);
      BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar9,uVar6);
      if ((*(ushort *)(param_1 + 5) & 0x70) == 0x20) {
        if ((param_3 == '\x10') && ((*(ushort *)(param_1 + 5) & 0xf) == 1)) {
          BytecodeArrayBuilder::ThrowSuperAlreadyCalledIfNotHole(pBVar10);
        }
        else {
          BytecodeArrayBuilder::ThrowSuperNotCalledIfHole(pBVar10);
        }
      }
      else {
        BytecodeArrayBuilder::ThrowReferenceErrorIfHole(pBVar10,(AstRawString *)param_1[1]);
      }
      BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar10,iVar7);
    }
    if ((param_3 == '\x10') || (uVar1 != 1)) {
      BytecodeArrayBuilder::StoreAccumulatorInRegister((BytecodeArrayBuilder *)(this + 0x18),uVar6);
    }
    else {
LAB_0150d7f0:
      if (((*(byte *)(*(long *)(this + 0x1e8) + 0x81) & 1) != 0) ||
         ((*(ushort *)(param_1 + 5) & 0x70) != 0x40)) {
LAB_0150d80c:
        BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0x143);
      }
    }
    break;
  default:
    iVar7 = Scope::ContextChainLength(*(Scope **)(*(long *)(this + 0x2f8) + 8),(Scope *)*param_1);
    lVar12 = *(long *)(this + 0x2f8);
    lVar5 = lVar12;
    iVar8 = iVar7;
    if (iVar7 <= *(int *)(lVar12 + 0x1c)) {
      for (; 0 < iVar8; iVar8 = iVar8 + -1) {
        lVar5 = *(long *)(lVar5 + 0x10);
      }
      if (lVar5 != 0) {
        iVar7 = 0;
        lVar12 = lVar5;
      }
    }
    uVar6 = *(undefined4 *)(lVar12 + 0x18);
    if (param_4 == 0) {
      iVar3 = *(int *)(this + 0x118);
      iVar8 = *(int *)(this + 0x11c);
      plVar11 = *(long **)(this + 0x120);
      if (iVar8 <= iVar3 + 1) {
        iVar8 = iVar3 + 1;
      }
      *(int *)(this + 0x118) = iVar3 + 1;
      *(int *)(this + 0x11c) = iVar8;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x10))(plVar11,iVar3);
      }
      pBVar10 = (BytecodeArrayBuilder *)(this + 0x18);
      pBVar9 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,iVar3);
      BytecodeArrayBuilder::LoadContextSlot(pBVar9,uVar6,*(undefined4 *)(param_1 + 4),iVar7,1);
      if ((*(ushort *)(param_1 + 5) & 0x70) == 0x20) {
        if ((param_3 == '\x10') && ((*(ushort *)(param_1 + 5) & 0xf) == 1)) {
          BytecodeArrayBuilder::ThrowSuperAlreadyCalledIfNotHole(pBVar10);
        }
        else {
          BytecodeArrayBuilder::ThrowSuperNotCalledIfHole(pBVar10);
        }
      }
      else {
        BytecodeArrayBuilder::ThrowReferenceErrorIfHole(pBVar10,(AstRawString *)param_1[1]);
      }
      BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar10,iVar3);
    }
    if ((param_3 == '\x10') || (uVar1 != 1)) {
      BytecodeArrayBuilder::StoreContextSlot
                ((BytecodeArrayBuilder *)(this + 0x18),uVar6,*(undefined4 *)(param_1 + 4),iVar7);
      break;
    }
    goto LAB_0150d7f0;
  case 4:
    BytecodeArrayBuilder::StoreLookupSlot
              ((BytecodeArrayBuilder *)(this + 0x18),param_1[1],
               *(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1,param_5);
    break;
  case 5:
    if ((param_3 == '\x10') || (uVar1 != 1)) {
      iVar8 = Scope::ContextChainLength(*(Scope **)(*(long *)(this + 0x2f8) + 8),(Scope *)*param_1);
      if (param_4 == 0) {
        iVar3 = *(int *)(this + 0x118);
        iVar7 = *(int *)(this + 0x11c);
        plVar11 = *(long **)(this + 0x120);
        if (iVar7 <= iVar3 + 1) {
          iVar7 = iVar3 + 1;
        }
        *(int *)(this + 0x118) = iVar3 + 1;
        *(int *)(this + 0x11c) = iVar7;
        if (plVar11 != (long *)0x0) {
          (**(code **)(*plVar11 + 0x10))(plVar11,iVar3);
        }
        pBVar10 = (BytecodeArrayBuilder *)(this + 0x18);
        pBVar9 = (BytecodeArrayBuilder *)
                 BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,iVar3);
        BytecodeArrayBuilder::LoadModuleVariable(pBVar9,*(int *)(param_1 + 4),iVar8);
        if ((*(ushort *)(param_1 + 5) & 0x70) == 0x20) {
          if ((param_3 == '\x10') && ((*(ushort *)(param_1 + 5) & 0xf) == 1)) {
            BytecodeArrayBuilder::ThrowSuperAlreadyCalledIfNotHole(pBVar10);
          }
          else {
            BytecodeArrayBuilder::ThrowSuperNotCalledIfHole(pBVar10);
          }
        }
        else {
          BytecodeArrayBuilder::ThrowReferenceErrorIfHole(pBVar10,(AstRawString *)param_1[1]);
        }
        BytecodeArrayBuilder::LoadAccumulatorWithRegister(pBVar10,iVar3);
      }
      BytecodeArrayBuilder::StoreModuleVariable
                ((BytecodeArrayBuilder *)(this + 0x18),*(int *)(param_1 + 4),iVar8);
      break;
    }
    goto LAB_0150d80c;
  case 6:
    if (param_3 == '\x10') {
      plVar11 = *(long **)(this + 0x120);
      iVar8 = uVar2 + 2;
      uVar13 = (ulong)uVar2 | 0x200000000;
      iVar7 = *(int *)(this + 0x11c);
      if (*(int *)(this + 0x11c) <= iVar8) {
        iVar7 = iVar8;
      }
      *(int *)(this + 0x118) = iVar8;
      *(int *)(this + 0x11c) = iVar7;
      if (plVar11 != (long *)0x0) {
        (**(code **)(*plVar11 + 0x18))(plVar11,uVar13);
      }
      pBVar10 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::StoreAccumulatorInRegister
                          ((BytecodeArrayBuilder *)(this + 0x18),uVar2 + 1);
      pBVar10 = (BytecodeArrayBuilder *)
                BytecodeArrayBuilder::LoadLiteral(pBVar10,(AstRawString *)param_1[1]);
      BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar10,(ulong)uVar2);
      BytecodeArrayBuilder::CallRuntime((BytecodeArrayBuilder *)(this + 0x18),0x13f,uVar13);
      break;
    }
  case 0:
    iVar8 = GetCachedStoreGlobalICSlot(this,*(ushort *)(*(long *)(this + 0x1e8) + 0x81) & 1,param_1)
    ;
    BytecodeArrayBuilder::StoreGlobal
              ((BytecodeArrayBuilder *)(this + 0x18),(AstRawString *)param_1[1],iVar8);
  }
LAB_0150d868:
  plVar11 = *(long **)(this + 0x120);
  iVar8 = *(int *)(this + 0x118);
  *(uint *)(this + 0x118) = uVar2;
  if (plVar11 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0150d8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar11 + 0x20))(plVar11,CONCAT44(iVar8 - uVar2,uVar2));
    return;
  }
  return;
}

