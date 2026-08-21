
/* cocos2d::renderer::Scene::removeLight(cocos2d::renderer::Light*) */

void __thiscall cocos2d::renderer::Scene::removeLight(Scene *this,Light *param_1)

{
  long *plVar1;
  size_t __n;
  Light *pLVar2;
  long *__dest;
  
                    /* try { // try from 009c8564 to 00ac85e3 has its CatchHandler @ 009c86dc */
  __dest = *(long **)(this + 0x18);
  plVar1 = *(long **)(this + 0x20);
  if (__dest != plVar1) {
    pLVar2 = (Light *)*__dest;
    while (pLVar2 != param_1) {
      __dest = __dest + 1;
      if (plVar1 == __dest) {
        return;
      }
      pLVar2 = (Light *)*__dest;
    }
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(this + 0x20) = __dest + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

