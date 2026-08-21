
/* WARNING: Removing unreachable block (ram,0x00aef714) */
/* WARNING: Removing unreachable block (ram,0x00aef704) */

undefined8 FUN_00aef51c(void *param_1,int param_2,ulong *param_3)

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
                    /* try { // try from 00aef5c4 to 00bef68b has its CatchHandler @ 00aef320 */
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
                    /* try { // try from 00aef6fc to 00bef70b has its CatchHandler @ 00aef7f8 */
      goto LAB_00aef680;
    }
                    /* catch() { ... } // from try @ 00aef410 with catch @ 00aef640 */
    iVar3 = strcmp(pcVar4,"ECDSA");
                    /* catch() { ... } // from try @ 00aef4a8 with catch @ 00aef648 */
    if (iVar3 == 0) {
      iVar1 = 0x198;
      goto LAB_00aef680;
    }
    iVar2 = OBJ_sn2nid(pcVar4);
    if (iVar2 == 0) {
      iVar2 = OBJ_ln2nid(pcVar4);
    }
  }
  if (iVar1 == 0) {
    return 0;
  }
LAB_00aef680:
  uVar5 = 0;
  if (iVar2 != 0) {
    uVar6 = *param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00aef7b0 with catch @ 00aef68c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aef830 with catch @ 00aef68c
                       catch(type#1 @ 00000000) { ... } // from try @ 00aef840 with catch @ 00aef68c
                        */
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
                    /* try { // try from 00aef6dc to 00bef6df has its CatchHandler @ 00aef7ec */
  }
                    /* try { // try from 00aef6f4 to 00bef6fb has its CatchHandler @ 00aef808 */
  return uVar5;
}

