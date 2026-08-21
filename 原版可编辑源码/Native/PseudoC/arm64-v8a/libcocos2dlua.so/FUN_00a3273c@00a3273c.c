
long * FUN_00a3273c(long *param_1,char *param_2,undefined8 param_3,ulong param_4)

{
  long *plVar1;
  undefined1 uVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  time_t tVar6;
  time_t tVar7;
  size_t sVar8;
  size_t sVar9;
  long *plVar10;
  long lVar11;
  char *__s;
  char *pcVar12;
  long *plVar13;
  long *plVar14;
  char *pcVar15;
  size_t local_90;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [8];
  
  tVar6 = time((time_t *)0x0);
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    tVar7 = time((time_t *)0x0);
    if ((long *)*param_1 != (long *)0x0) {
      plVar14 = (long *)*param_1;
      plVar10 = (long *)0x0;
      do {
        while( true ) {
          plVar13 = plVar14;
          plVar14 = (long *)*plVar13;
          if ((plVar13[6] == 0) || (tVar7 <= plVar13[6])) break;
          plVar1 = param_1;
          if (plVar13 != (long *)*param_1) {
            plVar1 = plVar10;
          }
          *plVar1 = (long)plVar14;
          param_1[3] = param_1[3] + -1;
          (*(code *)PTR_free_01769a00)(plVar13[7]);
          (*(code *)PTR_free_01769a00)(plVar13[5]);
          (*(code *)PTR_free_01769a00)(plVar13[3]);
          (*(code *)PTR_free_01769a00)(plVar13[4]);
          (*(code *)PTR_free_01769a00)(plVar13[1]);
          (*(code *)PTR_free_01769a00)(plVar13[2]);
          (*(code *)PTR_free_01769a00)(plVar13[10]);
          (*(code *)PTR_free_01769a00)(plVar13[9]);
          (*(code *)PTR_free_01769a00)(plVar13);
          if (plVar14 == (long *)0x0) goto LAB_00a32860;
        }
        plVar10 = plVar13;
      } while (plVar14 != (long *)0x0);
    }
LAB_00a32860:
    iVar5 = inet_pton(2,param_2,auStack_68);
    if (iVar5 == 0) {
      iVar5 = inet_pton(10,param_2,auStack_78);
      bVar4 = iVar5 != 0;
    }
    else {
      bVar4 = true;
    }
    param_1 = (long *)*param_1;
    if (param_1 != (long *)0x0) {
      local_90 = 0;
      plVar14 = (long *)0x0;
      do {
        if (((param_1[6] != 0) && (param_1[6] <= tVar6)) ||
           (((char)param_1[0xb] != '\0' && ((param_4 & 1) == 0)))) goto LAB_00a32bb8;
        pcVar15 = (char *)param_1[5];
        if (pcVar15 != (char *)0x0) {
          if (!bVar4 && (char)param_1[8] != '\0') {
            sVar8 = strlen(pcVar15);
            sVar9 = strlen(param_2);
            if (sVar8 <= sVar9) {
              iVar5 = FUN_00a4a0f8(pcVar15,param_2 + (sVar9 - sVar8));
              if ((iVar5 != 0) && ((sVar9 == sVar8 || ((param_2 + (sVar9 - sVar8))[-1] == '.'))))
              goto LAB_00a329e0;
            }
          }
          if ((!(bool)(bVar4 | (char)param_1[8] == '\0')) ||
             (iVar5 = FUN_00a4a0f8(param_2,param_1[5]), iVar5 == 0)) goto LAB_00a32bb8;
        }
LAB_00a329e0:
        pcVar15 = (char *)param_1[4];
        if ((pcVar15 == (char *)0x0) || (sVar8 = strlen(pcVar15), sVar8 == 1)) goto LAB_00a32a00;
        __s = (char *)(*(code *)PTR_strdup_01769a10)(param_3);
        if (__s == (char *)0x0) {
LAB_00a32bb8:
          param_1 = (long *)*param_1;
        }
        else {
          pcVar12 = strchr(__s,0x3f);
          if (pcVar12 != (char *)0x0) {
            *pcVar12 = '\0';
          }
          if (*__s != '/') {
            (*(code *)PTR_free_01769a00)(__s);
            __s = (char *)(*(code *)PTR_strdup_01769a10)(&DAT_0144b7ba);
            if (__s == (char *)0x0) goto LAB_00a32bb8;
          }
          sVar9 = strlen(__s);
          if ((sVar9 < sVar8) || (iVar5 = strncmp(pcVar15,__s,sVar8), iVar5 != 0)) {
            (*(code *)PTR_free_01769a00)(__s);
            goto LAB_00a32bb8;
          }
          if (sVar8 == sVar9) {
            (*(code *)PTR_free_01769a00)(__s);
          }
          else {
            cVar3 = __s[sVar8];
            (*(code *)PTR_free_01769a00)(__s);
            if (cVar3 != '/') goto LAB_00a32bb8;
          }
LAB_00a32a00:
          plVar10 = (long *)(*(code *)PTR_calloc_01769a18)(0x60,1);
          if (plVar10 == (long *)0x0) goto LAB_00a32cbc;
          if (param_1[7] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[7] = lVar11;
            if (lVar11 != 0) goto LAB_00a32a38;
LAB_00a32c50:
            (*(code *)PTR_free_01769a00)(plVar10[7]);
            (*(code *)PTR_free_01769a00)(plVar10[5]);
            (*(code *)PTR_free_01769a00)(plVar10[3]);
            (*(code *)PTR_free_01769a00)(plVar10[4]);
            (*(code *)PTR_free_01769a00)(plVar10[1]);
            (*(code *)PTR_free_01769a00)(plVar10[2]);
            (*(code *)PTR_free_01769a00)(plVar10[10]);
            (*(code *)PTR_free_01769a00)(plVar10[9]);
            (*(code *)PTR_free_01769a00)(plVar10);
            goto LAB_00a32cbc;
          }
LAB_00a32a38:
          if (param_1[5] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[5] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[3] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[3] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[4] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[4] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[1] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[1] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[2] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[2] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[10] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[10] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          if (param_1[9] != 0) {
            lVar11 = (*(code *)PTR_strdup_01769a10)();
            plVar10[9] = lVar11;
            if (lVar11 == 0) goto LAB_00a32c50;
          }
          plVar10[6] = param_1[6];
          *(char *)(plVar10 + 8) = (char)param_1[8];
          *(char *)(plVar10 + 0xb) = (char)param_1[0xb];
          *(undefined1 *)((long)plVar10 + 0x59) = *(undefined1 *)((long)param_1 + 0x59);
          uVar2 = *(undefined1 *)((long)param_1 + 0x5a);
          *plVar10 = (long)plVar14;
          *(undefined1 *)((long)plVar10 + 0x5a) = uVar2;
          local_90 = local_90 + 1;
          param_1 = (long *)*param_1;
          plVar14 = plVar10;
        }
        if (param_1 == (long *)0x0) {
          if (local_90 == 0) {
            return plVar14;
          }
          plVar13 = (long *)(*(code *)PTR_malloc_017699f8)(local_90 << 3);
          plVar10 = plVar13;
          if (plVar13 != (long *)0x0) {
            for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              *plVar10 = (long)plVar14;
              plVar10 = plVar10 + 1;
            }
            qsort(plVar13,local_90,8,FUN_00a32de4);
            plVar10 = (long *)*plVar13;
            plVar14 = plVar13;
            for (lVar11 = local_90 - 1; lVar11 != 0; lVar11 = lVar11 + -1) {
              *(long *)*plVar14 = plVar14[1];
              plVar14 = plVar14 + 1;
            }
            *(undefined8 *)plVar13[local_90 - 1] = 0;
            (*(code *)PTR_free_01769a00)(plVar13);
            return plVar10;
          }
LAB_00a32cbc:
          if (plVar14 == (long *)0x0) {
            return (long *)0x0;
          }
          do {
            plVar10 = (long *)*plVar14;
            (*(code *)PTR_free_01769a00)(plVar14[7]);
            (*(code *)PTR_free_01769a00)(plVar14[5]);
            (*(code *)PTR_free_01769a00)(plVar14[3]);
            (*(code *)PTR_free_01769a00)(plVar14[4]);
            (*(code *)PTR_free_01769a00)(plVar14[1]);
            (*(code *)PTR_free_01769a00)(plVar14[2]);
            (*(code *)PTR_free_01769a00)(plVar14[10]);
            (*(code *)PTR_free_01769a00)(plVar14[9]);
            (*(code *)PTR_free_01769a00)(plVar14);
            plVar14 = plVar10;
          } while (plVar10 != (long *)0x0);
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

