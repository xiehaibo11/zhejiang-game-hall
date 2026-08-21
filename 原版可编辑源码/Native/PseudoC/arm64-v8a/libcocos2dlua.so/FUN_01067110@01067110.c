
undefined8 FUN_01067110(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
                    /* try { // try from 01067118 to 01167123 has its CatchHandler @ 0106713c */
                    /* try { // try from 01067124 to 0116738f has its CatchHandler @ 0106708c */
  if (*(int *)(param_2 + 0x90) == 0x6f75746c) {
                    /* catch() { ... } // from try @ 01067118 with catch @ 0106713c */
    uVar1 = FT_Outline_New(*param_1,(long)*(short *)(param_2 + 0xca),(long)*(short *)(param_2 + 200)
                           ,param_1 + 5);
    if ((int)uVar1 == 0) {
      FT_Outline_Copy(param_2 + 200,param_1 + 5);
      uVar1 = 0;
    }
  }
  else {
    uVar1 = 0x12;
  }
  return uVar1;
}

