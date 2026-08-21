
undefined8 FUN_01095388(long *param_1,int *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  
  lVar2 = *param_1;
  lVar4 = *(long *)(param_2 + 4);
  lVar5 = *(long *)(lVar2 + 0x108);
                    /* try { // try from 010953ac to 011953b3 has its CatchHandler @ 01095528 */
  if (param_2[7] != 0) {
                    /* try { // try from 010953b4 to 0119552b has its CatchHandler @ 01095360 */
    lVar4 = (long)(lVar4 * (ulong)(uint)param_2[7] + 0x24) / 0x48;
  }
  if (*param_2 == 1) {
    lVar1 = *(long *)(lVar5 + 0x48) + *(long *)(lVar5 + 0x40);
  }
  else {
    if (*param_2 != 0) {
      return 7;
    }
    lVar1 = *(long *)(*(long *)(lVar2 + 0x40) + 0x18) + 0x20 >> 6;
  }
  if (lVar4 + 0x20 >> 6 == lVar1) {
    FT_Select_Metrics(lVar2,0);
    uVar3 = 0;
    param_1[6] = *(long *)(lVar5 + 0x40) << 6;
    param_1[7] = *(long *)(lVar5 + 0x48) * -0x40;
    param_1[9] = (ulong)*(ushort *)(lVar5 + 8) << 6;
  }
  else {
    uVar3 = 0x17;
  }
  return uVar3;
}

