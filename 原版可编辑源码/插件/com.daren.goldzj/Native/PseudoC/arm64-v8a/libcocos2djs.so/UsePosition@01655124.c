
/* v8::internal::compiler::UsePosition::UsePosition(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::InstructionOperand*, void*, v8::internal::compiler::UsePositionHintType)
    */

void __thiscall
v8::internal::compiler::UsePosition::UsePosition
          (UsePosition *this,undefined4 param_2,ulong *param_3,undefined8 param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  
  *(ulong **)this = param_3;
  *(undefined8 *)(this + 8) = param_4;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined4 *)(this + 0x18) = param_2;
  *(undefined4 *)(this + 0x1c) = 0;
  if ((param_3 == (ulong *)0x0) || ((*param_3 & 7) != 1)) {
    uVar1 = 0;
LAB_01655178:
    uVar1 = uVar1 | (param_5 & 0xff) << 2;
LAB_01655180:
    uVar3 = 0x20;
  }
  else {
    uVar2 = *param_3 & 0x7800000000;
    if (uVar2 == 0x2800000000) {
      uVar1 = 1;
    }
    else {
      if (uVar2 != 0x6800000000) {
        if (uVar2 == 0x5800000000) {
          uVar1 = 2;
          goto LAB_01655178;
        }
        uVar1 = (param_5 & 0xff) << 2;
        if (uVar2 == 0x1800000000) {
          uVar3 = 0;
          goto LAB_01655184;
        }
        goto LAB_01655180;
      }
      uVar1 = 3;
    }
    uVar3 = 0;
    uVar1 = uVar1 | (param_5 & 0xff) << 2;
  }
LAB_01655184:
  *(uint *)(this + 0x1c) = uVar1 | uVar3 | 0x800;
  return;
}

