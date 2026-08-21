
/* fairygui::GGroup::~GGroup() */

void __thiscall fairygui::GGroup::~GGroup(GGroup *this)

{
  long lVar1;
  
  *(undefined ***)this = &PTR__GGroup_016a5918;
  lVar1 = cocos2d::Director::getInstance();
  cocos2d::Scheduler::unschedule
            (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_ensureBoundsCorrect);
  GObject::~GObject((GObject *)this);
  operator_delete(this);
  return;
}

