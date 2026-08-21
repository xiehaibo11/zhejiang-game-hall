
/* cocos2d::ui::ScrollView::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::ScrollView::addChild(ScrollView *this,Node *param_1,int param_2,basic_string *param_3)

{
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1,param_1,param_2);
                    /* WARNING: Could not recover jumptable at 0x00dbba00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(long **)(this + 0x7b8) + 0x220))(*(long **)(this + 0x7b8),param_1,param_2,param_3)
  ;
  return;
}

