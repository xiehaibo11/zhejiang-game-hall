
/* WARNING: Removing unreachable block (ram,0x00ae0860) */
/* WARNING: Removing unreachable block (ram,0x00ae0850) */

undefined8 FUN_00ae0668(void *param_1,int param_2,ulong *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  char acStack_44 [20];
  
  if (param_1 == (void *)0x0) {
    return 0;
  }
  if (0x13 < param_2) {
    return 0;
  }
  if (*param_3 == 0x8c) {
    return 0;
  }
  memcpy(acStack_44,param_1,(long)param_2);
  acStack_44[param_2] = '\0';
  pcVar4 = strchr(acStack_44,0x2b);
  if (pcVar4 == (char *)0x0) {
    return 0;
  }
  *pcVar4 = '\0';
  pcVar4 = pcVar4 + 1;
  if (*pcVar4 == '\0') {
    return 0;
  }
  iVar1 = strcmp(acStack_44,"RSA");
  if (iVar1 == 0) {
    iVar2 = 0;
    iVar1 = 6;
  }
  else {
    iVar1 = strcmp(acStack_44,"DSA");
    if (iVar1 == 0) {
      iVar2 = 0;
      iVar1 = 0x74;
    }
    else {
      iVar1 = strcmp(acStack_44,"ECDSA");
      if (iVar1 == 0) {
        iVar2 = 0;
        iVar1 = 0x198;
      }
      else {
        iVar2 = OBJ_sn2nid(acStack_44);
        if (iVar2 == 0) {
          iVar2 = OBJ_ln2nid(acStack_44);
        }
        iVar1 = 0;
      }
    }
  }
  iVar3 = strcmp(pcVar4,"RSA");
  if (iVar3 == 0) {
    iVar1 = 6;
  }
  else {
    iVar3 = strcmp(pcVar4,"DSA");
    if (iVar3 == 0) {
      iVar1 = 0x74;
      goto LAB_00ae07cc;
    }
    iVar3 = strcmp(pcVar4,"ECDSA");
    if (iVar3 == 0) {
      iVar1 = 0x198;
      goto LAB_00ae07cc;
    }
                    /* catch() { ... } // from try @ 00ae0b0c with catch @ 00ae0798 */
    iVar2 = OBJ_sn2nid(pcVar4);
    if (iVar2 == 0) {
      iVar2 = OBJ_ln2nid(pcVar4);
    }
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_00ae07cc:
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar6 = *param_3;
    if (uVar6 != 0) {
      uVar7 = 0;
      do {
        if ((*(int *)((long)param_3 + uVar7 * 4 + 8) == iVar1) &&
           (*(int *)((long)param_3 + uVar7 * 4 + 0xc) == iVar2)) {
          return 0;
        }
        uVar7 = uVar7 + 2;
      } while (uVar7 < uVar6);
    }
    *param_3 = uVar6 + 1;
    *(int *)((long)param_3 + uVar6 * 4 + 8) = iVar2;
    uVar6 = *param_3;
    uVar5 = 1;
    *param_3 = uVar6 + 1;
    *(int *)((long)param_3 + uVar6 * 4 + 8) = iVar1;
  }
                    /* try { // try from 00ae083c to 00be08cb has its CatchHandler @ 00ae0bac */
  return uVar5;
}

