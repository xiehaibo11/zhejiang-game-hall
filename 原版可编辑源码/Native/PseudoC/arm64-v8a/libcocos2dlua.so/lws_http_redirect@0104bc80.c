
undefined8
lws_http_redirect(undefined8 param_1,undefined8 param_2,void *param_3,int param_4,long *param_5,
                 char *param_6)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  char *pcVar4;
  long lVar5;
  undefined1 *puVar6;
  char *pcVar7;
  long lVar8;
  size_t __n;
  
  lVar8 = *param_5;
  iVar2 = lws_add_http_header_status(param_1,param_2,param_5,param_6);
  if (iVar2 == 0) {
    pcVar4 = (char *)*param_5;
    if (pcVar4 < param_6) {
      pcVar7 = "location:";
      do {
        cVar1 = *pcVar7;
        if (cVar1 == '\0') break;
        *param_5 = (long)(pcVar4 + 1);
        *pcVar4 = cVar1;
        pcVar4 = (char *)*param_5;
        pcVar7 = pcVar7 + 1;
      } while (pcVar4 < param_6);
    }
    if (pcVar4 != param_6) {
      *param_5 = (long)(pcVar4 + 1);
      *pcVar4 = ' ';
      __n = (size_t)param_4;
      if ((char *)(*param_5 + __n + 3) < param_6) {
        memcpy((void *)*param_5,param_3,__n);
        lVar5 = *param_5;
        *param_5 = (long)((undefined1 *)(lVar5 + __n) + 1);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 0104bdb0 with catch @ 0104bd5c
                        */
        *(undefined1 *)(lVar5 + __n) = 0xd;
        puVar6 = (undefined1 *)*param_5;
        *param_5 = (long)(puVar6 + 1);
        *puVar6 = 10;
        pcVar4 = (char *)*param_5;
        if (pcVar4 < param_6) {
          pcVar7 = "content-type:";
          do {
            cVar1 = *pcVar7;
            if (cVar1 == '\0') break;
            *param_5 = (long)(pcVar4 + 1);
            *pcVar4 = cVar1;
            pcVar4 = (char *)*param_5;
            pcVar7 = pcVar7 + 1;
                    /* try { // try from 0104bda8 to 0114bdaf has its CatchHandler @ 0104bf24 */
          } while (pcVar4 < param_6);
        }
                    /* try { // try from 0104bdb0 to 0114bf27 has its CatchHandler @ 0104bd5c */
        if (pcVar4 != param_6) {
          *param_5 = (long)(pcVar4 + 1);
          *pcVar4 = ' ';
          if ((char *)*param_5 + 0xc < param_6) {
            builtin_strncpy((char *)*param_5,"text/html",9);
            lVar5 = *param_5;
            *param_5 = lVar5 + 10;
            *(undefined1 *)(lVar5 + 9) = 0xd;
            puVar6 = (undefined1 *)*param_5;
            *param_5 = (long)(puVar6 + 1);
            *puVar6 = 10;
            pcVar4 = (char *)*param_5;
            if (pcVar4 < param_6) {
              pcVar7 = "content-length:";
              do {
                cVar1 = *pcVar7;
                if (cVar1 == '\0') break;
                *param_5 = (long)(pcVar4 + 1);
                *pcVar4 = cVar1;
                pcVar4 = (char *)*param_5;
                pcVar7 = pcVar7 + 1;
              } while (pcVar4 < param_6);
            }
            if (pcVar4 != param_6) {
              *param_5 = (long)(pcVar4 + 1);
              *pcVar4 = ' ';
              if ((undefined1 *)*param_5 + 4 < param_6) {
                *(undefined1 *)*param_5 = 0x30;
                lVar5 = *param_5;
                *param_5 = lVar5 + 2;
                *(undefined1 *)(lVar5 + 1) = 0xd;
                puVar6 = (undefined1 *)*param_5;
                *param_5 = (long)(puVar6 + 1);
                *puVar6 = 10;
                puVar6 = (undefined1 *)*param_5;
                if (2 < (long)param_6 - (long)puVar6) {
                  *param_5 = (long)(puVar6 + 1);
                  *puVar6 = 0xd;
                  puVar6 = (undefined1 *)*param_5;
                  *param_5 = (long)(puVar6 + 1);
                  *puVar6 = 10;
                  uVar3 = lws_write(param_1,lVar8,*param_5 - lVar8,0x88);
                  return uVar3;
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}

