
/* v8::internal::compiler::MachineOperatorBuilder::ProtectedStore(v8::internal::MachineRepresentation)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::ProtectedStore
          (MachineOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 2:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x56a0;
    break;
  case 3:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5820;
    break;
  case 4:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x59a0;
    break;
  case 5:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5b20;
    break;
  case 6:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5ca0;
    break;
  case 7:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5e20;
    break;
  case 8:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5fa0;
    break;
  case 9:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x6120;
    break;
  case 10:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x62a0;
    break;
  case 0xb:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5220;
    break;
  case 0xc:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x53a0;
    break;
  case 0xd:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x5520;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

