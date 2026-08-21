
/* cocos2d::renderer::Particle3DAssembler::fillBuffers(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, unsigned long) */

void __thiscall
cocos2d::renderer::Particle3DAssembler::fillBuffers
          (Particle3DAssembler *this,NodeProxy *param_1,ModelBatcher *param_2,ulong param_3)

{
  IARenderData *pIVar1;
  ulong uVar2;
  MeshBuffer *pMVar3;
  RenderData *pRVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
                    /* try { // try from 009d12a0 to 00ad12ff has its CatchHandler @ 009d12a0
                       catch() { ... } // from try @ 009d12a0 with catch @ 009d12a0
                       catch() { ... } // from try @ 009d21e8 with catch @ 009d12a0 */
  lVar5 = 0x70;
  if (param_3 != 0) {
    lVar5 = 0xa0;
  }
  if ((*(VertexFormat **)(this + lVar5) != (VertexFormat *)0x0) && (*(long *)(this + 0x38) != 0)) {
    pMVar3 = (MeshBuffer *)ModelBatcher::getBuffer(param_2,*(VertexFormat **)(this + lVar5));
    pIVar1 = (IARenderData *)(*(long *)(this + 0x40) + param_3 * 0x20);
    uVar2 = (long)*(int *)(pIVar1 + 8);
    if (*(int *)(pIVar1 + 8) < 0) {
      uVar2 = param_3;
    }
    auVar6 = RenderDataList::getRenderData(*(RenderDataList **)(this + 0x38),uVar2);
    pRVar4 = auVar6._0_8_;
    if (pRVar4 != (RenderData *)0x0) {
                    /* try { // try from 009d1300 to 00ad1317 has its CatchHandler @ 009d2208 */
      if (param_3 != 0) {
        fillTrailBuffer(this,auVar6._8_8_,pMVar3,pIVar1,pRVar4);
        return;
      }
                    /* try { // try from 009d132c to 00ad1337 has its CatchHandler @ 009d21fc */
      fillBuffer(this,auVar6._8_8_,pMVar3,pIVar1,pRVar4);
      return;
    }
  }
                    /* try { // try from 009d1320 to 00ad132b has its CatchHandler @ 009d2200 */
  return;
}

