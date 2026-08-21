
/* WARNING: Type propagation algorithm not settling */
/* v8::internal::compiler::EmitLoad(v8::internal::compiler::InstructionSelector*,
   v8::internal::compiler::Node*, unsigned int, v8::internal::compiler::ImmediateMode,
   v8::internal::MachineRepresentation, v8::internal::compiler::Node*) */

void v8::internal::compiler::EmitLoad
               (InstructionSelector *param_1,Node *param_2,uint param_3,undefined4 param_4,
               undefined4 param_5,Node *param_6)

{
  Node *pNVar1;
  Node *pNVar2;
  long lVar3;
  InstructionSelector *this;
  ulong uVar4;
  long lVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  Node *pNVar9;
  long lVar10;
  InstructionSequence *pIVar11;
  ulong local_b8;
  ulong local_b0;
  ulong local_a8 [2];
  InstructionSelector *local_98;
  undefined1 local_90 [16];
  Node *local_80;
  undefined8 local_78;
  undefined1 local_70;
  long local_68;
  
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
  pNVar9 = param_2 + 0x20;
  if ((~*(uint *)(param_2 + 0x14) & 0xf000000) == 0) {
    pNVar9 = (Node *)(*(long *)pNVar9 + 0x10);
  }
  pNVar1 = *(Node **)pNVar9;
  pNVar2 = *(Node **)(pNVar9 + 8);
  pNVar9 = param_2;
  if (param_6 != (Node *)0x0) {
    pNVar9 = param_6;
  }
  local_a8[0] = 0;
  local_a8[1] = 0;
  local_b0 = 0;
  local_98 = param_1;
  uVar4 = InstructionSelector::GetVirtualRegister(param_1,pNVar9);
  uVar4 = (uVar4 & 0xffffffff) << 3 | 0xd800000001;
  InstructionSelector::MarkAsDefined(param_1,pNVar9);
  local_78 = 0;
  local_70 = *(short *)(*(long *)pNVar1 + 0x10) == 0x1b;
  local_b8 = uVar4;
  local_80 = pNVar1;
  if (((bool)local_70) &&
     (local_78 = *(undefined8 *)(*(long *)pNVar1 + 0x30),
     *(ushort *)(*(long *)pNVar2 + 0x10) - 0x17 < 2)) {
    uVar4 = InstructionSelector::CanAddressRelativeToRootsRegister
                      (param_1,(ExternalReference *)&local_78);
    if ((uVar4 & 1) != 0) {
      lVar10 = *(long *)pNVar2;
      if (*(short *)(lVar10 + 0x10) == 0x17) {
        lVar10 = (long)*(int *)(lVar10 + 0x2c);
      }
      else {
        lVar10 = *(long *)(lVar10 + 0x30);
      }
      lVar5 = TurboAssemblerBase::RootRegisterOffsetForExternalReference
                        ((Isolate *)**(undefined8 **)(param_1 + 0x10),(ExternalReference *)&local_78
                        );
      iVar6 = (int)(lVar5 + lVar10);
      if (lVar5 + lVar10 == (long)iVar6) {
        pIVar11 = *(InstructionSequence **)(local_98 + 0x10);
        Constant::Constant((Constant *)local_90,iVar6);
        local_b0 = InstructionSequence::AddImmediate(pIVar11,(Constant *)local_90);
        param_3 = param_3 | 0x1800;
        uVar7 = 1;
        goto LAB_0161cb68;
      }
    }
  }
  this = local_98;
  uVar4 = InstructionSelector::GetVirtualRegister(local_98,pNVar1);
  uVar4 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
  InstructionSelector::MarkAsUsed(this,pNVar1);
  lVar10 = *(long *)pNVar2;
  local_b0 = uVar4;
  if (*(ushort *)(lVar10 + 0x10) - 0x17 < 2) {
    if (*(ushort *)(lVar10 + 0x10) == 0x17) {
      lVar10 = (long)*(int *)(lVar10 + 0x2c);
    }
    else {
      lVar10 = *(long *)(lVar10 + 0x30);
    }
    uVar4 = Arm64OperandGenerator::CanBeImmediate((Arm64OperandGenerator *)&local_98,lVar10,param_4)
    ;
    if ((uVar4 & 1) == 0) goto LAB_0161caec;
    pIVar11 = *(InstructionSequence **)(local_98 + 0x10);
    local_90 = OperandGenerator::ToConstant(pNVar2);
    uVar4 = InstructionSequence::AddImmediate(pIVar11,(Constant *)local_90);
    uVar8 = 0x200;
LAB_0161cb50:
    uVar7 = 2;
    local_a8[0] = uVar4;
  }
  else {
LAB_0161caec:
    uVar4 = FUN_0161cbac(&local_98,param_1,param_5,param_2,pNVar2,local_a8,local_a8 + 1);
    if ((uVar4 & 1) == 0) {
      uVar4 = InstructionSelector::GetVirtualRegister(local_98,pNVar2);
      uVar4 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
      InstructionSelector::MarkAsUsed(local_98,pNVar2);
      uVar8 = 0x400;
      goto LAB_0161cb50;
    }
    uVar8 = 0x600;
    uVar7 = 3;
  }
  param_3 = uVar8 | param_3;
LAB_0161cb68:
  InstructionSelector::Emit
            (param_1,param_3,1,(InstructionOperand *)&local_b8,uVar7,(InstructionOperand *)&local_b0
             ,0,(InstructionOperand *)0x0);
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

