
int SSL_set_generate_session_id(SSL *param_1,GEN_SESSION_CB param_2)

{
  SSL_SESSION *pSVar1;
  
  CRYPTO_THREAD_write_lock(param_1[6].session);
  pSVar1 = param_1[6].session;
  *(GEN_SESSION_CB *)&param_1->debug = param_2;
  CRYPTO_THREAD_unlock(pSVar1);
  return 1;
}

