
uchar * SSL_SESSION_get_id(SSL_SESSION *s,uint *len)

{
  if (len != (uint *)0x0) {
    *len = *(uint *)(s->master_key + 0x24);
  }
  return s->master_key + 0x28;
}

