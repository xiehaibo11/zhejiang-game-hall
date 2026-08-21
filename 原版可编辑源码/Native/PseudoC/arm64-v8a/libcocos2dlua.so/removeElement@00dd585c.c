
/* cocos2d::ui::RichText::removeElement(int) */

void __thiscall cocos2d::ui::RichText::removeElement(RichText *this,int param_1)

{
  undefined8 *__dest;
  size_t __n;
  
  __dest = (undefined8 *)(*(long *)(this + 0x4f8) + (long)param_1 * 8);
  Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x500) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x500) = __dest + ((long)__n >> 3);
  this[0x4f0] = (RichText)0x1;
  return;
}

