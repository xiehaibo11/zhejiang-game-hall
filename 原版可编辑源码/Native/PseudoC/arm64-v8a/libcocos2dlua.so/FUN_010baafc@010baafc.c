
int FUN_010baafc(undefined8 param_1,long param_2,uint param_3,code *param_4,code *param_5,
                undefined8 param_6)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  long lVar5;
  void *__base;
  ulong uVar6;
  uint uVar7;
  size_t __nmemb;
  uint *puVar8;
  uint local_b8 [10];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  int local_64;
  
                    /* catch() { ... } // from try @ 010ba9c8 with catch @ 010bab4c */
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  local_80 = 0;
  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x20) = 0;
  puVar3 = (uint *)ft_mem_realloc(param_1,8,0,param_3 + 10,0,&local_64);
  *(uint **)(param_2 + 0x20) = puVar3;
                    /* catch() { ... } // from try @ 010ba998 with catch @ 010bab6c */
  if (local_64 == 0) {
    if (param_3 != 0) {
      if (param_5 == (code *)0x0) {
        uVar7 = 0;
        puVar8 = puVar3;
                    /* try { // try from 010badec to 011badf3 has its CatchHandler @ 010baf88 */
        do {
          pcVar4 = (char *)(*param_4)(param_6,uVar7);
          puVar3 = puVar8;
          if (pcVar4 != (char *)0x0) {
            iVar1 = strcmp("Delta",pcVar4);
            if (iVar1 == 0) {
              lVar5 = 0;
              iVar1 = (int)local_90;
joined_r0x010baf08:
              if (iVar1 == 0) {
LAB_010baf0c:
                *(undefined4 *)((long)&local_90 + lVar5 * 4) = 1;
                local_b8[lVar5] = uVar7;
              }
            }
            else {
              iVar1 = strcmp("Omega",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 1;
                    /* catch() { ... } // from try @ 010bae10 with catch @ 010baf98 */
                iVar1 = local_90._4_4_;
                goto joined_r0x010baf08;
              }
              iVar1 = strcmp("fraction",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 2;
                iVar1 = (int)uStack_88;
joined_r0x010bafa8:
                if (iVar1 != 0) goto LAB_010baf20;
                goto LAB_010baf0c;
              }
              iVar1 = strcmp("hyphen",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 3;
                iVar1 = uStack_88._4_4_;
                goto joined_r0x010bafa8;
              }
              iVar1 = strcmp("macron",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 4;
                    /* try { // try from 010baff8 to 011bb063 has its CatchHandler @ 010baff8
                       catch() { ... } // from try @ 010baff8 with catch @ 010baff8
                       catch() { ... } // from try @ 010bb078 with catch @ 010baff8 */
                iVar1 = (int)local_80;
                goto joined_r0x010bafa8;
              }
              iVar1 = strcmp("mu",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 5;
                iVar1 = local_80._4_4_;
                goto joined_r0x010bafa8;
              }
              iVar1 = strcmp("periodcentered",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 6;
                    /* try { // try from 010bae10 to 011bae67 has its CatchHandler @ 010baf98 */
                iVar1 = (int)local_78;
                goto joined_r0x010bafa8;
              }
                    /* try { // try from 010baec0 to 011baecf has its CatchHandler @ 010baf88 */
              iVar1 = strcmp("space",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 7;
                iVar1 = local_78._4_4_;
                goto joined_r0x010bafa8;
              }
                    /* try { // try from 010baed0 to 011baff7 has its CatchHandler @ 010bace8 */
              iVar1 = strcmp("Tcommaaccent",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 8;
                iVar1 = (int)local_70;
                goto joined_r0x010bafa8;
              }
              iVar1 = strcmp("tcommaaccent",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 9;
                iVar1 = local_70._4_4_;
                goto joined_r0x010bafa8;
              }
            }
LAB_010baf20:
                    /* catch() { ... } // from try @ 010bad68 with catch @ 010baf20 */
            uVar2 = FUN_010ba818(pcVar4);
            if ((uVar2 & 0x7fffffff) != 0) {
              if ((int)uVar2 < 0x394) {
                if (0x219 < (int)uVar2) {
                  if (uVar2 == 0x21a) {
                    lVar5 = 8;
                  }
                  else if (uVar2 == 0x21b) {
                    lVar5 = 9;
                  }
                  else {
                    /* catch() { ... } // from try @ 010bad38 with catch @ 010baf54 */
                    if (uVar2 != 0x2c9) goto LAB_010bb030;
                    lVar5 = 4;
                  }
                  goto LAB_010bb02c;
                }
                if (uVar2 == 0xa0) {
                  lVar5 = 7;
                  goto LAB_010bb02c;
                }
                if (uVar2 == 0xad) {
                  lVar5 = 3;
                  goto LAB_010bb02c;
                }
              }
              else {
                if ((int)uVar2 < 0x3bc) {
                  if (uVar2 == 0x394) {
                    lVar5 = 0;
                  }
                  else {
                    if (uVar2 != 0x3a9) goto LAB_010bb030;
                    lVar5 = 1;
                  }
                }
                else if (uVar2 == 0x3bc) {
                  lVar5 = 5;
                }
                else {
                    /* catch() { ... } // from try @ 010bad28 with catch @ 010baf74 */
                  if (uVar2 == 0x2215) {
                    lVar5 = 2;
                  }
                  else {
                    if (uVar2 != 0x2219) goto LAB_010bb030;
                    /* catch() { ... } // from try @ 010badec with catch @ 010baf88
                       catch() { ... } // from try @ 010baec0 with catch @ 010baf88 */
                    lVar5 = 6;
                  }
                }
LAB_010bb02c:
                *(undefined4 *)((long)&local_90 + lVar5 * 4) = 2;
              }
LAB_010bb030:
              puVar3 = puVar8 + 2;
              *puVar8 = uVar2;
              puVar8[1] = uVar7;
            }
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar3;
        } while (param_3 != uVar7);
      }
      else {
                    /* catch() { ... } // from try @ 010baa4c with catch @ 010bab80
                       catch() { ... } // from try @ 010baae8 with catch @ 010bab80 */
        uVar7 = 0;
        puVar8 = puVar3;
        do {
          pcVar4 = (char *)(*param_4)(param_6,uVar7);
          puVar3 = puVar8;
          if (pcVar4 != (char *)0x0) {
            iVar1 = strcmp("Delta",pcVar4);
                    /* try { // try from 010babf0 to 011bac2f has its CatchHandler @ 010babf0
                       catch() { ... } // from try @ 010babf0 with catch @ 010babf0
                       catch() { ... } // from try @ 010bac54 with catch @ 010babf0 */
            if (iVar1 == 0) {
              lVar5 = 0;
              iVar1 = (int)local_90;
joined_r0x010bac9c:
                    /* catch() { ... } // from try @ 010bac3c with catch @ 010bac9c */
              if (iVar1 == 0) {
LAB_010baca0:
                *(undefined4 *)((long)&local_90 + lVar5 * 4) = 1;
                local_b8[lVar5] = uVar7;
              }
            }
            else {
              iVar1 = strcmp("Omega",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 1;
                    /* try { // try from 010bad28 to 011bad37 has its CatchHandler @ 010baf74 */
                iVar1 = local_90._4_4_;
                goto joined_r0x010bac9c;
              }
              iVar1 = strcmp("fraction",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 2;
                    /* try { // try from 010bad38 to 011bad4f has its CatchHandler @ 010baf54 */
                iVar1 = (int)uStack_88;
joined_r0x010bad3c:
                if (iVar1 != 0) goto LAB_010bacb4;
                goto LAB_010baca0;
              }
              iVar1 = strcmp("hyphen",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 3;
                iVar1 = uStack_88._4_4_;
                goto joined_r0x010bad3c;
              }
              iVar1 = strcmp("macron",pcVar4);
                    /* try { // try from 010bac30 to 011bac3b has its CatchHandler @ 010baccc */
              if (iVar1 == 0) {
                lVar5 = 4;
                iVar1 = (int)local_80;
                goto joined_r0x010bad3c;
              }
                    /* try { // try from 010bac3c to 011bac53 has its CatchHandler @ 010bac9c */
              iVar1 = strcmp("mu",pcVar4);
              if (iVar1 == 0) {
                    /* catch() { ... } // from try @ 010baa70 with catch @ 010bab90 */
                lVar5 = 5;
                iVar1 = local_80._4_4_;
                goto joined_r0x010bad3c;
              }
              iVar1 = strcmp("periodcentered",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 6;
                iVar1 = (int)local_78;
                goto joined_r0x010bad3c;
              }
                    /* try { // try from 010bac54 to 011bace7 has its CatchHandler @ 010babf0 */
              iVar1 = strcmp("space",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 7;
                iVar1 = local_78._4_4_;
                goto joined_r0x010bad3c;
              }
              iVar1 = strcmp("Tcommaaccent",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 8;
                iVar1 = (int)local_70;
                goto joined_r0x010bad3c;
              }
              iVar1 = strcmp("tcommaaccent",pcVar4);
              if (iVar1 == 0) {
                lVar5 = 9;
                iVar1 = local_70._4_4_;
                goto joined_r0x010bad3c;
              }
            }
LAB_010bacb4:
            uVar2 = FUN_010ba818(pcVar4);
            if ((uVar2 & 0x7fffffff) != 0) {
              if ((int)uVar2 < 0x394) {
                    /* catch() { ... } // from try @ 010bac30 with catch @ 010baccc */
                if (0x219 < (int)uVar2) {
                  if (uVar2 == 0x21a) {
                    lVar5 = 8;
                  }
                  else if (uVar2 == 0x21b) {
                    lVar5 = 9;
                  }
                  else {
                    /* try { // try from 010bace8 to 011bad27 has its CatchHandler @ 010bace8
                       catch() { ... } // from try @ 010bace8 with catch @ 010bace8
                       catch() { ... } // from try @ 010baed0 with catch @ 010bace8 */
                    if (uVar2 != 0x2c9) goto LAB_010badc8;
                    lVar5 = 4;
                  }
                  goto LAB_010badc0;
                }
                if (uVar2 == 0xa0) {
                  lVar5 = 7;
                  goto LAB_010badc0;
                }
                if (uVar2 == 0xad) {
                  lVar5 = 3;
                  goto LAB_010badc0;
                }
              }
              else {
                if ((int)uVar2 < 0x3bc) {
                  if (uVar2 == 0x394) {
                    lVar5 = 0;
                  }
                  else {
                    /* try { // try from 010bad68 to 011bad7b has its CatchHandler @ 010baf20 */
                    if (uVar2 != 0x3a9) goto LAB_010badc8;
                    lVar5 = 1;
                  }
                }
                else if (uVar2 == 0x3bc) {
                  lVar5 = 5;
                }
                else if (uVar2 == 0x2215) {
                  lVar5 = 2;
                }
                else {
                  if (uVar2 != 0x2219) goto LAB_010badc8;
                  lVar5 = 6;
                }
LAB_010badc0:
                *(undefined4 *)((long)&local_90 + lVar5 * 4) = 2;
              }
LAB_010badc8:
              puVar3 = puVar8 + 2;
              *puVar8 = uVar2;
              puVar8[1] = uVar7;
            }
            (*param_5)(param_6,pcVar4);
          }
          uVar7 = uVar7 + 1;
          puVar8 = puVar3;
        } while (param_3 != uVar7);
      }
    }
    if ((int)local_90 == 1) {
      *puVar3 = 0x394;
      puVar3[1] = local_b8[0];
      puVar3 = puVar3 + 2;
    }
                    /* try { // try from 010bb064 to 011bb077 has its CatchHandler @ 010bb0bc */
    if (local_90._4_4_ == 1) {
      *puVar3 = 0x3a9;
                    /* try { // try from 010bb078 to 011bb0d7 has its CatchHandler @ 010baff8 */
      puVar3[1] = local_b8[1];
      puVar3 = puVar3 + 2;
    }
    if ((int)uStack_88 == 1) {
      *puVar3 = 0x2215;
      puVar3[1] = local_b8[2];
      puVar3 = puVar3 + 2;
    }
    if (uStack_88._4_4_ == 1) {
      *puVar3 = 0xad;
      puVar3[1] = local_b8[3];
                    /* catch() { ... } // from try @ 010bb064 with catch @ 010bb0bc */
      puVar3 = puVar3 + 2;
    }
    if ((int)local_80 == 1) {
      *puVar3 = 0x2c9;
      puVar3[1] = local_b8[4];
      puVar3 = puVar3 + 2;
    }
    if (local_80._4_4_ == 1) {
      *puVar3 = 0x3bc;
      puVar3[1] = local_b8[5];
      puVar3 = puVar3 + 2;
    }
    if ((int)local_78 == 1) {
      *puVar3 = 0x2219;
      puVar3[1] = local_b8[6];
      puVar3 = puVar3 + 2;
    }
    if (local_78._4_4_ == 1) {
      *puVar3 = 0xa0;
      puVar3[1] = local_b8[7];
      puVar3 = puVar3 + 2;
    }
    if ((int)local_70 == 1) {
      *puVar3 = 0x21a;
      puVar3[1] = local_b8[8];
      puVar3 = puVar3 + 2;
    }
    if (local_70._4_4_ == 1) {
      *puVar3 = 0x21b;
      puVar3[1] = local_b8[9];
      puVar3 = puVar3 + 2;
    }
                    /* try { // try from 010bb180 to 011bb1bb has its CatchHandler @ 010bb180
                       catch() { ... } // from try @ 010bb180 with catch @ 010bb180
                       catch() { ... } // from try @ 010bb278 with catch @ 010bb180 */
    __base = *(void **)(param_2 + 0x20);
    uVar6 = (long)puVar3 - (long)__base;
    uVar7 = (uint)(uVar6 >> 3);
    if (uVar7 == 0) {
      ft_mem_free(param_1,__base);
      *(undefined8 *)(param_2 + 0x20) = 0;
                    /* try { // try from 010bb1e0 to 011bb1f3 has its CatchHandler @ 010bb374 */
      if (local_64 == 0) {
        local_64 = 0xa3;
      }
    }
    else {
      if (uVar7 < param_3 >> 1) {
        __nmemb = uVar6 >> 3 & 0xffffffff;
        __base = (void *)ft_mem_realloc(param_1,8,param_3,__nmemb,__base,&local_64);
                    /* try { // try from 010bb1bc to 011bb1cf has its CatchHandler @ 010bb388 */
        *(void **)(param_2 + 0x20) = __base;
        local_64 = 0;
      }
      else {
        __nmemb = uVar6 >> 3 & 0xffffffff;
      }
                    /* try { // try from 010bb1f4 to 011bb207 has its CatchHandler @ 010bb354 */
      qsort(__base,__nmemb,8,FUN_010bb4d8);
    }
    *(uint *)(param_2 + 0x18) = uVar7;
  }
                    /* try { // try from 010bb220 to 011bb233 has its CatchHandler @ 010bb334 */
  return local_64;
}

