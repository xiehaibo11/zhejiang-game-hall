
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeOnPause(void)

{
  if ((DAT_01d35b40 != (long *)0x0) && (DAT_01d35b48 == '\0')) {
                    /* WARNING: Could not recover jumptable at 0x0086d95c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_01d35b40 + 0x18))();
    return;
  }
  return;
}

