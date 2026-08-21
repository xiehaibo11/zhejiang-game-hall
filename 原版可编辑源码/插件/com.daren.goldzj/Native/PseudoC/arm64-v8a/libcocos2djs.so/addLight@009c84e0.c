
/* cocos2d::renderer::Scene::addLight(cocos2d::renderer::Light*) */

void __thiscall cocos2d::renderer::Scene::addLight(Scene *this,Light *param_1)

{
  long lVar1;
  Light *local_30;
  long local_28;
  
                    /* try { // try from 009c84e0 to 00ac84eb has its CatchHandler @ 009c86ac */
                    /* try { // try from 009c84ec to 00ac8517 has its CatchHandler @ 009c86dc */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x20) == *(undefined8 **)(this + 0x28)) {
    std::__ndk1::vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
    ::__push_back_slow_path<cocos2d::renderer::Light*const&>
              ((vector<cocos2d::renderer::Light*,std::__ndk1::allocator<cocos2d::renderer::Light*>>
                *)(this + 0x18),&local_30);
  }
  else {
    **(undefined8 **)(this + 0x20) = param_1;
    *(long *)(this + 0x20) = *(long *)(this + 0x20) + 8;
  }
                    /* try { // try from 009c852c to 00ac8547 has its CatchHandler @ 009c86b4 */
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

