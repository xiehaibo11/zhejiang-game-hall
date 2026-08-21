
char * SSL_rstate_string(SSL *s)

{
  uint uVar1;
  
  uVar1 = *(int *)((long)&s[1].compress + 4) - 0xf0;
  if (uVar1 < 3) {
    return (&PTR_DAT_016ac180)[(int)uVar1];
  }
  return "unknown";
}

