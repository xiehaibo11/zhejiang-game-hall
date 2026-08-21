
undefined8 ssl_handshake_md(void)

{
  uint uVar1;
  
  uVar1 = ssl_get_algorithm2();
  if (0xb < (uVar1 & 0xff)) {
    return 0;
  }
  return (&DAT_01d38f10)[uVar1 & 0xff];
}

