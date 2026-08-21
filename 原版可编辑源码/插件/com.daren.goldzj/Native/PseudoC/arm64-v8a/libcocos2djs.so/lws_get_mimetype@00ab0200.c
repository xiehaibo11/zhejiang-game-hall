
char * lws_get_mimetype(char *param_1,long param_2)

{
  int iVar1;
  size_t sVar2;
  char *pcVar3;
  long *plVar4;
  long lVar5;
  
  sVar2 = strlen(param_1);
  if (param_2 == 0) {
    plVar4 = (long *)0x0;
  }
  else {
    plVar4 = *(long **)(param_2 + 0x30);
  }
  if ((int)sVar2 < 5) {
LAB_00ab0240:
    pcVar3 = (char *)0x0;
  }
  else {
    lVar5 = sVar2 << 0x20;
    pcVar3 = param_1 + (lVar5 + -0x400000000 >> 0x20);
    iVar1 = strcmp(pcVar3,".ico");
    if (iVar1 == 0) {
      return "image/x-icon";
    }
    iVar1 = strcmp(pcVar3,".gif");
    if (iVar1 == 0) {
      return "image/gif";
    }
    iVar1 = strcmp(param_1 + (lVar5 + -0x300000000 >> 0x20),".js");
    if (iVar1 == 0) {
      return "text/javascript";
    }
                    /* try { // try from 00ab02ac to 00bb02c3 has its CatchHandler @ 00ab083c */
    iVar1 = strcmp(pcVar3,".png");
    if (iVar1 == 0) {
      return "image/png";
    }
    iVar1 = strcmp(pcVar3,".jpg");
    if (iVar1 != 0) {
      iVar1 = strcmp(param_1 + (lVar5 + -0x300000000 >> 0x20),".gz");
      if (iVar1 == 0) {
        return "application/gzip";
      }
      iVar1 = strcmp(pcVar3,".JPG");
      if (iVar1 != 0) {
        iVar1 = strcmp(param_1 + (lVar5 + -0x500000000 >> 0x20),".html");
        if (iVar1 == 0) {
          return "text/html";
        }
        iVar1 = strcmp(pcVar3,".css");
        if (iVar1 == 0) {
          return "text/css";
        }
        iVar1 = strcmp(pcVar3,".txt");
        if (iVar1 == 0) {
          return "text/plain";
        }
        iVar1 = strcmp(pcVar3,".svg");
        if (iVar1 == 0) {
          return "image/svg+xml";
        }
        iVar1 = strcmp(pcVar3,".ttf");
        if (iVar1 == 0) {
          return "application/x-font-ttf";
        }
        iVar1 = strcmp(pcVar3,".otf");
        if ((iVar1 == 0) ||
           (iVar1 = strcmp(param_1 + (lVar5 + -0x500000000 >> 0x20),".woff"), iVar1 == 0)) {
          return "application/font-woff";
        }
        iVar1 = strcmp(pcVar3,".xml");
        if (iVar1 == 0) {
          return "application/xml";
        }
        if (plVar4 != (long *)0x0) {
          while (pcVar3 = (char *)plVar4[2], *pcVar3 != '*') {
            sVar2 = strlen(pcVar3);
            iVar1 = strcmp(param_1 + ((lVar5 >> 0x20) - sVar2),pcVar3);
            if (iVar1 == 0) break;
            plVar4 = (long *)*plVar4;
            if (plVar4 == (long *)0x0) {
              return (char *)0x0;
            }
          }
          return (char *)plVar4[3];
        }
        goto LAB_00ab0240;
      }
    }
                    /* try { // try from 00ab0418 to 00bb041f has its CatchHandler @ 00ab0868 */
    pcVar3 = "image/jpeg";
                    /* try { // try from 00ab0420 to 00bb042b has its CatchHandler @ 00ab086c */
  }
  return pcVar3;
}

