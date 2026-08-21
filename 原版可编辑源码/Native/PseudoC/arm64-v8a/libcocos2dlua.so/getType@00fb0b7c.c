
/* cocos2d::Properties::getType(char const*) const */

undefined4 __thiscall cocos2d::Properties::getType(Properties *this,char *param_1)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  undefined4 uVar4;
  char *pcVar5;
  char *pcVar6;
  bool bVar7;
  int iVar8;
  
  pcVar5 = (char *)getString(this,param_1,(char *)0x0);
  uVar4 = 0;
  if (pcVar5 != (char *)0x0) {
    iVar8 = 0;
    pcVar6 = pcVar5;
    while (pcVar6 = strchr(pcVar6,0x2c), pcVar6 != (char *)0x0) {
      pcVar6 = pcVar6 + 1;
      iVar8 = iVar8 + 1;
    }
    uVar4 = 3;
    switch(iVar8) {
    case 0:
      pcVar6 = pcVar5;
      if (*pcVar5 == '-') {
        pcVar6 = pcVar5 + 1;
      }
      pcVar1 = pcVar5 + 1;
      if (*pcVar5 != '-') {
        pcVar1 = pcVar5;
      }
      if ((int)*pcVar6 - 0x30U < 10) {
        cVar2 = pcVar1[1];
        if (cVar2 == '\0') {
          return 2;
        }
        bVar7 = false;
        pcVar5 = pcVar1 + 2;
        do {
          bVar3 = bVar7;
          if (9 < (int)cVar2 - 0x30U) {
            if (cVar2 != '.') {
              return 1;
            }
            bVar3 = true;
            if (bVar7) {
              return 1;
            }
          }
          bVar7 = bVar3;
          cVar2 = *pcVar5;
          pcVar5 = pcVar5 + 1;
          if (cVar2 == '\0') {
            return 2;
          }
        } while( true );
      }
    default:
      uVar4 = 1;
      break;
    case 1:
      break;
    case 2:
      uVar4 = 4;
      break;
    case 3:
      uVar4 = 5;
      break;
    case 0xf:
      uVar4 = 6;
    }
  }
  return uVar4;
}

