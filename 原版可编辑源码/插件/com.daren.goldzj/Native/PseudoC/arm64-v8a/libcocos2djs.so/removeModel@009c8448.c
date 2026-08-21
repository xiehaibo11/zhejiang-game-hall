
/* cocos2d::renderer::Scene::removeModel(cocos2d::renderer::Model*) */

void __thiscall cocos2d::renderer::Scene::removeModel(Scene *this,Model *param_1)

{
  long *plVar1;
  size_t __n;
  Model *pMVar2;
  long *__dest;
  
  __dest = *(long **)(this + 0x30);
  plVar1 = *(long **)(this + 0x38);
                    /* try { // try from 009c8460 to 00ac84b3 has its CatchHandler @ 009c8460
                       catch() { ... } // from try @ 009c8460 with catch @ 009c8460
                       catch() { ... } // from try @ 009c8660 with catch @ 009c8460 */
  if (__dest != plVar1) {
    pMVar2 = (Model *)*__dest;
    while (pMVar2 != param_1) {
      __dest = __dest + 1;
      if (plVar1 == __dest) {
        return;
      }
      pMVar2 = (Model *)*__dest;
    }
  }
  if (__dest != plVar1) {
    __n = (long)plVar1 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
                    /* try { // try from 009c84b4 to 00ac84cb has its CatchHandler @ 009c86cc */
    *(long **)(this + 0x38) = __dest + ((long)__n >> 3);
  }
  return;
}

