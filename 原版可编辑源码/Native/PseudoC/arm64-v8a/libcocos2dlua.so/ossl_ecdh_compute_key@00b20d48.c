
undefined8 ossl_ecdh_compute_key(void)

{
  undefined8 uVar1;
  long in_x3;
  code *UNRECOVERED_JUMPTABLE;
  
  UNRECOVERED_JUMPTABLE = *(code **)(**(long **)(in_x3 + 0x18) + 0x178);
  if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b20d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*UNRECOVERED_JUMPTABLE)();
    return uVar1;
  }
  ERR_put_error(0x10,0xf7,0xa0,"crypto/ec/ecdh_ossl.c",0x28);
  return 0;
}

