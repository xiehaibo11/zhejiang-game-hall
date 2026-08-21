
undefined8 FUN_01099ab8(long param_1,uint param_2)

{
  undefined8 uVar1;
  uint local_14;
  
  if ((param_2 & 0xffff0000) == 0) {
                    /* try { // try from 01099adc to 01199b47 has its CatchHandler @ 01099adc
                       catch() { ... } // from try @ 01099adc with catch @ 01099adc
                       catch() { ... } // from try @ 01099b54 with catch @ 01099adc */
    local_14 = param_2;
    if ((*(byte *)(param_1 + 0x20) & 1) == 0) {
      uVar1 = FUN_0109bfdc(param_1,&local_14,0);
    }
    else {
      uVar1 = FUN_0109be34(param_1,&local_14,0);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

