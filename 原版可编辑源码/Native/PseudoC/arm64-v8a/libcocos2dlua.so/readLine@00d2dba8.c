
/* cocos2d::BundleReader::readLine(int, char*) */

char * __thiscall cocos2d::BundleReader::readLine(BundleReader *this,int param_1,char *param_2)

{
  long lVar1;
  long lVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  
  lVar5 = *(long *)(this + 0x38);
  if (lVar5 == 0) {
    return (char *)0x0;
  }
  pcVar3 = param_2;
  if (0 < param_1) {
    lVar2 = *(long *)(this + 0x28);
    cVar6 = *(char *)(lVar5 + lVar2);
    if (cVar6 != '\n') {
      lVar5 = lVar2 + lVar5;
      lVar4 = 0;
      do {
        if (*(long *)(this + 0x30) <= lVar2) {
          pcVar3 = param_2 + lVar4;
          goto LAB_00d2dc2c;
        }
        param_2[lVar4] = cVar6;
        lVar1 = lVar4 + 1;
        lVar2 = *(long *)(this + 0x28) + 1;
        *(long *)(this + 0x28) = lVar2;
      } while ((lVar1 < param_1) &&
              (cVar6 = *(char *)(lVar5 + 1 + lVar4), lVar4 = lVar1, cVar6 != '\n'));
      pcVar3 = param_2 + lVar1;
    }
  }
LAB_00d2dc2c:
  *pcVar3 = '\0';
  return param_2;
}

