
size_t FUN_010b1e48(long *param_1,ulong param_2,void *param_3,ulong param_4)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  size_t sVar4;
  size_t sVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *local_70;
  long *local_68;
  
  uVar9 = param_1[0x412];
                    /* catch() { ... } // from try @ 010b1d18 with catch @ 010b1e70 */
                    /* catch() { ... } // from try @ 010b1d2c with catch @ 010b1e78 */
  if (param_2 < uVar9) {
    iVar2 = FT_Stream_Seek(*param_1,param_1[0x11]);
    if (iVar2 != 0) {
      return 0;
    }
                    /* catch() { ... } // from try @ 010b1e18 with catch @ 010b1e98 */
    inflateReset(param_1 + 3);
                    /* catch() { ... } // from try @ 010b1e2c with catch @ 010b1ea0 */
    uVar9 = 0;
    param_1[3] = (long)(param_1 + 0x12);
    *(undefined4 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 7) = 0;
    param_1[6] = (long)(param_1 + 0x212);
    param_1[0x414] = (long)(param_1 + 0x412);
    param_1[0x413] = (long)(param_1 + 0x412);
    param_1[0x412] = 0;
  }
  if (uVar9 < param_2) {
    lVar7 = param_1[0x414];
    param_2 = param_2 - uVar9;
    uVar11 = lVar7 - param_1[0x413];
    if (param_2 <= uVar11) {
      uVar11 = param_2;
    }
    pvVar6 = (void *)(param_1[0x413] + uVar11);
    param_2 = param_2 - uVar11;
    param_1[0x413] = (long)pvVar6;
                    /* try { // try from 010b1f18 to 011b1f6f has its CatchHandler @ 010b1f7c */
    param_1[0x412] = uVar11 + uVar9;
    if (param_2 != 0) {
      plVar1 = param_1 + 0x12;
      do {
        param_1[0x413] = (long)(param_1 + 0x212);
        param_1[6] = (long)(param_1 + 0x212);
        *(undefined4 *)(param_1 + 7) = 0x1000;
        do {
          if ((int)param_1[4] == 0) {
            plVar3 = (long *)*param_1;
            if ((code *)plVar3[5] == (code *)0x0) {
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b1f18 with catch @ 010b1f7c
                        */
              sVar4 = plVar3[1] - plVar3[2];
              if (0xfff < sVar4) {
                sVar4 = 0x1000;
              }
              if (sVar4 == 0) {
                return 0;
              }
                    /* try { // try from 010b1fa0 to 011b1ff7 has its CatchHandler @ 010b2008 */
              memcpy(plVar1,(void *)(*plVar3 + plVar3[2]),sVar4);
            }
            else {
              sVar4 = (*(code *)plVar3[5])(plVar3,plVar3[2],plVar1,0x1000);
              if (sVar4 == 0) {
                return 0;
              }
            }
            plVar3[2] = plVar3[2] + sVar4;
            param_1[3] = (long)plVar1;
            *(int *)(param_1 + 4) = (int)sVar4;
          }
          iVar2 = inflate(param_1 + 3,0);
          if (iVar2 != 0) {
            if (iVar2 != 1) {
              return 0;
            }
            lVar7 = param_1[6];
            lVar10 = param_1[0x413];
            param_1[0x414] = lVar7;
            if (lVar7 == lVar10) {
              return 0;
            }
            goto LAB_010b1ffc;
          }
        } while ((int)param_1[7] != 0);
        lVar7 = param_1[0x414];
        lVar10 = param_1[0x413];
LAB_010b1ffc:
        uVar9 = lVar7 - lVar10;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 010b1fa0 with catch @ 010b2008
                        */
        if (param_2 <= (ulong)(lVar7 - lVar10)) {
          uVar9 = param_2;
        }
        pvVar6 = (void *)(lVar10 + uVar9);
        param_2 = param_2 - uVar9;
        param_1[0x413] = (long)pvVar6;
        param_1[0x412] = uVar9 + param_1[0x412];
      } while (param_2 != 0);
    }
    if (param_4 != 0) {
LAB_010b2050:
      local_68 = param_1 + 0x414;
      local_70 = param_1 + 0x413;
      sVar4 = lVar7 - (long)pvVar6;
      if (param_4 <= (ulong)(lVar7 - (long)pvVar6)) {
        sVar4 = param_4;
      }
      memcpy(param_3,pvVar6,sVar4);
      param_4 = param_4 - sVar4;
      param_1[0x413] = param_1[0x413] + sVar4;
      param_1[0x412] = param_1[0x412] + sVar4;
      if (param_4 == 0) {
        return sVar4;
      }
      param_3 = (void *)((long)param_3 + sVar4);
      plVar1 = param_1 + 0x12;
      do {
        param_1[0x413] = (long)(param_1 + 0x212);
        param_1[6] = (long)(param_1 + 0x212);
        *(undefined4 *)(param_1 + 7) = 0x1000;
        do {
          if ((int)param_1[4] == 0) {
            plVar3 = (long *)*param_1;
            if ((code *)plVar3[5] == (code *)0x0) {
              sVar5 = plVar3[1] - plVar3[2];
              if (0xfff < sVar5) {
                sVar5 = 0x1000;
              }
              if (sVar5 == 0) {
                return sVar4;
              }
              memcpy(plVar1,(void *)(*plVar3 + plVar3[2]),sVar5);
            }
            else {
              sVar5 = (*(code *)plVar3[5])(plVar3,plVar3[2],plVar1,0x1000);
              if (sVar5 == 0) {
                return sVar4;
              }
            }
            plVar3[2] = plVar3[2] + sVar5;
            param_1[3] = (long)plVar1;
            *(int *)(param_1 + 4) = (int)sVar5;
          }
          iVar2 = inflate(param_1 + 3,0);
          if (iVar2 != 0) {
            if (iVar2 != 1) {
              return sVar4;
            }
            pvVar8 = (void *)param_1[6];
            pvVar6 = (void *)param_1[0x413];
            param_1[0x414] = (long)pvVar8;
            if (pvVar8 == pvVar6) {
              return sVar4;
            }
            goto LAB_010b2168;
          }
        } while ((int)param_1[7] != 0);
        pvVar8 = (void *)*local_68;
        pvVar6 = (void *)*local_70;
LAB_010b2168:
        sVar5 = (long)pvVar8 - (long)pvVar6;
        if (param_4 <= (ulong)((long)pvVar8 - (long)pvVar6)) {
          sVar5 = param_4;
        }
        memcpy(param_3,pvVar6,sVar5);
        param_3 = (void *)((long)param_3 + sVar5);
        sVar4 = sVar5 + sVar4;
        param_4 = param_4 - sVar5;
        param_1[0x413] = param_1[0x413] + sVar5;
        param_1[0x412] = param_1[0x412] + sVar5;
        if (param_4 == 0) {
          return sVar4;
        }
      } while( true );
    }
  }
  else if (param_4 != 0) {
    lVar7 = param_1[0x414];
    pvVar6 = (void *)param_1[0x413];
    goto LAB_010b2050;
  }
  return 0;
}

