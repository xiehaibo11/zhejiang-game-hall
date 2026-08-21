
/* cocos2d::ParticleSystem::onEnter() */

void __thiscall cocos2d::ParticleSystem::onEnter(ParticleSystem *this)

{
  long lVar1;
  ulong uVar2;
  ParticleSystem *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,0), (uVar2 & 1) == 0)) {
    Node::onEnter((Node *)this);
    Node::scheduleUpdateWithPriority((Node *)this,1);
    local_30 = this;
    if (DAT_0178f898 == DAT_0178f8a0) {
      std::__ndk1::vector<cocos2d::ParticleSystem*,std::__ndk1::allocator<cocos2d::ParticleSystem*>>
      ::__push_back_slow_path<cocos2d::ParticleSystem*const&>
                ((vector<cocos2d::ParticleSystem*,std::__ndk1::allocator<cocos2d::ParticleSystem*>>
                  *)&__allInstances,&local_30);
    }
    else {
      *DAT_0178f898 = this;
      DAT_0178f898 = DAT_0178f898 + 1;
    }
    Ref::retain((Ref *)local_30);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

