
undefined8
FUN_01628c84(undefined8 *param_1,InstructionSelector *param_2,Node *param_3,Node *param_4,
            Node *param_5,ulong *param_6,ulong *param_7,uint *param_8)

{
  bool bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
  aBStack_a0 [8];
  Node *local_98;
  int local_80;
  char local_7c;
  Node *local_78;
  Node *local_70;
  int local_58;
  char local_54;
  
  uVar2 = v8::internal::compiler::InstructionSelector::CanCover(param_2,param_3,param_5);
  if ((uVar2 & 1) != 0) {
    if (*(short *)(*(long *)param_5 + 0x10) == 0x12d) {
      v8::internal::compiler::
      BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
      ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                      *)&local_78,param_5);
      uVar2 = v8::internal::compiler::InstructionSelector::CanCover(param_2,local_78,local_70);
      if ((((uVar2 & 1) != 0) && (*(short *)(*(long *)local_70 + 0x10) == 299)) &&
         (v8::internal::compiler::
          BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
          ::BinopMatcher(aBStack_a0,local_70), local_54 != '\0')) {
        if (local_58 == 0x18) {
          if (local_7c == '\0') {
            return 0;
          }
          if (local_80 != 0x18) {
            return 0;
          }
        }
        else {
          if (local_58 != 0x10) {
            return 0;
          }
          if (local_7c == '\0') {
            return 0;
          }
          if (local_80 != 0x10) {
            return 0;
          }
        }
        uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                          ((InstructionSelector *)*param_1,param_4);
        v8::internal::compiler::InstructionSelector::MarkAsUsed
                  ((InstructionSelector *)*param_1,param_4);
        *param_6 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
        uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                          ((InstructionSelector *)*param_1,local_98);
        v8::internal::compiler::InstructionSelector::MarkAsUsed
                  ((InstructionSelector *)*param_1,local_98);
        *param_7 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
        uVar3 = *param_8;
        bVar1 = local_58 == 0x18;
        uVar4 = 0x1400;
        uVar5 = 0x1200;
        goto LAB_01628d84;
      }
    }
    else if (((*(short *)(*(long *)param_5 + 0x10) == 0x128) &&
             (v8::internal::compiler::
              BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
              ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                              *)&local_78,param_5), local_54 != '\0')) &&
            ((local_58 == 0xffff || (local_58 == 0xff)))) {
      uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        ((InstructionSelector *)*param_1,param_4);
      v8::internal::compiler::InstructionSelector::MarkAsUsed
                ((InstructionSelector *)*param_1,param_4);
      *param_6 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
      uVar2 = v8::internal::compiler::InstructionSelector::GetVirtualRegister
                        ((InstructionSelector *)*param_1,local_70);
      v8::internal::compiler::InstructionSelector::MarkAsUsed
                ((InstructionSelector *)*param_1,local_70);
      *param_7 = (uVar2 & 0xffffffff) << 3 | 0x5800000001;
      uVar3 = *param_8;
      bVar1 = local_58 == 0xff;
      uVar4 = 0x1000;
      uVar5 = 0xe00;
LAB_01628d84:
      if (!bVar1) {
        uVar5 = uVar4;
      }
      *param_8 = uVar3 | uVar5;
      return 1;
    }
  }
  return 0;
}

