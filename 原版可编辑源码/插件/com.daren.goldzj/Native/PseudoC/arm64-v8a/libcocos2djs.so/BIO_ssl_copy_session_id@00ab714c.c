
int BIO_ssl_copy_session_id(BIO *to,BIO *from)

{
  int extraout_w0;
  uint uVar1;
  BIO *pBVar2;
  BIO *pBVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  pBVar2 = BIO_find_type(to,0x207);
  pBVar3 = BIO_find_type(from,0x207);
  uVar1 = 0;
  if ((pBVar2 != (BIO *)0x0) && (pBVar3 != (BIO *)0x0)) {
    puVar4 = (undefined8 *)BIO_get_data(pBVar2);
    puVar5 = (undefined8 *)BIO_get_data(pBVar3);
    if (((SSL *)*puVar4 == (SSL *)0x0) || ((SSL *)*puVar5 == (SSL *)0x0)) {
      uVar1 = 0;
    }
    else {
      SSL_copy_session_id((SSL *)*puVar4,(SSL *)*puVar5);
      uVar1 = (uint)(extraout_w0 != 0);
    }
  }
                    /* try { // try from 00ab71c4 to 00bb7337 has its CatchHandler @ 00ab6b94 */
  return uVar1;
}

