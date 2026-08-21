
/* v8::internal::compiler::InstructionSelector::VisitCall(v8::internal::compiler::Node*,
   v8::internal::compiler::BasicBlock*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitCall
          (InstructionSelector *this,Node *param_1,BasicBlock *param_2)

{
  ulong uVar1;
  CallDescriptor *pCVar2;
  Zone *pZVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  Instruction *pIVar7;
  uint uVar8;
  FrameStateDescriptor *pFVar9;
  uint uVar10;
  InstructionOperand *pIVar11;
  Node *pNVar12;
  InstructionOperand *pIVar13;
  ulong uVar14;
  InstructionOperand *pIVar15;
  undefined8 local_e0 [2];
  CallDescriptor local_d0 [32];
  InstructionOperand *local_b0;
  long local_a8;
  InstructionOperand *local_90;
  InstructionOperand *local_88;
  InstructionOperand *local_80;
  Zone *local_78;
  CallDescriptor local_70 [32];
  undefined8 local_50;
  long local_48;
  
  pCVar2 = (CallDescriptor *)CallDescriptorOf(*(Operator **)param_1);
  uVar10 = *(uint *)(pCVar2 + 0x48);
  if ((uVar10 >> 8 & 1) != 0) {
    local_e0[0] = 0;
    pZVar3 = *(Zone **)(*(long *)(this + 0x10) + 8);
    pIVar7 = *(Instruction **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pIVar7) < 0x30) {
      pIVar7 = (Instruction *)Zone::NewExpand(pZVar3,0x30);
    }
    else {
      *(Instruction **)(pZVar3 + 0x10) = pIVar7 + 0x30;
    }
    Instruction::Instruction
              (pIVar7,(uVar10 >> 9 & 1) << 0x16 | 6,0,(InstructionOperand *)local_e0,0,
               (InstructionOperand *)0x0,0,(InstructionOperand *)0x0);
    Emit(this,pIVar7);
    uVar10 = *(uint *)(pCVar2 + 0x48);
  }
  if ((uVar10 & 1) == 0) {
    pFVar9 = (FrameStateDescriptor *)0x0;
  }
  else {
    pNVar12 = param_1 + 0x20;
    if ((~*(uint *)(param_1 + 0x14) & 0xf000000) == 0) {
      pNVar12 = (Node *)(*(long *)pNVar12 + 0x10);
    }
    pFVar9 = (FrameStateDescriptor *)
             FUN_01641618(*(undefined8 *)(*(long *)(this + 0x10) + 8),
                          *(undefined8 *)
                           (pNVar12 +
                           ((*(long *)(*(long *)(pCVar2 + 0x10) + 8) << 0x20) + 0x100000000 >> 0x1d)
                           ));
    uVar14 = **(ulong **)(this + 0x1b0);
    uVar1 = *(ulong *)(pFVar9 + 0x28);
    if (*(ulong *)(pFVar9 + 0x28) <= uVar14) {
      uVar1 = uVar14;
    }
    **(ulong **)(this + 0x1b0) = uVar1;
  }
  CallBuffer::CallBuffer((CallBuffer *)local_e0,*(Zone **)this,pCVar2,pFVar9);
  uVar10 = *(uint *)(pCVar2 + 0x48);
  InitializeCallBuffer(this,param_1,local_e0,3,0,0);
  EmitPrepareArguments((ZoneVector *)this,local_70,(Node *)pCVar2);
  pIVar11 = local_90;
  if (param_2 != (BasicBlock *)0x0) {
    local_48 = (long)*(int *)(param_2 + 4);
    uVar10 = uVar10 | 2;
    local_50 = CONCAT35(local_50._5_3_,0x1300000007);
    uVar4 = InstructionSequence::AddImmediate
                      (*(InstructionSequence **)(this + 0x10),(Constant *)&local_50);
    if (local_88 < local_80) {
      *(undefined8 *)local_88 = uVar4;
      pIVar11 = local_90;
      local_88 = local_88 + 8;
    }
    else {
      lVar5 = (long)local_88 - (long)local_90 >> 3;
      uVar1 = lVar5 + 1;
      if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      uVar14 = (long)local_80 - (long)local_90 >> 2;
      if (uVar1 <= uVar14) {
        uVar1 = uVar14;
      }
      if (0x7fffffe < (ulong)((long)local_80 - (long)local_90 >> 3)) {
        uVar1 = 0xfffffff;
      }
      if (uVar1 == 0) {
        lVar6 = 0;
      }
      else {
        uVar14 = uVar1 * 8;
        lVar6 = *(long *)(local_78 + 0x10);
        if (uVar14 < (ulong)(*(long *)(local_78 + 0x18) - lVar6) ||
            uVar14 - (*(long *)(local_78 + 0x18) - lVar6) == 0) {
          *(ulong *)(local_78 + 0x10) = lVar6 + uVar14;
        }
        else {
          lVar6 = Zone::NewExpand(local_78,uVar14);
        }
      }
      pIVar11 = (InstructionOperand *)(lVar6 + lVar5 * 8);
      pIVar13 = pIVar11 + 8;
      *(undefined8 *)pIVar11 = uVar4;
      local_80 = (InstructionOperand *)(lVar6 + uVar1 * 8);
      pIVar15 = local_88;
      while (local_88 = pIVar13, pIVar15 != local_90) {
        pIVar15 = pIVar15 + -8;
        pIVar11 = pIVar11 + -8;
        *(undefined8 *)pIVar11 = *(undefined8 *)pIVar15;
      }
    }
  }
  local_90 = pIVar11;
  switch(*(undefined4 *)pCVar2) {
  case 0:
    uVar8 = uVar10 << 0x16;
    goto LAB_0163e2dc;
  case 1:
    uVar8 = 3;
    break;
  case 2:
    uVar8 = *(int *)(*(long *)(pCVar2 + 0x10) + 8) << 0x16 | 8;
    goto LAB_0163e2dc;
  case 3:
  case 4:
  case 5:
    uVar8 = 10;
    break;
  case 6:
    uVar8 = 0xc;
    break;
  default:
    uVar8 = 0x11;
    goto LAB_0163e2dc;
  }
  uVar8 = uVar8 | uVar10 << 0x16;
LAB_0163e2dc:
  pIVar11 = (InstructionOperand *)0x0;
  if (local_a8 - (long)local_b0 != 0) {
    pIVar11 = local_b0;
  }
  lVar5 = Emit(this,uVar8,local_a8 - (long)local_b0 >> 3,pIVar11,
               (long)local_88 - (long)local_90 >> 3,local_90,0,(InstructionOperand *)0x0);
  if (this[0x178] == (InstructionSelector)0x0) {
    *(uint *)(lVar5 + 4) = *(uint *)(lVar5 + 4) | 0x40000000;
    EmitPrepareResults((ZoneVector *)this,local_d0,(Node *)pCVar2);
    uVar10 = *(uint *)(pCVar2 + 0x48);
    if ((uVar10 >> 8 & 1) != 0) {
      local_50 = 0;
      pZVar3 = *(Zone **)(*(long *)(this + 0x10) + 8);
      pIVar7 = *(Instruction **)(pZVar3 + 0x10);
      if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)pIVar7) < 0x30) {
        pIVar7 = (Instruction *)Zone::NewExpand(pZVar3,0x30);
      }
      else {
        *(Instruction **)(pZVar3 + 0x10) = pIVar7 + 0x30;
      }
      Instruction::Instruction
                (pIVar7,(uVar10 >> 9 & 1) << 0x16 | 7,0,(InstructionOperand *)&local_50,0,
                 (InstructionOperand *)0x0,0,(InstructionOperand *)0x0);
      Emit(this,pIVar7);
    }
  }
  return;
}

