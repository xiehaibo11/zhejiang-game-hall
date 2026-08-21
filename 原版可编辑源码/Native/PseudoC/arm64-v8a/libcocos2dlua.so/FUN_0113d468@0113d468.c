
undefined8 FUN_0113d468(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x350);
  uVar1 = (**(code **)(lVar2 + 0x38))();
                    /* try { // try from 0113d490 to 0123d497 has its CatchHandler @ 0113d498 */
  if ((int)uVar1 != 0) {
                    /* catch() { ... } // from try @ 0113d448 with catch @ 0113d498
                       catch() { ... } // from try @ 0113d490 with catch @ 0113d498
                       try { // try from 0113d498 to 0123d4b7 has its CatchHandler @ 0113d410 */
    (**(code **)(lVar2 + 0x50))(param_1,param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}

