
/* cocos2d::tgaDestroy(cocos2d::sImageTGA*) */

void cocos2d::tgaDestroy(sImageTGA *param_1)

{
  if (param_1 != (sImageTGA *)0x0) {
    if (*(void **)(param_1 + 0x10) != (void *)0x0) {
      free(*(void **)(param_1 + 0x10));
    }
    free(param_1);
    return;
  }
  return;
}

