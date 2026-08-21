
undefined4
FUN_01066954(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,long param_5)

{
  bool bVar1;
  long *plVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  void *__s;
  undefined4 uVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar13;
  int local_114 [9];
  undefined8 local_f0 [9];
  long local_a8 [9];
  
  lVar8 = *param_1;
                    /* try { // try from 0106698c to 01166993 has its CatchHandler @ 010669f8 */
                    /* try { // try from 01066994 to 011669bb has its CatchHandler @ 01066a00 */
  FT_Raccess_Guess(param_1,param_2,*(long *)(param_5 + 0x18),local_a8,local_f0,local_114);
  if (param_1 == (long *)0x0) {
    uVar5 = 1;
  }
  else {
    bVar4 = false;
    uVar5 = 2;
    piVar13 = (int *)(ft_raccess_guess_table + 8);
                    /* try { // try from 010669bc to 01166a1b has its CatchHandler @ 010668f8 */
    plVar9 = local_a8;
    lVar10 = 0;
    do {
      uVar3 = *piVar13 - 3;
      if (((!bVar4) || (1 < uVar3)) && (local_114[lVar10] == 0)) {
        lVar11 = *param_1;
        plVar2 = plVar9;
                    /* catch() { ... } // from try @ 0106698c with catch @ 010669f8 */
        if (*plVar9 == 0) {
          plVar2 = (long *)(param_5 + 0x18);
        }
        lVar12 = *plVar2;
                    /* catch() { ... } // from try @ 01066994 with catch @ 01066a00 */
        __s = (void *)(**(code **)(lVar11 + 8))(lVar11,0x50);
        if (__s == (void *)0x0) {
          uVar5 = 0x40;
        }
        else {
                    /* try { // try from 01066a1c to 01166ab3 has its CatchHandler @ 01066a1c
                       catch() { ... } // from try @ 01066a1c with catch @ 01066a1c
                       catch() { ... } // from try @ 01066ae0 with catch @ 01066a1c */
          memset(__s,0,0x50);
          *(long *)((long)__s + 0x38) = lVar11;
          uVar5 = FT_Stream_Open(__s,lVar12);
          *(long *)((long)__s + 0x20) = lVar12;
          if (uVar5 == 0) {
            *(long *)((long)__s + 0x38) = lVar11;
            uVar6 = FUN_01066104(param_1,__s,local_f0[lVar10],param_3,param_4);
            lVar11 = *(long *)((long)__s + 0x38);
            if (*(code **)((long)__s + 0x30) != (code *)0x0) {
              (**(code **)((long)__s + 0x30))(__s);
            }
            (**(code **)(lVar11 + 0x10))(lVar11,__s);
            uVar5 = 0;
            if (uVar6 != 0) {
              uVar5 = uVar6;
                    /* try { // try from 01066ab4 to 01166abb has its CatchHandler @ 01066b28 */
              if (uVar3 < 2) {
                bVar4 = true;
              }
              goto LAB_01066abc;
            }
            break;
          }
          (**(code **)(lVar11 + 0x10))(lVar11,__s);
        }
        if ((uVar5 & 0xff) == 0x51 && uVar3 < 2) {
          bVar4 = true;
        }
      }
LAB_01066abc:
                    /* try { // try from 01066abc to 01166adf has its CatchHandler @ 01066b30 */
      plVar9 = plVar9 + 1;
      piVar13 = piVar13 + 4;
      bVar1 = lVar10 < 8;
      lVar10 = lVar10 + 1;
    } while (bVar1);
  }
                    /* try { // try from 01066ae0 to 01166b5b has its CatchHandler @ 01066a1c */
  if (local_a8[0] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[0] = 0;
  }
  if (local_a8[1] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[1] = 0;
  }
  if (local_a8[2] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[2] = 0;
  }
                    /* catch() { ... } // from try @ 01066ab4 with catch @ 01066b28 */
  if (local_a8[3] != 0) {
                    /* catch() { ... } // from try @ 01066abc with catch @ 01066b30 */
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[3] = 0;
  }
  if (local_a8[4] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[4] = 0;
  }
  if (local_a8[5] != 0) {
                    /* catch() { ... } // from try @ 01066bbc with catch @ 01066b68
                       catch() { ... } // from try @ 01066c8c with catch @ 01066b68 */
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[5] = 0;
  }
  if (local_a8[6] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[6] = 0;
  }
  if (local_a8[7] != 0) {
    (**(code **)(lVar8 + 0x10))(lVar8);
    local_a8[7] = 0;
  }
  if (local_a8[8] != 0) {
                    /* try { // try from 01066bb0 to 01166bbb has its CatchHandler @ 01066d18 */
    (**(code **)(lVar8 + 0x10))(lVar8);
  }
                    /* try { // try from 01066bbc to 01166c7f has its CatchHandler @ 01066b68 */
  uVar7 = 0;
  if (uVar5 != 0) {
    uVar7 = 2;
  }
  return uVar7;
}

