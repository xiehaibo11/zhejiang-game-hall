
/* cocos2d::ui::Widget::setFlippedX(bool) */

void __thiscall cocos2d::ui::Widget::setFlippedX(Widget *this,bool param_1)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dacaa4 with catch @ 00daca34
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacad4 with catch @ 00daca34
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacb04 with catch @ 00daca34
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacb2c with catch @ 00daca34
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacb58 with catch @ 00daca34
                        */
  (**(code **)(*(long *)this + 0x58))();
  this[0x3e0] = (Widget)param_1;
                    /* WARNING: Could not recover jumptable at 0x00daca5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x50))(this);
  return;
}

