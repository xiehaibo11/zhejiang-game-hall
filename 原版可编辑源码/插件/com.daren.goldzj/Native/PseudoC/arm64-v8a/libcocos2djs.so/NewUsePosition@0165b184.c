
/* v8::internal::compiler::LiveRangeBuilder::NewUsePosition(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::InstructionOperand*, void*, v8::internal::compiler::UsePositionHintType)
    */

void __thiscall
v8::internal::compiler::LiveRangeBuilder::NewUsePosition
          (LiveRangeBuilder *this,undefined4 param_2,ulong *param_3,long param_4,uint param_5)

{
  long *plVar1;
  uint uVar2;
  Zone *this_00;
  ulong uVar3;
  uint uVar4;
  
  this_00 = (Zone *)**(undefined8 **)this;
  plVar1 = *(long **)(this_00 + 0x10);
  if ((ulong)(*(long *)(this_00 + 0x18) - (long)plVar1) < 0x20) {
    plVar1 = (long *)Zone::NewExpand(this_00,0x20);
  }
  else {
    *(long **)(this_00 + 0x10) = plVar1 + 4;
  }
  *plVar1 = (long)param_3;
  plVar1[1] = param_4;
  plVar1[2] = 0;
  *(undefined4 *)(plVar1 + 3) = param_2;
  *(undefined4 *)((long)plVar1 + 0x1c) = 0;
  if ((param_3 == (ulong *)0x0) || ((*param_3 & 7) != 1)) {
    uVar2 = 0;
LAB_0165b218:
    uVar2 = uVar2 | (param_5 & 0xff) << 2;
LAB_0165b220:
    uVar4 = 0x20;
  }
  else {
    uVar3 = *param_3 & 0x7800000000;
    if (uVar3 == 0x2800000000) {
      uVar2 = 1;
    }
    else {
      if (uVar3 != 0x6800000000) {
        if (uVar3 == 0x5800000000) {
          uVar2 = 2;
          goto LAB_0165b218;
        }
        uVar2 = (param_5 & 0xff) << 2;
        if (uVar3 == 0x1800000000) {
          uVar4 = 0;
          goto LAB_0165b224;
        }
        goto LAB_0165b220;
      }
      uVar2 = 3;
    }
    uVar4 = 0;
    uVar2 = uVar2 | (param_5 & 0xff) << 2;
  }
LAB_0165b224:
  *(uint *)((long)plVar1 + 0x1c) = uVar2 | uVar4 | 0x800;
  return;
}

