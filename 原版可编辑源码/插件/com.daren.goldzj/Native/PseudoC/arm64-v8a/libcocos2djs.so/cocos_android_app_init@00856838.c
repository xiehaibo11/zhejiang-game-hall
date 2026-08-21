
/* cocos_android_app_init(_JNIEnv*, int, int) */

AppDelegate * cocos_android_app_init(_JNIEnv *param_1,int param_2,int param_3)

{
  AppDelegate *this;
  
  __android_log_print(3,"main","cocos_android_app_init");
  this = operator_new(0x38);
  AppDelegate::AppDelegate(this,param_2,param_3);
  return this;
}

