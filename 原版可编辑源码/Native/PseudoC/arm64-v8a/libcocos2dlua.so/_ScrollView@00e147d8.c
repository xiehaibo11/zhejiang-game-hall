
/* non-virtual thunk to cocos2d::extension::ScrollView::~ScrollView() */

void __thiscall cocos2d::extension::ScrollView::~ScrollView(ScrollView *this)

{
  void *pvVar1;
  Layer *this_00;
  
  this_00 = (Layer *)(this + -800);
  *(undefined ***)this_00 = &PTR__ScrollView_016ecdf8;
  *(undefined ***)this = &PTR__ScrollView_016ed468;
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0xf0));
  CustomCommand::~CustomCommand((CustomCommand *)(this + 0xa0));
  pvVar1 = *(void **)(this + 0x58);
  if (pvVar1 != (void *)0x0) {
    *(void **)(this + 0x60) = pvVar1;
    operator_delete(pvVar1);
  }
  Layer::~Layer(this_00);
  operator_delete(this_00);
  return;
}

