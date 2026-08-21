
/* fairygui::DragDropManager::cancel() */

void __thiscall fairygui::DragDropManager::cancel(DragDropManager *this)

{
  if (*(long *)(*(GObject **)this + 0xa0) != 0) {
    GObject::stopDrag(*(GObject **)this);
    GComponent::removeChild(GRoot::_inst,*(GObject **)this);
    cocos2d::Value::operator=((Value *)(this + 8),(Value *)&cocos2d::Value::Null);
  }
  return;
}

