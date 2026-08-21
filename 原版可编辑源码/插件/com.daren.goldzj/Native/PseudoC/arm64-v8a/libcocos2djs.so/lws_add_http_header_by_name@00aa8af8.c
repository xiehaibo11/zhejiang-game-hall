
undefined8
lws_add_http_header_by_name
          (undefined8 param_1,char *param_2,void *param_3,int param_4,long *param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  size_t __n;
  
  if (param_2 != (char *)0x0) {
    pcVar2 = (char *)*param_5;
    for (; (pcVar2 < param_6 && (cVar1 = *param_2, cVar1 != '\0')); param_2 = param_2 + 1) {
      *param_5 = (long)(pcVar2 + 1);
      *pcVar2 = cVar1;
      pcVar2 = (char *)*param_5;
    }
    if (pcVar2 == param_6) {
      return 1;
    }
    *param_5 = (long)(pcVar2 + 1);
    *pcVar2 = ' ';
  }
  __n = (size_t)param_4;
  if (param_6 <= (char *)(*param_5 + __n + 3)) {
    return 1;
  }
  memcpy((void *)*param_5,param_3,__n);
  lVar3 = *param_5;
  *param_5 = (long)((undefined1 *)(lVar3 + __n) + 1);
  *(undefined1 *)(lVar3 + __n) = 0xd;
  puVar4 = (undefined1 *)*param_5;
  *param_5 = (long)(puVar4 + 1);
  *puVar4 = 10;
  return 0;
}

