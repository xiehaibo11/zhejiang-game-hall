
/* v8::internal::compiler::MachineOperatorBuilder::Load(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Load(MachineOperatorBuilder *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  switch(param_2 & 0xff) {
  case 2:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3f30;
    }
    else {
      if (uVar1 != 2) goto switchD_0178128c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3e70;
    }
    break;
  case 3:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x40b0;
    }
    else {
      if (uVar1 != 2) goto switchD_0178128c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3ff0;
    }
    break;
  case 4:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4230;
    }
    else {
      if (uVar1 != 2) goto switchD_0178128c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4170;
    }
    break;
  case 5:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4470;
    }
    else if (uVar1 == 5) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x43b0;
    }
    else {
      if (uVar1 != 4) goto switchD_0178128c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x42f0;
    }
    break;
  case 6:
    if ((param_2 >> 8 & 0xff) != 2) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4530;
    break;
  case 7:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x45f0;
    break;
  case 8:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x46b0;
    break;
  case 9:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4770;
    break;
  case 10:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4830;
    break;
  case 0xb:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3c30;
    break;
  case 0xc:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3cf0;
    break;
  case 0xd:
    if ((param_2 >> 8 & 0xff) != 0) goto switchD_0178128c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3db0;
    break;
  default:
switchD_0178128c_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar2 + lVar3;
}

