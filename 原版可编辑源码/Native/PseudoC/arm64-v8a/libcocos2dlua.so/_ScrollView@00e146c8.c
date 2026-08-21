
/* cocos2d::extension::ScrollView::~ScrollView() */

void __thiscall cocos2d::extension::ScrollView::~ScrollView(ScrollView *this)

{
  void *pvVar1;
  
                    /* try { // try from 00e146c8 to 00f146d3 has its CatchHandler @ 00e14790 */
                    /* try { // try from 00e146e0 to 00f146e7 has its CatchHandler @ 00e14728 */
                    /* try { // try from 00e146e8 to 00f147b3 has its CatchHandler @ 00e14430 */
  *(undefined ***)this = &PTR__ScrollView_016ecdf8;
  *(undefined ***)(this + 800) = &PTR__ScrollView_016ed468;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x410));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0x3c0));
  pvVar1 = *(void **)(this + 0x378);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x380) = pvVar1;
    operator_delete(pvVar1);
  }
  Layer::~Layer((Layer *)this);
  return;
}

