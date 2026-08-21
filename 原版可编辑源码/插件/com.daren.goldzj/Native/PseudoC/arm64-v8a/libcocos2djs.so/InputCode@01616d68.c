
/* v8::internal::compiler::InstructionOperandConverter::InputCode(unsigned long) */

void __thiscall
v8::internal::compiler::InstructionOperandConverter::InputCode
          (InstructionOperandConverter *this,ulong param_1)

{
  long *plVar1;
  ulong uVar2;
  long *plVar3;
  int iVar4;
  long *plVar5;
  long local_20;
  long lStack_18;
  
  uVar2 = *(ulong *)(*(long *)(this + 8) + (*(byte *)(*(long *)(this + 8) + 4) + param_1) * 8 + 0x28
                    );
  if ((uVar2 & 7) == 3) {
    if (((uint)uVar2 >> 3 & 1) == 0) {
      Constant::Constant((Constant *)&local_20,(int)(uVar2 >> 0x20));
    }
    else {
      plVar1 = (long *)(*(long *)(*(long *)(*(long *)this + 0x28) + 0x60) +
                       ((long)uVar2 >> 0x20) * 0x10);
      lStack_18 = plVar1[1];
      local_20 = *plVar1;
    }
    goto LAB_01616e08;
  }
  plVar1 = (long *)(*(long *)(*(long *)this + 0x28) + 0x48);
  plVar5 = (long *)*plVar1;
  if (plVar5 == (long *)0x0) {
LAB_01616de8:
    plVar3 = plVar1;
  }
  else {
    plVar3 = plVar1;
    do {
      iVar4 = (int)(uVar2 >> 3);
      if (iVar4 <= (int)plVar5[4]) {
        plVar3 = plVar5;
      }
      plVar5 = (long *)plVar5[(int)plVar5[4] < iVar4];
    } while (plVar5 != (long *)0x0);
    if ((plVar3 == plVar1) || (iVar4 < (int)plVar3[4])) goto LAB_01616de8;
  }
  local_20 = plVar3[5];
  lStack_18 = plVar3[6];
LAB_01616e08:
  Constant::ToCode((Constant *)&local_20);
  return;
}

