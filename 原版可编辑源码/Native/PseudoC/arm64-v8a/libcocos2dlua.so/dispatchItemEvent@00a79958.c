
/* fairygui::GList::dispatchItemEvent(fairygui::GObject*, fairygui::EventContext*) */

void __thiscall
fairygui::GList::dispatchItemEvent(GList *this,GObject *param_1,EventContext *param_2)

{
  int iVar1;
  
  iVar1 = 0x32;
  if (*(int *)(param_2 + 0x30) != 0xd) {
    iVar1 = 0x35;
  }
  UIEventDispatcher::dispatchEvent
            ((UIEventDispatcher *)this,iVar1,param_1,(Value *)&cocos2d::Value::Null);
  return;
}

