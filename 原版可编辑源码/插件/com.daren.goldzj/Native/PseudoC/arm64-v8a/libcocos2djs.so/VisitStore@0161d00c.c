
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::InstructionSelector::VisitStore(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitStore(InstructionSelector *this,Node *param_1)

{
  Node *pNVar1;
  Node *pNVar2;
  ushort uVar3;
  ushort *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  Node *pNVar9;
  InstructionSequence *pIVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong local_90;
  ulong uStack_88;
  ulong local_80 [2];
  undefined1 local_70 [16];
  InstructionSelector *local_48;
  
  pNVar9 = param_1 + 0x20;
  if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  pNVar1 = *(Node **)pNVar9;
  pNVar2 = *(Node **)(pNVar9 + 8);
  pNVar9 = *(Node **)(pNVar9 + 0x10);
  local_48 = this;
  puVar4 = (ushort *)StoreRepresentationOf(*(Operator **)param_1);
  uVar3 = *puVar4;
  if ((uVar3 & 0xff00) != 0) {
    uStack_88 = 0;
    local_80[0] = 0;
    uVar5 = GetVirtualRegister(this,pNVar1);
    uVar5 = (uVar5 & 0xffffffff) << 3 | 0xd800000001;
    MarkAsUsed(local_48,pNVar1);
    lVar7 = *(long *)pNVar2;
    local_90 = uVar5;
    if (*(ushort *)(lVar7 + 0x10) - 0x17 < 2) {
      if (*(ushort *)(lVar7 + 0x10) == 0x17) {
        lVar7 = (long)*(int *)(lVar7 + 0x2c);
      }
      else {
        lVar7 = *(long *)(lVar7 + 0x30);
      }
      uVar5 = Assembler::IsImmLSScaled(lVar7,2);
      if (((uVar5 & 1) == 0) && (uVar5 = Assembler::IsImmLSUnscaled(lVar7), (uVar5 & 1) == 0))
      goto LAB_0161d158;
      pIVar10 = *(InstructionSequence **)(local_48 + 0x10);
      local_70 = OperandGenerator::ToConstant(pNVar2);
      uVar5 = InstructionSequence::AddImmediate(pIVar10,(Constant *)local_70);
      uVar8 = 0x21b;
    }
    else {
LAB_0161d158:
      uVar5 = GetVirtualRegister(local_48,pNVar2);
      uVar5 = (uVar5 & 0xffffffff) << 3 | 0xd800000001;
      MarkAsUsed(local_48,pNVar2);
      uVar8 = 0x41b;
    }
    uStack_88 = uVar5;
    uVar5 = GetVirtualRegister(local_48,pNVar9);
    uVar5 = (uVar5 & 0xffffffff) << 3 | 0xd800000001;
    MarkAsUsed(local_48,pNVar9);
    uVar12 = (byte)(uVar3 >> 8) - 2 & 0xff;
    local_80[0] = uVar5;
    if (3 < uVar12) {
switchD_0161d0fc_caseD_0:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar8 = uVar8 | uVar12 << 0x16;
    uVar5 = 3;
    goto LAB_0161d33c;
  }
  uStack_88 = 0;
  local_90 = 0;
  local_80[1] = 0;
  local_80[0] = 0;
  switch(uVar3 & 0xff) {
  case 0:
    goto switchD_0161d0fc_caseD_0;
  case 1:
  case 2:
    uVar12 = 0xed;
    uVar11 = 5;
    break;
  case 3:
    uVar12 = 0xf0;
    uVar11 = 6;
    break;
  case 4:
    uVar12 = 0xf3;
    goto LAB_0161d104;
  case 5:
    uVar12 = 0xf8;
    goto LAB_0161d218;
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar12 = 0xf9;
    goto LAB_0161d104;
  case 0xb:
    uVar12 = 0xe6;
LAB_0161d104:
    uVar11 = 7;
    break;
  case 0xc:
    uVar12 = 0xe8;
LAB_0161d218:
    uVar11 = 8;
    break;
  case 0xd:
    uVar12 = 0xea;
    uVar11 = 9;
    break;
  default:
    uVar12 = 0x11;
    uVar11 = 9;
  }
  local_90 = Arm64OperandGenerator::UseRegisterOrImmediateZero
                       ((Arm64OperandGenerator *)&local_48,pNVar9);
  uVar5 = GetVirtualRegister(local_48,pNVar1);
  uVar5 = (uVar5 & 0xffffffff) << 3 | 0x5800000001;
  MarkAsUsed(local_48,pNVar1);
  lVar7 = *(long *)pNVar2;
  uStack_88 = uVar5;
  if (*(ushort *)(lVar7 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar7 + 0x10) == 0x17) {
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
    }
    else {
      lVar7 = *(long *)(lVar7 + 0x30);
    }
    uVar5 = Arm64OperandGenerator::CanBeImmediate((Arm64OperandGenerator *)&local_48,lVar7,uVar11);
    if ((uVar5 & 1) == 0) goto LAB_0161d2cc;
    pIVar10 = *(InstructionSequence **)(local_48 + 0x10);
    local_70 = OperandGenerator::ToConstant(pNVar2);
    uVar6 = InstructionSequence::AddImmediate(pIVar10,(Constant *)local_70);
    uVar8 = 0x200;
LAB_0161d328:
    uVar5 = 3;
    local_80[0] = uVar6;
  }
  else {
LAB_0161d2cc:
    uVar5 = FUN_0161cbac(&local_48,this,uVar3,param_1,pNVar2,local_80,local_80 + 1);
    if ((uVar5 & 1) == 0) {
      uVar5 = GetVirtualRegister(local_48,pNVar2);
      uVar6 = (uVar5 & 0xffffffff) << 3 | 0x5800000001;
      MarkAsUsed(local_48,pNVar2);
      uVar8 = 0x400;
      goto LAB_0161d328;
    }
    uVar8 = 0x600;
    uVar5 = 4;
  }
  uVar8 = uVar8 | uVar12;
LAB_0161d33c:
  Emit(this,uVar8,0,(InstructionOperand *)0x0,uVar5,(InstructionOperand *)&local_90,0,
       (InstructionOperand *)0x0);
  return;
}

