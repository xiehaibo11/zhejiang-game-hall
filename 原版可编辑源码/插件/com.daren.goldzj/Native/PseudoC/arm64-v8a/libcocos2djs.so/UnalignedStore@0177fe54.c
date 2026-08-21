
/* v8::internal::compiler::MachineOperatorBuilder::UnalignedStore(v8::internal::MachineRepresentation)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::UnalignedStore
          (MachineOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 2:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5670;
    break;
  case 3:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x57f0;
    break;
  case 4:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5970;
    break;
  case 5:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5af0;
    break;
  case 6:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5c70;
    break;
  case 7:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5df0;
    break;
  case 8:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5f70;
    break;
  case 9:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x60f0;
    break;
  case 10:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x6270;
    break;
  case 0xb:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x51f0;
    break;
  case 0xc:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5370;
    break;
  case 0xd:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x54f0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

