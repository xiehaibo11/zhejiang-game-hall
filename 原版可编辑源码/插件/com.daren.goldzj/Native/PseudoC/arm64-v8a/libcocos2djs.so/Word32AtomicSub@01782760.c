
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicSub(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicSub
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
      lVar3 = 0x6bd0;
    }
    else {
      if (uVar1 != 3) goto LAB_01782810;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6870;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6ab0;
    }
    else {
      if (uVar1 != 3) goto LAB_01782810;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6750;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_01782810:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6990;
    }
    else {
      if (uVar1 != 3) goto LAB_01782810;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6630;
    }
  }
  return lVar2 + lVar3;
}

