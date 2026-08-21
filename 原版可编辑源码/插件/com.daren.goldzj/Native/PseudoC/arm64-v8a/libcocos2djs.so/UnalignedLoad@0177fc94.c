
/* v8::internal::compiler::MachineOperatorBuilder::UnalignedLoad(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::UnalignedLoad
          (MachineOperatorBuilder *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  switch(param_2 & 0xff) {
  case 2:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3f90;
    }
    else {
      if (uVar1 != 2) goto switchD_0177fcc0_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3ed0;
    }
    break;
  case 3:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4110;
    }
    else {
      if (uVar1 != 2) goto switchD_0177fcc0_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4050;
    }
    break;
  case 4:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4290;
    }
    else {
      if (uVar1 != 2) goto switchD_0177fcc0_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x41d0;
    }
    break;
  case 5:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x44d0;
    }
    else if (uVar1 == 5) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4410;
    }
    else {
      if (uVar1 != 4) goto switchD_0177fcc0_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4350;
    }
    break;
  case 6:
    if ((param_2 >> 8 & 0xff) != 2) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4590;
    break;
  case 7:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 18000;
    break;
  case 8:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4710;
    break;
  case 9:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x47d0;
    break;
  case 10:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4890;
    break;
  case 0xb:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3c90;
    break;
  case 0xc:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3d50;
    break;
  case 0xd:
    if ((param_2 >> 8 & 0xff) != 0) goto switchD_0177fcc0_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3e10;
    break;
  default:
switchD_0177fcc0_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar2 + lVar3;
}

