
void SSL_get0_next_proto_negotiated(SSL *s,uchar **data,uint *len)

{
  uint uVar1;
  uchar *puVar2;
  
  puVar2 = *(uchar **)&s[1].rwstate;
  *data = puVar2;
  uVar1 = 0;
  if (puVar2 != (uchar *)0x0) {
    uVar1 = (uint)*(byte *)&s[1].handshake_func;
  }
  *len = uVar1;
  return;
}

