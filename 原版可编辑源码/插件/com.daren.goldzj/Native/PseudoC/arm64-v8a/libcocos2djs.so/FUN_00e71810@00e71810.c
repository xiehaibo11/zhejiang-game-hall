
void FUN_00e71810(long *param_1)

{
  ulong uVar1;
  long *plVar2;
  void *__dest;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  void *__src;
  long lVar8;
  byte bVar9;
  int local_24;
  
  __src = (void *)*param_1;
  if (__src != (void *)0x0) {
    lVar8 = param_1[7];
    __dest = (void *)FUN_00e1388c(lVar8,param_1[1],&local_24);
    *param_1 = (long)__dest;
    if (local_24 == 0) {
      memcpy(__dest,__src,param_1[1]);
      if (0 < (int)param_1[4]) {
        plVar6 = (long *)param_1[5];
        plVar2 = plVar6 + (int)param_1[4];
        plVar4 = plVar2;
        if (plVar2 <= plVar6 + 1) {
          plVar4 = plVar6 + 1;
        }
        uVar1 = ((long)plVar4 + ~(ulong)plVar6 >> 3) + 1;
        lVar3 = *param_1 - (long)__src;
        plVar4 = plVar6;
        if (3 < uVar1) {
          uVar5 = uVar1 & 0x3ffffffffffffffc;
          plVar4 = plVar6 + uVar5;
          plVar6 = plVar6 + 2;
          uVar7 = uVar5;
          do {
            while( true ) {
              if ((bool)(~(plVar6[-2] == 0) & 1)) {
                plVar6[-2] = plVar6[-2] + lVar3;
              }
              if ((bool)(~(plVar6[-1] == 0) & 1)) {
                plVar6[-1] = plVar6[-1] + lVar3;
              }
              bVar9 = ~(plVar6[1] == 0);
              if ((bool)(~(*plVar6 == 0) & 1)) break;
              if ((bool)(bVar9 & 1)) goto LAB_00e71934;
LAB_00e71910:
              uVar7 = uVar7 - 4;
              plVar6 = plVar6 + 4;
              if (uVar7 == 0) goto LAB_00e7194c;
            }
            *plVar6 = *plVar6 + lVar3;
            if (bVar9 == 0) goto LAB_00e71910;
LAB_00e71934:
            plVar6[1] = plVar6[1] + lVar3;
            uVar7 = uVar7 - 4;
            plVar6 = plVar6 + 4;
          } while (uVar7 != 0);
LAB_00e7194c:
          if (uVar1 == uVar5) goto LAB_00e71970;
        }
        do {
          if (*plVar4 != 0) {
            *plVar4 = *plVar4 + lVar3;
          }
          plVar4 = plVar4 + 1;
        } while (plVar4 < plVar2);
      }
LAB_00e71970:
      param_1[2] = param_1[1];
      FUN_00e139fc(lVar8,__src);
      return;
    }
  }
  return;
}

