
/* cocos2d::ui::Widget::getScaleY() const */

float __thiscall cocos2d::ui::Widget::getScaleY(Widget *this)

{
  float fVar1;
  
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00dacafc with catch @ 00dacb94
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacb24 with catch @ 00dacb94
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacb4c with catch @ 00dacb94
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00daca9c with catch @ 00dacb98
                       catch(type#1 @ 00000000) { ... } // from try @ 00dacac8 with catch @ 00dacb98
                        */
                    /* try { // try from 00dacb9c to 00eacbfb has its CatchHandler @ 00dacb9c
                       catch() { ... } // from try @ 00dacb9c with catch @ 00dacb9c
                       catch() { ... } // from try @ 00dacc00 with catch @ 00dacb9c */
  fVar1 = (float)Node::getScaleY((Node *)this);
  if (this[0x3e1] != (Widget)0x0) {
    fVar1 = -fVar1;
  }
  return fVar1;
}

