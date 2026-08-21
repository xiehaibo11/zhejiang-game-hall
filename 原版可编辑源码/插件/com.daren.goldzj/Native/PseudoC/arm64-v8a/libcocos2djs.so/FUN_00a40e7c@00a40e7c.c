
undefined8 FUN_00a40e7c(long param_1,char *param_2,int param_3)

{
  char *pcVar1;
  size_t __n;
  ssize_t sVar2;
  int *piVar3;
  char *pcVar4;
  undefined8 uVar5;
  char cVar6;
  ulong uVar7;
  
  pcVar1 = (char *)(*(code *)PTR_malloc_01d1b740)(0x400);
                    /* catch() { ... } // from try @ 00a40d04 with catch @ 00a40eb0 */
                    /* catch() { ... } // from try @ 00a40cf8 with catch @ 00a40eb4 */
                    /* catch() { ... } // from try @ 00a40cd8 with catch @ 00a40eb8 */
  __n = strlen(param_2);
  if (pcVar1 != (char *)0x0) {
    for (; __n != 0; __n = __n - sVar2) {
                    /* catch() { ... } // from try @ 00a40d10 with catch @ 00a40ec8 */
      while (sVar2 = send(*(int *)(param_1 + 0x4f0),param_2,__n,0x4000), sVar2 == -1) {
        piVar3 = (int *)__errno();
        if (*piVar3 != 4) goto LAB_00a41058;
      }
      param_2 = param_2 + sVar2;
    }
    uVar7 = 0;
    pcVar4 = pcVar1;
LAB_00a40f68:
    do {
      pcVar1 = pcVar4;
                    /* try { // try from 00a40f74 to 00b40f8b has its CatchHandler @ 00a41160 */
      sVar2 = recv(*(int *)(param_1 + 0x4f0),pcVar1 + uVar7,0x400,0);
      if (sVar2 == -1) {
        piVar3 = (int *)__errno();
        cVar6 = '\x04';
        if (*piVar3 == 4) {
          cVar6 = '\x05';
        }
        pcVar4 = pcVar1;
        if (cVar6 == '\0') goto LAB_00a40f68;
      }
      else {
        if (sVar2 == 0) goto LAB_00a41058;
        uVar7 = sVar2 + uVar7;
                    /* try { // try from 00a40f20 to 00b40f73 has its CatchHandler @ 00a40f20
                       catch() { ... } // from try @ 00a40f20 with catch @ 00a40f20
                       catch() { ... } // from try @ 00a410e4 with catch @ 00a40f20 */
        if (pcVar1[uVar7 - 1] == '\n') {
                    /* try { // try from 00a40fa0 to 00b40fab has its CatchHandler @ 00a41158 */
                    /* try { // try from 00a40fac to 00b410e3 has its CatchHandler @ 00a41170 */
          pcVar1[uVar7 - 1] = '\0';
          if ((uVar7 < 4) || (param_3 == 1 && uVar7 == 3)) goto LAB_00a41058;
          if (param_3 == 1) {
            if ((*pcVar1 != 'Y') || (pcVar1[1] != 'R')) goto LAB_00a41058;
          }
          else {
            if (param_3 != 2) goto LAB_00a41028;
            if (*pcVar1 == 'A') {
              if (pcVar1[1] != 'F') goto LAB_00a41058;
            }
            else if ((*pcVar1 != 'K') || (pcVar1[1] != 'K')) goto LAB_00a41058;
          }
          if (pcVar1[2] == ' ') {
LAB_00a41028:
            uVar5 = FUN_00a0e870(&DAT_01896aa9,uVar7 - 4,pcVar1 + 3);
            *(undefined8 *)(param_1 + 0x500) = uVar5;
            (*(code *)PTR_free_01d1b748)(pcVar1);
            return 0;
          }
          goto LAB_00a41058;
        }
        pcVar4 = (char *)FUN_00a379b0(pcVar1,uVar7 + 0x400);
        cVar6 = '\x01';
        if (pcVar4 != (char *)0x0) goto LAB_00a40f68;
      }
      pcVar4 = pcVar1;
    } while (cVar6 == '\x05');
    if (cVar6 == '\x04') {
LAB_00a41058:
      (*(code *)PTR_free_01d1b748)(pcVar1);
      return 9;
    }
  }
                    /* try { // try from 00a40f94 to 00b40f9f has its CatchHandler @ 00a4115c */
  return 0x1b;
}

