
/* cocos2d::ui::PageViewIndicator::decreaseNumberOfPages() */

void __thiscall cocos2d::ui::PageViewIndicator::decreaseNumberOfPages(PageViewIndicator *this)

{
  size_t __n;
  long *plVar1;
  undefined8 *__dest;
  
  plVar1 = *(long **)(this + 0x338);
  if (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x170))(plVar1,1);
    *(undefined8 *)(this + 0x338) = 0;
  }
  if (*(undefined8 **)(this + 0x318) != *(undefined8 **)(this + 800)) {
    (**(code **)(*(long *)this + 0x550))(this,**(undefined8 **)(this + 0x318),1);
    __dest = *(undefined8 **)(this + 0x318);
    Ref::release((Ref *)*__dest);
    __n = *(long *)(this + 800) - (long)(__dest + 1);
    if (__n != 0) {
      memmove(__dest,__dest + 1,__n);
    }
    *(undefined8 **)(this + 800) = __dest + ((long)__n >> 3);
  }
  return;
}

