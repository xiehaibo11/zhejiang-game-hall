
/* v8::internal::compiler::SimdScalarLowering::GetParameterCountAfterLowering() */

void __thiscall
v8::internal::compiler::SimdScalarLowering::GetParameterCountAfterLowering(SimdScalarLowering *this)

{
  uint uVar1;
  ulong uVar2;
  long *plVar3;
  ulong uVar4;
  char *pcVar5;
  
  if (*(int *)(this + 0x78) != -1) {
    return;
  }
  plVar3 = *(long **)(this + 0x68);
  uVar2 = plVar3[1];
  uVar1 = (uint)uVar2;
  if (0 < (int)uVar1) {
    uVar4 = uVar2 & 0xffffffff;
    pcVar5 = (char *)(plVar3[2] + *plVar3);
    do {
      uVar1 = (uint)uVar2 + 3;
      if (*pcVar5 != '\r') {
        uVar1 = (uint)uVar2;
      }
      uVar2 = (ulong)uVar1;
      uVar4 = uVar4 - 1;
      pcVar5 = pcVar5 + 1;
    } while (uVar4 != 0);
  }
  *(uint *)(this + 0x78) = uVar1;
  return;
}

