
/* cocos2d::PUMaterialCache::Instance() */

undefined8 * cocos2d::PUMaterialCache::Instance(void)

{
  int iVar1;
  
  if (((DAT_01788ff0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01788ff0), iVar1 != 0)) {
    DAT_01788fd8 = 0;
    DAT_01788fe0 = 0;
    DAT_01788fe8 = 0;
    __cxa_atexit(~PUMaterialCache,&DAT_01788fd8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788ff0);
  }
  return &DAT_01788fd8;
}

