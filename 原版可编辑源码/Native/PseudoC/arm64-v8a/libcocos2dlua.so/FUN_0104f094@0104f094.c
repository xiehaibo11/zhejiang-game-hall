
char * FUN_0104f094(undefined4 param_1,int param_2,char *param_3,size_t param_4)

{
  int *piVar1;
  char *pcVar2;
  
  switch(param_1) {
  case 0:
    pcVar2 = "SSL_ERROR_NONE";
    break;
  case 1:
    return "SSL_ERROR_SSL";
  case 2:
    pcVar2 = "SSL_ERROR_WANT_READ";
    break;
  case 3:
    pcVar2 = "SSL_ERROR_WANT_WRITE";
    break;
  case 4:
    pcVar2 = "SSL_ERROR_WANT_X509_LOOKUP";
    break;
  case 5:
    if (param_2 == -1) {
      piVar1 = (int *)__errno("SSL_ERROR_SSL");
      pcVar2 = strerror(*piVar1);
      lws_snprintf(param_3,param_4,"SSL_ERROR_SYSCALL: %s",pcVar2);
      return param_3;
    }
    if (param_2 == 0) {
      lws_snprintf(param_3,param_4,"SSL_ERROR_SYSCALL: EOF");
      return param_3;
    }
    pcVar2 = "SSL_ERROR_SYSCALL";
    break;
  case 6:
    pcVar2 = "SSL_ERROR_ZERO_RETURN";
    break;
  case 7:
    pcVar2 = "SSL_ERROR_WANT_CONNECT";
    break;
  case 8:
    pcVar2 = "SSL_ERROR_WANT_ACCEPT";
    break;
  default:
    return "SSL_ERROR_UNKNOWN";
  }
  pcVar2 = strncpy(param_3,pcVar2,param_4);
  return pcVar2;
}

