
/* cocos2d::ccArrayNew(long) */

undefined8 * cocos2d::ccArrayNew(long param_1)

{
  size_t __nmemb;
  undefined8 *puVar1;
  void *pvVar2;
  
  __nmemb = 7;
  if (param_1 != 0) {
    __nmemb = param_1;
  }
  puVar1 = malloc(0x18);
  *puVar1 = 0;
  pvVar2 = calloc(__nmemb,8);
  puVar1[1] = __nmemb;
  puVar1[2] = pvVar2;
  return puVar1;
}

