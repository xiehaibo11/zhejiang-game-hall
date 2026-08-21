
void FUN_00a4a2bc(byte *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  byte bVar2;
  
  while( true ) {
    if (param_3 == 0) {
      return;
    }
    bVar2 = *param_2;
                    /* try { // try from 00a4a2c8 to 00b4a2db has its CatchHandler @ 00a4a324 */
    bVar1 = bVar2 - 0x20;
    if (0x19 < bVar2 - 0x61) {
      bVar1 = bVar2;
    }
    *param_1 = bVar1;
                    /* try { // try from 00a4a2dc to 00b4a343 has its CatchHandler @ 00a4a1e8 */
    if (*param_2 == 0) break;
    param_2 = param_2 + 1;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
  }
  return;
}

