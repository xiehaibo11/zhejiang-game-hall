
bool OCSP_REQ_CTX_http(undefined4 *param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  
  if (param_3 == (char *)0x0) {
    param_3 = "/";
  }
  iVar1 = BIO_printf(*(BIO **)(param_1 + 8),"%s %s HTTP/1.0\r\n",param_2,param_3);
  if (0 < iVar1) {
    *param_1 = 0x1009;
  }
  return 0 < iVar1;
}

