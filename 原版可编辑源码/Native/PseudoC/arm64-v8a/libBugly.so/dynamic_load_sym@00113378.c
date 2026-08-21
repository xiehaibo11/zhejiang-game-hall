
long dynamic_load_sym(long *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  char *__s2;
  char cVar3;
  uint *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  ulong uVar10;
  
  puVar8 = (ulong *)param_1[5];
  do {
    if (puVar8 == (ulong *)0x0) {
      return 0;
    }
    uVar6 = *puVar8;
    uVar10 = puVar8[1];
    if (uVar6 < uVar10) {
      uVar9 = param_1[3];
      lVar7 = param_1[2];
      if (uVar6 + 0x18 <= uVar9) {
        while (puVar4 = (uint *)(lVar7 + uVar6), puVar4 != (uint *)0x0) {
          if (((*(short *)((long)puVar4 + 6) != 0) &&
              (uVar2 = (ulong)*puVar4 + puVar8[3], uVar2 < puVar8[4])) &&
             (__s2 = (char *)(lVar7 + uVar2), __s2 < (char *)(lVar7 + uVar9))) {
            cVar3 = *(char *)(lVar7 + uVar2);
            pcVar1 = __s2;
            while (cVar3 != '\0') {
              pcVar1 = pcVar1 + 1;
              if (pcVar1 == (char *)(lVar7 + uVar9)) goto LAB_00113424;
              cVar3 = *pcVar1;
            }
            iVar5 = strcmp(param_2,__s2);
            if (iVar5 == 0) {
              return (*(long *)(puVar4 + 2) + *param_1) - param_1[4];
            }
          }
LAB_00113424:
          uVar6 = uVar6 + puVar8[2];
          if ((uVar10 <= uVar6) || (uVar9 < uVar6 + 0x18)) break;
        }
      }
    }
    puVar8 = (ulong *)puVar8[5];
  } while( true );
}

