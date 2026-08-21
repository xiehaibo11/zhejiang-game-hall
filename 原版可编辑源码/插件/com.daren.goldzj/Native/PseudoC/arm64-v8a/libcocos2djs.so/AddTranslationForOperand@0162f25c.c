
/* v8::internal::compiler::CodeGenerator::AddTranslationForOperand(v8::internal::Translation*,
   v8::internal::compiler::Instruction*, v8::internal::compiler::InstructionOperand*,
   v8::internal::MachineType) */

void __thiscall
v8::internal::compiler::CodeGenerator::AddTranslationForOperand
          (CodeGenerator *this,Translation *param_1,undefined8 param_3_00,ulong *param_3,
          uint param_5)

{
  ulong *puVar1;
  int iVar2;
  int iVar3;
  ulong uVar5;
  uint uVar6;
  float fVar7;
  double dVar8;
  ulong uVar9;
  undefined4 local_60 [2];
  long local_58;
  double local_50;
  undefined8 local_48;
  ulong local_40;
  double dStack_38;
  ulong uVar4;
  
  uVar5 = *param_3;
  uVar9 = uVar5 & 0x1c;
  uVar6 = (uint)(uVar5 >> 5);
  uVar4 = (long)uVar5 >> 0x23;
  iVar2 = (int)(uVar5 >> 0x20);
  iVar3 = iVar2 >> 3;
  if ((uVar9 == 0xc) && ((uVar6 & 0xff) < 0xb)) {
    switch(param_5 & 0xff) {
    case 1:
      Translation::StoreBoolStackSlot(param_1,iVar3);
      return;
    case 2:
    case 3:
      uVar6 = param_5 >> 8 & 0xff;
      if (uVar6 == 2) {
LAB_0162f408:
        Translation::StoreInt32StackSlot(param_1,iVar3);
        return;
      }
      if (uVar6 == 3) goto LAB_0162f424;
      break;
    case 4:
      uVar6 = param_5 >> 8 & 0xff;
      if (uVar6 == 3) {
LAB_0162f424:
        Translation::StoreUint32StackSlot(param_1,iVar3);
        return;
      }
      if (uVar6 == 2) goto LAB_0162f408;
      break;
    case 5:
      if ((param_5 >> 8 & 0xff) == 4) {
        Translation::StoreInt64StackSlot(param_1,iVar3);
        return;
      }
      break;
    case 8:
    case 10:
      Translation::StoreStackSlot(param_1,iVar3);
      return;
    }
switchD_0162f2c0_caseD_6:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.",
             "MachineRepresentation::kTagged == type.representation() || MachineRepresentation::kCompressed == type.representation()"
            );
  }
  if ((uVar9 == 0xc) && (10 < (uVar6 & 0xff))) {
    if ((param_5 & 0xff) == 0xc) {
      Translation::StoreDoubleStackSlot(param_1,iVar3);
      return;
    }
    if ((param_5 & 0xff) == 0xb) {
      Translation::StoreFloatStackSlot(param_1,iVar3);
      return;
    }
LAB_0162f760:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","MachineRepresentation::kFloat32 == type.representation()");
  }
  if ((uVar9 == 4) && ((uVar6 & 0xff) < 0xb)) {
    switch(param_5 & 0xff) {
    case 1:
      Translation::StoreBoolRegister(param_1,uVar4 & 0xffffffff | 0x4000000000,0);
      return;
    case 2:
    case 3:
      uVar6 = param_5 >> 8 & 0xff;
      if (uVar6 == 2) {
LAB_0162f56c:
        Translation::StoreInt32Register(param_1,uVar4 & 0xffffffff | 0x4000000000,0);
        return;
      }
      if (uVar6 == 3) goto LAB_0162f594;
      break;
    case 4:
      uVar6 = param_5 >> 8 & 0xff;
      if (uVar6 == 3) {
LAB_0162f594:
        Translation::StoreUint32Register(param_1,uVar4 & 0xffffffff | 0x4000000000,0);
        return;
      }
      if (uVar6 == 2) goto LAB_0162f56c;
      break;
    case 5:
      if ((param_5 >> 8 & 0xff) == 4) {
        Translation::StoreInt64Register(param_1,uVar4 & 0xffffffff | 0x4000000000,0);
        return;
      }
      break;
    case 8:
    case 10:
      Translation::StoreRegister(param_1,uVar4 & 0xffffffff | 0x4000000000,0);
      return;
    }
    goto switchD_0162f2c0_caseD_6;
  }
  if ((uVar9 == 4) && (10 < (uVar6 & 0xff))) {
    if ((param_5 & 0xff) == 0xc) {
      Translation::StoreDoubleRegister(param_1,uVar4 & 0xffffffff | 0x4000000000,0x100000001);
      return;
    }
    if ((param_5 & 0xff) == 0xb) {
      Translation::StoreFloatRegister(param_1,uVar4 & 0xffffffff | 0x4000000000,0x100000001);
      return;
    }
    goto LAB_0162f760;
  }
  if ((uVar5 & 7) != 3) {
                    /* WARNING: Subroutine does not return */
    V8_Fatal("Check failed: %s.","op->IsImmediate()");
  }
  if (((uint)uVar5 >> 3 & 1) == 0) {
    Constant::Constant((Constant *)&local_40,iVar2);
  }
  else {
    puVar1 = (ulong *)(*(long *)(*(long *)(this + 0x28) + 0x60) + ((long)uVar5 >> 0x20) * 0x10);
    dStack_38 = (double)puVar1[1];
    local_40 = *puVar1;
  }
  fVar7 = SUB84(dStack_38,0);
  switch(local_40 & 0xffffffff) {
  case 0:
    uVar6 = param_5 & 0xff;
    if (uVar6 == 1) {
      if (fVar7 == 0.0) {
        local_58 = *(long *)(this + 0x10) + 0xc0;
        dVar8 = dStack_38;
      }
      else {
        local_58 = *(long *)(this + 0x10) + 0xb8;
        dVar8 = 0.0;
      }
      goto LAB_0162f520;
    }
    if (uVar6 == 4) {
      if ((param_5 >> 8 & 0xff) == 3) {
        local_50 = (double)((ulong)dStack_38 & 0xffffffff);
        break;
      }
    }
    else if (uVar6 == 8) goto LAB_0162f690;
    local_50 = (double)(int)fVar7;
    break;
  case 1:
    if ((param_5 & 0xff) == 5) {
      local_50 = (double)(long)dStack_38;
    }
    else {
LAB_0162f690:
      local_50 = (double)((int)fVar7 >> 1);
    }
    break;
  case 2:
    local_50 = (double)fVar7;
    break;
  case 3:
    local_50 = dStack_38;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 5:
  case 6:
    local_58 = Constant::ToHeapObject((Constant *)&local_40);
    dVar8 = 0.0;
LAB_0162f520:
    local_60[0] = SUB84(dVar8,0);
    local_48 = 0;
    local_50 = 0.0;
    goto LAB_0162f6e8;
  case 8:
    local_48 = Constant::ToDelayedStringConstant((Constant *)&local_40);
    local_58 = 0;
    local_50 = 0.0;
    local_60[0] = 2;
    goto LAB_0162f6e8;
  }
  local_58 = 0;
  local_48 = 0;
  local_60[0] = 1;
LAB_0162f6e8:
  if (local_58 == *(long *)(*(long *)(this + 0xa0) + 0x20)) {
    Translation::StoreJSFrameFunction(param_1);
  }
  else {
    iVar2 = DefineDeoptimizationLiteral(this,local_60);
    Translation::StoreLiteral(param_1,iVar2);
  }
  return;
}

