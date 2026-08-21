
void FUN_0161dcf8(InstructionSelector *param_1,Node *param_2,undefined8 *param_3,undefined4 param_4,
                 ulong param_5,ulong param_6)

{
  short sVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  Node *pNVar6;
  undefined8 uVar7;
  undefined4 local_98 [2];
  Node *local_90;
  undefined8 local_88;
  undefined4 local_80;
  long local_70;
  char local_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar7 = 0x65;
  switch(param_4) {
  case 0x62:
    uVar7 = 100;
    break;
  case 99:
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0x6e:
    uVar7 = 0x70;
    break;
  case 0x6f:
    uVar7 = 0x71;
    break;
  case 0x72:
    uVar7 = 0x74;
    break;
  case 0x73:
    uVar7 = 0x75;
  }
  sVar1 = *(short *)(*(long *)param_3[1] + 0x10);
  if ((((sVar1 == 0x12a) || (sVar1 == 0x13d)) && ((param_5 & 1) != 0)) &&
     ((v8::internal::compiler::
       BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
       ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                       *)local_98,(Node *)param_3[1]), local_68 != '\0' && (local_70 == -1)))) {
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
    pNVar6 = (Node *)param_3[4];
  }
  else {
    sVar1 = *(short *)(*(long *)param_3[4] + 0x10);
    if (((sVar1 != 0x12a) && (sVar1 != 0x13d)) ||
       ((((param_6 & 1) == 0 ||
         (v8::internal::compiler::
          BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>,v8::internal::compiler::IntMatcher<long,(v8::internal::compiler::IrOpcode::Value)24>>
                          *)local_98,(Node *)param_3[4]), local_68 == '\0')) || (local_70 != -1))))
    {
      if (*(short *)(*(long *)*param_3 + 0x10) == 0x13d) {
        if ((*(char *)(param_3 + 6) == '\0') || (param_3[5] != -1)) goto LAB_0161de98;
        uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
        v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
        pNVar6 = (Node *)param_3[1];
        uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar6);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar6);
        uVar7 = 0x8a;
      }
      else {
        if (((*(short *)(*(long *)*param_3 + 0x10) != 0x12a) || (*(char *)(param_3 + 6) == '\0')) ||
           (param_3[5] != -1)) {
LAB_0161de98:
          local_98[0] = 0;
          local_88 = 0;
          local_80 = 0xffffffff;
          FUN_01623308(param_1,param_2,param_4,4,local_98);
          goto LAB_0161e008;
        }
        uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
        v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
        pNVar6 = (Node *)param_3[1];
        uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar6);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar6);
        uVar7 = 0x8b;
      }
      v8::internal::compiler::InstructionSelector::Emit
                (param_1,uVar7,(uVar3 & 0xffffffff) << 3 | 0xd800000001,
                 (uVar4 & 0xffffffff) << 3 | 0x5800000001,0,0);
      goto LAB_0161e008;
    }
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
    pNVar6 = (Node *)param_3[1];
  }
  uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar6);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar6);
  uVar5 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,local_90);
  v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,local_90);
  v8::internal::compiler::InstructionSelector::Emit
            (param_1,uVar7,(uVar3 & 0xffffffff) << 3 | 0xd800000001,
             (uVar4 & 0xffffffff) << 3 | 0x5800000001,(uVar5 & 0xffffffff) << 3 | 0x5800000001,0,0);
LAB_0161e008:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

