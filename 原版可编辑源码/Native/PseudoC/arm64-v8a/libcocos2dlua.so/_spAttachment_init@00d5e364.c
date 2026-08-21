
void _spAttachment_init(undefined8 *param_1,char *param_2,undefined4 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  size_t sVar2;
  char *__dest;
  
  puVar1 = (undefined8 *)
           _spCalloc(1,8,
                     "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Attachment.c"
                     ,0x2a);
  param_1[2] = puVar1;
  *puVar1 = param_4;
  sVar2 = strlen(param_2);
  __dest = (char *)_spMalloc(sVar2 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Attachment.c"
                             ,0x2d);
  *param_1 = __dest;
  strcpy(__dest,param_2);
  *(undefined4 *)(param_1 + 1) = param_3;
  return;
}

