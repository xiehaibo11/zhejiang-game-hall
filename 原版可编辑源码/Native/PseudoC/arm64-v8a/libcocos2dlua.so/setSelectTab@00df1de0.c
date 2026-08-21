
/* cocos2d::ui::TabControl::setSelectTab(int) */

void __thiscall cocos2d::ui::TabControl::setSelectTab(TabControl *this,int param_1)

{
                    /* try { // try from 00df1de0 to 00ef1efb has its CatchHandler @ 00df1c34 */
  dispatchSelectedTabChanged(this,param_1,0);
  return;
}

