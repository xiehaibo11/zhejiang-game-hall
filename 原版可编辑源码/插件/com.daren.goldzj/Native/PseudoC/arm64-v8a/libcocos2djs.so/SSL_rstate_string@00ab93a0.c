
char * SSL_rstate_string(SSL *s)

{
  uint uVar1;
  
                    /* try { // try from 00ab93a4 to 00bb93ab has its CatchHandler @ 00ab9498 */
  uVar1 = *(int *)((long)&s[1].compress + 4) - 0xf0;
  if (uVar1 < 3) {
    return (&PTR_DAT_01c71230)[(int)uVar1];
  }
  return "unknown";
}

