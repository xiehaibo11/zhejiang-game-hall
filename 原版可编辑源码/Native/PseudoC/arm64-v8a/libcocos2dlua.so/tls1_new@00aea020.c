
undefined8 tls1_new(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00aea02c to 00bea04f has its CatchHandler @ 00aea104 */
  uVar1 = ssl3_new();
  if ((int)uVar1 != 0) {
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

