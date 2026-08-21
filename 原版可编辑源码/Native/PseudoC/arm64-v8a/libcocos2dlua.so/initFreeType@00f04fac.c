
/* cocos2d::FontFreeType::initFreeType() */

undefined8 cocos2d::FontFreeType::initFreeType(void)

{
  int iVar1;
  undefined8 uVar2;
  
  if (_FTInitialized == '\0') {
    iVar1 = FT_Init_FreeType(&_FTlibrary);
    if (iVar1 == 0) {
      uVar2 = 1;
      _FTInitialized = '\x01';
    }
    else {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 1;
  }
  return uVar2;
}

