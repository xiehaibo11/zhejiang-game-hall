
/* v8::internal::compiler::MachineOperatorBuilder::Store(v8::internal::compiler::StoreRepresentation)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Store(MachineOperatorBuilder *this,uint param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2 & 0xff) {
  case 2:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5550;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5580;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x55b0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x55e0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5610;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5640;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 3:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x56d0;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5700;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5730;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5760;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5790;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x57c0;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 4:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5850;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5880;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x58b0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x58e0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5910;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5940;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 5:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x59d0;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5a00;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5a30;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5a60;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5a90;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5ac0;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 6:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5b50;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5b80;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5bb0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5be0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5c10;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5c40;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 7:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5cd0;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5d00;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5d30;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5d60;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5d90;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 24000;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 8:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5e50;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5e80;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5eb0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5ee0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5f10;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5f40;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 9:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5fd0;
      break;
    case 1:
      return *(long *)(this + 8) + 0x6000;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6030;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6060;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6090;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x60c0;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 10:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6150;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6180;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x61b0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x61e0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6210;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6240;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 0xb:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x50d0;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5100;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5130;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5160;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5190;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x51c0;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 0xc:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5250;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5280;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x52b0;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x52e0;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5310;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5340;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  case 0xd:
    switch(param_2 >> 8 & 0xff) {
    case 0:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x53d0;
      break;
    case 1:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5400;
      break;
    case 2:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5430;
      break;
    case 3:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5460;
      break;
    case 4:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x5490;
      break;
    case 5:
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x54c0;
      break;
    default:
      goto switchD_01781c9c_default;
    }
    break;
  default:
switchD_01781c9c_default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

