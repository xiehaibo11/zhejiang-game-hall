
/* v8::internal::compiler::Int64Lowering::GetParameterCountAfterLowering(v8::internal::Signature<v8::internal::MachineRepresentation>*)
    */

ulong v8::internal::compiler::Int64Lowering::GetParameterCountAfterLowering(Signature *param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  char *pcVar5;
  long lVar6;
  ulong uVar7;
  int iVar8;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (0 < (int)uVar2) {
    uVar3 = uVar2 & 0xffffffff;
    if (uVar3 < 2) {
      lVar6 = 0;
    }
    else {
      uVar7 = uVar2 & 1;
      lVar6 = uVar3 - uVar7;
      iVar8 = 0;
      pcVar5 = (char *)(*(long *)param_1 + *(long *)(param_1 + 0x10) + 1);
      lVar4 = lVar6;
      do {
        uVar1 = (uint)uVar2;
        if (pcVar5[-1] == '\x05') {
          uVar1 = uVar1 + 1;
        }
        uVar2 = (ulong)uVar1;
        if (*pcVar5 == '\x05') {
          iVar8 = iVar8 + 1;
        }
        lVar4 = lVar4 + -2;
        pcVar5 = pcVar5 + 2;
      } while (lVar4 != 0);
      uVar2 = (ulong)(iVar8 + uVar1);
      if (uVar7 == 0) {
        return uVar2;
      }
    }
    lVar4 = uVar3 - lVar6;
    pcVar5 = (char *)(*(long *)(param_1 + 0x10) + lVar6 + *(long *)param_1);
    do {
      uVar1 = (uint)uVar2;
      if (*pcVar5 == '\x05') {
        uVar1 = uVar1 + 1;
      }
      uVar2 = (ulong)uVar1;
      lVar4 = lVar4 + -1;
      pcVar5 = pcVar5 + 1;
    } while (lVar4 != 0);
  }
  return uVar2;
}

