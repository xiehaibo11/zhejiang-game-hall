
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicCompareExchange(v8::internal::MachineType)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicCompareExchange
          (MachineOperatorBuilder *this,uint param_2)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  
  uVar1 = param_2 & 0xff;
  if (uVar1 == 4) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x7230;
    }
    else {
      if (uVar1 != 3) goto LAB_01782698;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x71a0;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x7200;
    }
    else {
      if (uVar1 != 3) goto LAB_01782698;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x7170;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_01782698:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x71d0;
    }
    else {
      if (uVar1 != 3) goto LAB_01782698;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x7140;
    }
  }
  return lVar2 + lVar3;
}

