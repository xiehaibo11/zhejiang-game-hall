
/* cocos2d::ui::EditBox::setFont(char const*, int) */

void cocos2d::ui::EditBox::setFont(char *param_1,int param_2)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00deacbc with catch @ 00dead20
                        */
  if ((param_2 != 0) && (*(long **)(param_1 + 0x5b8) != (long *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x00dead2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(**(long **)(param_1 + 0x5b8) + 0x18))();
    return;
  }
  return;
}

