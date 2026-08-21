
/* v8::internal::compiler::LiveRangeBuilder::Use(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::LifetimePosition, v8::internal::compiler::InstructionOperand*, void*,
   v8::internal::compiler::UsePositionHintType,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

UsePosition * __thiscall
v8::internal::compiler::LiveRangeBuilder::Use
          (LiveRangeBuilder *this,undefined4 param_2,undefined4 param_3,ulong *param_4,
          undefined8 param_5,uint param_6,undefined4 param_7)

{
  TopLevelLiveRange *this_00;
  Zone *this_01;
  UsePosition *pUVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  
  this_00 = (TopLevelLiveRange *)LiveRangeFor(this,param_4,param_7);
  if (this_00 == (TopLevelLiveRange *)0x0) {
    return (UsePosition *)0x0;
  }
  if ((*param_4 & 7) != 1) {
    pUVar1 = (UsePosition *)0x0;
    goto LAB_0165b5b8;
  }
  this_01 = (Zone *)**(undefined8 **)this;
  pUVar1 = *(UsePosition **)(this_01 + 0x10);
  if ((ulong)(*(long *)(this_01 + 0x18) - (long)pUVar1) < 0x20) {
    pUVar1 = (UsePosition *)Zone::NewExpand(this_01,0x20);
  }
  else {
    *(UsePosition **)(this_01 + 0x10) = pUVar1 + 0x20;
  }
  *(ulong **)pUVar1 = param_4;
  *(undefined8 *)(pUVar1 + 8) = param_5;
  *(undefined8 *)(pUVar1 + 0x10) = 0;
  *(undefined4 *)(pUVar1 + 0x18) = param_3;
  *(undefined4 *)(pUVar1 + 0x1c) = 0;
  uVar2 = 0;
  if ((*param_4 & 7) == 1) {
    uVar3 = *param_4 & 0x7800000000;
    if (uVar3 == 0x2800000000) {
      uVar2 = 1;
    }
    else {
      if (uVar3 != 0x6800000000) {
        if (uVar3 == 0x5800000000) {
          uVar2 = 2;
          goto LAB_0165b55c;
        }
        uVar2 = (param_6 & 0xff) << 2;
        if (uVar3 != 0x1800000000) goto LAB_0165b564;
        uVar4 = 0;
        goto LAB_0165b594;
      }
      uVar2 = 3;
    }
    uVar4 = 0;
    uVar2 = uVar2 | (param_6 & 0xff) << 2;
  }
  else {
LAB_0165b55c:
    uVar2 = uVar2 | (param_6 & 0xff) << 2;
LAB_0165b564:
    uVar4 = 0x20;
  }
LAB_0165b594:
  *(uint *)(pUVar1 + 0x1c) = uVar2 | uVar4 | 0x800;
  TopLevelLiveRange::AddUsePosition
            (this_00,pUVar1,(bool)((byte)(*(uint *)(*(long *)this + 0x1d0) >> 2) & 1));
LAB_0165b5b8:
  TopLevelLiveRange::AddUseInterval
            (this_00,param_2,param_3,**(undefined8 **)this,
             *(uint *)(*(undefined8 **)this + 0x3a) >> 2 & 1);
  return pUVar1;
}

