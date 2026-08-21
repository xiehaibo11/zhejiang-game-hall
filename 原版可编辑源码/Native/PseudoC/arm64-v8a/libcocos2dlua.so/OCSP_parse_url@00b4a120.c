
int OCSP_parse_url(char *url,char **phost,char **pport,char **ppath,int *pssl)

{
  int iVar1;
  char *__s;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *str;
  int line;
  char *__s_00;
  
  *phost = (char *)0x0;
  *pport = (char *)0x0;
  *ppath = (char *)0x0;
  __s = CRYPTO_strdup(url,"crypto/ocsp/ocsp_lib.c",0x81);
  if (__s == (char *)0x0) {
LAB_00b4a2f8:
    iVar1 = 0x41;
    line = 0xcc;
  }
  else {
    pcVar2 = strchr(__s,0x3a);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
      iVar1 = strcmp(__s,"http");
      if (iVar1 == 0) {
        iVar1 = 0;
        str = "80";
      }
      else {
        iVar1 = strcmp(__s,"https");
        if (iVar1 != 0) goto LAB_00b4a2dc;
        str = "443";
        iVar1 = 1;
      }
      *pssl = iVar1;
      if ((pcVar2[1] == '/') && (pcVar2[2] == '/')) {
        __s_00 = pcVar2 + 3;
        pcVar3 = strchr(__s_00,0x2f);
        if (pcVar3 == (char *)0x0) {
          pcVar3 = CRYPTO_strdup("/","crypto/ocsp/ocsp_lib.c",0xa3);
          *ppath = pcVar3;
        }
        else {
          pcVar4 = CRYPTO_strdup(pcVar3,"crypto/ocsp/ocsp_lib.c",0xa5);
          *ppath = pcVar4;
          *pcVar3 = '\0';
          pcVar3 = *ppath;
        }
        if (pcVar3 != (char *)0x0) {
          pcVar3 = __s_00;
          if (*__s_00 == '[') {
            pcVar3 = pcVar2 + 4;
            pcVar2 = strchr(pcVar3,0x5d);
            if (pcVar2 == (char *)0x0) goto LAB_00b4a2dc;
            __s_00 = pcVar2 + 1;
            *pcVar2 = '\0';
          }
          pcVar2 = strchr(__s_00,0x3a);
          if (pcVar2 != (char *)0x0) {
            str = pcVar2 + 1;
            *pcVar2 = '\0';
          }
          pcVar2 = CRYPTO_strdup(str,"crypto/ocsp/ocsp_lib.c",0xbe);
          *pport = pcVar2;
          if (pcVar2 != (char *)0x0) {
            pcVar2 = CRYPTO_strdup(pcVar3,"crypto/ocsp/ocsp_lib.c",0xc2);
            *phost = pcVar2;
            if (pcVar2 != (char *)0x0) {
              CRYPTO_free(__s);
              return 1;
            }
          }
        }
        goto LAB_00b4a2f8;
      }
    }
LAB_00b4a2dc:
    iVar1 = 0x79;
    line = 0xd0;
  }
  ERR_put_error(0x27,0x72,iVar1,"crypto/ocsp/ocsp_lib.c",line);
  CRYPTO_free(__s);
  CRYPTO_free(*ppath);
  *ppath = (char *)0x0;
  CRYPTO_free(*pport);
  *pport = (char *)0x0;
  CRYPTO_free(*phost);
  *phost = (char *)0x0;
  return 0;
}

