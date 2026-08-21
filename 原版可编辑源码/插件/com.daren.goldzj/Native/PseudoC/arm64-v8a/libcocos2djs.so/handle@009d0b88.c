
/* cocos2d::renderer::MeshAssembler::handle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::MeshAssembler::handle
               (NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  ModelBatcher *pMVar1;
  
  pMVar1 = param_2;
  if (*(NodeProxy **)(param_1 + 0x70) != (NodeProxy *)0x0) {
    pMVar1 = (ModelBatcher *)*(NodeProxy **)(param_1 + 0x70);
  }
  ModelBatcher::commitIA
            ((ModelBatcher *)param_3,(NodeProxy *)pMVar1,(CustomAssembler *)param_1,
             **(int **)(param_2 + 0xb0));
  ModelBatcher::flushIA((ModelBatcher *)param_3);
  return;
}

