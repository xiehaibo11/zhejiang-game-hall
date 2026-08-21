
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicAnd(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicAnd
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
      lVar3 = 0x6c00;
    }
    else {
      if (uVar1 != 3) goto LAB_017828cc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x68a0;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6ae0;
    }
    else {
      if (uVar1 != 3) goto LAB_017828cc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6780;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_017828cc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x69c0;
    }
    else {
      if (uVar1 != 3) goto LAB_017828cc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6660;
    }
  }
  return lVar2 + lVar3;
}

