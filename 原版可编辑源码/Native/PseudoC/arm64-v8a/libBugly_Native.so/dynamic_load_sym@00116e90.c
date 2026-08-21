
long dynamic_load_sym(long *param_1,char *param_2)

{
  uint *puVar1;
  ulong uVar2;
  char *__s2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  char *pcVar7;
  
  puVar8 = (ulong *)param_1[5];
  do {
    if (puVar8 == (ulong *)0x0) {
      return 0;
    }
    uVar9 = *puVar8;
    uVar3 = puVar8[1];
    if (uVar9 < uVar3) {
      uVar10 = param_1[3];
      do {
        if (uVar10 < uVar9 + 0x18) break;
        lVar5 = param_1[2];
        puVar1 = (uint *)(lVar5 + uVar9);
        if (puVar1 == (uint *)0x0) break;
        if (((*(short *)((long)puVar1 + 6) != 0) &&
            (uVar2 = puVar8[3] + (ulong)*puVar1, uVar2 < puVar8[4])) && ((long)uVar2 < (long)uVar10)
           ) {
          __s2 = (char *)(lVar5 + uVar2);
          pcVar7 = __s2;
          do {
            pcVar6 = pcVar7 + 1;
            if (*pcVar7 == '\0') {
              if ((__s2 != (char *)0x0) && (iVar4 = strcmp(param_2,__s2), iVar4 == 0)) {
                return (*(long *)(puVar1 + 2) + *param_1) - param_1[4];
              }
              break;
            }
            pcVar7 = pcVar6;
          } while (pcVar6 < (char *)(lVar5 + uVar10));
        }
        uVar9 = puVar8[2] + uVar9;
      } while (uVar9 < uVar3);
    }
    puVar8 = (ulong *)puVar8[5];
  } while( true );
}

