
/* v8::internal::compiler::MachineOperatorBuilder::Word64AtomicAdd(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word64AtomicAdd
          (MachineOperatorBuilder *this,uint param_2)

{
  long lVar1;
  long lVar2;
  
  switch(param_2 & 0xff) {
  case 2:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6cc0;
LAB_01782bf4:
      return lVar1 + lVar2;
    }
    break;
  case 3:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6de0;
      goto LAB_01782bf4;
    }
    break;
  case 4:
    if ((param_2 >> 8 & 0xff) == 3) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x6f00;
      goto LAB_01782bf4;
    }
    break;
  case 5:
    if ((param_2 >> 8 & 0xff) == 5) {
      lVar1 = *(long *)(this + 8);
      lVar2 = 0x7020;
      goto LAB_01782bf4;
    }
  }
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
}

