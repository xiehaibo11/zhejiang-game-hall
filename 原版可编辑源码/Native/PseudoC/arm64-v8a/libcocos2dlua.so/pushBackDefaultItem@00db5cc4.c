
/* cocos2d::ui::ListView::pushBackDefaultItem() */

void __thiscall cocos2d::ui::ListView::pushBackDefaultItem(ListView *this)

{
  undefined8 uVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5f00 with catch @ 00db5cc4
                       catch(type#1 @ 00000000) { ... } // from try @ 00db6194 with catch @ 00db5cc4
                        */
  if (*(Widget **)(this + 0x8b0) != (Widget *)0x0) {
    uVar1 = Widget::clone(*(Widget **)(this + 0x8b0));
    (**(code **)(*(long *)this + 0x800))(this,uVar1);
    (**(code **)(*(long *)this + 0x208))(this,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00db5d20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x6a8))(this);
    return;
  }
  return;
}

