
/* cocos2d::renderer::Scene::addView(cocos2d::renderer::View*) */

void __thiscall cocos2d::renderer::Scene::addView(Scene *this,View *param_1)

{
  long lVar1;
  View *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x50) == *(undefined8 **)(this + 0x58)) {
    std::__ndk1::vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>>::
    __push_back_slow_path<cocos2d::renderer::View*const&>
              ((vector<cocos2d::renderer::View*,std::__ndk1::allocator<cocos2d::renderer::View*>> *)
               (this + 0x48),&local_30);
  }
  else {
                    /* try { // try from 009c861c to 00ac865f has its CatchHandler @ 009c86b4 */
    **(undefined8 **)(this + 0x50) = param_1;
    *(long *)(this + 0x50) = *(long *)(this + 0x50) + 8;
  }
  Ref::retain((Ref *)local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
                    /* try { // try from 009c8660 to 00ac8733 has its CatchHandler @ 009c8460 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

