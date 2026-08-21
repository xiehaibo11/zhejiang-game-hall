
void FUN_01084cc8(long param_1,int *param_2,int *param_3,undefined8 param_4,long param_5,
                 char param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  int *piVar9;
  int iVar10;
  int local_84 [5];
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  
  iVar10 = *param_2;
  local_84[0] = *param_3;
  cVar5 = *(char *)(param_5 + 9);
  lVar8 = 0;
                    /* try { // try from 01084d0c to 01184d1b has its CatchHandler @ 01084d4c */
  uVar6 = 0;
  lVar2 = param_1 + 0x10;
                    /* try { // try from 01084d1c to 01184d4f has its CatchHandler @ 01084bdc */
  lVar3 = 9;
  if (cVar5 != '\0') {
    lVar3 = 10;
  }
  while( true ) {
    local_84[lVar8 + 1] = iVar10;
    if (*(char *)(param_5 + lVar8) != '\0') {
                    /* catch() { ... } // from try @ 01084d0c with catch @ 01084d4c */
                    /* try { // try from 01084d50 to 01184da3 has its CatchHandler @ 01084d50
                       catch() { ... } // from try @ 01084d50 with catch @ 01084d50
                       catch() { ... } // from try @ 01084db4 with catch @ 01084d50 */
      if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 400) - lVar2) >> 3)) {
        lVar1 = param_1 + (ulong)uVar6 * 8;
        iVar7 = *(int *)(lVar1 + 0x14);
        piVar9 = (int *)(lVar1 + 0x10);
        if (iVar7 == 1) {
          iVar7 = *piVar9;
                    /* try { // try from 01084da4 to 01184db3 has its CatchHandler @ 01084dd8 */
          if (iVar7 < 0) {
            iVar7 = -(0x2000 - iVar7 >> 0xe);
          }
          else {
            iVar7 = iVar7 + 0x2000 >> 0xe;
          }
        }
        else if (iVar7 == 2) {
          iVar7 = *piVar9 << 0x10;
        }
        else {
                    /* try { // try from 01084db4 to 01184ddb has its CatchHandler @ 01084d50 */
          iVar7 = *piVar9;
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 8);
        iVar7 = 0;
        if (piVar9 != (int *)0x0) {
          if (*piVar9 == 0) {
            *piVar9 = 0x82;
            iVar10 = local_84[lVar8 + 1];
            iVar7 = 0;
          }
          else {
            iVar7 = 0;
          }
        }
      }
                    /* catch() { ... } // from try @ 01084da4 with catch @ 01084dd8 */
      local_84[lVar8 + 1] = iVar10 + iVar7;
                    /* try { // try from 01084ddc to 01184e37 has its CatchHandler @ 01084ddc
                       catch() { ... } // from try @ 01084ddc with catch @ 01084ddc
                       catch() { ... } // from try @ 01084e48 with catch @ 01084ddc */
      uVar6 = uVar6 + 1;
    }
    if (lVar3 <= lVar8 + 1) break;
    iVar10 = local_84[lVar8];
    lVar8 = lVar8 + 1;
  }
  if (cVar5 == '\0') {
    local_5c = *param_3;
  }
  if (param_6 == '\0') {
                    /* catch() { ... } // from try @ 01084e38 with catch @ 01084e70 */
                    /* try { // try from 01084e74 to 01184ecf has its CatchHandler @ 01084e74
                       catch() { ... } // from try @ 01084e74 with catch @ 01084e74
                       catch() { ... } // from try @ 01084ee0 with catch @ 01084e74 */
    if (*(char *)(param_5 + 10) == '\0') {
      local_58 = *param_2;
    }
    else {
      if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 400) - lVar2) >> 3)) {
        lVar3 = param_1 + (ulong)uVar6 * 8;
        iVar10 = *(int *)(lVar3 + 0x14);
        piVar9 = (int *)(lVar3 + 0x10);
        if (iVar10 == 1) {
          iVar10 = *piVar9;
          if (iVar10 < 0) {
                    /* catch() { ... } // from try @ 01084f6c with catch @ 01084fa4 */
            local_58 = -(0x2000 - iVar10 >> 0xe);
          }
          else {
            local_58 = iVar10 + 0x2000 >> 0xe;
                    /* try { // try from 01084f6c to 01184f7b has its CatchHandler @ 01084fa4 */
          }
        }
        else if (iVar10 == 2) {
          local_58 = *piVar9 << 0x10;
        }
        else {
          local_58 = *piVar9;
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 8);
        if ((piVar9 == (int *)0x0) || (*piVar9 != 0)) {
                    /* catch() { ... } // from try @ 01084ed0 with catch @ 01084f04 */
          local_58 = 0;
                    /* try { // try from 01084f08 to 01184f6b has its CatchHandler @ 01084f08
                       catch() { ... } // from try @ 01084f08 with catch @ 01084f08
                       catch() { ... } // from try @ 01084f7c with catch @ 01084f08 */
        }
        else {
          *piVar9 = 0x82;
          local_58 = 0;
        }
      }
                    /* try { // try from 01084fa8 to 01184ffb has its CatchHandler @ 01084fa8
                       catch() { ... } // from try @ 01084fa8 with catch @ 01084fa8
                       catch() { ... } // from try @ 0108500c with catch @ 01084fa8 */
      local_58 = local_58 + local_60;
      uVar6 = uVar6 + 1;
    }
    if (*(char *)(param_5 + 0xb) == '\0') {
      iVar10 = *param_3;
                    /* try { // try from 0108500c to 01185033 has its CatchHandler @ 01084fa8 */
    }
    else {
      if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 400) - lVar2) >> 3)) {
        lVar3 = param_1 + (ulong)uVar6 * 8;
        iVar10 = *(int *)(lVar3 + 0x14);
        piVar9 = (int *)(lVar3 + 0x10);
        if (iVar10 == 1) {
          iVar10 = *piVar9;
          if (iVar10 < 0) {
            iVar10 = -(0x2000 - iVar10 >> 0xe);
          }
          else {
            iVar10 = iVar10 + 0x2000 >> 0xe;
          }
        }
        else if (iVar10 == 2) {
                    /* try { // try from 01084ffc to 0118500b has its CatchHandler @ 01085030 */
          iVar10 = *piVar9 << 0x10;
        }
        else {
          iVar10 = *piVar9;
        }
      }
      else {
        piVar9 = *(int **)(param_1 + 8);
        iVar10 = 0;
        if (piVar9 != (int *)0x0) {
          if (*piVar9 == 0) {
            *piVar9 = 0x82;
          }
                    /* catch() { ... } // from try @ 01084ffc with catch @ 01085030 */
          iVar10 = 0;
                    /* try { // try from 01085034 to 0118508f has its CatchHandler @ 01085034
                       catch() { ... } // from try @ 01085034 with catch @ 01085034
                       catch() { ... } // from try @ 010850a0 with catch @ 01085034 */
        }
      }
      iVar10 = iVar10 + local_5c;
    }
    goto LAB_01085064;
  }
  iVar10 = local_60 - *param_2;
  iVar7 = -iVar10;
  if (-1 < iVar10) {
    iVar7 = iVar10;
  }
  iVar10 = local_5c - *param_3;
  iVar4 = -iVar10;
  if (-1 < iVar10) {
    iVar4 = iVar10;
  }
  if (uVar6 < (uint)((ulong)(*(long *)(param_1 + 400) - lVar2) >> 3)) {
    lVar3 = param_1 + (ulong)uVar6 * 8;
    iVar10 = *(int *)(lVar3 + 0x14);
                    /* try { // try from 01084e38 to 01184e47 has its CatchHandler @ 01084e70 */
    piVar9 = (int *)(lVar3 + 0x10);
    if (iVar10 == 1) {
      iVar10 = *piVar9;
      if (iVar10 < 0) {
                    /* try { // try from 01084f7c to 01184fa7 has its CatchHandler @ 01084f08 */
        iVar10 = -(0x2000 - iVar10 >> 0xe);
      }
      else {
        iVar10 = iVar10 + 0x2000 >> 0xe;
      }
    }
    else {
                    /* try { // try from 01084e48 to 01184e73 has its CatchHandler @ 01084ddc */
      if (iVar10 == 2) {
        iVar10 = *piVar9 << 0x10;
      }
      else {
        iVar10 = *piVar9;
      }
    }
joined_r0x01084f20:
    if (iVar4 < iVar7) {
LAB_01084ed8:
      local_58 = local_60 + iVar10;
                    /* try { // try from 01084ee0 to 01184f07 has its CatchHandler @ 01084e74 */
      iVar10 = *param_3;
      goto LAB_01085064;
    }
  }
  else {
    piVar9 = *(int **)(param_1 + 8);
    if ((piVar9 == (int *)0x0) || (*piVar9 != 0)) {
      iVar10 = 0;
                    /* try { // try from 01084ed0 to 01184edf has its CatchHandler @ 01084f04 */
      goto joined_r0x01084f20;
    }
    *piVar9 = 0x82;
    iVar10 = 0;
    if (iVar4 < iVar7) goto LAB_01084ed8;
    iVar10 = 0;
  }
  local_58 = *param_2;
  iVar10 = local_5c + iVar10;
LAB_01085064:
  iVar7 = local_58;
  local_54 = iVar10;
  FUN_01084adc(param_4,local_84[1],local_84[2],local_84[3],local_84[4],local_70,uStack_6c);
                    /* try { // try from 01085090 to 0118509f has its CatchHandler @ 010850c8 */
  FUN_01084adc(param_4,local_68,uStack_64,local_60,local_5c,iVar7,iVar10);
  *(long *)(param_1 + 400) = lVar2;
  *param_2 = iVar7;
                    /* try { // try from 010850a0 to 011850cb has its CatchHandler @ 01085034 */
  *param_3 = iVar10;
  return;
}

