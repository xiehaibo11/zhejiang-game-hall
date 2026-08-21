
/* fairygui::ScrollPane::posChanged(bool) */

void __thiscall fairygui::ScrollPane::posChanged(ScrollPane *this,bool param_1)

{
  long lVar1;
  ulong uVar2;
  undefined4 uVar3;
  
  if (*(int *)(this + 0xbc) == 1) {
    if (param_1) goto LAB_00a938ac;
    uVar3 = 0xffffffff;
  }
  else {
    if (*(int *)(this + 0xbc) != 0) goto LAB_00a938ac;
    uVar3 = 0xffffffff;
    if (param_1) {
      uVar3 = 1;
    }
  }
  *(undefined4 *)(this + 0xbc) = uVar3;
LAB_00a938ac:
  this[0x45] = (ScrollPane)0x1;
  lVar1 = cocos2d::Director::getInstance();
  uVar2 = cocos2d::Scheduler::isScheduled
                    (*(_func_void_float **)(lVar1 + 0xa0),(Ref *)__selector_refresh);
  if ((uVar2 & 1) == 0) {
    lVar1 = cocos2d::Director::getInstance();
    cocos2d::Scheduler::schedule
              (*(Scheduler **)(lVar1 + 0xa0),__selector_refresh,(Ref *)0x0,0.0,SUB81(this,0));
    return;
  }
  return;
}

