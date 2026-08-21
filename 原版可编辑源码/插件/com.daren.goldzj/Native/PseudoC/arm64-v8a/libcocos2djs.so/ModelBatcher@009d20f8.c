
/* cocos2d::renderer::ModelBatcher::ModelBatcher(cocos2d::renderer::RenderFlow*) */

void __thiscall
cocos2d::renderer::ModelBatcher::ModelBatcher(ModelBatcher *this,RenderFlow *param_1)

{
  long lVar1;
  Model *this_00;
  StencilManager *this_01;
  uint uVar2;
  Model *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(undefined2 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  Mat4::Mat4((Mat4 *)(this + 0xc));
  *(RenderFlow **)(this + 0x68) = param_1;
  *(undefined8 *)(this + 0x70) = 0;
  *(undefined8 *)(this + 0x54) = 0;
  *(undefined8 *)(this + 0x4c) = 0;
  *(undefined4 *)(this + 100) = 0;
  *(undefined8 *)(this + 0x5c) = 0;
  InputAssembler::InputAssembler((InputAssembler *)(this + 0x78));
  uVar2 = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 200) = 0;
  *(undefined8 *)(this + 0xb0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xc0) = 0;
  *(undefined8 *)(this + 0xb8) = 0;
  *(undefined4 *)(this + 0xd0) = 0x3f800000;
  do {
    this_00 = operator_new(0x80);
    Model::Model(this_00);
    local_60 = this_00;
    if (*(undefined8 **)(this + 0xa0) < *(undefined8 **)(this + 0xa8)) {
      **(undefined8 **)(this + 0xa0) = this_00;
      *(long *)(this + 0xa0) = *(long *)(this + 0xa0) + 8;
    }
    else {
      std::__ndk1::
      vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>::
      __push_back_slow_path<cocos2d::renderer::Model*>
                ((vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>
                  *)(this + 0x98),&local_60);
    }
                    /* try { // try from 009d21bc to 00ad21e7 has its CatchHandler @ 009d2218 */
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x10);
  if (StencilManager::_instance == (StencilManager *)0x0) {
    this_01 = operator_new(0x28);
    StencilManager::StencilManager(this_01);
                    /* try { // try from 009d21e8 to 00ad226f has its CatchHandler @ 009d12a0 */
    StencilManager::_instance = this_01;
  }
  *(StencilManager **)(this + 0x70) = StencilManager::_instance;
                    /* catch() { ... } // from try @ 009d132c with catch @ 009d21fc */
  if (*(long *)(lVar1 + 0x28) == local_58) {
                    /* catch() { ... } // from try @ 009d1320 with catch @ 009d2200 */
                    /* catch() { ... } // from try @ 009d160c with catch @ 009d2204 */
                    /* catch() { ... } // from try @ 009d1300 with catch @ 009d2208 */
                    /* catch() { ... } // from try @ 009d1338 with catch @ 009d2218
                       catch() { ... } // from try @ 009d21bc with catch @ 009d2218 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

