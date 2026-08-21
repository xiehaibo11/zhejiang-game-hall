
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicAdd(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicAdd
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
      lVar3 = 0x6ba0;
    }
    else {
      if (uVar1 != 3) goto LAB_01782754;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6840;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6a80;
    }
    else {
      if (uVar1 != 3) goto LAB_01782754;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6720;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_01782754:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6960;
    }
    else {
      if (uVar1 != 3) goto LAB_01782754;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6600;
    }
  }
  return lVar2 + lVar3;
}

