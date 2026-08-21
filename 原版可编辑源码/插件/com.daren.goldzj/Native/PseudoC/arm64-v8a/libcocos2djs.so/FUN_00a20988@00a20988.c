
undefined8 FUN_00a20988(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  cVar1 = *(char *)((long)param_1 + 0x3be);
  lVar4 = *param_1;
  if (((cVar1 == '\0') || (*(char *)((long)param_1 + 0x3c1) == '\0')) &&
     ((char)param_1[0x78] == '\0')) {
    *(undefined1 *)(lVar4 + 0x8c10) = 1;
    *(undefined1 *)(lVar4 + 0x8c30) = 1;
    return 0;
  }
  lVar3 = *(long *)(lVar4 + 0x8bf8);
                    /* try { // try from 00a209dc to 00b20acf has its CatchHandler @ 00a209dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a209dc with catch @ 00a209dc
                       catch(type#1 @ 00000000) { ... } // from try @ 00a20ad8 with catch @ 00a209dc
                        */
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8c00) == 0)) {
    *(long *)(lVar4 + 0x8c00) = lVar3;
  }
  lVar3 = *(long *)(lVar4 + 0x8c18);
  if ((lVar3 != 0) && (*(long *)(lVar4 + 0x8c20) == 0)) {
    *(long *)(lVar4 + 0x8c20) = lVar3;
  }
  if ((cVar1 == '\0') || (*(byte *)((long)param_1 + 0x3c9) != (param_4 & 1))) {
    *(undefined1 *)(lVar4 + 0x8c30) = 1;
  }
  else {
    uVar2 = FUN_00a20ae4(param_1,(long *)(lVar4 + 0x8c18),param_2,param_3,1);
    if ((int)uVar2 != 0) {
      return uVar2;
    }
  }
                    /* try { // try from 00a20ad0 to 00b20ad7 has its CatchHandler @ 00a20ba8 */
  if ((((*(char *)(lVar4 + 0x8b18) != '\0') && (*(char *)((long)param_1 + 0x3cf) == '\0')) &&
      (*(long *)(lVar4 + 0x8b20) != 0)) &&
     ((*(char *)(lVar4 + 0x61c) == '\0' &&
      (uVar2 = FUN_00a33710(*(long *)(lVar4 + 0x8b20),param_1[0x18]), (int)uVar2 == 0)))) {
                    /* try { // try from 00a20ad8 to 00b20bab has its CatchHandler @ 00a209dc */
    *(undefined1 *)(lVar4 + 0x8c10) = 1;
    return uVar2;
  }
  uVar2 = FUN_00a20ae4(param_1,(long *)(lVar4 + 0x8bf8),param_2,param_3,0);
  return uVar2;
}

