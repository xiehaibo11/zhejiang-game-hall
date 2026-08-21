
/* v8::internal::wasm::AsmJsParser::FindContinueLabelDepth(int) */

int __thiscall
v8::internal::wasm::AsmJsParser::FindContinueLabelDepth(AsmJsParser *this,int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  
  if (*(int **)(this + 0x218) != *(int **)(this + 0x210)) {
    iVar1 = 0;
    piVar3 = *(int **)(this + 0x218);
    do {
      piVar2 = piVar3 + -2;
      if ((*piVar2 == 1) && ((param_1 == 0 || (piVar3[-1] == param_1)))) {
        return iVar1;
      }
      iVar1 = iVar1 + 1;
      piVar3 = piVar2;
    } while (*(int **)(this + 0x210) != piVar2);
  }
  return -1;
}

