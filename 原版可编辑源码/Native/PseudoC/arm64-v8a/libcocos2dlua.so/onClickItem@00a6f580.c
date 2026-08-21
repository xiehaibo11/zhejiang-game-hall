
/* fairygui::GComboBox::onClickItem(fairygui::EventContext*) */

void __thiscall fairygui::GComboBox::onClickItem(GComboBox *this,EventContext *param_1)

{
  int iVar1;
  long lVar2;
  GObject *pGVar3;
  GRoot *this_00;
  
  pGVar3 = *(GObject **)(this + 0x288);
  this_00 = *(GRoot **)(pGVar3 + 0xa0);
  if ((this_00 != (GRoot *)0x0) &&
     (lVar2 = __dynamic_cast(this_00,&GComponent::typeinfo,&GRoot::typeinfo,0), lVar2 != 0)) {
    GRoot::hidePopup(this_00,pGVar3);
  }
  *(undefined4 *)(this + 0x2fc) = 0x80000000;
  iVar1 = GComponent::getChildIndex(*(GComponent **)(this + 0x2a0),*(GObject **)(param_1 + 0x20));
  setSelectedIndex(this,iVar1);
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,2,(void *)0x0,(Value *)&cocos2d::Value::Null);
  return;
}

