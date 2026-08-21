
long * FUN_00a1cd54(long *param_1,char *param_2,undefined8 param_3,ulong param_4)

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
  
                    /* catch() { ... } // from try @ 00a1cdb8 with catch @ 00a1cd6c */
  tVar6 = time((time_t *)0x0);
  if ((param_1 != (long *)0x0) && (*param_1 != 0)) {
    tVar7 = time((time_t *)0x0);
                    /* try { // try from 00a1cdac to 00b1cdb7 has its CatchHandler @ 00a1cdec */
    if ((long *)*param_1 != (long *)0x0) {
                    /* try { // try from 00a1cdb8 to 00b1ce07 has its CatchHandler @ 00a1cd6c */
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
                    /* catch() { ... } // from try @ 00a1cdac with catch @ 00a1cdec */
          *plVar1 = (long)plVar14;
          param_1[3] = param_1[3] + -1;
          (*(code *)PTR_free_01d1b748)(plVar13[7]);
          (*(code *)PTR_free_01d1b748)(plVar13[5]);
          (*(code *)PTR_free_01d1b748)(plVar13[3]);
          (*(code *)PTR_free_01d1b748)(plVar13[4]);
          (*(code *)PTR_free_01d1b748)(plVar13[1]);
          (*(code *)PTR_free_01d1b748)(plVar13[2]);
          (*(code *)PTR_free_01d1b748)(plVar13[10]);
          (*(code *)PTR_free_01d1b748)(plVar13[9]);
          (*(code *)PTR_free_01d1b748)(plVar13);
          if (plVar14 == (long *)0x0) goto LAB_00a1ce78;
        }
        plVar10 = plVar13;
      } while (plVar14 != (long *)0x0);
    }
LAB_00a1ce78:
                    /* catch() { ... } // from try @ 00a1cf4c with catch @ 00a1ce7c
                       catch() { ... } // from try @ 00a1cfd4 with catch @ 00a1ce7c
                       catch() { ... } // from try @ 00a1d03c with catch @ 00a1ce7c
                       catch() { ... } // from try @ 00a1d0f4 with catch @ 00a1ce7c */
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
                    /* try { // try from 00a1cf44 to 00b1cf4b has its CatchHandler @ 00a1d104 */
                    /* try { // try from 00a1cf4c to 00b1cfcb has its CatchHandler @ 00a1ce7c */
        if (((param_1[6] != 0) && (param_1[6] <= tVar6)) ||
           (((char)param_1[0xb] != '\0' && ((param_4 & 1) == 0)))) goto LAB_00a1d1d0;
        pcVar15 = (char *)param_1[5];
        if (pcVar15 != (char *)0x0) {
          if (!bVar4 && (char)param_1[8] != '\0') {
            sVar8 = strlen(pcVar15);
            sVar9 = strlen(param_2);
            if (sVar8 <= sVar9) {
              iVar5 = FUN_00a33710(pcVar15,param_2 + (sVar9 - sVar8));
              if ((iVar5 != 0) && ((sVar9 == sVar8 || ((param_2 + (sVar9 - sVar8))[-1] == '.'))))
              goto LAB_00a1cff8;
            }
          }
                    /* try { // try from 00a1cfcc to 00b1cfd3 has its CatchHandler @ 00a1d0f4 */
                    /* try { // try from 00a1cfd4 to 00b1cff7 has its CatchHandler @ 00a1ce7c */
          if ((!(bool)(bVar4 | (char)param_1[8] == '\0')) ||
             (iVar5 = FUN_00a33710(param_2,param_1[5]), iVar5 == 0)) goto LAB_00a1d1d0;
        }
