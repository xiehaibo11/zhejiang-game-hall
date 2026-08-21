
/* cocos2d::renderer::ModelBatcher::reset() */

void __thiscall cocos2d::renderer::ModelBatcher::reset(ModelBatcher *this)

{
  long lVar1;
  long *plVar2;
  
                    /* try { // try from 009d250c to 00ad2567 has its CatchHandler @ 009d2270 */
  if (0 < *(int *)this) {
    lVar1 = 0;
    do {
      Model::reset(*(Model **)(*(long *)(this + 0x98) + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)this);
  }
  Scene::removeModels(*(Scene **)(*(long *)(this + 0x68) + 8));
  plVar2 = *(long **)(this + 0xc0);
  *(undefined4 *)this = 0;
  for (; plVar2 != (long *)0x0; plVar2 = (long *)*plVar2) {
    MeshBuffer::reset((MeshBuffer *)plVar2[3]);
                    /* try { // try from 009d2568 to 00ad257b has its CatchHandler @ 009d3368 */
  }
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined4 *)(this + 0x4c) = 0;
  if (*(Ref **)(this + 0x60) != (Ref *)0x0) {
                    /* try { // try from 009d257c to 00ad25d3 has its CatchHandler @ 009d2270 */
    Ref::release(*(Ref **)(this + 0x60));
    *(undefined8 *)(this + 0x60) = 0;
  }
  if (*(Ref **)(this + 0x50) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x50));
    *(undefined8 *)(this + 0x50) = 0;
  }
  InputAssembler::clear((InputAssembler *)(this + 0x78));
  *(undefined4 *)(this + 4) = 0;
  *(undefined2 *)(this + 8) = 0;
  Mat4::set((Mat4 *)(this + 0xc),(Mat4 *)Mat4::IDENTITY);
  StencilManager::reset(*(StencilManager **)(this + 0x70));
  return;
}

