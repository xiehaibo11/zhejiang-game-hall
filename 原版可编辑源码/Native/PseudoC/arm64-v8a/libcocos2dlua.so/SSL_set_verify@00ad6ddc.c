
void SSL_set_verify(SSL *s,int mode,callback *callback)

{
  *(int *)&s->verify_result = mode;
  if (callback != (callback *)0x0) {
    (s->ex_data).sk = (stack_st_void *)callback;
  }
  return;
}

