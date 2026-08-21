
/* register_all_renderer(se::Object*) */

undefined8 register_all_renderer(Object *param_1)

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
  uVar2 = se::Object::getProperty(param_1,"renderer",aVStack_38);
  if ((uVar2 & 1) == 0) {
    pOVar3 = (Object *)se::Object::createPlainObject();
    se::HandleObject::HandleObject(aHStack_40,pOVar3);
    se::Value::setObject(aVStack_38,aHStack_40,false);
    se::Object::setProperty(param_1,"renderer",aVStack_38);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  pOVar3 = (Object *)se::Value::toObject(aVStack_38);
  js_register_renderer_ProgramLib(pOVar3);
  js_register_renderer_EffectBase(pOVar3);
  js_register_renderer_Camera(pOVar3);
  js_register_renderer_AssemblerBase(pOVar3);
  js_register_renderer_Assembler(pOVar3);
  js_register_renderer_AssemblerSprite(pOVar3);
  js_register_renderer_SimpleSprite3D(pOVar3);
  js_register_renderer_MemPool(pOVar3);
  js_register_renderer_NodeProxy(pOVar3);
  js_register_renderer_SimpleSprite2D(pOVar3);
  js_register_renderer_SlicedSprite3D(pOVar3);
  js_register_renderer_Effect(pOVar3);
  js_register_renderer_CustomAssembler(pOVar3);
  js_register_renderer_MeshAssembler(pOVar3);
  js_register_renderer_MaskAssembler(pOVar3);
  js_register_renderer_Light(pOVar3);
  js_register_renderer_NodeMemPool(pOVar3);
  js_register_renderer_TiledMapAssembler(pOVar3);
  js_register_renderer_Particle3DAssembler(pOVar3);
  js_register_renderer_BaseRenderer(pOVar3);
  js_register_renderer_ForwardRenderer(pOVar3);
  js_register_renderer_View(pOVar3);
  js_register_renderer_RenderFlow(pOVar3);
  js_register_renderer_SlicedSprite2D(pOVar3);
  js_register_renderer_EffectVariant(pOVar3);
  js_register_renderer_Scene(pOVar3);
  js_register_renderer_RenderDataList(pOVar3);
  se::Value::~Value(aVStack_38);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

