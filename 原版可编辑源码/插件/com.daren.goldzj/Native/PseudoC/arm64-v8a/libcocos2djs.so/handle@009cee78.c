
/* cocos2d::renderer::MaskAssembler::handle(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, cocos2d::renderer::Scene*) */

void __thiscall
cocos2d::renderer::MaskAssembler::handle
          (MaskAssembler *this,NodeProxy *param_1,ModelBatcher *param_2,Scene *param_3)

{
  StencilManager *pSVar1;
  long *plVar2;
  
  ModelBatcher::flush(param_2);
  ModelBatcher::flushIA(param_2);
  if (StencilManager::_instance == (StencilManager *)0x0) {
    pSVar1 = operator_new(0x28);
    StencilManager::StencilManager(pSVar1);
    StencilManager::_instance = pSVar1;
  }
  pSVar1 = StencilManager::_instance;
  StencilManager::pushMask(StencilManager::_instance,(bool)this[0xa8]);
  StencilManager::clear(pSVar1);
  ModelBatcher::commit(param_2,param_1,*(Assembler **)(this + 0xb8),**(int **)(param_1 + 0xb0));
  ModelBatcher::flush(param_2);
  StencilManager::enterLevel(pSVar1);
  if (this[0xa9] == (MaskAssembler)0x0) {
    plVar2 = *(long **)(this + 0xb0);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x10))(plVar2,param_1,param_2,param_3);
    }
  }
  else {
                    /* try { // try from 009cef24 to 00acf007 has its CatchHandler @ 009cecd8 */
    ModelBatcher::commit(param_2,param_1,(Assembler *)this,**(int **)(param_1 + 0xb0));
  }
  ModelBatcher::flush(param_2);
  StencilManager::enableMask(pSVar1);
  return;
}

