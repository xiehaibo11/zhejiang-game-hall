
/* cocos2d::ui::Widget::updateContentSizeWithTextureSize(cocos2d::Size const&) */

void cocos2d::ui::Widget::updateContentSizeWithTextureSize(Size *param_1)

{
  if ((param_1[0x381] == (Size)0x0) && (param_1[0x387] == (Size)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00daa6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)param_1 + 0x160))(param_1,param_1 + 0x39c);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00daa6bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1 + 0x160))();
  return;
}

