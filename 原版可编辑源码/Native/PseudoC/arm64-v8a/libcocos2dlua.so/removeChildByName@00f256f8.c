
/* cocos2d::Node::removeChildByName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&, bool) */

void __thiscall cocos2d::Node::removeChildByName(Node *this,basic_string *param_1,bool param_2)

{
  long lVar1;
  
                    /* try { // try from 00f25704 to 0102570f has its CatchHandler @ 00f25754 */
  lVar1 = (**(code **)(*(long *)this + 0x230))();
  if (lVar1 != 0) {
                    /* try { // try from 00f25728 to 01025733 has its CatchHandler @ 00f25750 */
                    /* try { // try from 00f25734 to 0102578b has its CatchHandler @ 00f2528c */
                    /* WARNING: Could not recover jumptable at 0x00f25738. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x280))(this,lVar1,param_2);
    return;
  }
  return;
}

