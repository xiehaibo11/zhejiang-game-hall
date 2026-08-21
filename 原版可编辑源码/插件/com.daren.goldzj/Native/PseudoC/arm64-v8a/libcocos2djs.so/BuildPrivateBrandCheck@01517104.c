
/* v8::internal::interpreter::BytecodeGenerator::BuildPrivateBrandCheck(v8::internal::Property*,
   v8::internal::interpreter::Register, v8::internal::MessageTemplate) */

void __thiscall
v8::internal::interpreter::BytecodeGenerator::BuildPrivateBrandCheck
          (BytecodeGenerator *this,int *param_1,undefined4 param_3,undefined4 param_4)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  BytecodeArrayBuilder *pBVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong local_68;
  BytecodeGenerator *local_60;
  int local_58;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  lVar7 = *(long *)(param_1 + 4);
  if ((*(uint *)(lVar7 + 4) & 0x3f) != 0x35) {
    lVar7 = 0;
  }
  lVar8 = *(long *)(lVar7 + 8);
  lVar7 = Scope::AsClassScope();
  local_60 = this;
  if (*(short *)(lVar8 + 0x28) < 0) {
    local_68 = *(ulong *)(this + 0x300);
    uVar6 = *(undefined8 *)(lVar7 + 0x90);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(ulong **)(this + 0x300) = &local_68;
    BuildVariableLoad(this,uVar6,1,1);
    *(ulong *)(local_60 + 0x300) = local_68;
    plVar5 = *(long **)(local_60 + 0x120);
    iVar2 = *(int *)(local_60 + 0x118);
    *(int *)(local_60 + 0x118) = local_58;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - local_58,local_58));
    }
    local_68 = local_68 & 0xffffffffffffff00;
    local_60 = (BytecodeGenerator *)0xffffffffffffffff;
    pBVar4 = (BytecodeArrayBuilder *)
             BytecodeArrayBuilder::CompareReference((BytecodeArrayBuilder *)(this + 0x18),param_3);
    BytecodeArrayBuilder::JumpIfTrue(pBVar4,1,&local_68);
    BuildInvalidPropertyAccess(this,param_4,param_1);
    BytecodeArrayBuilder::Bind((BytecodeArrayBuilder *)(this + 0x18),(BytecodeLabel *)&local_68);
  }
  else {
    uVar1 = *(ulong *)(lVar7 + 0x88) & 0xfffffffffffffff8;
    if (uVar1 == 0) {
      uVar6 = 0;
    }
    else {
      uVar6 = *(undefined8 *)(uVar1 + 0x28);
    }
    local_68 = *(ulong *)(this + 0x300);
    local_58 = *(int *)(this + 0x118);
    local_50 = 2;
    *(ulong **)(this + 0x300) = &local_68;
    BuildVariableLoad(this,uVar6,1,1);
    *(ulong *)(local_60 + 0x300) = local_68;
    plVar5 = *(long **)(local_60 + 0x120);
    iVar2 = *(int *)(local_60 + 0x118);
    *(int *)(local_60 + 0x118) = local_58;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x20))(plVar5,CONCAT44(iVar2 - local_58,local_58));
    }
    iVar2 = *param_1;
    if ((iVar2 != -1) && (this[0x1c0] != (BytecodeGenerator)0x2)) {
      this[0x1c0] = (BytecodeGenerator)0x1;
      *(int *)(this + 0x1c4) = iVar2;
    }
    uVar6 = FeedbackVectorSpec::AddSlot((FeedbackVectorSpec *)(*(long *)(this + 0x1d0) + 0x38),8);
    BytecodeArrayBuilder::LoadKeyedProperty((BytecodeArrayBuilder *)(this + 0x18),param_3,uVar6);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

