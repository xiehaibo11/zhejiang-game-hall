
/* fairygui::UIEventDispatcher::~UIEventDispatcher() */

void __thiscall fairygui::UIEventDispatcher::~UIEventDispatcher(UIEventDispatcher *this)

{
  void *pvVar1;
  
  *(undefined4 *)(this + 0x40) = 0;
  *(undefined ***)this = &PTR__UIEventDispatcher_016a9f08;
  removeEventListeners(this);
  pvVar1 = *(void **)(this + 0x28);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x30) = pvVar1;
    operator_delete(pvVar1);
  }
  cocos2d::Ref::~Ref((Ref *)this);
  return;
}

