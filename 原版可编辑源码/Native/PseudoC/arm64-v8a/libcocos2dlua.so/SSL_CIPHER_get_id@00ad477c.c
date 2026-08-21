
ulong SSL_CIPHER_get_id(SSL_CIPHER *c)

{
  return (ulong)(uint)c->id;
}

