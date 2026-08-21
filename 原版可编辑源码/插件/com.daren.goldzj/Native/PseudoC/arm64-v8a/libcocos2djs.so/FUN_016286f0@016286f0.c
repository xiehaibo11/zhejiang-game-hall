
void FUN_016286f0(byte *param_1,Node *param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  Node *pNVar5;
  long lVar6;
  Node *local_70;
  Node *local_68;
  long local_48;
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  *param_1 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *(undefined8 *)(param_1 + 8) = param_3;
  v8::internal::compiler::
  BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
  ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                  *)&local_70,param_2);
  if ((((*(short *)(*(long *)local_68 + 0x10) == 0x1aa) && (local_40 != '\0')) && (local_48 == 0x20)
      ) && (uVar4 = v8::internal::compiler::InstructionSelector::CanCover
                              (*(InstructionSelector **)(param_1 + 8),local_70,local_68),
           (uVar4 & 1) != 0)) {
    pNVar5 = local_68 + 0x20;
    if ((~*(uint *)(local_68 + 0x14) & 0xf000000) == 0) {
      pNVar5 = (Node *)(*(long *)pNVar5 + 0x10);
    }
    lVar6 = *(long *)pNVar5;
    plVar1 = *(long **)(pNVar5 + 8);
    param_1[0x20] = 0xf1;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    *(long *)(param_1 + 0x10) = lVar6;
    lVar6 = *plVar1;
    if (*(ushort *)(lVar6 + 0x10) - 0x17 < 2) {
      if (*(ushort *)(lVar6 + 0x10) == 0x17) {
        lVar6 = (long)*(int *)(lVar6 + 0x2c);
      }
      else {
        lVar6 = *(long *)(lVar6 + 0x30);
      }
      lVar6 = lVar6 + 4;
      *(long *)(param_1 + 0x18) = lVar6;
      uVar4 = v8::internal::Assembler::IsImmLSScaled(lVar6,2);
      if ((uVar4 & 1) == 0) {
        bVar3 = v8::internal::Assembler::IsImmLSUnscaled(lVar6);
        bVar3 = bVar3 & 1;
      }
      else {
        bVar3 = 1;
      }
      *param_1 = bVar3;
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

