
/* std::__ndk1::function<void (cocos2d::ui::RadioButton*, int,
   cocos2d::ui::RadioButtonGroup::EventType)>::~function() */

void __thiscall
std::__ndk1::function<void(cocos2d::ui::RadioButton*,int,cocos2d::ui::RadioButtonGroup::EventType)>
::~function(function<void(cocos2d::ui::RadioButton*,int,cocos2d::ui::RadioButtonGroup::EventType)>
            *this)

{
  function<void(cocos2d::ui::RadioButton*,int,cocos2d::ui::RadioButtonGroup::EventType)> *pfVar1;
  
  pfVar1 = *(function<void(cocos2d::ui::RadioButton*,int,cocos2d::ui::RadioButtonGroup::EventType)>
             **)(this + 0x20);
  if (this == pfVar1) {
                    /* WARNING: Could not recover jumptable at 0x00dc6110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x20))();
    return;
  }
  if (pfVar1 != (function<void(cocos2d::ui::RadioButton*,int,cocos2d::ui::RadioButtonGroup::EventType)>
                 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00dc6104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)pfVar1 + 0x28))();
    return;
  }
  return;
}

