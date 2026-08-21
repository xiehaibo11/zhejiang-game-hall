
/* cocos2d::NinePatchImageParser::parseHorizontalMargin() const */

float __thiscall cocos2d::NinePatchImageParser::parseHorizontalMargin(NinePatchImageParser *this)

{
  char cVar1;
  char cVar2;
  int iVar3;
  long lVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  
  lVar4 = 0x18;
  if (this[0x20] != (NinePatchImageParser)0x0) {
    lVar4 = 0x1c;
  }
  iVar7 = (int)*(float *)(this + 0x10);
  iVar8 = (int)(*(float *)(this + 0x10) + (float)(int)*(float *)(this + lVar4));
  if (iVar8 < iVar7) {
    iVar3 = 0;
  }
  else {
    iVar5 = 0;
    lVar4 = 0;
    iVar3 = 0;
    pcVar6 = (char *)(*(long *)(*(long *)(this + 8) + 0x28) +
                      (long)((iVar7 + *(int *)(*(long *)(this + 8) + 0x38) *
                                      (int)*(float *)(this + 0x14)) * 4) + 3);
    cVar2 = *pcVar6;
    do {
      cVar1 = pcVar6[iVar5];
      if (cVar1 != cVar2) {
        if (cVar1 == '\0') break;
        iVar3 = (int)lVar4;
      }
      lVar4 = lVar4 + 1;
      iVar5 = iVar5 + 4;
      cVar2 = cVar1;
    } while ((long)iVar7 + -1 + lVar4 < (long)iVar8);
  }
  return (float)iVar3;
}

