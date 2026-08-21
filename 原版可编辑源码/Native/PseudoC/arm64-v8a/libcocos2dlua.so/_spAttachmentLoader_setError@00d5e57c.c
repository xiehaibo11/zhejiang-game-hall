
void _spAttachmentLoader_setError(undefined8 *param_1,char *param_2,char *param_3)

{
  size_t sVar1;
  char *pcVar2;
  
  _spFree((void *)*param_1);
  _spFree((void *)param_1[1]);
  sVar1 = strlen(param_2);
  pcVar2 = (char *)_spMalloc(sVar1 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AttachmentLoader.c"
                             ,0x5a);
  *param_1 = pcVar2;
  strcpy(pcVar2,param_2);
  sVar1 = strlen(param_3);
  pcVar2 = (char *)_spMalloc(sVar1 + 1,
                             "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/AttachmentLoader.c"
                             ,0x5b);
  param_1[1] = pcVar2;
  strcpy(pcVar2,param_3);
  return;
}

