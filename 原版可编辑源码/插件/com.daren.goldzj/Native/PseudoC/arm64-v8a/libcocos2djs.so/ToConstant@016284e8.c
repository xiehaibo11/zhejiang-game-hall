
/* v8::internal::compiler::OperandGenerator::ToConstant(v8::internal::compiler::Node const*) */

undefined1  [16] v8::internal::compiler::OperandGenerator::ToConstant(Node *param_1)

{
  uint uVar1;
  short sVar2;
  undefined1 auVar3 [16];
  uint uVar4;
  Operator *pOVar5;
  int iVar6;
  undefined4 local_20;
  undefined4 uStack_1c;
  long local_18;
  
  pOVar5 = *(Operator **)param_1;
  sVar2 = *(short *)(pOVar5 + 0x10);
  switch(sVar2) {
  case 0x17:
    iVar6 = *(int *)(pOVar5 + 0x2c);
    goto LAB_016285ec;
  case 0x18:
    goto switchD_0162851c_caseD_18;
  case 0x19:
    local_18 = (long)*(int *)(pOVar5 + 0x2c);
    local_20 = 2;
    break;
  case 0x1a:
  case 0x1c:
    local_18 = *(long *)(pOVar5 + 0x30);
    local_20 = 3;
    break;
  case 0x1b:
    local_18 = *(long *)(pOVar5 + 0x30);
    local_20 = 4;
    break;
  case 0x1d:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
switchD_0162851c_caseD_1d:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x1e:
    local_18 = HeapConstantOf(pOVar5);
    local_20 = 6;
    goto LAB_016285ac;
  case 0x1f:
    local_18 = HeapConstantOf(pOVar5);
    local_20 = 5;
LAB_016285ac:
    uStack_1c = CONCAT31(uStack_1c._1_3_,0x13);
    goto LAB_016285f0;
  case 0x20:
  case 0x21:
    Constant::Constant((Constant *)&local_20,*(undefined8 *)(pOVar5 + 0x30),
                       *(undefined8 *)(pOVar5 + 0x38));
    goto LAB_016285f0;
  case 0x3c:
    uVar4 = DeadValueRepresentationOf(pOVar5);
    uVar1 = uVar4 & 0xff;
    if (0xc < uVar1) goto switchD_0162851c_caseD_1d;
    if ((1 << (ulong)(uVar4 & 0x1f) & 0x7d2U) == 0) {
      if (uVar1 == 0xb) {
        local_20 = 2;
      }
      else {
        if (uVar1 != 0xc) goto switchD_0162851c_caseD_1d;
        local_20 = 3;
      }
      uStack_1c = CONCAT31(uStack_1c._1_3_,0x13);
      local_18 = 0;
      goto LAB_016285f0;
    }
    iVar6 = 0;
LAB_016285ec:
    Constant::Constant((Constant *)&local_20,iVar6);
    goto LAB_016285f0;
  default:
    if (sVar2 == 0x119) {
      local_18 = StringConstantBaseOf(pOVar5);
      local_20 = 8;
      goto LAB_016285ac;
    }
    if (sVar2 != 0x1a9) goto switchD_0162851c_caseD_1d;
    goto switchD_0162851c_caseD_18;
  }
LAB_01628590:
  uStack_1c = CONCAT31(uStack_1c._1_3_,0x13);
LAB_016285f0:
  auVar3._4_4_ = uStack_1c;
  auVar3._0_4_ = local_20;
  auVar3._8_8_ = local_18;
  return auVar3;
switchD_0162851c_caseD_18:
  local_18 = *(long *)(pOVar5 + 0x30);
  local_20 = 1;
  goto LAB_01628590;
}

