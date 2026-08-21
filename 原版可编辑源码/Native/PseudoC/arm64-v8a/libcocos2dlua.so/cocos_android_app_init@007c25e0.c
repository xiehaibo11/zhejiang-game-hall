
/* cocos_android_app_init(_JNIEnv*) */

void cocos_android_app_init(_JNIEnv *param_1)

{
  long *plVar1;
  AppDelegate *this;
  
  __android_log_print(3,"main","cocos_android_app_init");
  this = operator_new(8);
  AppDelegate::AppDelegate(this);
  plVar1 = (long *)DAT_017819c8;
  DAT_017819c8 = this;
  if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x007c2634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 8))();
    return;
  }
  return;
}

