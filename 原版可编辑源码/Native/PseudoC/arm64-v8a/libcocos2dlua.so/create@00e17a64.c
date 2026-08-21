
/* cocos2d::extension::TableView::create(cocos2d::extension::TableViewDataSource*, cocos2d::Size,
   cocos2d::Node*) */

ScrollView *
cocos2d::extension::TableView::create(undefined8 param_1,Size *param_2,undefined8 param_3)

{
  long lVar1;
  ScrollView *this;
  Size aSStack_50 [8];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x4f0,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
    ScrollView::ScrollView(this);
    *(undefined4 *)(this + 0x4e0) = 0xffffffff;
    *(undefined ***)this = &PTR__TableView_016ed758;
    *(undefined8 *)(this + 0x470) = 0;
    *(undefined8 *)(this + 0x488) = 0;
    *(undefined8 *)(this + 0x480) = 0;
    *(undefined8 *)(this + 0x498) = 0;
    *(undefined8 *)(this + 0x490) = 0;
    *(undefined8 *)(this + 0x4a8) = 0;
    *(undefined8 *)(this + 0x4a0) = 0;
    *(undefined8 *)(this + 0x4b8) = 0;
    *(undefined8 *)(this + 0x4b0) = 0;
    *(undefined8 *)(this + 0x4c8) = 0;
    *(undefined8 *)(this + 0x4c0) = 0;
    *(undefined8 *)(this + 0x4d8) = 0;
    *(undefined8 *)(this + 0x4d0) = 0;
    *(undefined ***)(this + 800) = &PTR__TableView_016eddd8;
    *(undefined ***)(this + 0x468) = &PTR__TableView_016ede00;
    this[0x4e4] = (ScrollView)0x0;
  }
  Size::Size(aSStack_50,param_2);
  initWithViewSize((TableView *)this,aSStack_50,param_3);
  Ref::autorelease((Ref *)this);
  *(undefined8 *)(this + 0x4d0) = param_1;
  _updateCellPositions((TableView *)this);
  _updateContentSize((TableView *)this);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

