
/* v8::internal::compiler::InstructionSelector::VisitLoad(v8::internal::compiler::Node*) */

void __thiscall
v8::internal::compiler::InstructionSelector::VisitLoad(InstructionSelector *this,Node *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  uint uVar5;
  
  uVar2 = LoadRepresentationOf(*(Operator **)param_1);
  switch(uVar2 & 0xff) {
  case 0:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 1:
  case 2:
    uVar1 = (uint)uVar2 >> 8 & 0xff;
    uVar5 = 0xeb;
    if (uVar1 == 4 || uVar1 == 2) {
      uVar5 = 0xec;
    }
    uVar3 = (ulong)uVar5;
    uVar4 = 5;
    break;
  case 3:
    uVar1 = (uint)uVar2 >> 8 & 0xff;
    uVar5 = 0xee;
    if (uVar1 == 4 || uVar1 == 2) {
      uVar5 = 0xef;
    }
    uVar3 = (ulong)uVar5;
    uVar4 = 6;
    break;
  case 4:
  case 9:
  case 10:
    uVar3 = 0xf2;
    goto LAB_0161cf98;
  case 5:
    uVar3 = 0xf4;
    uVar4 = 8;
    break;
  case 6:
    uVar3 = 0xf5;
    goto LAB_0161cf98;
  case 7:
    uVar3 = 0xf6;
    goto LAB_0161cf98;
  case 8:
    uVar3 = 0xf7;
    goto LAB_0161cf98;
  case 0xb:
    uVar3 = 0xe5;
LAB_0161cf98:
    uVar4 = 7;
    break;
  case 0xc:
    uVar3 = 0xe7;
    uVar4 = 8;
    break;
  case 0xd:
    uVar3 = 0xe9;
    uVar4 = 9;
    break;
  default:
    uVar3 = 0x11;
    uVar4 = 9;
  }
  if (*(short *)(*(long *)param_1 + 0x10) == 0x1ab) {
    if (*(int *)(this + 0x16c) == 1) {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("Check failed: %s.","poisoning_level_ != PoisoningMitigationLevel::kDontPoison",uVar3
               ,uVar4);
    }
    uVar3 = (ulong)((uint)uVar3 | 0x800000);
  }
  EmitLoad(this,param_1,uVar3,uVar4,uVar2,0);
  return;
}

