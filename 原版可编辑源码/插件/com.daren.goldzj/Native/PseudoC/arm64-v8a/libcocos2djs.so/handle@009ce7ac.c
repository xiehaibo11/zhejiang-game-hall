
/* cocos2d::renderer::CustomAssembler::handle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void cocos2d::renderer::CustomAssembler::handle
               (NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
                    /* catch() { ... } // from try @ 009ce444 with catch @ 009ce7ac */
                    /* catch() { ... } // from try @ 009ce438 with catch @ 009ce7b0 */
                    /* catch() { ... } // from try @ 009ce418 with catch @ 009ce7b4 */
  ModelBatcher::commitIA
            ((ModelBatcher *)param_3,(NodeProxy *)param_2,(CustomAssembler *)param_1,
             **(int **)(param_2 + 0xb0));
  return;
}

