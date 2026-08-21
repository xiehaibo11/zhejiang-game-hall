
/* fairygui::GComponent::removeChildAt(int) */

void __thiscall fairygui::GComponent::removeChildAt(GComponent *this,int param_1)

{
  undefined8 *__dest;
  size_t __n;
  long lVar1;
  ulong uVar2;
  GObject *this_00;
  
  this_00 = *(GObject **)(*(long *)(this + 0x1e0) + (long)param_1 * 8);
  *(undefined8 *)(this_00 + 0xa0) = 0;
  if (*(int *)(this_00 + 0xfc) != 0) {
    *(int *)(this + 0x274) = *(int *)(this + 0x274) + -1;
  }
  GObject::setGroup(this_00,(GGroup *)0x0);
  lVar1 = (**(code **)(**(long **)(this_00 + 0xa8) + 0x260))();
  if ((lVar1 != 0) &&
     ((**(code **)(**(long **)(this + 0x228) + 0x280))
                (*(long **)(this + 0x228),*(undefined8 *)(this_00 + 0xa8),0),
     *(int *)(this + 0x250) == 2)) {
    lVar1 = cocos2d::Director::getInstance();
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_buildNativeDisplayList
                      );
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_buildNativeDisplayList,(Ref *)0x0,0.0,
                 SUB81(this,0));
    }
  }
  __dest = (undefined8 *)(*(long *)(this + 0x1e0) + (long)param_1 * 8);
  cocos2d::Ref::release((Ref *)*__dest);
  __n = *(long *)(this + 0x1e8) - (long)(__dest + 1);
  if (__n != 0) {
    memmove(__dest,__dest + 1,__n);
  }
  *(undefined8 **)(this + 0x1e8) = __dest + ((long)__n >> 3);
  if ((*(long *)(this + 0x230) != 0) || (this[0x259] != (GComponent)0x0)) {
    this[600] = (GComponent)0x1;
    lVar1 = cocos2d::Director::getInstance();
    uVar2 = cocos2d::Scheduler::isScheduled
                      (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_doUpdateBounds);
    if ((uVar2 & 1) == 0) {
      lVar1 = cocos2d::Director::getInstance();
      cocos2d::Scheduler::schedule
                (*(Scheduler **)(lVar1 + 0xa0),__selector_doUpdateBounds,(Ref *)0x0,0.0,
                 SUB81(this,0));
      return;
    }
  }
  return;
}

