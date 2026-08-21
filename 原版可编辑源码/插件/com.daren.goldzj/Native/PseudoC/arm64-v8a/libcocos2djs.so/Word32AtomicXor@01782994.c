
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicXor(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicXor
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
      lVar3 = 0x6c60;
    }
    else {
      if (uVar1 != 3) goto LAB_01782a44;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6900;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6b40;
    }
    else {
      if (uVar1 != 3) goto LAB_01782a44;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x67e0;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_01782a44:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6a20;
    }
    else {
      if (uVar1 != 3) goto LAB_01782a44;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x66c0;
    }
  }
  return lVar2 + lVar3;
}

