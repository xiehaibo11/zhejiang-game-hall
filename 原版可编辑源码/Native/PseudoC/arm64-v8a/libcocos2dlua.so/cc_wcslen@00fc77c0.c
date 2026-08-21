
/* cocos2d::cc_wcslen(unsigned short const*) */

long cocos2d::cc_wcslen(ushort *param_1)

{
  long lVar1;
  long lVar2;
  
  if (param_1 == (ushort *)0x0) {
    return 0xffffffff;
  }
  if (*param_1 != 0) {
    lVar2 = 0;
    do {
      lVar1 = lVar2 + 1;
      lVar2 = lVar2 + 1;
    } while (param_1[lVar1] != 0);
    return lVar2;
  }
  return 0;
}

