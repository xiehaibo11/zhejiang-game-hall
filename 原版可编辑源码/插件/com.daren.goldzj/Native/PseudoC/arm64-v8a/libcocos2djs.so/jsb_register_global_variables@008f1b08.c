
/* jsb_register_global_variables(se::Object*) */

undefined8 jsb_register_global_variables(Object *param_1)

{
  __shared_weak_count *p_Var1;
  char cVar2;
  bool bVar3;
  long lVar4;
  __shared_weak_count *this;
  undefined8 uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  Class *this_00;
  Object *pOVar8;
  ScriptEngine *pSVar9;
  code *pcVar10;
  long lVar11;
  Object *local_80 [2];
  Value local_70;
  undefined7 uStack_6f;
  char cStack_68;
  undefined5 uStack_67;
  undefined2 uStack_62;
  undefined1 uStack_60;
  undefined5 uStack_5f;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  Value *local_50;
  long local_38;
  
  lVar4 = tpidr_el0;
  local_38 = *(long *)(lVar4 + 0x28);
  uVar5 = cocos2d::ThreadPool::newFixedThreadPool(3);
  puVar6 = operator_new(0x20);
  this = DAT_01d36fa8;
  puVar6[2] = 0;
  puVar6[3] = uVar5;
  *puVar6 = &PTR____shared_weak_count_01c681b8;
  puVar6[1] = 0;
  DAT_01d36fa0 = uVar5;
  if (DAT_01d36fa8 != (__shared_weak_count *)0x0) {
    p_Var1 = DAT_01d36fa8 + 8;
    DAT_01d36fa8 = (__shared_weak_count *)puVar6;
    do {
      lVar11 = *(long *)p_Var1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(p_Var1,0x10);
      if (bVar3) {
        *(long *)p_Var1 = lVar11 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    puVar6 = (undefined8 *)DAT_01d36fa8;
    if (lVar11 == 0) {
      (**(code **)(*(long *)this + 0x10))(this);
      std::__ndk1::__shared_weak_count::__release_weak(this);
      puVar6 = (undefined8 *)DAT_01d36fa8;
    }
  }
  DAT_01d36fa8 = (__shared_weak_count *)puVar6;
  se::Object::defineFunction(param_1,"require",FUN_008f2118);
  se::Object::defineFunction(param_1,"requireModule",FUN_008f2324);
  se::Value::Value(&local_70);
  uVar7 = se::Object::getProperty(param_1,"jsb",&local_70);
  if (((uVar7 & 1) == 0) || (cStack_68 != '\x05')) {
    __jsbObj = (Object *)se::Object::createPlainObject();
    se::Value::Value((Value *)local_80,__jsbObj,false);
    se::Object::setProperty(param_1,"jsb",(Value *)local_80);
    se::Value::~Value((Value *)local_80);
  }
  else {
    __jsbObj = (Object *)se::Value::toObject(&local_70);
    se::RefCounter::incRef((RefCounter *)__jsbObj);
  }
  se::Value::~Value(&local_70);
  uStack_59 = 0;
  local_70 = (Value)0x2a;
  uStack_5f = 0x747865746e;
  uStack_67 = 0x6e69726564;
  uStack_62 = 0x4367;
  uStack_60 = 0x6f;
  uStack_6f = 0x65524c47626557;
  cStack_68 = 0x6e;
  uStack_5a = 0;
  this_00 = (Class *)se::Class::create((basic_string *)&local_70,param_1,(Object *)0x0,
                                       (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_70 & 1) != 0) {
    operator_delete((void *)CONCAT17(uStack_59,CONCAT16(uStack_5a,CONCAT51(uStack_5f,uStack_60))));
  }
  se::Class::install(this_00);
  if (__glObj != (RefCounter *)0x0) {
    se::RefCounter::decRef(__glObj);
    __glObj = (RefCounter *)0x0;
  }
  __glObj = (RefCounter *)se::Object::createObjectWithClass(this_00);
  se::Value::Value(&local_70,(Object *)__glObj,false);
  se::Object::setProperty(param_1,"__gl",&local_70);
  se::Value::~Value(&local_70);
  se::Object::defineFunction(__jsbObj,"garbageCollect",jsc_garbageCollectRegistry);
  se::Object::defineFunction
            (__jsbObj,"dumpNativePtrToSeObjectMap",jsc_dumpNativePtrToSeObjectMapRegistry);
  se::Object::defineFunction(__jsbObj,"loadImage",js_loadImageRegistry);
  se::Object::defineFunction(__jsbObj,"saveImageData",js_saveImageDataRegistry);
  se::Object::defineFunction(__jsbObj,"setDebugViewText",js_setDebugViewTextRegistry);
  se::Object::defineFunction(__jsbObj,"openDebugView",js_openDebugViewRegistry);
  se::Object::defineFunction
            (__jsbObj,"disableBatchGLCommandsToNative",js_disableBatchGLCommandsToNativeRegistry);
  se::Object::defineFunction(__jsbObj,"openURL",JSB_openURLRegistry);
  se::Object::defineFunction(__jsbObj,"copyTextToClipboard",JSB_copyTextToClipboardRegistry);
  se::Object::defineFunction
            (__jsbObj,"setPreferredFramesPerSecond",JSB_setPreferredFramesPerSecondRegistry);
  se::Object::defineFunction(__jsbObj,"showInputBox",JSB_showInputBoxRegistry);
  se::Object::defineFunction(__jsbObj,"hideInputBox",JSB_hideInputBoxRegistry);
  se::Object::defineFunction(__jsbObj,"updateInputBoxRect",JSB_updateInputBoxRectRegistry);
  se::Object::defineFunction(param_1,"__getPlatform",JSBCore_platformRegistry);
  se::Object::defineFunction(param_1,"__getOS",JSBCore_osRegistry);
  se::Object::defineFunction(param_1,"__getOSVersion",JSB_getOSVersionRegistry);
  se::Object::defineFunction(param_1,"__getCurrentLanguage",JSBCore_getCurrentLanguageRegistry);
  se::Object::defineFunction
            (param_1,"__getCurrentLanguageCode",JSBCore_getCurrentLanguageCodeRegistry);
  se::Object::defineFunction(param_1,"__getVersion",JSBCore_versionRegistry);
  se::Object::defineFunction(param_1,"__restartVM",JSB_core_restartVMRegistry);
  se::Object::defineFunction(param_1,"__cleanScript",JSB_cleanScriptRegistry);
  se::Object::defineFunction(param_1,"__isObjectValid",JSB_isObjectValidRegistry);
  se::Object::defineFunction(param_1,"close",JSB_closeWindowRegistry);
  pOVar8 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)local_80,pOVar8);
  se::Object::defineFunction(local_80[0],"now",js_performance_nowRegistry);
  se::Value::Value(&local_70,(HandleObject *)local_80,false);
  se::Object::setProperty(param_1,"performance",&local_70);
  se::Value::~Value(&local_70);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  pSVar9 = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70 = (Value)0x8;
  uStack_6f = 0x1c682;
  local_50 = &local_70;
  se::ScriptEngine::addBeforeCleanupHook(pSVar9,&local_70);
  if (&local_70 == local_50) {
    pcVar10 = *(code **)(*(long *)local_50 + 0x20);
LAB_008f1fd0:
    (*pcVar10)();
  }
  else if (local_50 != (Value *)0x0) {
    pcVar10 = *(code **)(*(long *)local_50 + 0x28);
    goto LAB_008f1fd0;
  }
  pSVar9 = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70 = (Value)0x88;
  uStack_6f = 0x1c682;
  local_50 = &local_70;
  se::ScriptEngine::addAfterCleanupHook(pSVar9,&local_70);
  if (&local_70 == local_50) {
    pcVar10 = *(code **)(*(long *)local_50 + 0x20);
  }
  else {
    if (local_50 == (Value *)0x0) goto LAB_008f201c;
    pcVar10 = *(code **)(*(long *)local_50 + 0x28);
  }
  (*pcVar10)();
LAB_008f201c:
  se::HandleObject::~HandleObject((HandleObject *)local_80);
  if (*(long *)(lVar4 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

