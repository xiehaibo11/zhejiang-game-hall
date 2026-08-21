
undefined8 BIO_ADDR_make(short *param_1,short *param_2)

{
  undefined8 uVar1;
  
  if (*param_2 == 10) {
    uVar1 = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 6) = uVar1;
  }
  else if (*param_2 != 2) {
                    /* try { // try from 00af1e8c to 00bf1e93 has its CatchHandler @ 00af1f24 */
    if (*param_1 == 1) {
      memcpy(param_1,param_2,0x6e);
      return 1;
    }
    return 0;
  }
  uVar1 = *(undefined8 *)param_2;
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)param_1 = uVar1;
  return 1;
}

