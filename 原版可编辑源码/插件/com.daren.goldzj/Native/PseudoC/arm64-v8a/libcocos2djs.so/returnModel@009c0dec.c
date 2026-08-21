
/* cocos2d::renderer::ModelPool::returnModel(cocos2d::renderer::Model*) */

void cocos2d::renderer::ModelPool::returnModel(Model *param_1)

{
                    /* catch() { ... } // from try @ 009c0c04 with catch @ 009c0df4 */
  if (*(long *)_pool < *(long *)(_pool + 8)) {
    if (*(Ref **)(param_1 + 0x48) != (Ref *)0x0) {
      Ref::release(*(Ref **)(param_1 + 0x48));
      *(undefined8 *)(param_1 + 0x48) = 0;
    }
    if (*(Ref **)param_1 != (Ref *)0x0) {
      Ref::release(*(Ref **)param_1);
      *(undefined8 *)param_1 = 0;
    }
    InputAssembler::clear((InputAssembler *)(param_1 + 0x50));
                    /* try { // try from 009c0e4c to 00ac0e9f has its CatchHandler @ 009c0e4c
                       catch() { ... } // from try @ 009c0e4c with catch @ 009c0e4c
                       catch() { ... } // from try @ 009c0ff8 with catch @ 009c0e4c */
    ccCArrayAppendValue(_pool,param_1);
    return;
  }
  if (param_1 != (Model *)0x0) {
    Model::~Model(param_1);
    operator_delete(param_1);
    return;
  }
  return;
}

