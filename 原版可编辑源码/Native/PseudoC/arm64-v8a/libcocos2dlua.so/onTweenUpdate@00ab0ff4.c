
/* fairygui::GearColor::onTweenUpdate(fairygui::GTweener*) */

void fairygui::GearColor::onTweenUpdate(GTweener *param_1)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined4 local_54;
  Color3B aCStack_50 [8];
  Value aVStack_48 [16];
  long local_38;
  
                    /* catch() { ... } // from try @ 00ab0f90 with catch @ 00ab0ff4 */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  plVar3 = *(long **)(param_1 + 8);
  *(undefined1 *)((long)plVar3 + 0x99) = 1;
  local_54 = TweenValue::getColor
                       ((TweenValue *)(*(long *)(*(long *)(param_1 + 0x18) + 0x18) + 0x58));
  cocos2d::Color3B::Color3B(aCStack_50,(Color4B *)&local_54);
  uVar2 = ToolSet::colorToInt(aCStack_50);
  cocos2d::Value::Value(aVStack_48,uVar2);
  (**(code **)(*plVar3 + 0x38))(plVar3,2,aVStack_48);
  cocos2d::Value::~Value(aVStack_48);
  *(undefined1 *)(*(long *)(param_1 + 8) + 0x99) = 0;
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

