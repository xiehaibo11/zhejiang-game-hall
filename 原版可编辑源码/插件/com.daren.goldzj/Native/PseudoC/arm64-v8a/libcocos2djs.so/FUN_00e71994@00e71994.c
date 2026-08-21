
int FUN_00e71994(long *param_1,int param_2,void *param_3,uint param_4)

{
  ulong uVar1;
  long *plVar2;
  bool bVar3;
  void *__dest;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  ulong uVar9;
  ulong __n;
  ulong uVar10;
  void *__src;
  long lVar11;
  byte bVar12;
  int local_54;
  
  if ((param_2 < 0) || ((int)param_1[4] <= param_2)) {
    return 6;
  }
  uVar10 = param_1[2];
  __n = (ulong)param_4;
  if (param_1[1] + __n <= uVar10) goto LAB_00e71b88;
  __src = (void *)*param_1;
  uVar4 = (long)param_3 - (long)__src;
  bVar3 = uVar10 <= uVar4;
  do {
    uVar10 = uVar10 + (uVar10 >> 2) + 0x400 & 0xfffffffffffffc00;
  } while (uVar10 < param_1[1] + __n);
  lVar11 = param_1[7];
  if ((long)uVar4 < 0 || bVar3) {
    uVar4 = 0xffffffffffffffff;
  }
  __dest = (void *)FUN_00e1388c(lVar11,uVar10,&local_54);
  *param_1 = (long)__dest;
  if (local_54 != 0) {
    *param_1 = (long)__src;
    return local_54;
  }
  if (__src != (void *)0x0) {
    memcpy(__dest,__src,param_1[2]);
    if (0 < (int)param_1[4]) {
      plVar8 = (long *)param_1[5];
      plVar2 = plVar8 + (int)param_1[4];
      plVar6 = plVar2;
      if (plVar2 <= plVar8 + 1) {
        plVar6 = plVar8 + 1;
      }
      uVar1 = ((long)plVar6 + ~(ulong)plVar8 >> 3) + 1;
      lVar5 = *param_1 - (long)__src;
      plVar6 = plVar8;
      if (3 < uVar1) {
        uVar7 = uVar1 & 0x3ffffffffffffffc;
        plVar6 = plVar8 + uVar7;
        plVar8 = plVar8 + 2;
        uVar9 = uVar7;
        do {
          while( true ) {
            if ((bool)(~(plVar8[-2] == 0) & 1)) {
              plVar8[-2] = plVar8[-2] + lVar5;
            }
            if ((bool)(~(plVar8[-1] == 0) & 1)) {
              plVar8[-1] = plVar8[-1] + lVar5;
            }
            bVar12 = ~(plVar8[1] == 0);
            if ((bool)(~(*plVar8 == 0) & 1)) break;
            if (bVar12 != 0) goto LAB_00e71b30;
LAB_00e71b18:
            uVar9 = uVar9 - 4;
            plVar8 = plVar8 + 4;
            if (uVar9 == 0) goto LAB_00e71b48;
          }
          *plVar8 = *plVar8 + lVar5;
          if (!(bool)(bVar12 & 1)) goto LAB_00e71b18;
LAB_00e71b30:
          plVar8[1] = plVar8[1] + lVar5;
          uVar9 = uVar9 - 4;
          plVar8 = plVar8 + 4;
        } while (uVar9 != 0);
LAB_00e71b48:
        if (uVar1 == uVar7) goto LAB_00e71b6c;
      }
      do {
        if (*plVar6 != 0) {
          *plVar6 = *plVar6 + lVar5;
        }
        plVar6 = plVar6 + 1;
      } while (plVar6 < plVar2);
    }
LAB_00e71b6c:
    FUN_00e139fc(lVar11,__src);
  }
  param_1[2] = uVar10;
  if (-1 < (long)uVar4) {
    param_3 = (void *)(*param_1 + uVar4);
  }
LAB_00e71b88:
  lVar11 = param_1[1];
  *(long *)(param_1[5] + (long)param_2 * 8) = *param_1 + lVar11;
  *(uint *)(param_1[6] + (long)param_2 * 4) = param_4;
  memcpy((void *)(*param_1 + lVar11),param_3,__n);
  param_1[1] = param_1[1] + __n;
  return 0;
}

