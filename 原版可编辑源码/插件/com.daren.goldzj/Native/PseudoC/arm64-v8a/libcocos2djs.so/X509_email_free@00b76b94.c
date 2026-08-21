
void X509_email_free(stack_st_OPENSSL_STRING *sk)

{
  OPENSSL_sk_pop_free(sk,&LAB_00b76ba0);
  return;
}

