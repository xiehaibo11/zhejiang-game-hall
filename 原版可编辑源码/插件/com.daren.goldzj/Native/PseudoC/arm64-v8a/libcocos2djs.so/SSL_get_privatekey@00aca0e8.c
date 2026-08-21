
evp_pkey_st * SSL_get_privatekey(SSL *ssl)

{
  if (ssl->verify_callback != (_func_3151 *)0x0) {
    return *(evp_pkey_st **)(*(long *)ssl->verify_callback + 8);
  }
  return (evp_pkey_st *)0x0;
}

