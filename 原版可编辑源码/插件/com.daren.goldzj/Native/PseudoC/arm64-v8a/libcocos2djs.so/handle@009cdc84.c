
/* cocos2d::renderer::Assembler::handle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::Assembler::handle(NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  ModelBatcher::commit
            ((ModelBatcher *)param_3,(NodeProxy *)param_2,(Assembler *)param_1,
             **(int **)(param_2 + 0xb0));
  return;
}

