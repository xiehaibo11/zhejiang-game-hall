
char * SSL_rstate_string_long(SSL *s)

{
  uint uVar1;
  
  uVar1 = *(int *)((long)&s[1].compress + 4) - 0xf0;
  if (uVar1 < 3) {
    return (&PTR_s_read_header_016ac160)[(int)uVar1];
  }
  return "unknown";
}

