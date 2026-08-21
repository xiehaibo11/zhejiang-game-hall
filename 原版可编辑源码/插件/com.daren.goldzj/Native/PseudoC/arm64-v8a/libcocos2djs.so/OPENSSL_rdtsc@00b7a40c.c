
undefined8 OPENSSL_rdtsc(void)

{
  undefined8 uVar1;
  
  if (((byte)OPENSSL_armcap_P >> 1 & 1) == 0) {
    return 0;
  }
  uVar1 = _armv7_tick();
  return uVar1;
}

