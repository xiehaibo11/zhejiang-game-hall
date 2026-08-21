
undefined8
FUN_0161cbac(long *param_1,InstructionSelector *param_2,char param_3,Node *param_4,Node *param_5,
            ulong *param_6,undefined8 *param_7)

{
  uint uVar1;
  Node *pNVar2;
  uint uVar3;
  ulong uVar4;
  undefined8 uVar5;
  Node *pNVar6;
  long lVar7;
  InstructionSequence *this;
  Constant local_50 [16];
  
  uVar4 = v8::internal::compiler::InstructionSelector::CanCover(param_2,param_4,param_5);
  if ((uVar4 & 1) != 0) {
    uVar1 = *(uint *)(param_5 + 0x14) & 0xf000000;
    if (uVar1 == 0xf000000) {
      uVar3 = *(uint *)(*(long *)(param_5 + 0x20) + 8);
    }
    else {
      uVar3 = *(uint *)(param_5 + 0x14) >> 0x18 & 0xf;
    }
    if (uVar3 == 2) {
      pNVar6 = param_5 + 0x20;
      if (uVar1 == 0xf000000) {
        pNVar6 = (Node *)(*(long *)pNVar6 + 0x10);
      }
      pNVar2 = *(Node **)pNVar6;
      pNVar6 = *(Node **)(pNVar6 + 8);
      if ((*(short *)(*(long *)param_5 + 0x10) == 0x13e) ||
         (*(short *)(*(long *)param_5 + 0x10) == 299)) {
        lVar7 = *(long *)pNVar6;
        if (*(ushort *)(lVar7 + 0x10) - 0x17 < 2) {
          if (*(ushort *)(lVar7 + 0x10) == 0x17) {
            lVar7 = (long)*(int *)(lVar7 + 0x2c);
          }
          else {
            lVar7 = *(long *)(lVar7 + 0x30);
          }
          if (0xc < (byte)(param_3 - 1U)) {
                    /* WARNING: Subroutine does not return */
            V8_Fatal("unreachable code");
          }
          if (lVar7 == *(long *)(&DAT_01a56a38 + (long)(char)(param_3 - 1U) * 8)) {
            uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                              ((InstructionSelector *)*param_1,pNVar2);
            v8::internal::compiler::InstructionSelector::MarkAsUsed
                      ((InstructionSelector *)*param_1,pNVar2);
            *param_6 = (uVar4 & 0xffffffff) << 3 | 0x5800000001;
            this = *(InstructionSequence **)(*param_1 + 0x10);
            local_50 = (Constant  [16])v8::internal::compiler::OperandGenerator::ToConstant(pNVar6);
            uVar5 = v8::internal::compiler::InstructionSequence::AddImmediate(this,local_50);
            *param_7 = uVar5;
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

