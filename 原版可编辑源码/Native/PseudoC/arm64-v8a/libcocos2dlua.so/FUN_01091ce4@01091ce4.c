
undefined8 FUN_01091ce4(long *param_1,int *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  lVar3 = *(long *)(param_2 + 4);
  if (param_2[7] != 0) {
    lVar3 = (long)(lVar3 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
                    /* try { // try from 01091d34 to 01191d4b has its CatchHandler @ 01091e58 */
  if (*param_2 == 1) {
    lVar1 = *(long *)(lVar4 + 0x188) + *(long *)(lVar4 + 0x180);
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    lVar1 = *(long *)(*(long *)(lVar4 + 0x40) + 0x18) + 0x20 >> 6;
  }
  if (lVar3 + 0x20 >> 6 == lVar1) {
    FT_Select_Metrics(lVar4,0);
    uVar2 = 0;
    param_1[6] = *(long *)(lVar4 + 0x180) << 6;
                    /* try { // try from 01091d7c to 01191d7f has its CatchHandler @ 01091e54 */
    param_1[7] = *(long *)(lVar4 + 0x188) * -0x40;
    param_1[9] = (long)*(short *)(lVar4 + 0x1b4) << 6;
  }
  else {
                    /* try { // try from 01091da0 to 01191db7 has its CatchHandler @ 01091e68 */
    uVar2 = 0x17;
  }
  return uVar2;
}

