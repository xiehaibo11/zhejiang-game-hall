
void Java_org_cocos2dx_lib_Cocos2dxRenderer_nativeInit
               (_JNIEnv *param_1,undefined8 param_2,int param_3,int param_4,_jstring *param_5)

{
  void *pvVar1;
  ulong uVar2;
  long lVar3;
  FileUtils *this;
  ScriptEngine *this_00;
  basic_string local_60 [8];
  ulong local_58;
  void *local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  DAT_01d35b34 = param_3;
  DAT_01d35b38 = param_4;
  DAT_01d35b40 = (Application *)cocos_android_app_init(param_1,param_3,param_4);
  DAT_01d35b48 = 0;
  cocos2d::ccInvalidateStateCache();
  cocos2d::JniHelper::jstring2string(param_5);
  pvVar1 = (void *)((ulong)local_60 | 1);
  if (((byte)local_60[0] & 1) != 0) {
    pvVar1 = local_50;
  }
  __android_log_print(3,"JniImp","nativeInit: %d, %d, %s",param_3,param_4,pvVar1);
  uVar2 = (ulong)((byte)local_60[0] >> 1);
  if (((byte)local_60[0] & 1) != 0) {
    uVar2 = local_58;
  }
  if (uVar2 != 0) {
    this = (FileUtils *)cocos2d::FileUtils::getInstance();
    cocos2d::FileUtils::setDefaultResourceRootPath(this,local_60);
  }
  this_00 = (ScriptEngine *)se::ScriptEngine::getInstance();
  se::ScriptEngine::addRegisterCallback(this_00,FUN_0086d368);
  cocos2d::EventDispatcher::init();
  cocos2d::Application::start(DAT_01d35b40);
  DAT_01d35b49 = 1;
  if (((byte)local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

