
/* cocos2d::ui::Layout::Layout() */

void __thiscall cocos2d::ui::Layout::Layout(Layout *this)

{
  undefined2 uVar1;
  Layout LVar2;
  StencilStateManager *this_00;
  
  Widget::Widget((Widget *)this);
  *(undefined8 *)(this + 0x520) = 0;
  this[0x530] = (Layout)0x0;
  *(undefined8 *)(this + 0x538) = 0;
  *(undefined ***)this = &PTR__Layout_016d9070;
  *(undefined ***)(this + 0x318) = &PTR__Layout_016d9750;
                    /* try { // try from 00dadf7c to 00eadf8b has its CatchHandler @ 00dae2f8 */
  *(undefined ***)(this + 0x4f0) = &PTR__Layout_016d9778;
                    /* try { // try from 00dadf8c to 00eadff3 has its CatchHandler @ 00dad6f4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (this + 0x540),"");
  Rect::Rect((Rect *)(this + 0x558),(Rect *)Rect::ZERO);
  *(undefined8 *)(this + 0x568) = 0;
  Size::Size((Size *)(this + 0x570),(Size *)&Size::ZERO);
  LVar2 = DAT_01792432;
  uVar1 = Color3B::WHITE;
  this[0x57b] = (Layout)0xff;
  *(undefined8 *)(this + 0x588) = 0;
  *(undefined8 *)(this + 0x580) = 0;
  this[0x57a] = LVar2;
  *(undefined2 *)(this + 0x578) = uVar1;
  uVar1 = Color3B::WHITE;
  this[0x592] = DAT_01792432;
                    /* try { // try from 00dadff4 to 00eae003 has its CatchHandler @ 00dae2f4 */
  *(undefined2 *)(this + 0x590) = uVar1;
  uVar1 = Color3B::WHITE;
  this[0x595] = DAT_01792432;
                    /* try { // try from 00dae004 to 00eae06b has its CatchHandler @ 00dad6f4 */
  *(undefined2 *)(this + 0x593) = uVar1;
  uVar1 = Color3B::WHITE;
  this[0x598] = DAT_01792432;
  *(undefined2 *)(this + 0x596) = uVar1;
  *(undefined8 *)(this + 0x59c) = 0xbf80000000000000;
  *(undefined2 *)(this + 0x5a4) = 0xff;
  *(undefined8 *)(this + 0x5b0) = 0;
  *(undefined8 *)(this + 0x5a8) = 0;
  Rect::Rect((Rect *)(this + 0x5bc));
  Rect::Rect((Rect *)(this + 0x5cc),(Rect *)Rect::ZERO);
  *(undefined8 *)(this + 0x5e0) = 0;
  this[0x5e8] = (Layout)0x1;
  this_00 = operator_new(0x34);
  StencilStateManager::StencilStateManager(this_00);
  *(StencilStateManager **)(this + 0x5f0) = this_00;
                    /* try { // try from 00dae06c to 00eae07b has its CatchHandler @ 00dae2f0 */
  GroupCommand::GroupCommand((GroupCommand *)(this + 0x5f8));
                    /* try { // try from 00dae07c to 00eae0e3 has its CatchHandler @ 00dad6f4 */
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x620));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x670));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x6c0));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x710));
  CustomCommand::CustomCommand((CustomCommand *)(this + 0x760));
  *(undefined4 *)(this + 0x7b0) = 0x1000001;
  this[0x7b4] = (Layout)0x0;
  return;
}

