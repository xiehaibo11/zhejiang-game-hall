
/* v8::internal::compiler::LiveRangeBuilder::Define(v8::internal::compiler::LifetimePosition,
   v8::internal::compiler::InstructionOperand*, void*, v8::internal::compiler::UsePositionHintType,
   v8::internal::compiler::RegisterAllocationData::SpillMode) */

UsePosition * __thiscall
v8::internal::compiler::LiveRangeBuilder::Define
          (LiveRangeBuilder *this,uint param_2,ulong *param_3,undefined8 param_4,uint param_5,
          undefined4 param_6)

{
  TopLevelLiveRange *this_00;
  Zone *pZVar1;
  UsePosition *pUVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  uint uVar6;
  
  this_00 = (TopLevelLiveRange *)LiveRangeFor(this,param_3,param_6);
  if (this_00 == (TopLevelLiveRange *)0x0) {
    return (UsePosition *)0x0;
  }
  puVar4 = *(uint **)(this_00 + 0x10);
  if ((puVar4 == (uint *)0x0) || ((int)param_2 < (int)*puVar4)) {
    uVar3 = param_2 + 2 & 0xfffffffe;
    TopLevelLiveRange::AddUseInterval
              (this_00,param_2,uVar3,**(undefined8 **)this,
               *(uint *)(*(undefined8 **)this + 0x3a) >> 2 & 1);
    pZVar1 = (Zone *)**(undefined8 **)this;
    pUVar2 = *(UsePosition **)(pZVar1 + 0x10);
    if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pUVar2) < 0x20) {
      pUVar2 = (UsePosition *)Zone::NewExpand(pZVar1,0x20);
    }
    else {
      *(UsePosition **)(pZVar1 + 0x10) = pUVar2 + 0x20;
    }
    *(undefined8 *)pUVar2 = 0;
    *(undefined8 *)(pUVar2 + 8) = 0;
    *(undefined8 *)(pUVar2 + 0x10) = 0;
    *(uint *)(pUVar2 + 0x18) = uVar3;
    *(undefined4 *)(pUVar2 + 0x1c) = 0x820;
    TopLevelLiveRange::AddUsePosition
              (this_00,pUVar2,(bool)((byte)(*(uint *)(*(long *)this + 0x1d0) >> 2) & 1));
  }
  else {
    if ((*(byte *)(*(long *)this + 0x1d0) >> 2 & 1) != 0) {
      PrintF("Shorten live range %d to [%d\n",(ulong)*(uint *)(this_00 + 0x5c),(ulong)param_2);
      puVar4 = *(uint **)(this_00 + 0x10);
    }
    *puVar4 = param_2;
  }
  if ((*param_3 & 7) != 1) {
    return (UsePosition *)0x0;
  }
  pZVar1 = (Zone *)**(undefined8 **)this;
  pUVar2 = *(UsePosition **)(pZVar1 + 0x10);
  if ((ulong)(*(long *)(pZVar1 + 0x18) - (long)pUVar2) < 0x20) {
    pUVar2 = (UsePosition *)Zone::NewExpand(pZVar1,0x20);
  }
  else {
    *(UsePosition **)(pZVar1 + 0x10) = pUVar2 + 0x20;
  }
  *(ulong **)pUVar2 = param_3;
  *(undefined8 *)(pUVar2 + 8) = param_4;
  *(undefined8 *)(pUVar2 + 0x10) = 0;
  *(uint *)(pUVar2 + 0x18) = param_2;
  *(undefined4 *)(pUVar2 + 0x1c) = 0;
  uVar3 = 0;
  if ((*param_3 & 7) == 1) {
    uVar5 = *param_3 & 0x7800000000;
    if (uVar5 == 0x2800000000) {
      uVar3 = 1;
    }
    else {
      if (uVar5 != 0x6800000000) {
        if (uVar5 == 0x5800000000) {
          uVar3 = 2;
          goto LAB_0165b3f0;
        }
        uVar3 = (param_5 & 0xff) << 2;
        if (uVar5 == 0x1800000000) {
          uVar6 = 0;
          goto LAB_0165b420;
        }
        goto LAB_0165b3f8;
      }
      uVar3 = 3;
    }
    uVar6 = 0;
    uVar3 = uVar3 | (param_5 & 0xff) << 2;
  }
  else {
LAB_0165b3f0:
    uVar3 = uVar3 | (param_5 & 0xff) << 2;
LAB_0165b3f8:
    uVar6 = 0x20;
  }
LAB_0165b420:
  *(uint *)(pUVar2 + 0x1c) = uVar3 | uVar6 | 0x800;
  TopLevelLiveRange::AddUsePosition
            (this_00,pUVar2,(bool)((byte)(*(uint *)(*(long *)this + 0x1d0) >> 2) & 1));
  return pUVar2;
}

