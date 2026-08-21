
/* cocos2d::Properties::readLine(char*, int) */

char * __thiscall cocos2d::Properties::readLine(Properties *this,char *param_1,int param_2)

{
  char cVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  
  plVar4 = *(long **)(this + 8);
  lVar2 = **(long **)this;
  if (plVar4[1] <= lVar2) {
    return (char *)0x0;
  }
  if ((param_2 < 1) || (plVar4[1] <= lVar2)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    do {
      cVar1 = *(char *)(*plVar4 + lVar2 + uVar3);
      if (cVar1 == '\n') break;
      param_1[uVar3] = cVar1;
      if ((ulong)(uint)param_2 - 1 == uVar3) {
        uVar3 = (ulong)((int)uVar3 + 1);
        break;
      }
      plVar4 = *(long **)(this + 8);
      uVar3 = uVar3 + 1;
    } while ((long)(lVar2 + uVar3) < plVar4[1]);
  }
  param_1[uVar3 & 0xffffffff] = '\0';
  **(long **)this = lVar2 + (uVar3 & 0xffffffff);
  return param_1;
}