LAB_00a1cff8:
                    /* try { // try from 00a1cff8 to 00b1d017 has its CatchHandler @ 00a1d154 */
        pcVar15 = (char *)param_1[4];
        if ((pcVar15 == (char *)0x0) || (sVar8 = strlen(pcVar15), sVar8 == 1)) goto LAB_00a1d018;
        __s = (char *)(*(code *)PTR_strdup_01d1b758)(param_3);
        if (__s == (char *)0x0) {
LAB_00a1d1d0:
          param_1 = (long *)*param_1;
        }
        else {
                    /* catch() { ... } // from try @ 00a1cff8 with catch @ 00a1d154 */
          pcVar12 = strchr(__s,0x3f);
          if (pcVar12 != (char *)0x0) {
            *pcVar12 = '\0';
          }
          if (*__s != '/') {
            (*(code *)PTR_free_01d1b748)(__s);
            __s = (char *)(*(code *)PTR_strdup_01d1b758)("/");
                    /* catch() { ... } // from try @ 00a1d244 with catch @ 00a1d190
                       catch() { ... } // from try @ 00a1d2cc with catch @ 00a1d190
                       catch() { ... } // from try @ 00a1d330 with catch @ 00a1d190
                       catch() { ... } // from try @ 00a1d3e8 with catch @ 00a1d190 */
            if (__s == (char *)0x0) goto LAB_00a1d1d0;
          }
          sVar9 = strlen(__s);
          if ((sVar9 < sVar8) || (iVar5 = strncmp(pcVar15,__s,sVar8), iVar5 != 0)) {
            (*(code *)PTR_free_01d1b748)(__s);
            goto LAB_00a1d1d0;
          }
          if (sVar8 == sVar9) {
            (*(code *)PTR_free_01d1b748)(__s);
          }
          else {
            cVar3 = __s[sVar8];
            (*(code *)PTR_free_01d1b748)(__s);
            if (cVar3 != '/') goto LAB_00a1d1d0;
          }
LAB_00a1d018:
          plVar10 = (long *)(*(code *)PTR_calloc_01d1b760)(0x60,1);
                    /* try { // try from 00a1d034 to 00b1d03b has its CatchHandler @ 00a1d114 */
          if (plVar10 == (long *)0x0) goto LAB_00a1d2d4;
                    /* try { // try from 00a1d03c to 00b1d0e3 has its CatchHandler @ 00a1ce7c */
          if (param_1[7] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[7] = lVar11;
            if (lVar11 != 0) goto LAB_00a1d050;
LAB_00a1d268:
            (*(code *)PTR_free_01d1b748)(plVar10[7]);
            (*(code *)PTR_free_01d1b748)(plVar10[5]);
            (*(code *)PTR_free_01d1b748)(plVar10[3]);
            (*(code *)PTR_free_01d1b748)(plVar10[4]);
            (*(code *)PTR_free_01d1b748)(plVar10[1]);
            (*(code *)PTR_free_01d1b748)(plVar10[2]);
            (*(code *)PTR_free_01d1b748)(plVar10[10]);
                    /* try { // try from 00a1d2c4 to 00b1d2cb has its CatchHandler @ 00a1d3e8 */
            (*(code *)PTR_free_01d1b748)(plVar10[9]);
                    /* try { // try from 00a1d2cc to 00b1d2ef has its CatchHandler @ 00a1d190 */
            (*(code *)PTR_free_01d1b748)(plVar10);
            goto LAB_00a1d2d4;
          }
LAB_00a1d050:
          if (param_1[5] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[5] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          if (param_1[3] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[3] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          if (param_1[4] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[4] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          if (param_1[1] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[1] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          if (param_1[2] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[2] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          if (param_1[10] != 0) {
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[10] = lVar11;
            if (lVar11 == 0) goto LAB_00a1d268;
          }
                    /* try { // try from 00a1d0e4 to 00b1d0eb has its CatchHandler @ 00a1d104 */
          if (param_1[9] != 0) {
                    /* try { // try from 00a1d0ec to 00b1d0f3 has its CatchHandler @ 00a1d0f4 */
            lVar11 = (*(code *)PTR_strdup_01d1b758)();
            plVar10[9] = lVar11;
                    /* catch() { ... } // from try @ 00a1cfcc with catch @ 00a1d0f4
                       catch() { ... } // from try @ 00a1d0ec with catch @ 00a1d0f4
                       try { // try from 00a1d0f4 to 00b1d18f has its CatchHandler @ 00a1ce7c */
            if (lVar11 == 0) goto LAB_00a1d268;
          }
          plVar10[6] = param_1[6];
                    /* catch() { ... } // from try @ 00a1cf44 with catch @ 00a1d104
                       catch() { ... } // from try @ 00a1d0e4 with catch @ 00a1d104 */
          *(char *)(plVar10 + 8) = (char)param_1[8];
          *(char *)(plVar10 + 0xb) = (char)param_1[0xb];
                    /* catch() { ... } // from try @ 00a1d034 with catch @ 00a1d114 */
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
          plVar13 = (long *)(*(code *)PTR_malloc_01d1b740)(local_90 << 3);
          plVar10 = plVar13;
          if (plVar13 != (long *)0x0) {
            for (; plVar14 != (long *)0x0; plVar14 = (long *)*plVar14) {
              *plVar10 = (long)plVar14;
              plVar10 = plVar10 + 1;
            }
            qsort(plVar13,local_90,8,FUN_00a1d3fc);
            plVar10 = (long *)*plVar13;
            plVar14 = plVar13;
            for (lVar11 = local_90 - 1; lVar11 != 0; lVar11 = lVar11 + -1) {
                    /* try { // try from 00a1d23c to 00b1d243 has its CatchHandler @ 00a1d3f8 */
                    /* try { // try from 00a1d244 to 00b1d2c3 has its CatchHandler @ 00a1d190 */
              *(long *)*plVar14 = plVar14[1];
              plVar14 = plVar14 + 1;
            }
            *(undefined8 *)plVar13[local_90 - 1] = 0;
            (*(code *)PTR_free_01d1b748)(plVar13);
            return plVar10;
          }
LAB_00a1d2d4:
          if (plVar14 == (long *)0x0) {
            return (long *)0x0;
          }
          do {
            plVar10 = (long *)*plVar14;
            (*(code *)PTR_free_01d1b748)(plVar14[7]);
                    /* try { // try from 00a1d2f0 to 00b1d30b has its CatchHandler @ 00a1d448 */
            (*(code *)PTR_free_01d1b748)(plVar14[5]);
            (*(code *)PTR_free_01d1b748)(plVar14[3]);
            (*(code *)PTR_free_01d1b748)(plVar14[4]);
            (*(code *)PTR_free_01d1b748)(plVar14[1]);
            (*(code *)PTR_free_01d1b748)(plVar14[2]);
                    /* try { // try from 00a1d328 to 00b1d32f has its CatchHandler @ 00a1d408 */
            (*(code *)PTR_free_01d1b748)(plVar14[10]);
                    /* try { // try from 00a1d330 to 00b1d3d7 has its CatchHandler @ 00a1d190 */
            (*(code *)PTR_free_01d1b748)(plVar14[9]);
            (*(code *)PTR_free_01d1b748)(plVar14);
            plVar14 = plVar10;
          } while (plVar10 != (long *)0x0);
          return (long *)0x0;
        }
      } while( true );
    }
  }
  return (long *)0x0;
}

