
/* cocos2d::ui::TabControl::TabControl() */

void __thiscall cocos2d::ui::TabControl::TabControl(TabControl *this)

{
  long lVar1;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00df1074 with catch @ 00df11b0
                        */
  Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0x510) = 0;
  *(undefined8 *)(this + 0x520) = 0;
  *(undefined4 *)(this + 0x530) = 0;
  *(undefined ***)this = &PTR__TabControl_016e6580;
  *(undefined ***)(this + 0x318) = &PTR__TabControl_016e6c10;
  *(undefined8 *)(this + 0x528) = 0x3200000014;
  *(undefined8 *)(this + 0x534) = 0;
  Size::Size((Size *)(this + 0x53c),(Size *)&Size::ZERO);
  *(undefined8 *)(this + 0x550) = 0;
  *(undefined8 *)(this + 0x560) = 0;
  *(undefined8 *)(this + 0x558) = 0;
  *(undefined4 *)(this + 0x544) = 0x3dcccccd;
  this[0x548] = (TabControl)0x1;
  *(undefined8 *)(this + 0x78) = 0;
  Size::Size(aSStack_40,200.0,200.0);
  (**(code **)(*(long *)this + 0x160))(this,aSStack_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

