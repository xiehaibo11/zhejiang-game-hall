
/* cocos2d::ui::ScrollView::~ScrollView() */

void __thiscall cocos2d::ui::ScrollView::~ScrollView(ScrollView *this)

{
                    /* try { // try from 00dbaff0 to 00ebb0db has its CatchHandler @ 00dbaff0
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbaff0 with catch @ 00dbaff0
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbb224 with catch @ 00dbaff0
                       catch(type#1 @ 00000000) { ... } // from try @ 00dbb2ac with catch @ 00dbaff0
                        */
  ~ScrollView(this);
  operator_delete(this);
  return;
}

