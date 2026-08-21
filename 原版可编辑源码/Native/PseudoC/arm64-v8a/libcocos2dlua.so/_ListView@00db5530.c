
/* non-virtual thunk to cocos2d::ui::ListView::~ListView() */

void __thiscall cocos2d::ui::ListView::~ListView(ListView *this)

{
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db53a0 with catch @ 00db5530
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00db5240 with catch @ 00db5544
                        */
  ~ListView(this + -0x4f0);
                    /* try { // try from 00db5548 to 00eb5583 has its CatchHandler @ 00db5548
                       catch(type#1 @ 00000000) { ... } // from try @ 00db5548 with catch @ 00db5548
                       catch(type#1 @ 00000000) { ... } // from try @ 00db561c with catch @ 00db5548
                        */
  operator_delete(this + -0x4f0);
  return;
}

