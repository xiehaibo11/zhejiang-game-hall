
/* cocos2d::renderer::Scene::removeView(cocos2d::renderer::View*) */

void __thiscall cocos2d::renderer::Scene::removeView(Scene *this,View *param_1)

{
  long *plVar1;
  size_t __n;
  View *pVVar2;
  long *__dest;
  
  __dest = *(long **)(this + 0x48);
  plVar1 = *(long **)(this + 0x50);
  if (__dest != plVar1) {
    pVVar2 = (View *)*__dest;
    while (pVVar2 != param_1) {
      __dest = __dest + 1;
      if (plVar1 == __dest) {
        return;
      }
      pVVar2 = (View *)*__dest;
                    /* catch() { ... } // from try @ 009c84e0 with catch @ 009c86ac */
    }
                    /* catch() { ... } // from try @ 009c852c with catch @ 009c86b4
                       catch() { ... } // from try @ 009c861c with catch @ 009c86b4 */
    if (__dest != plVar1) {
      __n = (long)plVar1 - (long)(__dest + 1);
      if (__n != 0) {
                    /* catch() { ... } // from try @ 009c84b4 with catch @ 009c86cc */
        memmove(__dest,__dest + 1,__n);
      }
      *(long **)(this + 0x50) = __dest + ((long)__n >> 3);
                    /* catch() { ... } // from try @ 009c84ec with catch @ 009c86dc
                       catch() { ... } // from try @ 009c8564 with catch @ 009c86dc */
      Ref::release((Ref *)param_1);
      return;
    }
  }
  return;
}

