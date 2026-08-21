
/* cocos2d::renderer::Scene::addModel(cocos2d::renderer::Model*) */

void __thiscall cocos2d::renderer::Scene::addModel(Scene *this,Model *param_1)

{
  long lVar1;
  Model *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
                    /* catch() { ... } // from try @ 009c8250 with catch @ 009c83f0 */
                    /* catch() { ... } // from try @ 009c8244 with catch @ 009c83f4 */
                    /* catch() { ... } // from try @ 009c8224 with catch @ 009c83f8 */
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x38) == *(undefined8 **)(this + 0x40)) {
    std::__ndk1::vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>
    ::__push_back_slow_path<cocos2d::renderer::Model*const&>
              ((vector<cocos2d::renderer::Model*,std::__ndk1::allocator<cocos2d::renderer::Model*>>
                *)(this + 0x30),&local_30);
  }
  else {
    **(undefined8 **)(this + 0x38) = param_1;
                    /* catch() { ... } // from try @ 009c825c with catch @ 009c8408 */
    *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

