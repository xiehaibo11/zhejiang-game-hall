
/* v8::internal::interpreter::BytecodeGenerator::BuildNewLocalActivationContext() */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildNewLocalActivationContext
          (BytecodeGenerator *this)

{
  uint uVar1;
  Scope SVar2;
  int iVar3;
  long lVar4;
  undefined4 uVar5;
  long *plVar6;
  BytecodeArrayBuilder *pBVar7;
  undefined8 uVar8;
  int iVar9;
  ulong uVar10;
  Scope *pSVar11;
  undefined8 local_68;
  BytecodeGenerator *pBStack_60;
  uint local_58;
  undefined8 local_50;
  long local_48;
  
  lVar4 = tpidr_el0;
  local_48 = *(long *)(lVar4 + 0x28);
  local_68 = *(undefined8 *)(this + 0x300);
  uVar1 = *(uint *)(this + 0x118);
  uVar10 = (ulong)uVar1;
  local_50 = 2;
  pSVar11 = *(Scope **)(this + 0x1e0);
  *(undefined8 **)(this + 0x300) = &local_68;
  SVar2 = pSVar11[0x80];
  pBStack_60 = this;
  local_58 = uVar1;
  if (SVar2 == (Scope)0x3) {
    plVar6 = *(long **)(this + 0x120);
    iVar9 = uVar1 + 2;
    iVar3 = *(int *)(this + 0x11c);
    if (*(int *)(this + 0x11c) <= iVar9) {
      iVar3 = iVar9;
    }
    *(int *)(this + 0x118) = iVar9;
    *(int *)(this + 0x11c) = iVar3;
    if (plVar6 != (long *)0x0) {
      (**(code **)(*plVar6 + 0x18))(plVar6,uVar10 | 0x200000000);
    }
    uVar5 = BytecodeArrayBuilder::Parameter((BytecodeArrayBuilder *)(this + 0x18),0);
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::MoveRegister((BytecodeArrayBuilder *)(this + 0x18),uVar5,uVar10);
    pBVar7 = (BytecodeArrayBuilder *)BytecodeArrayBuilder::LoadLiteral(pBVar7,pSVar11);
    pBVar7 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar1 + 1);
    BytecodeArrayBuilder::CallRuntime(pBVar7,0x13d,uVar10 | 0x200000000);
  }
  else {
    if (SVar2 == (Scope)0x4) {
      iVar9 = *(int *)(this + 0x11c);
      plVar6 = *(long **)(this + 0x120);
      *(uint *)(this + 0x118) = uVar1 + 1;
      if (iVar9 <= (int)(uVar1 + 1)) {
        iVar9 = uVar1 + 1;
      }
      *(int *)(this + 0x11c) = iVar9;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar10);
      }
      pBVar7 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(this + 0x18),pSVar11);
      pBVar7 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar10);
      uVar8 = 0x137;
    }
    else {
      iVar3 = *(int *)(pSVar11 + 0x7c) + -2;
      iVar9 = 0x7ffb;
      if (FLAG_test_small_max_function_context_stub_size != '\0') {
        iVar9 = 10;
      }
      if (iVar3 <= iVar9) {
        if (SVar2 == (Scope)0x2) {
          BytecodeArrayBuilder::CreateFunctionContext
                    ((BytecodeArrayBuilder *)(this + 0x18),pSVar11,iVar3);
        }
        else {
          if (SVar2 != (Scope)0x1) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          BytecodeArrayBuilder::CreateEvalContext
                    ((BytecodeArrayBuilder *)(this + 0x18),pSVar11,iVar3);
        }
        goto LAB_0150bbd0;
      }
      iVar9 = *(int *)(this + 0x11c);
      plVar6 = *(long **)(this + 0x120);
      *(uint *)(this + 0x118) = uVar1 + 1;
      if (iVar9 <= (int)(uVar1 + 1)) {
        iVar9 = uVar1 + 1;
      }
      *(int *)(this + 0x11c) = iVar9;
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x10))(plVar6,uVar10);
      }
      pBVar7 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::LoadLiteral((BytecodeArrayBuilder *)(this + 0x18),pSVar11);
      pBVar7 = (BytecodeArrayBuilder *)
               BytecodeArrayBuilder::StoreAccumulatorInRegister(pBVar7,uVar10);
      uVar8 = 0x135;
    }
    BytecodeArrayBuilder::CallRuntime(pBVar7,uVar8,uVar10);
  }
LAB_0150bbd0:
  *(undefined8 *)(pBStack_60 + 0x300) = local_68;
  plVar6 = *(long **)(pBStack_60 + 0x120);
  iVar9 = *(int *)(pBStack_60 + 0x118);
  *(uint *)(pBStack_60 + 0x118) = local_58;
  if (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x20))(plVar6,CONCAT44(iVar9 - local_58,local_58));
  }
  if (*(long *)(lVar4 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

