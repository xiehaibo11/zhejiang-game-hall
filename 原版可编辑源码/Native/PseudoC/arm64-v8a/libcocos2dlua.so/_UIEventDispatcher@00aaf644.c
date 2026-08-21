
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
                    /* try { // try from 00aaf68c to 00baf6ef has its CatchHandler @ 00aaf68c
                       catch() { ... } // from try @ 00aaf68c with catch @ 00aaf68c
                       catch() { ... } // from try @ 00aaf8ac with catch @ 00aaf68c
                       catch() { ... } // from try @ 00ab027c with catch @ 00aaf68c */
  operator_delete(this);
  return;
}

