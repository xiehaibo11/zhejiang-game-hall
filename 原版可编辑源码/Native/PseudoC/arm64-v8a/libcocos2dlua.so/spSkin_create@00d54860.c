
undefined8 * spSkin_create(char *param_1)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,0x10,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skin.c",
                     0x33);
  sVar2 = strlen(param_1);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Skin.c"
                             ,0x34);
  *puVar1 = __dest;
  strcpy(__dest,param_1);
  return puVar1;
}

