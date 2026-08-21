
/* cocos2d::ui::RichText::removeElement(cocos2d::ui::RichElement*) */

void __thiscall cocos2d::ui::RichText::removeElement(RichText *this,RichElement *param_1)

{
  undefined8 *puVar1;
  size_t __n;
  undefined8 *puVar2;
  undefined8 *__dest;
  
  __dest = *(undefined8 **)(this + 0x4f8);
  puVar2 = *(undefined8 **)(this + 0x500);
  if (__dest != puVar2) {
    if ((RichElement *)*__dest != param_1) {
      do {
        if (puVar2 + -1 == __dest) goto LAB_00dd5948;
        puVar1 = __dest + 1;
        __dest = __dest + 1;
      } while ((RichElement *)*puVar1 != param_1);
    }
    if (__dest != puVar2) {
      __n = (long)puVar2 - (long)(__dest + 1);
      if (__n != 0) {
        memmove(__dest,__dest + 1,__n);
      }
      *(undefined8 **)(this + 0x500) = __dest + ((long)__n >> 3);
      Ref::release((Ref *)param_1);
    }
  }
LAB_00dd5948:
  this[0x4f0] = (RichText)0x1;
  return;
}

