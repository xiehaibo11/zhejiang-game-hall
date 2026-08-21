
/* cocos2d::Properties::trimWhiteSpace(char*) */

char * __thiscall cocos2d::Properties::trimWhiteSpace(Properties *this,char *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  
  if (param_1 == (char *)0x0) {
    return (char *)0x0;
  }
  cVar1 = *param_1;
  while( true ) {
    if (cVar1 == '\0') {
      return param_1;
    }
    iVar3 = isspace((int)cVar1);
    if (iVar3 == 0) break;
    param_1 = param_1 + 1;
    cVar1 = *param_1;
  }
  sVar4 = strlen(param_1);
  pcVar5 = param_1 + sVar4;
  do {
    pcVar2 = pcVar5;
    pcVar5 = pcVar2 + -1;
    if (pcVar5 <= param_1) break;
    iVar3 = isspace((int)*pcVar5);
  } while (iVar3 != 0);
                    /* try { // try from 00fafa10 to 010afa6f has its CatchHandler @ 00fafa10
                       catch() { ... } // from try @ 00fafa10 with catch @ 00fafa10
                       catch() { ... } // from try @ 00fafab8 with catch @ 00fafa10 */
  *pcVar2 = '\0';
  return param_1;
}

