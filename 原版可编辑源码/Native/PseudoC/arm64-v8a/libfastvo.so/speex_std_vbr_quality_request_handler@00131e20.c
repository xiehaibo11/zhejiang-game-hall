
undefined8
speex_std_vbr_quality_request_handler(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  uint uVar2;
  float local_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uVar2 = speex_bits_unpack_unsigned(param_1,4);
  local_2c = (float)uVar2;
  speex_encoder_ctl(param_3,0xe,&local_2c);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

