
/* cocos2d::renderer::Scene::removeCamera(cocos2d::renderer::Camera*) */

void __thiscall cocos2d::renderer::Scene::removeCamera(Scene *this,Camera *param_1)

{
  long *plVar1;
  size_t __n;
  Camera *pCVar2;
  long *__dest;
  
  __dest = *(long **)this;
  plVar1 = *(long **)(this + 8);
  if (__dest != plVar1) {
    pCVar2 = (Camera *)*__dest;
    while (pCVar2 != param_1) {
      __dest = __dest + 1;
      if (plVar1 == __dest) {
        return;
      }
      pCVar2 = (Camera *)*__dest;
    }
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
                    /* try { // try from 009c837c to 00ac845f has its CatchHandler @ 009c81d0 */
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(this + 8) = __dest + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

