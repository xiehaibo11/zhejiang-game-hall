
/* jsb_register_renderer_manual(se::Object*) */

undefined8 jsb_register_renderer_manual(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  Class *this;
  Class *local_68;
  Value aVStack_60 [16];
  Class *local_50;
  undefined8 local_48;
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_60);
  uVar2 = se::Object::getProperty(param_1,"renderer",aVStack_60);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject((HandleObject *)&local_50,pOVar3);
    se::Value::setObject(aVStack_60,(HandleObject *)&local_50,false);
    se::Object::setProperty(param_1,"renderer",aVStack_60);
    se::HandleObject::~HandleObject((HandleObject *)&local_50);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_60);
  local_48 = 0;
  local_40 = (void *)0x0;
  local_50 = (Class *)0x6769666e6f430c;
  this = (Class *)se::Class::create((basic_string *)&local_50,pOVar3,(Object *)0x0,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((ulong)local_50 & 1) != 0) {
    operator_delete(local_40);
  }
  se::Class::defineStaticFunction(this,"addStage",js_renderer_Config_addStageRegistry);
  se::Class::install(this);
  local_68 = (Class *)0x187a97b;
  local_50 = this;
  std::__ndk1::
  __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,se::Class*>>>
  ::__emplace_unique_impl<char_const*&,se::Class*&>(JSBClassType::__jsbClassTypeMap,&local_68);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Effect_proto,"self",js_renderer_Effect_selfRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Light_proto,"extractView",js_renderer_Light_extractViewRegistry)
  ;
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Light_proto,"setNode",js_renderer_Light_setNodeRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_View_proto,"getForward",js_renderer_View_getForwardRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_View_proto,"getPosition",js_renderer_View_getPositionRegistry);
  se::Value::Value((Value *)&local_50);
  se::Object::getProperty(param_1,"renderer",(Value *)&local_50);
  pOVar3 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineFunction(pOVar3,"addStage",js_renderer_addStageRegistry);
  pOVar3 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineFunction(pOVar3,"stageIDs",js_renderer_getStageIDsRegistry);
  pOVar3 = (Object *)se::Value::toObject((Value *)&local_50);
  se::Object::defineFunction(pOVar3,"stageID",js_renderer_getStageIDRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Camera_proto,"setNode",js_renderer_Camera_setNodeRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Camera_proto,"getNode",js_renderer_Camera_getNodeRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Camera_proto,"screenToWorld",
             js_renderer_Camera_screenToWorldRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Camera_proto,"worldToScreen",
             js_renderer_Camera_worldToScreenRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_Effect_proto,"init",js_renderer_Effect_initRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_EffectBase_proto,"setProperty",
             js_renderer_EffectBase_setPropertyRegistry);
  se::Value::~Value((Value *)&local_50);
  se::Value::~Value(aVStack_60);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

