
/* js_register_cocos2dx_dragonbones_CCTextureAtlasData(se::Object*) */

undefined8 js_register_cocos2dx_dragonbones_CCTextureAtlasData(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined7 uStack_3f;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined2 uStack_2f;
  undefined1 uStack_2d;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_2c = 0;
  local_40 = (basic_string)0x24;
  uStack_2f = 0x6174;
  uStack_37 = 0x4473616c744165;
  uStack_30 = 0x61;
  uStack_3f = 0x75747865544343;
  uStack_38 = 0x72;
  uStack_2d = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_dragonBones_TextureAtlasData_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete((void *)CONCAT44(uStack_2c,CONCAT13(uStack_2d,CONCAT21(uStack_2f,uStack_30))));
  }
  se::Class::defineFunction
            (this,"setRenderTexture",
             js_cocos2dx_dragonbones_CCTextureAtlasData_setRenderTextureRegistry);
  se::Class::defineFunction
            (this,"getRenderTexture",
             js_cocos2dx_dragonbones_CCTextureAtlasData_getRenderTextureRegistry);
  se::Class::install(this);
  JSBClassType::registerClass<dragonBones::CCTextureAtlasData>(this);
  __jsb_dragonBones_CCTextureAtlasData_proto = se::Class::getProto(this);
  __jsb_dragonBones_CCTextureAtlasData_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

