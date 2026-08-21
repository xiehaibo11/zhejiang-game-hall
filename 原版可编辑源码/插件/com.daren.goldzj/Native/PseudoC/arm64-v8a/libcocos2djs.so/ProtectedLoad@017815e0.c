
/* v8::internal::compiler::MachineOperatorBuilder::ProtectedLoad(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::ProtectedLoad
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
      lVar3 = 0x3fc0;
    }
    else {
      if (uVar1 != 2) goto switchD_0178160c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3f00;
    }
    break;
  case 3:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4140;
    }
    else {
      if (uVar1 != 2) goto switchD_0178160c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4080;
    }
    break;
  case 4:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x42c0;
    }
    else {
      if (uVar1 != 2) goto switchD_0178160c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4200;
    }
    break;
  case 5:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4500;
    }
    else if (uVar1 == 5) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4440;
    }
    else {
      if (uVar1 != 4) goto switchD_0178160c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4380;
    }
    break;
  case 6:
    if ((param_2 >> 8 & 0xff) != 2) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x45c0;
    break;
  case 7:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4680;
    break;
  case 8:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4740;
    break;
  case 9:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4800;
    break;
  case 10:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x48c0;
    break;
  case 0xb:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3cc0;
    break;
  case 0xc:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3d80;
    break;
  case 0xd:
    if ((param_2 >> 8 & 0xff) != 0) goto switchD_0178160c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3e40;
    break;
  default:
switchD_0178160c_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar2 + lVar3;
}

