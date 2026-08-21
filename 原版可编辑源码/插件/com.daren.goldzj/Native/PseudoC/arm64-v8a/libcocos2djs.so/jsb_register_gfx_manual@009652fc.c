
/* jsb_register_gfx_manual(se::Object*) */

undefined8 jsb_register_gfx_manual(Object *param_1)

{
  long lVar1;
  ulong uVar2;
  Object *pOVar3;
  HandleObject aHStack_40 [8];
  Value aVStack_38 [16];
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  se::Value::Value(aVStack_38);
  uVar2 = se::Object::getProperty(param_1,"gfx",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"gfx",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_38);
  js_register_gfx_VertexFormat(pOVar3);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_DeviceGraphics_proto,"clear",js_gfx_DeviceGraphics_clearRegistry
            );
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_DeviceGraphics_proto,"setUniform",
             js_gfx_DeviceGraphics_setUniformRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"init",js_gfx_VertexBuffer_initRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"update",js_gfx_VertexBuffer_updateRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"_format",
             (_func_void_Local_PropertyCallbackInfo_ptr *)0x0,
             js_gfx_VertexBuffer_prop_setFormatRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"_usage",
             js_gfx_VertexBuffer_prop_getUsageRegistry,js_gfx_VertexBuffer_prop_setUsageRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"_bytes",
             js_gfx_VertexBuffer_prop_getBytesRegistry,js_gfx_VertexBuffer_prop_setBytesRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"_numVertices",
             js_gfx_VertexBuffer_prop_getNumVerticesRegistry,
             js_gfx_VertexBuffer_prop_setNumVerticesRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_VertexBuffer_proto,"self",js_gfx_VertexBuffer_selfRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"init",js_gfx_IndexBuffer_initRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"update",js_gfx_IndexBuffer_updateRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"_format",
             js_gfx_IndexBuffer_prop_getFormatRegistry,js_gfx_IndexBuffer_prop_setFormatRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"_usage",
             js_gfx_IndexBuffer_prop_getUsageRegistry,js_gfx_IndexBuffer_prop_setUsageRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"_bytesPerIndex",
             js_gfx_IndexBuffer_prop_getBytesPerIndexRegistry,
             js_gfx_IndexBuffer_prop_setBytesPerIndexRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"_bytes",
             js_gfx_IndexBuffer_prop_getBytesRegistry,js_gfx_IndexBuffer_prop_setBytesRegistry);
  se::Object::defineProperty
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"_numIndices",
             js_gfx_IndexBuffer_prop_getNumIndicesRegistry,
             js_gfx_IndexBuffer_prop_setNumIndicesRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_IndexBuffer_proto,"self",js_gfx_IndexBuffer_selfRegistry);
  se::Object::defineFunction
            (__jsb_cocos2d_renderer_FrameBuffer_proto,"init",js_gfx_FrameBuffer_initRegistry);
  se::ScriptEngine::getInstance();
  se::ScriptEngine::clearException();
  se::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

