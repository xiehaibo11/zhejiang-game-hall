
undefined4 * spSlotData_create(undefined4 param_1,char *param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  size_t sVar2;
  char *__dest;
  
  puVar1 = (undefined4 *)
           _spCalloc(1,0x40,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SlotData.c"
                     ,0x23);
  *puVar1 = param_1;
  sVar2 = strlen(param_2);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SlotData.c"
                             ,0x25);
  *(char **)(puVar1 + 2) = __dest;
  strcpy(__dest,param_2);
  *(undefined8 *)(puVar1 + 4) = param_3;
  spColor_setFromFloats(0x3f800000,0x3f800000,0x3f800000,0x3f800000,puVar1 + 8);
                    /* try { // try from 00d54ce0 to 00e54e23 has its CatchHandler @ 00d54fcc */
  return puVar1;
}

