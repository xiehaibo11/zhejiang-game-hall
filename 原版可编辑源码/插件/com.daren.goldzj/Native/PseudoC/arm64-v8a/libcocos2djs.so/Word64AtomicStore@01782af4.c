
/* v8::internal::compiler::MachineOperatorBuilder::Word64AtomicStore(v8::internal::MachineRepresentation)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word64AtomicStore
          (MachineOperatorBuilder *this,undefined1 param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2) {
  case 2:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x6540;
    break;
  case 3:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x6570;
    break;
  case 4:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x65a0;
    break;
  case 5:
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x65d0;
    break;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  }
  return lVar1 + lVar2;
}

