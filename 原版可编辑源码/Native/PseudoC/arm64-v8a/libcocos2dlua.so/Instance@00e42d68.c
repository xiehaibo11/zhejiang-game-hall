
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* cocos2d::PUScriptCompiler::Instance() */

undefined8 * cocos2d::PUScriptCompiler::Instance(void)

{
  int iVar1;
  
  if (((DAT_01789068 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_01789068), iVar1 != 0)) {
    DAT_01789020 = 0x3f800000;
    DAT_01789048 = 0x3f800000;
    uRam0000000001789008 = 0;
    _DAT_01789000 = 0;
    uRam0000000001789018 = 0;
    _DAT_01789010 = 0;
    DAT_01788ff8 = &PTR__PUScriptCompiler_016f2070;
    uRam0000000001789030 = 0;
    _DAT_01789028 = 0;
    uRam0000000001789040 = 0;
    _DAT_01789038 = 0;
    DAT_01789058 = 0;
    DAT_01789060 = 0;
    DAT_01789050 = 0;
    __cxa_atexit(~PUScriptCompiler,&DAT_01788ff8,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01789068);
  }
  return &DAT_01788ff8;
}

