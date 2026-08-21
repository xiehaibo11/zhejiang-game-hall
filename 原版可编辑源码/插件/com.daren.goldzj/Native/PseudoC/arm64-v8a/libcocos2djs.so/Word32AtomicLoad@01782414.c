
/* v8::internal::compiler::MachineOperatorBuilder::Word32AtomicLoad(v8::internal::MachineType) */

long __thiscall
v8::internal::compiler::MachineOperatorBuilder::Word32AtomicLoad
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
      lVar3 = 0x63c0;
    }
    else {
      if (uVar1 != 3) goto LAB_017824c4;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6330;
    }
  }
  else if (uVar1 == 3) {
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6390;
    }
    else {
      if (uVar1 != 3) goto LAB_017824c4;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6300;
    }
  }
  else {
    if (uVar1 != 2) {
LAB_017824c4:
                    /* WARNING: Subroutine does not return */
      V8_Fatal("unreachable code");
    }
    uVar1 = param_2 >> 8 & 0xff;
    if (uVar1 == 2) {
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x6360;
    }
    else {
      if (uVar1 != 3) goto LAB_017824c4;
      lVar2 = *(long *)(this + 8);
      lVar3 = 0x62d0;
    }
  }
  return lVar2 + lVar3;
}

