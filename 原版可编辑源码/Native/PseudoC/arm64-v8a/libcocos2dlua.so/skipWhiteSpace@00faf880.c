
/* cocos2d::Properties::skipWhiteSpace() */

void __thiscall cocos2d::Properties::skipWhiteSpace(Properties *this)

{
  long *plVar1;
  long *plVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  
  plVar1 = *(long **)this;
  plVar2 = *(long **)(this + 8);
  lVar5 = *plVar1;
  do {
    if (lVar5 < plVar2[1]) {
      lVar4 = *plVar2;
      *plVar1 = lVar5 + 1;
      cVar6 = *(char *)(lVar4 + lVar5);
      lVar5 = lVar5 + 1;
    }
    else {
      cVar6 = -1;
    }
    iVar3 = isspace((int)cVar6);
  } while ((cVar6 != -1) && (iVar3 != 0));
  if (cVar6 != -1) {
    *plVar1 = lVar5 + -1;
  }
  return;
}

