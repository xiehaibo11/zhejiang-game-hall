
/* cocos2d::NinePatchImageParser::parseVerticalMargin() const */

float __thiscall cocos2d::NinePatchImageParser::parseVerticalMargin(NinePatchImageParser *this)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar1 = *(int *)(*(long *)(this + 8) + 0x38);
  iVar8 = (int)*(float *)(this + 0x14);
  iVar7 = ((int)*(float *)(this + 0x10) + iVar1 * iVar8) * 4;
  if (this[0x20] != (NinePatchImageParser)0x0) {
    iVar7 = iVar7 + (int)*(float *)(this + 0x1c) * 4 + -4;
  }
  lVar5 = 0x1c;
  if (this[0x20] != (NinePatchImageParser)0x0) {
    lVar5 = 0x18;
  }
  iVar9 = (int)(*(float *)(this + 0x14) + (float)(int)*(float *)(this + lVar5));
  if (iVar9 < iVar8) {
    iVar4 = 0;
  }
  else {
    pcVar6 = (char *)(*(long *)(*(long *)(this + 8) + 0x28) + (long)iVar7 + 3);
    iVar7 = 0;
    lVar5 = 0;
    iVar4 = 0;
    cVar3 = *pcVar6;
    do {
      cVar2 = pcVar6[iVar7];
      if (cVar2 != cVar3) {
        if (cVar2 == '\0') break;
        iVar4 = (int)lVar5;
      }
      lVar5 = lVar5 + 1;
      iVar7 = iVar7 + iVar1 * 4;
      cVar3 = cVar2;
    } while ((long)iVar8 + -1 + lVar5 < (long)iVar9);
  }
  return (float)iVar4;
}

