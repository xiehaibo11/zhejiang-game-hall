
undefined8 FUN_00a14d6c(undefined8 param_1,undefined4 *param_2,byte *param_3)

{
  byte bVar1;
  ulong uVar2;
  ushort *puVar3;
  
  bVar1 = *param_3;
  uVar2 = (ulong)bVar1;
  if (bVar1 < 0x20) {
                    /* try { // try from 00a14d78 to 00b14f07 has its CatchHandler @ 00a14d78
                       catch() { ... } // from try @ 00a14d78 with catch @ 00a14d78
                       catch() { ... } // from try @ 00a15100 with catch @ 00a14d78
                       catch() { ... } // from try @ 00a1527c with catch @ 00a14d78 */
    puVar3 = (ushort *)(&DAT_01302c66 + uVar2 * 2);
  }
  else {
    if (-1 < (char)bVar1) goto LAB_00a14da4;
    puVar3 = (ushort *)(&DAT_01302ca6 + (long)(int)(bVar1 - 0x80) * 2);
  }
  uVar2 = (ulong)*puVar3;
LAB_00a14da4:
  *param_2 = (int)uVar2;
  return 1;
}

