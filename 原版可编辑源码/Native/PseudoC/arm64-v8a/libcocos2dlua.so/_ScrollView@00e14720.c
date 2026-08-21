
/* non-virtual thunk to cocos2d::extension::ScrollView::~ScrollView() */

void __thiscall cocos2d::extension::ScrollView::~ScrollView(ScrollView *this)

{
  void *pvVar1;
  
                    /* catch() { ... } // from try @ 00e146e0 with catch @ 00e14728 */
                    /* catch() { ... } // from try @ 00e146a8 with catch @ 00e14734 */
                    /* catch() { ... } // from try @ 00e145e0 with catch @ 00e14738 */
  *(undefined ***)(this + -800) = &PTR__ScrollView_016ecdf8;
  *(undefined ***)this = &PTR__ScrollView_016ed468;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0xf0));
                    /* catch() { ... } // from try @ 00e145a8 with catch @ 00e14750 */
                    /* catch() { ... } // from try @ 00e14538 with catch @ 00e14754 */
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0xa0));
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
                    /* catch() { ... } // from try @ 00e1451c with catch @ 00e14764 */
    operator_delete(pvVar1);
  }
  Layer::~Layer((Layer *)(this + -800));
  return;
}

