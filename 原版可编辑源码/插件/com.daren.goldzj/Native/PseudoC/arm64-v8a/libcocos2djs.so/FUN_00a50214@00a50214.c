
ulong FUN_00a50214(long *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  size_t sVar6;
  ulong uVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  char *pcVar10;
  long lVar11;
  
                    /* catch() { ... } // from try @ 00a4ff80 with catch @ 00a50214 */
                    /* catch() { ... } // from try @ 00a4ff74 with catch @ 00a50218 */
                    /* catch() { ... } // from try @ 00a4ff54 with catch @ 00a5021c */
                    /* catch() { ... } // from try @ 00a4ff8c with catch @ 00a5022c */
  if (99 < param_2 - 200U) {
    FUN_00a23020(*param_1,"Couldn\'t set desired mode");
    return 0x11;
  }
  if (param_2 != 200) {
    FUN_00a22d58(*param_1,"Got a %03d response code instead of the assumed 200\n",param_2);
  }
                    /* try { // try from 00a50284 to 00b502d3 has its CatchHandler @ 00a50284
                       catch() { ... } // from try @ 00a50284 with catch @ 00a50284
                       catch() { ... } // from try @ 00a50394 with catch @ 00a50284 */
  switch(param_3) {
  case 0x13:
    iVar2 = *(int *)(*(long *)(*param_1 + 0x218) + 0x18);
    if (iVar2 == 0) {
LAB_00a504ac:
                    /* try { // try from 00a504ac to 00b504ef has its CatchHandler @ 00a504ac
                       catch() { ... } // from try @ 00a504ac with catch @ 00a504ac
                       catch() { ... } // from try @ 00a5051c with catch @ 00a504ac
                       catch() { ... } // from try @ 00a50538 with catch @ 00a504ac */
      uVar7 = FUN_00a5088c(param_1);
      return uVar7;
    }
    if ((iVar2 == 1) && (param_1[0xd4] != 0)) {
      uVar4 = FUN_00a3e3a4(param_1 + 0xc3,"SIZE %s");
                    /* try { // try from 00a502d4 to 00b502eb has its CatchHandler @ 00a50444 */
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar8 = 0x17;
    }
    else {
      if (param_1[0xd4] == 0) goto LAB_00a504ac;
      uVar4 = FUN_00a3e3a4(param_1 + 0xc3,"REST %d",0);
      if (uVar4 != 0) {
        return (ulong)uVar4;
      }
      uVar8 = 0x1a;
    }
    break;
  case 0x14:
    lVar11 = *param_1;
    if (*(int *)(lVar11 + 0x5f8) == 2) {
                    /* try { // try from 00a50300 to 00b50313 has its CatchHandler @ 00a50440 */
      pcVar10 = *(char **)(lVar11 + 0x8cc0);
      pcVar5 = (char *)0x0;
      if (pcVar10 == (char *)0x0) goto LAB_00a503e4;
                    /* try { // try from 00a50314 to 00b50323 has its CatchHandler @ 00a5042c */
      if ((*pcVar10 == '\0') || (pcVar5 = strchr(pcVar10,0x2f), pcVar5 == (char *)0x0)) {
        pcVar5 = (char *)0x0;
        pcVar10 = *(char **)(lVar11 + 0x6a0);
      }
      else {
        pcVar5 = (char *)(*(code *)PTR_strdup_01d1b758)(pcVar10);
        if (pcVar5 == (char *)0x0) {
          return 0x1b;
        }
                    /* try { // try from 00a5033c to 00b50343 has its CatchHandler @ 00a50410 */
        sVar6 = strlen(pcVar5);
                    /* try { // try from 00a50344 to 00b5035b has its CatchHandler @ 00a50454 */
                    /* try { // try from 00a5035c to 00b50363 has its CatchHandler @ 00a50428 */
        if ((pcVar5[sVar6 - 1] == '/') || (pcVar10 = strrchr(pcVar5,0x2f), pcVar10 == (char *)0x0))
        goto LAB_00a503e4;
                    /* try { // try from 00a50364 to 00b50393 has its CatchHandler @ 00a50430 */
        pcVar10[1] = '\0';
        pcVar10 = *(char **)(lVar11 + 0x6a0);
      }
    }
    else {
      pcVar5 = (char *)0x0;
LAB_00a503e4:
      pcVar10 = *(char **)(lVar11 + 0x6a0);
    }
    if (pcVar10 == (char *)0x0) {
      pcVar10 = "NLST";
      if (*(char *)(lVar11 + 0x615) == '\0') {
        pcVar10 = "LIST";
      }
    }
                    /* catch() { ... } // from try @ 00a5033c with catch @ 00a50410 */
    pcVar1 = pcVar5;
    pcVar3 = " ";
    if (pcVar5 == (char *)0x0) {
      pcVar1 = "";
      pcVar3 = "";
    }
                    /* catch() { ... } // from try @ 00a5035c with catch @ 00a50428 */
                    /* catch() { ... } // from try @ 00a50314 with catch @ 00a5042c */
    lVar11 = FUN_00a0e870("%s%s%s",pcVar10,pcVar3,pcVar1);
                    /* catch() { ... } // from try @ 00a50364 with catch @ 00a50430 */
    if (lVar11 == 0) {
                    /* try { // try from 00a504f0 to 00b5051b has its CatchHandler @ 00a50568 */
      (*(code *)PTR_free_01d1b748)(pcVar5);
      return 0x1b;
    }
                    /* catch() { ... } // from try @ 00a50300 with catch @ 00a50440 */
                    /* catch() { ... } // from try @ 00a502d4 with catch @ 00a50444 */
    uVar4 = FUN_00a3e3a4(param_1 + 0xc3,"%s",lVar11);
                    /* catch() { ... } // from try @ 00a50344 with catch @ 00a50454 */
    (*(code *)PTR_free_01d1b748)(pcVar5);
    (*(code *)PTR_free_01d1b748)(lVar11);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar8 = 0x1f;
    break;
  case 0x15:
    uVar7 = FUN_00a4ff08(param_1,1,0xd);
    return uVar7;
  case 0x16:
                    /* try { // try from 00a50394 to 00b504ab has its CatchHandler @ 00a50284 */
    puVar9 = *(undefined8 **)(*param_1 + 1000);
    *(undefined4 *)((long)param_1 + 0x6bc) = 0;
    if (puVar9 == (undefined8 *)0x0) {
      uVar7 = FUN_00a50698(param_1,0);
      return uVar7;
    }
    pcVar10 = (char *)*puVar9;
    pcVar5 = pcVar10 + 1;
    if (*pcVar10 != '*') {
      pcVar5 = pcVar10;
    }
    *(uint *)(param_1 + 0xd8) = (uint)(*pcVar10 == '*');
    uVar4 = FUN_00a3e3a4(param_1 + 0xc3,"%s",pcVar5);
    if (uVar4 != 0) {
      return (ulong)uVar4;
    }
    uVar8 = 0xe;
    break;
  default:
    return 0;
  }
  *(undefined4 *)(param_1 + 0xd9) = uVar8;
  return 0;
}

