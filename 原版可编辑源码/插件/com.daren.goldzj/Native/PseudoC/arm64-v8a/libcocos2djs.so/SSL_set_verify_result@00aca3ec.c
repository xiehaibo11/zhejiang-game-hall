
void SSL_set_verify_result(SSL *ssl,long v)

{
  ssl->first_packet = (int)v;
  ssl->client_version = (int)((ulong)v >> 0x20);
  return;
}

