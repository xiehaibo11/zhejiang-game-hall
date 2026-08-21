
void spAttachmentTimeline_setFrame(undefined4 param_1,long param_2,int param_3,char *param_4)

{
  size_t sVar1;
  char *__dest;
  
  *(undefined4 *)(*(long *)(param_2 + 0x18) + (long)param_3 * 4) = param_1;
  _spFree(*(void **)(*(long *)(param_2 + 0x28) + (long)param_3 * 8));
  if (param_4 != (char *)0x0) {
    sVar1 = strlen(param_4);
    __dest = (char *)_spMalloc(sVar1 + 1,
                               "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/Animation.c"
                               ,0x32a);
    *(char **)(*(long *)(param_2 + 0x28) + (long)param_3 * 8) = __dest;
    strcpy(__dest,param_4);
    return;
  }
  *(undefined8 *)(*(long *)(param_2 + 0x28) + (long)param_3 * 8) = 0;
                    /* try { // try from 00d579c0 to 00e579c3 has its CatchHandler @ 00d579e8 */
  return;
}

