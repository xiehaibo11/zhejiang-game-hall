
/* cocos2d::GLProgramState::AutoBindingResolver::~AutoBindingResolver() */

void __thiscall
cocos2d::GLProgramState::AutoBindingResolver::~AutoBindingResolver(AutoBindingResolver *this)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *__dest;
  
                    /* catch() { ... } // from try @ 00fda3f8 with catch @ 00fda43c */
  *(undefined ***)this = &PTR__AutoBindingResolver_01723ef8;
  __dest = _customAutoBindingResolvers;
                    /* catch() { ... } // from try @ 00fda49c with catch @ 00fda46c */
  if ((_customAutoBindingResolvers != DAT_01792688) &&
     ((AutoBindingResolver *)*_customAutoBindingResolvers != this)) {
    do {
      if (DAT_01792688 + -1 == __dest) {
        return;
      }
      puVar1 = __dest + 1;
      __dest = __dest + 1;
                    /* try { // try from 00fda494 to 010da49b has its CatchHandler @ 00fda4d8 */
    } while ((AutoBindingResolver *)*puVar1 != this);
  }
                    /* try { // try from 00fda49c to 010da4f3 has its CatchHandler @ 00fda46c */
  if (__dest != DAT_01792688) {
    __n = (long)DAT_01792688 - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    DAT_01792688 = __dest + ((long)__n >> 3);
  }
  return;
}

