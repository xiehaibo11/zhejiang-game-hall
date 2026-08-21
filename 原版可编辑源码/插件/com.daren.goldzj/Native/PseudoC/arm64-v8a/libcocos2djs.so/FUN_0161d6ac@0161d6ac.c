
void FUN_0161d6ac(InstructionSelector *param_1,Node *param_2,undefined8 *param_3,undefined4 param_4,
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
  int local_78;
  char local_74;
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
       BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
       ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                       *)local_98,(Node *)param_3[1]), local_74 != '\0' && (local_78 == -1)))) {
    uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
    v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
    pNVar6 = (Node *)param_3[3];
  }
  else {
    sVar1 = *(short *)(*(long *)param_3[3] + 0x10);
    if (((sVar1 != 0x12a) && (sVar1 != 0x13d)) ||
       ((((param_6 & 1) == 0 ||
         (v8::internal::compiler::
          BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
          ::BinopMatcher((BinopMatcher<v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>,v8::internal::compiler::IntMatcher<int,(v8::internal::compiler::IrOpcode::Value)23>>
                          *)local_98,(Node *)param_3[3]), local_74 == '\0')) || (local_78 != -1))))
    {
      if (*(short *)(*(long *)*param_3 + 0x10) == 0x13d) {
        if ((*(char *)((long)param_3 + 0x24) == '\0') || (*(int *)(param_3 + 4) != -1))
        goto LAB_0161d84c;
        uVar3 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,param_2);
        v8::internal::compiler::InstructionSelector::MarkAsDefined(param_1,param_2);
        pNVar6 = (Node *)param_3[1];
        uVar4 = v8::internal::compiler::InstructionSelector::GetVirtualRegister(param_1,pNVar6);
        v8::internal::compiler::InstructionSelector::MarkAsUsed(param_1,pNVar6);
        uVar7 = 0x8a;
      }
      else {
        if (((*(short *)(*(long *)*param_3 + 0x10) != 0x12a) ||
            (*(char *)((long)param_3 + 0x24) == '\0')) || (*(int *)(param_3 + 4) != -1)) {
LAB_0161d84c:
          local_98[0] = 0;
          local_88 = 0;
          local_80 = 0xffffffff;
          FUN_01622dd0(param_1,param_2,param_4,3,local_98);
          goto LAB_0161d9bc;
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
      goto LAB_0161d9bc;
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
LAB_0161d9bc:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

