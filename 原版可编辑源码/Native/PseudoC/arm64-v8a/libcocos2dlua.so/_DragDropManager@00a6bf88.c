
/* fairygui::DragDropManager::~DragDropManager() */

void __thiscall fairygui::DragDropManager::~DragDropManager(DragDropManager *this)

{
  if (*(Ref **)this != (Ref *)0x0) {
    cocos2d::Ref::release(*(Ref **)this);
  }
  cocos2d::Value::~Value((Value *)(this + 8));
  return;
}

