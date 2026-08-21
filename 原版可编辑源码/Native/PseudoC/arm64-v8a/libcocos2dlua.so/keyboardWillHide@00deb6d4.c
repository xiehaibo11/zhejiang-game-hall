
/* cocos2d::ui::EditBox::keyboardWillHide(cocos2d::IMEKeyboardNotificationInfo&) */

void __thiscall
cocos2d::ui::EditBox::keyboardWillHide(EditBox *this,IMEKeyboardNotificationInfo *param_1)

{
  if (*(long **)(this + 0x5b8) != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00deb6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(this + 0x5b8) + 0xe0))
              (*(undefined4 *)(param_1 + 0x20),-*(float *)(this + 0x5c8));
    return;
  }
  return;
}

