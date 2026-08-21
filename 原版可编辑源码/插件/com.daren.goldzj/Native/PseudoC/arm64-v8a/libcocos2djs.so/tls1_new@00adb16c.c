
undefined8 tls1_new(long param_1)

{
  undefined8 uVar1;
  
                    /* try { // try from 00adb16c to 00bdb173 has its CatchHandler @ 00adae18 */
                    /* try { // try from 00adb174 to 00bdb17b has its CatchHandler @ 00adb17c */
                    /* catch() { ... } // from try @ 00adb074 with catch @ 00adb17c
                       catch() { ... } // from try @ 00adb174 with catch @ 00adb17c
                       try { // try from 00adb17c to 00bdb233 has its CatchHandler @ 00adae18 */
  uVar1 = ssl3_new();
  if ((int)uVar1 != 0) {
                    /* catch() { ... } // from try @ 00adb0a0 with catch @ 00adb18c */
    (**(code **)(*(long *)(param_1 + 8) + 0x18))(param_1);
    uVar1 = 1;
  }
  return uVar1;
}

