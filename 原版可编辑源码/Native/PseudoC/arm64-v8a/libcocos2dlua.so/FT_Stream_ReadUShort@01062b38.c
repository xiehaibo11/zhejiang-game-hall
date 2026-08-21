
undefined2 FT_Stream_ReadUShort(long *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 local_24 [4];
  
                    /* try { // try from 01062b48 to 01162b5f has its CatchHandler @ 01062c34 */
  *param_2 = 0;
  lVar2 = param_1[2];
  if ((ulong)param_1[1] <= lVar2 + 1U) {
LAB_01062b90:
    *param_2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
                    /* try { // try from 01062ba4 to 01162bb7 has its CatchHandler @ 01062c44 */
    puVar3 = (undefined1 *)(*param_1 + lVar2);
    if (puVar3 == (undefined1 *)0x0) {
      uVar1 = 0;
      goto LAB_01062bc0;
    }
  }
  else {
    lVar2 = (*(code *)param_1[5])(param_1,lVar2,local_24,2);
    if (lVar2 != 2) goto LAB_01062b90;
    lVar2 = param_1[2];
    puVar3 = local_24;
  }
  uVar1 = CONCAT11(*puVar3,puVar3[1]);
                    /* try { // try from 01062bb8 to 01162c6f has its CatchHandler @ 01062adc */
LAB_01062bc0:
  param_1[2] = lVar2 + 2;
  return uVar1;
}

