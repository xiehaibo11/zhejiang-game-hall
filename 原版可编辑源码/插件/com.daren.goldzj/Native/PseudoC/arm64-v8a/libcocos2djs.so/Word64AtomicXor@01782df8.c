
/* v8::internal::compiler::MachineOperatorBuilder::Word64AtomicXor(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word64AtomicXor
          (MachineOperatorBuilder *this,uint param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2 & 0xff) {
  case 2:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6d80;
LAB_01782e84:
      return lVar1 + lVar2;
    }
    break;
  case 3:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6ea0;
      goto LAB_01782e84;
    }
    break;
  case 4:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6fc0;
      goto LAB_01782e84;
    }
    break;
  case 5:
    if ((param_2 >> 8 & 0xff) == 5) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x70e0;
      goto LAB_01782e84;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

