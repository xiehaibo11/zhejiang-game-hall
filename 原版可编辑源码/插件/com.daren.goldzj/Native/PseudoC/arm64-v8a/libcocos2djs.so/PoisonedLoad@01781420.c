
/* v8::internal::compiler::MachineOperatorBuilder::PoisonedLoad(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::PoisonedLoad
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
      lVar3 = 0x3f60;
    }
    else {
      if (uVar1 != 2) goto switchD_0178144c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x3ea0;
    }
    break;
  case 3:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x40e0;
    }
    else {
      if (uVar1 != 2) goto switchD_0178144c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4020;
    }
    break;
  case 4:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 3) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4260;
    }
    else {
      if (uVar1 != 2) goto switchD_0178144c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x41a0;
    }
    break;
  case 5:
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 0) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x44a0;
    }
    else if (uVar1 == 5) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x43e0;
    }
    else {
      if (uVar1 != 4) goto switchD_0178144c_default;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x4320;
    }
    break;
  case 6:
    if ((param_2 >> 8 & 0xff) != 2) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4560;
    break;
  case 7:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4620;
    break;
  case 8:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x46e0;
    break;
  case 9:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x47a0;
    break;
  case 10:
    if ((param_2 >> 8 & 0xff) != 7) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x4860;
    break;
  case 0xb:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3c60;
    break;
  case 0xc:
    if ((param_2 >> 8 & 0xff) != 6) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3d20;
    break;
  case 0xd:
    if ((param_2 >> 8 & 0xff) != 0) goto switchD_0178144c_default;
    lVar2 = *(long *)(this + 8);
    lVar3 = 0x3de0;
    break;
  default:
switchD_0178144c_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar2 + lVar3;
}

