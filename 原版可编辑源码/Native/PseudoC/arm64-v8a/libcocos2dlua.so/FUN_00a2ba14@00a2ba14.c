
undefined8 * FUN_00a2ba14(long param_1,long param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  
  if (param_4 == (undefined8 *)0x0) {
    return param_3;
  }
  if (param_3 == (undefined8 *)0x0) {
LAB_00a2bab8:
    param_4[1] = 0;
    puVar1 = param_4;
  }
  else {
    puVar1 = (undefined8 *)FUN_00a2b908(param_1,param_2);
    lVar2 = puVar1[3];
    if (param_1 == lVar2) {
      if (param_2 == puVar1[4]) {
        param_4[2] = puVar1;
        param_4[3] = param_1;
        param_4[4] = param_2;
        uVar3 = *puVar1;
        param_4[1] = puVar1[1];
        *param_4 = uVar3;
        *puVar1 = param_4;
        puVar1[4] = 0xffffffffffffffff;
        puVar1[3] = -1;
        return param_4;
      }
    }
    else if (puVar1 == (undefined8 *)0x0) goto LAB_00a2bab8;
    if ((param_1 < lVar2) || ((param_1 <= lVar2 && (param_2 < (long)puVar1[4])))) {
      *param_4 = *puVar1;
      param_4[1] = puVar1;
    }
    else {
      uVar3 = puVar1[1];
      *param_4 = puVar1;
      param_4[1] = uVar3;
      puVar1 = puVar1 + 1;
    }
  }
  *puVar1 = 0;
  param_4[2] = 0;
  param_4[3] = param_1;
  param_4[4] = param_2;
                    /* try { // try from 00a2bae0 to 00b2bb13 has its CatchHandler @ 00a2bbe0 */
  return param_4;
}

