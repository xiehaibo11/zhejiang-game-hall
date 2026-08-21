
/* cocos2d::extension::ScrollView::create(cocos2d::Size, cocos2d::Node*) */

ScrollView * cocos2d::extension::ScrollView::create(Size *param_1,undefined8 param_2)

{
  long lVar1;
  ScrollView *this;
  ulong uVar2;
  Size aSStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = operator_new(0x470,(nothrow_t *)&std::nothrow);
  if (this != (ScrollView *)0x0) {
                    /* try { // try from 00e1487c to 00f14883 has its CatchHandler @ 00e149d4 */
    ScrollView(this);
    Size::Size(aSStack_40,param_1);
                    /* try { // try from 00e14898 to 00f1489f has its CatchHandler @ 00e149dc */
    uVar2 = initWithViewSize(this,aSStack_40,param_2);
    if ((uVar2 & 1) == 0) {
                    /* try { // try from 00e148ac to 00f148b3 has its CatchHandler @ 00e149c4 */
                    /* try { // try from 00e148b4 to 00f149f7 has its CatchHandler @ 00e147b4 */
      (**(code **)(*(long *)this + 8))(this);
      this = (ScrollView *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return this;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

