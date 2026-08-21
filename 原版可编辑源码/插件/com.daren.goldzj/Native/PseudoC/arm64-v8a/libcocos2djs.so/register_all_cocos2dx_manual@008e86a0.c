
/* register_all_cocos2dx_manual(se::Object*) */

undefined8 register_all_cocos2dx_manual(Object *param_1)

{
  long lVar1;
  Object *pOVar2;
  ulong uVar3;
  long *plVar4;
  ScriptEngine *pSVar5;
  code *pcVar6;
  Object *local_a0;
  HandleObject local_98 [16];
  void *local_88;
  Value aVStack_80 [16];
  undefined **local_70 [4];
  undefined ***local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  se::Value::Value((Value *)local_70);
  se::Object::getProperty(__jsbObj,"PlistParser",(Value *)local_70);
  pOVar2 = (Object *)se::Value::toObject((Value *)local_70);
  se::Object::defineFunction(pOVar2,"getInstance",js_PlistParser_getInstanceRegistry);
  se::Object::defineFunction(__jsb_cocos2d_SAXParser_proto,"parse",js_PlistParser_parseRegistry);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Value::~Value((Value *)local_70);
  se::Value::Value(aVStack_80);
  uVar3 = se::Object::getProperty(param_1,"sys",aVStack_80);
  if ((uVar3 & 1) == 0) {
    pOVar2 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(local_98,pOVar2);
    se::Value::Value((Value *)local_70,local_98,false);
    se::Object::setProperty(param_1,"sys",(Value *)local_70);
    se::Value::~Value((Value *)local_70);
    se::Value::setObject(aVStack_80,local_98,false);
    se::HandleObject::~HandleObject(local_98);
  }
  pOVar2 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_a0,pOVar2);
  pOVar2 = (Object *)se::Value::toObject(aVStack_80);
  se::Value::Value((Value *)local_70,(HandleObject *)&local_a0,false);
  se::Object::setProperty(pOVar2,"localStorage",(Value *)local_70);
  se::Value::~Value((Value *)local_70);
  se::Object::defineFunction(local_a0,"getItem",JSB_localStorageGetItemRegistry);
  se::Object::defineFunction(local_a0,"removeItem",JSB_localStorageRemoveItemRegistry);
  se::Object::defineFunction(local_a0,"setItem",JSB_localStorageSetItemRegistry);
  se::Object::defineFunction(local_a0,"clear",JSB_localStorageClearRegistry);
  se::Object::defineFunction(local_a0,"key",JSB_localStorageKeyRegistry);
  se::Object::defineProperty
            (local_a0,"length",JSB_localStorage_getLengthRegistry,
             (_func_void_Local_Local_PropertyCallbackInfo_ptr *)0x0);
  plVar4 = (long *)cocos2d::FileUtils::getInstance();
  (**(code **)(*plVar4 + 0x90))(local_98);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)local_98,
         "/jsb.sqlite",0xb);
  localStorageInit((basic_string *)local_98);
  pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70[0] = &PTR_FUN_01c67a38;
  local_50 = local_70;
  se::ScriptEngine::addBeforeCleanupHook(pSVar5,(function *)local_70);
  if (local_70 == local_50) {
    pcVar6 = (code *)(*local_50)[4];
LAB_008e88f8:
    (*pcVar6)();
  }
  else if (local_50 != (undefined ***)0x0) {
    pcVar6 = (code *)(*local_50)[5];
    goto LAB_008e88f8;
  }
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  se::HandleObject::~HandleObject((HandleObject *)&local_a0);
  se::Value::~Value(aVStack_80);
  se::Value::Value((Value *)local_98);
  se::Object::getProperty(__jsbObj,"Device",(Value *)local_98);
  pOVar2 = (Object *)se::Value::toObject((Value *)local_98);
  se::Object::defineFunction(pOVar2,"getDeviceMotionValue",JSB_getDeviceMotionValueRegistry);
  pSVar5 = (ScriptEngine *)se::ScriptEngine::getInstance();
  local_70[0] = &PTR_FUN_01c67ab8;
  local_50 = local_70;
  se::ScriptEngine::addBeforeCleanupHook(pSVar5,(function *)local_70);
  if (local_70 == local_50) {
    pcVar6 = (code *)(*local_50)[4];
  }
  else {
    if (local_50 == (undefined ***)0x0) goto LAB_008e89a4;
    pcVar6 = (code *)(*local_50)[5];
  }
  (*pcVar6)();
LAB_008e89a4:
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Value::~Value((Value *)local_98);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"_width",js_cls_get__widthRegistry,
             js_cls_set__widthRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"_height",js_cls_get__heightRegistry,
             js_cls_set__heightRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"lineWidth",js_cls_get_lineWidthRegistry,
             js_cls_set_lineWidthRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"lineJoin",js_cls_get_lineJoinRegistry,
             js_cls_set_lineJoinRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"lineCap",js_cls_get_lineCapRegistry,
             js_cls_set_lineCapRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"font",js_cls_get_fontRegistry,
             js_cls_set_fontRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"textAlign",js_cls_get_textAlignRegistry,
             js_cls_set_textAlignRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"textBaseline",
             js_cls_get_textBaselineRegistry,js_cls_set_textBaselineRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"fillStyle",js_cls_get_fillStyleRegistry,
             js_cls_set_fillStyleRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"strokeStyle",
             js_cls_get_strokeStyleRegistry,js_cls_set_strokeStyleRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"globalCompositeOperation",
             js_cls_get_globalCompositeOperationRegistry,js_cls_set_globalCompositeOperationRegistry
            );
  se::Object::defineFunction
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"_setCanvasBufferUpdatedCallback",
             js_CanvasRenderingContext2D_setCanvasBufferUpdatedCallbackRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_CanvasRenderingContext2D_proto,"_setPremultiply",
             js_CanvasRenderingContext2D_setPremultiplyRegistry);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Object::defineFunction
            (__jsb_cocos2d_FileUtils_proto,"listFilesRecursively",
             js_engine_FileUtils_listFilesRecursivelyRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_LabelRenderer_proto,"init",js_engine_LabelRenderer_initRegistry);
  FUN_008e93e4(param_1);
  se::Value::Value((Value *)local_70);
  uVar3 = se::Object::getProperty(param_1,"jsb",(Value *)local_70);
  if ((uVar3 & 1) == 0) {
    pOVar2 = (Object *)se::Object::createPlainObject();
    se::Value::setObject((Value *)local_70,pOVar2,false);
    se::Object::setProperty(param_1,"jsb",(Value *)local_70);
  }
  pOVar2 = (Object *)se::Value::toObject((Value *)local_70);
  se::Object::defineFunction(pOVar2,"onError",js_se_setExceptionCallbackRegistry);
  se::Value::~Value((Value *)local_70);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

