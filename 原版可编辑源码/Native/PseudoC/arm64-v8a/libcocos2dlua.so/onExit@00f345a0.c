
/* cocos2d::ParticleSystem::onExit() */

void __thiscall cocos2d::ParticleSystem::onExit(ParticleSystem *this)

{
  undefined8 *puVar1;
  size_t __n;
  ulong uVar2;
  undefined8 *__dest;
  
  if ((*(int *)(this + 0x208) != 2) ||
     (uVar2 = ScriptEngineManager::sendNodeEventToJSExtended((Node *)this,1), (uVar2 & 1) == 0)) {
    Node::unscheduleUpdate((Node *)this);
    Node::onExit((Node *)this);
    __dest = __allInstances;
    if ((DAT_0178f898 != __allInstances) && ((ParticleSystem *)*__allInstances != this)) {
      do {
        if (DAT_0178f898 + -1 == __dest) {
          return;
        }
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((ParticleSystem *)*puVar1 != this);
    }
    if (__dest != DAT_0178f898) {
      Ref::release((Ref *)*__dest);
      __n = (long)DAT_0178f898 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      DAT_0178f898 = __dest + ((long)__n >> 3);
    }
  }
  return;
}

