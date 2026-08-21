
undefined8 FUN_0104f374(long param_1,int param_2)

{
  int *piVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  long lVar5;
  
                    /* try { // try from 0104f374 to 0114f377 has its CatchHandler @ 0104f39c */
                    /* try { // try from 0104f378 to 0114f427 has its CatchHandler @ 0104f318 */
  lVar4 = *(long *)(param_1 + (long)param_2 * 0x6f8 + 0x128);
  if (lVar4 == 0) {
    return 0;
  }
  lVar5 = *(long *)(param_1 + (long)param_2 * 0x6f8 + 0xe0);
  do {
    piVar1 = (int *)(lVar4 + 0x2d4);
    lVar4 = *(long *)(lVar4 + 0x2c8);
                    /* catch() { ... } // from try @ 0104f374 with catch @ 0104f39c */
    lVar2 = lVar5 + (long)*piVar1 * 8;
    uVar3 = *(ushort *)(lVar2 + 6);
    *(ushort *)(lVar2 + 6) = uVar3 | *(ushort *)(lVar2 + 4) & 1;
    if ((uVar3 & 1) != 0 || (*(ushort *)(lVar2 + 4) & 1) != 0) {
      return 1;
    }
  } while (lVar4 != 0);
                    /* catch() { ... } // from try @ 0104f360 with catch @ 0104f3c0 */
  return 0;
}

