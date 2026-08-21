
/* cocos2d::extension::ScrollView::~ScrollView() */

void __thiscall cocos2d::extension::ScrollView::~ScrollView(ScrollView *this)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00e144f4 with catch @ 00e14778 */
                    /* catch() { ... } // from try @ 00e144ac with catch @ 00e14784 */
                    /* catch() { ... } // from try @ 00e144d0 with catch @ 00e14790
                       catch() { ... } // from try @ 00e1458c with catch @ 00e14790
                       catch() { ... } // from try @ 00e145c8 with catch @ 00e14790
                       catch() { ... } // from try @ 00e14688 with catch @ 00e14790
                       catch() { ... } // from try @ 00e146c8 with catch @ 00e14790 */
  *(undefined ***)this = &PTR__ScrollView_016ecdf8;
  *(undefined ***)(this + 800) = &PTR__ScrollView_016ed468;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x410));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x3c0));
  pvVar1 = *(void **)(this + 0x378);
                    /* try { // try from 00e147b4 to 00f1487b has its CatchHandler @ 00e147b4
                       catch() { ... } // from try @ 00e147b4 with catch @ 00e147b4
                       catch() { ... } // from try @ 00e148b4 with catch @ 00e147b4 */
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x380) = pvVar1;
    operator_delete(pvVar1);
  }
  Layer::~Layer((Layer *)this);
  operator_delete(this);
  return;
}

