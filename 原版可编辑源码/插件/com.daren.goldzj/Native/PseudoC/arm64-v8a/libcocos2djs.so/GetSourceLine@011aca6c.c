
/* v8::internal::CodeEntry::GetSourceLine(int) const */

int __thiscall v8::internal::CodeEntry::GetSourceLine(CodeEntry *this,int param_1)

{
  int *piVar1;
  long lVar2;
  int *piVar3;
  long *plVar4;
  int *piVar5;
  ulong uVar6;
  ulong uVar7;
  
  plVar4 = *(long **)(this + 0x28);
  if (plVar4 != (long *)0x0) {
    piVar1 = (int *)*plVar4;
    if (piVar1 != (int *)plVar4[1]) {
      lVar2 = plVar4[1] - (long)piVar1;
      piVar3 = piVar1;
      if (lVar2 != 0) {
        uVar6 = (lVar2 >> 2) * -0x5555555555555555;
        piVar5 = piVar1;
        do {
          uVar7 = uVar6 >> 1;
          piVar3 = piVar5 + uVar7 * 3 + 3;
          uVar6 = uVar6 + ~uVar7;
          if (param_1 <= piVar5[uVar7 * 3]) {
            piVar3 = piVar5;
            uVar6 = uVar7;
          }
          piVar5 = piVar3;
        } while (uVar6 != 0);
        if (piVar3 != piVar1) {
          piVar3 = piVar3 + -3;
        }
      }
      return piVar3[1];
    }
  }
  return 0;
}

