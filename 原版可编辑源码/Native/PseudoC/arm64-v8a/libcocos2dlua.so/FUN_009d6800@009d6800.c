
long FUN_009d6800(long param_1,long param_2)

{
                    /* try { // try from 009d6808 to 00ad6873 has its CatchHandler @ 009d80a4 */
  param_1 = param_1 + 0x10;
  if (*(char **)(param_2 + 8) !=
      "ZN8universe4core7Service17performInNextLoopERKNSt6__ndk18functionIFvvEEEE3$_0") {
    param_1 = 0;
  }
  return param_1;
}

