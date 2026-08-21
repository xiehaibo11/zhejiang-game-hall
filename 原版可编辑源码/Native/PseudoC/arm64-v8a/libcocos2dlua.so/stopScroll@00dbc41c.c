
/* cocos2d::ui::ScrollView::stopScroll() */

void __thiscall cocos2d::ui::ScrollView::stopScroll(ScrollView *this)

{
  if (this[0x81c] != (ScrollView)0x0) {
    if (*(ScrollViewBar **)(this + 0x858) != (ScrollViewBar *)0x0) {
      ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(this + 0x858));
    }
                    /* try { // try from 00dbc440 to 00ebc4f7 has its CatchHandler @ 00dbc440
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbc440 with catch @ 00dbc440
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbc6dc with catch @ 00dbc440
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbc814 with catch @ 00dbc440
                        */
    if (*(ScrollViewBar **)(this + 0x860) != (ScrollViewBar *)0x0) {
      ScrollViewBar::onTouchEnded(*(ScrollViewBar **)(this + 0x860));
    }
    this[0x81c] = (ScrollView)0x0;
    this[0x7d4] = (ScrollView)0x0;
    startBounceBackIfNeeded();
    dispatchEvent(this,10,0xb);
    return;
  }
  return;
}

