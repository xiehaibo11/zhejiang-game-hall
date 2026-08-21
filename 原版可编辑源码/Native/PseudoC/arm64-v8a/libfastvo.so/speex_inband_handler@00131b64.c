
undefined8 speex_inband_handler(undefined8 param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  undefined8 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar3;
  
  iVar1 = speex_bits_unpack_unsigned(param_1,4);
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + (long)iVar1 * 0x28 + 8);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    if (iVar1 < 2) {
      uVar3 = 1;
    }
    else if (iVar1 < 8) {
      uVar3 = 4;
    }
    else if (iVar1 < 10) {
      uVar3 = 8;
    }
    else if (iVar1 < 0xc) {
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x20;
      if (0xd < iVar1) {
        uVar3 = 0x40;
      }
    }
    speex_bits_advance(param_1,uVar3);
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00131bbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*UNRECOVERED_JUMPTABLE)
                    (param_1,param_3,*(undefined8 *)(param_2 + (long)iVar1 * 0x28 + 0x10));
  return uVar2;
}

