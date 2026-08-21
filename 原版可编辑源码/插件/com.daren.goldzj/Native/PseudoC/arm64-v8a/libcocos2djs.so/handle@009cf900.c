
/* cocos2d::renderer::TiledMapAssembler::handle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::TiledMapAssembler::handle
               (NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  ulong uVar1;
  NodeProxy *pNVar2;
  NodeProxy *pNVar3;
  NodeProxy *pNVar4;
  
  *(ModelBatcher **)(param_1 + 0xa8) = param_2;
  *(Scene **)(param_1 + 0xb0) = param_3;
  Assembler::handle(param_1,param_2,param_3);
  pNVar2 = param_1 + 0x98;
  pNVar3 = *(NodeProxy **)pNVar2;
  if (pNVar3 != (NodeProxy *)0x0) {
    uVar1 = *(long *)(param_1 + 0x48) - *(long *)(param_1 + 0x40) >> 5;
    pNVar4 = pNVar2;
    do {
      if (*(ulong *)(pNVar3 + 0x20) >= uVar1) {
        pNVar4 = pNVar3;
      }
      pNVar3 = *(NodeProxy **)(pNVar3 + (ulong)(*(ulong *)(pNVar3 + 0x20) < uVar1) * 8);
    } while (pNVar3 != (NodeProxy *)0x0);
    if ((pNVar4 != pNVar2) && (*(ulong *)(pNVar4 + 0x20) <= uVar1)) {
      renderNodes((TiledMapAssembler *)param_1,uVar1);
      return;
    }
  }
  return;
}

