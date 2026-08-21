
/* cocos2d::ui::TextField::setMaxLength(int) */

void __thiscall cocos2d::ui::TextField::setMaxLength(TextField *this,int param_1)

{
  long *plVar1;
  
                    /* try { // try from 00dcf618 to 00ecf677 has its CatchHandler @ 00dcf5ec */
  plVar1 = *(long **)(this + 0x4f0);
  *(int *)((long)plVar1 + 0x744) = param_1;
  (**(code **)(*plVar1 + 0x590))();
  setString((basic_string *)this);
  return;
}

