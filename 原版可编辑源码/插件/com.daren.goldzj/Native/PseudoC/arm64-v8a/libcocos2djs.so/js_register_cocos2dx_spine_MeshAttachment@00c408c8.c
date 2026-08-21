
/* js_register_cocos2dx_spine_MeshAttachment(se::Object*) */

undefined8 js_register_cocos2dx_spine_MeshAttachment(Object *param_1)

{
  long lVar1;
  Class *this;
  basic_string local_40;
  undefined6 uStack_3f;
  undefined2 local_39;
  undefined6 uStack_37;
  undefined1 local_31;
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (void *)0x0;
  local_40 = (basic_string)0x1c;
  uStack_37 = 0x746e656d6863;
  uStack_3f = 0x74416873654d;
  local_39 = 0x6174;
  local_31 = 0;
  this = (Class *)se::Class::create(&local_40,param_1,__jsb_spine_VertexAttachment_proto,
                                    (_func_void_FunctionCallbackInfo_ptr *)0x0);
  if (((byte)local_40 & 1) != 0) {
    operator_delete(local_30);
  }
  se::Class::defineFunction
            (this,"setRegionOriginalHeight",
             js_cocos2dx_spine_MeshAttachment_setRegionOriginalHeightRegistry);
  se::Class::defineFunction
            (this,"setRegionOffsetY",js_cocos2dx_spine_MeshAttachment_setRegionOffsetYRegistry);
  se::Class::defineFunction
            (this,"setRegionOffsetX",js_cocos2dx_spine_MeshAttachment_setRegionOffsetXRegistry);
  se::Class::defineFunction(this,"copy",js_cocos2dx_spine_MeshAttachment_copyRegistry);
  se::Class::defineFunction
            (this,"getRegionOriginalWidth",
             js_cocos2dx_spine_MeshAttachment_getRegionOriginalWidthRegistry);
  se::Class::defineFunction(this,"getWidth",js_cocos2dx_spine_MeshAttachment_getWidthRegistry);
  se::Class::defineFunction
            (this,"setParentMesh",js_cocos2dx_spine_MeshAttachment_setParentMeshRegistry);
  se::Class::defineFunction(this,"setWidth",js_cocos2dx_spine_MeshAttachment_setWidthRegistry);
  se::Class::defineFunction
            (this,"setRegionRotate",js_cocos2dx_spine_MeshAttachment_setRegionRotateRegistry);
  se::Class::defineFunction
            (this,"setRegionDegrees",js_cocos2dx_spine_MeshAttachment_setRegionDegreesRegistry);
  se::Class::defineFunction(this,"getUVs",js_cocos2dx_spine_MeshAttachment_getUVsRegistry);
  se::Class::defineFunction
            (this,"getRegionDegrees",js_cocos2dx_spine_MeshAttachment_getRegionDegreesRegistry);
  se::Class::defineFunction
            (this,"getRegionHeight",js_cocos2dx_spine_MeshAttachment_getRegionHeightRegistry);
  se::Class::defineFunction(this,"getRegionU2",js_cocos2dx_spine_MeshAttachment_getRegionU2Registry)
  ;
  se::Class::defineFunction(this,"getHeight",js_cocos2dx_spine_MeshAttachment_getHeightRegistry);
  se::Class::defineFunction(this,"getPath",js_cocos2dx_spine_MeshAttachment_getPathRegistry);
  se::Class::defineFunction(this,"setRegionV2",js_cocos2dx_spine_MeshAttachment_setRegionV2Registry)
  ;
  se::Class::defineFunction
            (this,"setRegionWidth",js_cocos2dx_spine_MeshAttachment_setRegionWidthRegistry);
  se::Class::defineFunction(this,"setRegionV",js_cocos2dx_spine_MeshAttachment_setRegionVRegistry);
  se::Class::defineFunction(this,"setPath",js_cocos2dx_spine_MeshAttachment_setPathRegistry);
  se::Class::defineFunction(this,"setRegionU",js_cocos2dx_spine_MeshAttachment_setRegionURegistry);
  se::Class::defineFunction
            (this,"setHullLength",js_cocos2dx_spine_MeshAttachment_setHullLengthRegistry);
  se::Class::defineFunction(this,"getColor",js_cocos2dx_spine_MeshAttachment_getColorRegistry);
  se::Class::defineFunction
            (this,"getRegionOriginalHeight",
             js_cocos2dx_spine_MeshAttachment_getRegionOriginalHeightRegistry);
  se::Class::defineFunction(this,"getEdges",js_cocos2dx_spine_MeshAttachment_getEdgesRegistry);
  se::Class::defineFunction
            (this,"getRegionUVs",js_cocos2dx_spine_MeshAttachment_getRegionUVsRegistry);
  se::Class::defineFunction(this,"getRegionV2",js_cocos2dx_spine_MeshAttachment_getRegionV2Registry)
  ;
  se::Class::defineFunction
            (this,"getRegionWidth",js_cocos2dx_spine_MeshAttachment_getRegionWidthRegistry);
  se::Class::defineFunction(this,"setHeight",js_cocos2dx_spine_MeshAttachment_setHeightRegistry);
  se::Class::defineFunction
            (this,"setRegionOriginalWidth",
             js_cocos2dx_spine_MeshAttachment_setRegionOriginalWidthRegistry);
  se::Class::defineFunction
            (this,"newLinkedMesh",js_cocos2dx_spine_MeshAttachment_newLinkedMeshRegistry);
  se::Class::defineFunction(this,"updateUVs",js_cocos2dx_spine_MeshAttachment_updateUVsRegistry);
  se::Class::defineFunction(this,"setRegionU2",js_cocos2dx_spine_MeshAttachment_setRegionU2Registry)
  ;
  se::Class::defineFunction
            (this,"getHullLength",js_cocos2dx_spine_MeshAttachment_getHullLengthRegistry);
  se::Class::defineFunction
            (this,"setRegionHeight",js_cocos2dx_spine_MeshAttachment_setRegionHeightRegistry);
  se::Class::defineFunction
            (this,"getTriangles",js_cocos2dx_spine_MeshAttachment_getTrianglesRegistry);
  se::Class::defineFunction
            (this,"getRegionOffsetY",js_cocos2dx_spine_MeshAttachment_getRegionOffsetYRegistry);
  se::Class::defineFunction
            (this,"getRegionOffsetX",js_cocos2dx_spine_MeshAttachment_getRegionOffsetXRegistry);
  se::Class::defineFunction(this,"getRegionV",js_cocos2dx_spine_MeshAttachment_getRegionVRegistry);
  se::Class::defineFunction
            (this,"getRegionRotate",js_cocos2dx_spine_MeshAttachment_getRegionRotateRegistry);
  se::Class::defineFunction
            (this,"getParentMesh",js_cocos2dx_spine_MeshAttachment_getParentMeshRegistry);
  se::Class::defineFunction(this,"getRegionU",js_cocos2dx_spine_MeshAttachment_getRegionURegistry);
  se::Class::install(this);
  JSBClassType::registerClass<spine::MeshAttachment>(this);
  __jsb_spine_MeshAttachment_proto = se::Class::getProto(this);
  __jsb_spine_MeshAttachment_class = this;
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

