
/* v8::internal::SourcePositionTable::GetSourceLineNumber(int) const */

int __thiscall
v8::internal::SourcePositionTable::GetSourceLineNumber(SourcePositionTable *this,int param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  int *piVar4;
  ulong uVar5;
  ulong uVar6;
  
  piVar1 = *(int **)this;
  if (piVar1 != *(int **)(this + 8)) {
    lVar2 = (long)*(int **)(this + 8) - (long)piVar1;
    piVar3 = piVar1;
    if (lVar2 != 0) {
      uVar5 = (lVar2 >> 2) * -0x5555555555555555;
      piVar4 = piVar1;
      do {
        uVar6 = uVar5 >> 1;
        piVar3 = piVar4 + uVar6 * 3 + 3;
        uVar5 = uVar5 + ~uVar6;
        if (param_1 <= piVar4[uVar6 * 3]) {
          piVar3 = piVar4;
          uVar5 = uVar6;
        }
        piVar4 = piVar3;
      } while (uVar5 != 0);
      if (piVar3 != piVar1) {
        piVar3 = piVar3 + -3;
      }
    }
    return piVar3[1];
  }
  return 0;
}

