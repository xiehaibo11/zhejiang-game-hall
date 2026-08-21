
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicOr(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicOr
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
      lVar3 = 0x6c30;
    }
    else {
      if (uVar1 != 3) goto LAB_01782988;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x68d0;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6b10;
    }
    else {
      if (uVar1 != 3) goto LAB_01782988;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x67b0;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_01782988:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x69f0;
    }
    else {
      if (uVar1 != 3) goto LAB_01782988;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6690;
    }
  }
  return lVar2 + lVar3;
}

