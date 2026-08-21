
char * FUN_0010dbf4(long param_1,uint param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  undefined8 *__s;
  char *pcVar3;
  char *pcVar4;
  size_t sVar5;
  undefined4 uVar6;
  long *plVar7;
  long *plVar8;
  size_t sVar9;
  long *plVar10;
  long lVar11;
  ulong __n;
  undefined8 *puVar12;
  long lVar13;
  int iVar14;
  char *pcVar15;
  char *pcVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  
  if (param_1 == 0) {
    return (char *)0x0;
  }
  if (6 < *(byte *)(param_1 + 0x18)) {
    return (char *)0x0;
  }
  __n = (ulong)param_2;
  switch(*(byte *)(param_1 + 0x18)) {
  case 0:
    pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(6);
    if (pcVar3 != (char *)0x0) {
      builtin_strncpy(pcVar3,"false",6);
      return pcVar3;
    }
    return (char *)0x0;
  case 1:
    pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(5);
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar6 = 0x65757274;
    break;
  case 2:
    pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(5);
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
    uVar6 = 0x6c6c756e;
    break;
  case 3:
    dVar21 = *(double *)(param_1 + 0x30);
    if (((-2147483648.0 <= dVar21) && (dVar21 <= 2147483647.0)) &&
       (ABS((double)*(int *)(param_1 + 0x28) - dVar21) <= 2.220446049250313e-16)) {
      pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(0x15);
      if (pcVar3 != (char *)0x0) {
        sprintf(pcVar3,"%d",(ulong)*(uint *)(param_1 + 0x28));
        return pcVar3;
      }
      return (char *)0x0;
    }
    pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(0x40);
    if (pcVar3 != (char *)0x0) {
      dVar20 = ABS(dVar21);
      if ((1e+60 <= dVar20) || (2.220446049250313e-16 < ABS((double)(long)dVar21 - dVar21))) {
        if ((dVar20 < 1e-06) || (1000000000.0 < dVar20)) {
          pcVar4 = "%e";
        }
        else {
          pcVar4 = "%f";
        }
      }
      else {
        pcVar4 = "%.0f";
      }
      sprintf(pcVar3,pcVar4,dVar21);
      return pcVar3;
    }
    return (char *)0x0;
  case 4:
    pcVar3 = (char *)FUN_0010f2ec(*(undefined8 *)(param_1 + 0x20));
    return pcVar3;
  case 5:
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) {
      pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(3);
      if (pcVar3 != (char *)0x0) {
        pcVar3[2] = '\0';
        pcVar3[0] = '[';
        pcVar3[1] = ']';
        return pcVar3;
      }
      return (char *)0x0;
    }
    sVar9 = 0;
    lVar13 = 0;
    do {
      plVar7 = (long *)*plVar7;
      lVar13 = lVar13 + 1;
      sVar9 = sVar9 + 8;
    } while (plVar7 != (long *)0x0);
    plVar7 = (long *)(*(code *)PTR_malloc_00113048)(sVar9);
    if (plVar7 == (long *)0x0) {
      return (char *)0x0;
    }
    memset(plVar7,0,sVar9);
    plVar8 = *(long **)(param_1 + 0x10);
    plVar10 = plVar7;
    if (plVar8 == (long *)0x0) {
      lVar11 = 5;
    }
    else {
      iVar18 = 2;
      if (param_3 != 0) {
        iVar18 = 3;
      }
      iVar14 = 5;
      plVar17 = plVar7;
      do {
        pcVar3 = (char *)FUN_0010dbf4(plVar8,param_2 + 1,param_3);
        *plVar17 = (long)pcVar3;
        if (pcVar3 == (char *)0x0) goto LAB_0010e278;
        sVar9 = strlen(pcVar3);
        plVar8 = (long *)*plVar8;
        iVar14 = iVar14 + iVar18 + (int)sVar9;
        plVar17 = plVar17 + 1;
      } while (plVar8 != (long *)0x0);
      lVar11 = (long)iVar14;
    }
    pcVar3 = (char *)(*(code *)PTR_malloc_00113048)(lVar11);
    if (pcVar3 != (char *)0x0) {
      pcVar4 = pcVar3 + 1;
      pcVar3[0] = '[';
      pcVar3[1] = '\0';
      do {
        strcpy(pcVar4,(char *)*plVar10);
        pcVar16 = (char *)*plVar10;
        sVar9 = strlen(pcVar16);
        pcVar15 = pcVar4 + sVar9;
        pcVar4 = pcVar15;
        if (lVar13 != 1) {
          *pcVar15 = ',';
          pcVar4 = pcVar15 + 1;
          if (param_3 != 0) {
            pcVar4 = pcVar15 + 2;
            pcVar15[1] = ' ';
          }
          *pcVar4 = '\0';
          pcVar16 = (char *)*plVar10;
        }
        (*(code *)PTR_free_00113050)(pcVar16);
        lVar13 = lVar13 + -1;
        plVar10 = plVar10 + 1;
      } while (lVar13 != 0);
      (*(code *)PTR_free_00113050)(plVar7);
      pcVar4[0] = ']';
      pcVar4[1] = '\0';
      return pcVar3;
    }
LAB_0010e278:
    do {
      if (*plVar10 != 0) {
        (*(code *)PTR_free_00113050)();
      }
      lVar13 = lVar13 + -1;
      plVar10 = plVar10 + 1;
    } while (lVar13 != 0);
    goto LAB_0010e2ac;
  case 6:
    plVar7 = *(long **)(param_1 + 0x10);
    if (plVar7 == (long *)0x0) {
      iVar18 = param_2 + 4;
      if (param_3 == 0) {
        iVar18 = 3;
      }
      pcVar3 = (char *)(*(code *)PTR_malloc_00113048)((long)iVar18);
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = '{';
        if (param_3 != 0) {
          param_2 = param_2 - 1;
          pcVar4 = pcVar3 + 2;
          pcVar3[1] = '\n';
          if (0 < (int)param_2) {
            memset(pcVar4,9,(ulong)param_2);
            do {
              param_2 = param_2 - 1;
              pcVar4 = pcVar4 + 1;
            } while (param_2 != 0);
          }
        }
        pcVar4[0] = '}';
        pcVar4[1] = '\0';
        return pcVar3;
      }
      return (char *)0x0;
    }
    sVar9 = 0;
    lVar13 = 0;
    do {
      lVar11 = lVar13;
      plVar7 = (long *)*plVar7;
      lVar13 = lVar11 + 1;
      sVar9 = sVar9 + 8;
    } while (plVar7 != (long *)0x0);
    plVar7 = (long *)(*(code *)PTR_malloc_00113048)(sVar9);
    if (plVar7 == (long *)0x0) {
      return (char *)0x0;
    }
    __s = (undefined8 *)(*(code *)PTR_malloc_00113048)(sVar9);
    if (__s == (undefined8 *)0x0) goto LAB_0010e2ac;
    memset(plVar7,0,sVar9);
    memset(__s,0,sVar9);
    plVar10 = *(long **)(param_1 + 0x10);
    iVar18 = param_2 + 8;
    if (param_3 == 0) {
      iVar18 = 7;
    }
    if (plVar10 == (long *)0x0) {
LAB_0010df1c:
      pcVar3 = (char *)(*(code *)PTR_malloc_00113048)((long)iVar18);
      if (pcVar3 != (char *)0x0) {
        pcVar4 = pcVar3 + 1;
        *pcVar3 = '{';
        if (param_3 != 0) {
          pcVar4 = pcVar3 + 2;
          pcVar3[1] = '\n';
        }
        lVar19 = 0;
        *pcVar4 = '\0';
        do {
          if (-1 < (int)param_2 && param_3 != 0) {
            memset(pcVar4,9,__n + 1);
            iVar18 = param_2 + 1;
            do {
              iVar18 = iVar18 + -1;
              pcVar4 = pcVar4 + 1;
            } while (iVar18 != 0);
          }
          strcpy(pcVar4,(char *)__s[lVar19]);
          sVar9 = strlen((char *)__s[lVar19]);
          pcVar4 = pcVar4 + sVar9;
          *pcVar4 = ':';
          pcVar15 = pcVar4 + 1;
          if (param_3 != 0) {
            pcVar15 = pcVar4 + 2;
            pcVar4[1] = '\t';
          }
          strcpy(pcVar15,(char *)plVar7[lVar19]);
          sVar9 = strlen((char *)plVar7[lVar19]);
          pcVar15 = pcVar15 + sVar9;
          pcVar16 = pcVar15;
          if (lVar11 != lVar19) {
            pcVar16 = pcVar15 + 1;
            *pcVar15 = ',';
          }
          pcVar4 = pcVar16;
          if (param_3 != 0) {
            pcVar4 = pcVar16 + 1;
            *pcVar16 = '\n';
          }
          *pcVar4 = '\0';
          (*(code *)PTR_free_00113050)(__s[lVar19]);
          (*(code *)PTR_free_00113050)(plVar7[lVar19]);
          lVar19 = lVar19 + 1;
        } while (lVar13 != lVar19);
        (*(code *)PTR_free_00113050)(__s);
        (*(code *)PTR_free_00113050)(plVar7);
        if ((param_3 != 0) && (0 < (int)param_2)) {
          memset(pcVar4,9,__n);
          do {
            uVar1 = (int)__n - 1;
            __n = (ulong)uVar1;
            pcVar4 = pcVar4 + 1;
          } while (uVar1 != 0);
        }
        pcVar4[0] = '}';
        pcVar4[1] = '\0';
        return pcVar3;
      }
    }
    else {
      iVar14 = param_2 + 5;
      if (param_3 == 0) {
        iVar14 = 2;
      }
      bVar2 = false;
      plVar8 = plVar7;
      puVar12 = __s;
      do {
        pcVar3 = (char *)FUN_0010f2ec(plVar10[7]);
        *puVar12 = pcVar3;
        pcVar4 = (char *)FUN_0010dbf4(plVar10,param_2 + 1,param_3);
        *plVar8 = (long)pcVar4;
        if ((pcVar3 == (char *)0x0) || (pcVar4 == (char *)0x0)) {
          bVar2 = true;
        }
        else {
          sVar9 = strlen(pcVar4);
          sVar5 = strlen(pcVar3);
          iVar18 = iVar14 + iVar18 + (int)sVar5 + (int)sVar9;
        }
        plVar10 = (long *)*plVar10;
        puVar12 = puVar12 + 1;
        plVar8 = plVar8 + 1;
      } while (plVar10 != (long *)0x0);
      if (!bVar2) goto LAB_0010df1c;
    }
    lVar11 = 0;
    do {
      if (*(long *)((long)__s + lVar11) != 0) {
        (*(code *)PTR_free_00113050)();
      }
      if (*(long *)((long)plVar7 + lVar11) != 0) {
        (*(code *)PTR_free_00113050)();
      }
      lVar13 = lVar13 + -1;
      lVar11 = lVar11 + 8;
    } while (lVar13 != 0);
    (*(code *)PTR_free_00113050)(__s);
LAB_0010e2ac:
    (*(code *)PTR_free_00113050)(plVar7);
    return (char *)0x0;
  }
  pcVar3[4] = '\0';
  *(undefined4 *)pcVar3 = uVar6;
  return pcVar3;
}

