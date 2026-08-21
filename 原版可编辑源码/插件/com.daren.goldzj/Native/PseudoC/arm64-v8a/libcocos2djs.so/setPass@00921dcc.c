
/* cocos2d::renderer::Technique::setPass(int, cocos2d::renderer::Pass*) */

void __thiscall cocos2d::renderer::Technique::setPass(Technique *this,int param_1,Pass *param_2)

{
  long lVar1;
  Ref *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = (Ref *)param_2;
  std::__ndk1::vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>>::
  insert((vector<cocos2d::renderer::Pass*,std::__ndk1::allocator<cocos2d::renderer::Pass*>> *)
         (this + 0x18),*(long *)(this + 0x18) + (long)param_1 * 8,&local_30);
  Ref::retain(local_30);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

