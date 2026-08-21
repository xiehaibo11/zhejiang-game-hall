
int FT_Stream_ExtractFrame(long *param_1,ulong param_2,long *param_3)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  long lVar5;
  
  pcVar4 = (code *)param_1[5];
  if (pcVar4 == (code *)0x0) {
    uVar3 = param_1[2];
    if ((ulong)param_1[1] <= uVar3) {
      return 0x55;
    }
    if (param_1[1] - uVar3 < param_2) {
      return 0x55;
    }
    lVar2 = *param_1 + uVar3;
    param_1[8] = lVar2;
    param_1[9] = lVar2 + param_2;
    param_1[2] = uVar3 + param_2;
  }
  else {
    if ((ulong)param_1[1] < param_2) {
      return 0x55;
    }
    lVar5 = param_1[7];
                    /* try { // try from 010647dc to 011647e7 has its CatchHandler @ 01064c24 */
    if ((long)param_2 < 1) {
                    /* try { // try from 01064800 to 0116480f has its CatchHandler @ 01064c10 */
      if (param_2 != 0) {
        *param_1 = 0;
        return 6;
      }
      lVar2 = 0;
    }
    else {
                    /* try { // try from 010647ec to 011647f7 has its CatchHandler @ 01064c20 */
      lVar2 = (**(code **)(lVar5 + 8))(lVar5,param_2);
      if (lVar2 == 0) {
        *param_1 = 0;
        return 0x40;
      }
                    /* try { // try from 010647f8 to 011647ff has its CatchHandler @ 01064c18 */
      pcVar4 = (code *)param_1[5];
    }
    *param_1 = lVar2;
    uVar3 = (*pcVar4)(param_1,param_1[2],lVar2,param_2);
    lVar2 = *param_1;
    if (uVar3 < param_2) {
      if (lVar2 != 0) {
        (**(code **)(lVar5 + 0x10))(lVar5);
      }
      lVar2 = 0;
      iVar1 = 0x55;
      *param_1 = 0;
    }
    else {
      iVar1 = 0;
    }
    param_1[9] = lVar2 + param_2;
    param_1[8] = lVar2;
    param_1[2] = param_1[2] + uVar3;
    if (iVar1 != 0) {
      return iVar1;
    }
  }
  *param_3 = lVar2;
  param_1[8] = 0;
                    /* try { // try from 0106489c to 011648a7 has its CatchHandler @ 01064c5c */
  param_1[9] = 0;
  return 0;
}

