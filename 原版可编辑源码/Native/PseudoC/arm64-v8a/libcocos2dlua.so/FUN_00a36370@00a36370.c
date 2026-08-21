
undefined8 FUN_00a36370(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
                    /* try { // try from 00a36388 to 00b3639f has its CatchHandler @ 00a36468 */
  cVar1 = *(char *)((long)param_1 + 0x3be);
  lVar4 = *param_1;
                    /* try { // try from 00a363a4 to 00b363cf has its CatchHandler @ 00a36464 */
  if (((cVar1 == '\0') || (*(char *)((long)param_1 + 0x3c1) == '\0')) &&
     ((char)param_1[0x78] == '\0')) {
    *(undefined1 *)(lVar4 + 0x8c10) = 1;
    *(undefined1 *)(lVar4 + 0x8c30) = 1;
    return 0;
  }
  lVar3 = *(long *)(lVar4 + 0x8bf8);
                    /* try { // try from 00a363d0 to 00b363f7 has its CatchHandler @ 00a36338 */
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8c00) == 0)) {
    *(long *)(lVar4 + 0x8c00) = lVar3;
  }
  lVar3 = *(long *)(lVar4 + 0x8c18);
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8c20) == 0)) {
    *(long *)(lVar4 + 0x8c20) = lVar3;
                    /* try { // try from 00a36450 to 00b36483 has its CatchHandler @ 00a36338 */
  }
                    /* try { // try from 00a363f8 to 00b3640b has its CatchHandler @ 00a36468 */
  if ((cVar1 == '\0') || (*(byte *)((long)param_1 + 0x3c9) != (param_4 & 1))) {
    *(undefined1 *)(lVar4 + 0x8c30) = 1;
  }
  else {
    uVar2 = FUN_00a364cc(param_1,(long *)(lVar4 + 0x8c18),param_2,param_3,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
                    /* catch() { ... } // from try @ 00a363a4 with catch @ 00a36464
                       catch() { ... } // from try @ 00a36448 with catch @ 00a36464 */
                    /* catch() { ... } // from try @ 00a36388 with catch @ 00a36468
                       catch() { ... } // from try @ 00a363f8 with catch @ 00a36468 */
  if ((((*(char *)(lVar4 + 0x8b18) != '\0') && (*(char *)((long)param_1 + 0x3cf) == '\0')) &&
      (*(long *)(lVar4 + 0x8b20) != 0)) &&
     ((*(char *)(lVar4 + 0x61c) == '\0' &&
      (uVar2 = FUN_00a4a0f8(*(long *)(lVar4 + 0x8b20),param_1[0x18]), (int)uVar2 == 0)))) {
    *(undefined1 *)(lVar4 + 0x8c10) = 1;
                    /* try { // try from 00a36448 to 00b3644f has its CatchHandler @ 00a36464 */
    return uVar2;
  }
                    /* try { // try from 00a36484 to 00b364d3 has its CatchHandler @ 00a36484
                       catch() { ... } // from try @ 00a36484 with catch @ 00a36484
                       catch() { ... } // from try @ 00a3651c with catch @ 00a36484
                       catch() { ... } // from try @ 00a3659c with catch @ 00a36484 */
  uVar2 = FUN_00a364cc(param_1,(long *)(lVar4 + 0x8bf8),param_2,param_3,0);
  return uVar2;
}

