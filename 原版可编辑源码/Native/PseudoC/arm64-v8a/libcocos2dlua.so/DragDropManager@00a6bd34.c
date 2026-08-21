
/* fairygui::DragDropManager::DragDropManager() */

void __thiscall fairygui::DragDropManager::DragDropManager(DragDropManager *this)

{
  long lVar1;
  Ref *this_00;
  code *pcVar2;
  undefined **local_70;
  code *local_68;
  undefined8 uStack_60;
  DragDropManager *local_58;
  long *local_50;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  *(undefined8 *)this = 0;
  cocos2d::Value::Value((Value *)(this + 8));
  this_00 = (Ref *)UIObjectFactory::newObject(4);
  *(Ref **)this = this_00;
  cocos2d::Ref::retain(this_00);
  GObject::setTouchable(*(GObject **)this,false);
  GObject::setDraggable(*(GObject **)this,true);
  GObject::setSize(*(GObject **)this,100.0,100.0,false);
  GObject::setPivot(*(GObject **)this,0.5,0.5,true);
  GLoader::setAlign(*(GLoader **)this,1);
  GLoader::setVerticalAlign(*(GLoader **)this,1);
  GObject::setSortingOrder(*(GObject **)this,0x7fffffff);
                    /* try { // try from 00a6bdf0 to 00b6be83 has its CatchHandler @ 00a6bdf0
                       catch() { ... } // from try @ 00a6bdf0 with catch @ 00a6bdf0
                       catch() { ... } // from try @ 00a6be8c with catch @ 00a6bdf0 */
  local_70 = &PTR_FUN_016a4d80;
  uStack_60 = 0;
  local_68 = onDragEnd;
  local_58 = this;
  local_50 = (long *)&local_70;
  UIEventDispatcher::addEventListener
            (*(UIEventDispatcher **)this,0x3e,(function *)&local_70,(EventTag *)&EventTag::None);
  if (&local_70 == (undefined ***)local_50) {
    pcVar2 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00a6be4c;
    pcVar2 = *(code **)(*local_50 + 0x28);
  }
  (*pcVar2)();
LAB_00a6be4c:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

