
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicStore(v8::internal::MachineRepresentation)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicStore
          (MachineOperatorBuilder *this,char param_2)

{
  long lVar1;
  long lVar2;
  
  if (param_2 == '\x04') {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x6510;
  }
  else if (param_2 == '\x03') {
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x64e0;
  }
  else {
    if (param_2 != '\x02') {
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    lVar1 = *(long *)(this + 8);
    lVar2 = 0x64b0;
  }
  return lVar1 + lVar2;
}

