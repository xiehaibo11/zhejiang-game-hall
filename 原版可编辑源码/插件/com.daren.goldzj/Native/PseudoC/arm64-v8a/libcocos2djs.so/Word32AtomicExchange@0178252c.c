
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicExchange(v8::internal::MachineType)
    */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicExchange
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
      lVar3 = 0x6c90;
    }
    else {
      if (uVar1 != 3) goto LAB_017825dc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6930;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6b70;
    }
    else {
      if (uVar1 != 3) goto LAB_017825dc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6810;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_017825dc:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6a50;
    }
    else {
      if (uVar1 != 3) goto LAB_017825dc;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x66f0;
    }
  }
  return lVar2 + lVar3;
}

