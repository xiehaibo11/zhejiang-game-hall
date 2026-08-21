
/* cocos2d::extension::ScrollView::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::extension::ScrollView::addChild
          (ScrollView *this,Node *param_1,int param_2,basic_string *param_3)

{
  if (*(Node **)(this + 0x340) != param_1) {
                    /* WARNING: Could not recover jumptable at 0x00e1620c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)*(Node **)(this + 0x340) + 0x220))();
    return;
  }
                    /* try { // try from 00e16214 to 00f1621f has its CatchHandler @ 00e163e0 */
  Node::addChild((Node *)this,param_1,param_2,param_3);
  return;
}

