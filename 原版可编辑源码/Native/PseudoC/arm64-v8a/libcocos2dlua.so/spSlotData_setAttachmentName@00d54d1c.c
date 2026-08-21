
void spSlotData_setAttachmentName(long param_1,char *param_2)

{
  size_t sVar1;
  char *__dest;
  
  _spFree(*(void **)(param_1 + 0x18));
  if (param_2 != (char *)0x0) {
    sVar1 = strlen(param_2);
    __dest = (char *)_spMalloc(sVar1 + 1,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/SlotData.c"
                               ,0x35);
    *(char **)(param_1 + 0x18) = __dest;
    strcpy(__dest,param_2);
    return;
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  return;
}

