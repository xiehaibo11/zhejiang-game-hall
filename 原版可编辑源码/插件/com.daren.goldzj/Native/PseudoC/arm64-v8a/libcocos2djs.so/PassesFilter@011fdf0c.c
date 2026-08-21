
/* v8::internal::PassesFilter(v8::internal::Vector<char const>, v8::internal::Vector<char const>) */

ulong v8::internal::PassesFilter(char *param_1,ulong param_2,char *param_3,long param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  long lVar4;
  char cVar5;
  char cVar6;
  bool bVar7;
  ulong uVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  char *pcVar12;
  
  if (param_4 == 0) {
    return (ulong)(param_2 == 0);
  }
  cVar5 = *param_3;
  bVar7 = cVar5 == '-';
  pcVar11 = param_3 + 1;
  if (!bVar7) {
    pcVar11 = param_3;
  }
  pcVar3 = param_3 + param_4;
  uVar8 = (ulong)bVar7;
  if (pcVar11 == pcVar3) {
    return (ulong)(param_2 != 0);
  }
  cVar6 = param_3[uVar8];
  if (cVar6 == '*') {
    return (ulong)!bVar7;
  }
  if (cVar6 != '~') {
    lVar4 = param_4 + -1;
    if (cVar5 != '-') {
      lVar4 = param_4;
    }
    if (lVar4 - (ulong)(param_3[param_4 + -1] == '*') <= param_2) {
      uVar10 = (uint)!bVar7;
      pcVar12 = param_1;
      if (cVar6 == *param_1) {
        pcVar9 = param_1 + ((long)pcVar3 - (long)pcVar11);
        do {
          if (param_3 + param_4 + -1 == pcVar11) goto LAB_011fe018;
          pcVar1 = pcVar11 + 1;
          pcVar2 = pcVar12 + 1;
          pcVar11 = pcVar11 + 1;
          pcVar12 = pcVar12 + 1;
        } while (*pcVar1 == *pcVar2);
      }
      pcVar9 = pcVar12;
      if (pcVar3 != pcVar11) {
        if (*pcVar11 != '*') {
          uVar10 = (uint)(cVar5 == '-');
        }
        return (ulong)uVar10;
      }
LAB_011fe018:
      if (param_1 + param_2 != pcVar9) {
        uVar10 = (uint)(cVar5 == '-');
      }
      uVar8 = (ulong)uVar10;
    }
  }
  return uVar8;
}

