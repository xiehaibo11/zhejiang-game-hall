
undefined8 FUN_00a30680(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  
                    /* try { // try from 00a3068c to 00b306bf has its CatchHandler @ 00a30710 */
  lVar2 = *param_1;
  *(undefined8 *)(lVar2 + 0x940) = 0;
  uVar1 = FUN_00a306d0();
  if ((int)uVar1 == 0) {
    if (((*(byte *)(lVar2 + 0x978) >> 4 & 1) == 0) && (*(char *)(lVar2 + 0x970) == '\0')) {
      FUN_00a2462c(*(undefined8 *)(lVar2 + 0x220),&DAT_013c61e6);
    }
    uVar1 = 0;
                    /* try { // try from 00a306c0 to 00b3075b has its CatchHandler @ 00a304f8 */
    *(undefined4 *)(lVar2 + 0xac8) = 0;
  }
  return uVar1;
}

