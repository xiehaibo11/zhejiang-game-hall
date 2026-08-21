
undefined8
lws_add_http_header_by_token
          (undefined8 param_1,uint param_2,void *param_3,int param_4,long *param_5,char *param_6)

{
  char cVar1;
  char *pcVar2;
  long lVar3;
  undefined1 *puVar4;
  char *pcVar5;
  size_t __n;
  
  if (0x54 < param_2) {
    return 1;
  }
  pcVar2 = (char *)*param_5;
  if (pcVar2 < param_6) {
    pcVar5 = (&PTR_DAT_01727d60)[param_2];
    do {
      cVar1 = *pcVar5;
      if (cVar1 == '\0') break;
      *param_5 = (long)(pcVar2 + 1);
      *pcVar2 = cVar1;
      pcVar2 = (char *)*param_5;
      pcVar5 = pcVar5 + 1;
    } while (pcVar2 < param_6);
  }
  if (pcVar2 == param_6) {
    return 1;
  }
  *param_5 = (long)(pcVar2 + 1);
  *pcVar2 = ' ';
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b334 with catch @ 0104b41c
                        */
  __n = (size_t)param_4;
  if ((char *)(*param_5 + __n + 3) < param_6) {
    memcpy((void *)*param_5,param_3,__n);
    lVar3 = *param_5;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b2c4 with catch @ 0104b440
                        */
    *param_5 = (long)((undefined1 *)(lVar3 + __n) + 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104b164 with catch @ 0104b454
                        */
    *(undefined1 *)(lVar3 + __n) = 0xd;
    puVar4 = (undefined1 *)*param_5;
    *param_5 = (long)(puVar4 + 1);
    *puVar4 = 10;
    return 0;
  }
  return 1;
}

