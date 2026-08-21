
/* fairygui::DragDropManager::onDragEnd(fairygui::EventContext*) */

void fairygui::DragDropManager::onDragEnd(EventContext *param_1)

{
  UIEventDispatcher *this;
  long lVar1;
  ulong uVar2;
  
                    /* catch() { ... } // from try @ 00a6be84 with catch @ 00a6bec8 */
  if (*(long *)(*(GObject **)param_1 + 0xa0) != 0) {
    GComponent::removeChild(GRoot::_inst,*(GObject **)param_1);
    for (this = (UIEventDispatcher *)GRoot::getTouchTarget((GRoot *)GRoot::_inst);
        this != (UIEventDispatcher *)0x0; this = *(UIEventDispatcher **)(this + 0xa0)) {
      lVar1 = __dynamic_cast(this,&GObject::typeinfo,&GComponent::typeinfo,0);
      if ((lVar1 != 0) &&
         (uVar2 = UIEventDispatcher::hasEventListener(this,0x3f,(EventTag *)&EventTag::None),
         (uVar2 & 1) != 0)) {
        UIEventDispatcher::dispatchEvent(this,0x3f,(void *)0x0,(Value *)(param_1 + 8));
        return;
      }
    }
  }
  return;
}

