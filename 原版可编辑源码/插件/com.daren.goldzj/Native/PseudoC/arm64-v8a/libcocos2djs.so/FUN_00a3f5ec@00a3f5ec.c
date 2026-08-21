
/* WARNING: Type propagation algorithm not settling */

int FUN_00a3f5ec(long *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  size_t sVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  long lVar8;
  char *__s;
  undefined1 *puVar9;
  undefined8 uVar10;
  undefined8 local_60;
  long local_58;
  undefined1 *local_48;
  
  lVar8 = *param_1;
  uVar1 = (undefined4)param_1[0x4c];
  __s = *(char **)(lVar8 + 0x8cc0);
  *param_2 = 1;
  sVar3 = strlen(__s);
  if (sVar3 < 3) {
    local_48 = &DAT_0189703a;
    local_60 = 0;
    puVar9 = (undefined1 *)0x0;
    goto LAB_00a3f798;
  }
  sVar3 = strlen(__s + 2);
  if (sVar3 != 0) {
                    /* catch() { ... } // from try @ 00a3f424 with catch @ 00a3f660 */
                    /* catch() { ... } // from try @ 00a3f308 with catch @ 00a3f664 */
    if (sVar3 < 8) {
                    /* catch() { ... } // from try @ 00a3f430 with catch @ 00a3f668
                       catch() { ... } // from try @ 00a3f4e0 with catch @ 00a3f668 */
      uVar5 = 0;
    }
    else {
      uVar5 = sVar3 & 0xfffffffffffffff8;
      if (uVar5 != 0) {
        pcVar6 = __s + 4;
        uVar7 = uVar5;
        do {
          uVar10 = *(undefined8 *)(pcVar6 + -2);
          if ((char)uVar10 == '?') {
            pcVar6[-2] = '\t';
          }
          if ((char)((ulong)uVar10 >> 8) == '?') {
            pcVar6[-1] = '\t';
          }
                    /* catch() { ... } // from try @ 00a3f1ec with catch @ 00a3f700 */
          if ((char)((ulong)uVar10 >> 0x10) == '?') {
                    /* catch() { ... } // from try @ 00a3f2e8 with catch @ 00a3f6a4 */
            *pcVar6 = '\t';
                    /* catch() { ... } // from try @ 00a3f328 with catch @ 00a3f6a8
                       catch() { ... } // from try @ 00a3f484 with catch @ 00a3f6a8 */
          }
          if ((char)((ulong)uVar10 >> 0x18) == '?') {
            pcVar6[1] = '\t';
          }
                    /* catch() { ... } // from try @ 00a3f224 with catch @ 00a3f710
                       catch() { ... } // from try @ 00a3f3e4 with catch @ 00a3f710
                       catch() { ... } // from try @ 00a3f584 with catch @ 00a3f710 */
          if ((char)((ulong)uVar10 >> 0x20) == '?') {
            pcVar6[2] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x28) == '?') {
            pcVar6[3] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x30) == '?') {
            pcVar6[4] = '\t';
          }
          if ((char)((ulong)uVar10 >> 0x38) == '?') {
            pcVar6[5] = '\t';
          }
          uVar7 = uVar7 - 8;
          pcVar6 = pcVar6 + 8;
        } while (uVar7 != 0);
        if (sVar3 == uVar5) goto LAB_00a3f770;
      }
    }
    lVar4 = sVar3 - uVar5;
    pcVar6 = __s + uVar5 + 2;
    do {
      if (*pcVar6 == '?') {
        *pcVar6 = '\t';
      }
      lVar4 = lVar4 + -1;
                    /* try { // try from 00a3f768 to 00b3f7b7 has its CatchHandler @ 00a3f768
                       catch() { ... } // from try @ 00a3f768 with catch @ 00a3f768
                       catch() { ... } // from try @ 00a3f870 with catch @ 00a3f768 */
      pcVar6 = pcVar6 + 1;
    } while (lVar4 != 0);
  }
LAB_00a3f770:
  FUN_00a2eb18(lVar8,__s + 2,0,&local_48,&local_60,0);
  puVar9 = local_48;
  if (local_48 == (undefined1 *)0x0) {
    return 0x1b;
  }
LAB_00a3f798:
  lVar4 = FUN_00a16d0c(local_60);
  while( true ) {
                    /* try { // try from 00a3f7b8 to 00b3f7cf has its CatchHandler @ 00a3f938 */
    iVar2 = FUN_00a232e8(param_1,uVar1,local_48,lVar4,&local_58);
    if ((iVar2 != 0) || (iVar2 = FUN_00a23808(param_1,2,local_48,local_58), iVar2 != 0))
    goto LAB_00a3f818;
                    /* try { // try from 00a3f7e4 to 00b3f7f7 has its CatchHandler @ 00a3f934 */
    lVar4 = lVar4 - local_58;
    local_48 = local_48 + local_58;
                    /* try { // try from 00a3f7f8 to 00b3f807 has its CatchHandler @ 00a3f908 */
    if (lVar4 < 1) break;
    iVar2 = FUN_00a159e8(0xffffffff,0xffffffff,uVar1,100);
    if (iVar2 < 0) {
      iVar2 = 0x37;
LAB_00a3f818:
                    /* try { // try from 00a3f820 to 00b3f827 has its CatchHandler @ 00a3f8ec */
                    /* try { // try from 00a3f828 to 00b3f837 has its CatchHandler @ 00a3f91c */
      (*(code *)PTR_free_01d1b748)(puVar9);
LAB_00a3f82c:
                    /* try { // try from 00a3f838 to 00b3f83f has its CatchHandler @ 00a3f904 */
      FUN_00a23020(lVar8,"Failed sending Gopher request");
      return iVar2;
    }
  }
                    /* try { // try from 00a3f840 to 00b3f86f has its CatchHandler @ 00a3f90c */
  (*(code *)PTR_free_01d1b748)(puVar9);
  iVar2 = FUN_00a2317c(uVar1,param_1,&DAT_018bc985);
  if (iVar2 == 0) {
                    /* try { // try from 00a3f870 to 00b3f987 has its CatchHandler @ 00a3f768 */
    iVar2 = FUN_00a23808(param_1,2,&DAT_018bc985,2);
    if (iVar2 != 0) {
      return iVar2;
    }
    FUN_00a335d8(param_1,0,0xffffffffffffffff,0,lVar8 + 0x98,0xffffffff,0);
    return 0;
  }
  goto LAB_00a3f82c;
}

