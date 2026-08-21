
/* std::__ndk1::__function::__func<std::__ndk1::__bind<int
   (cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection, cocos2d::ui::Widget*),
   cocos2d::ui::Layout*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&>, std::__ndk1::allocator<std::__ndk1::__bind<int
   (cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection, cocos2d::ui::Widget*),
   cocos2d::ui::Layout*, std::__ndk1::placeholders::__ph<1> const&,
   std::__ndk1::placeholders::__ph<2> const&> >, int (cocos2d::ui::Widget::FocusDirection,
   cocos2d::ui::Widget*)>::TEMPNAMEPLACEHOLDERVALUE(cocos2d::ui::Widget::FocusDirection&&,
   cocos2d::ui::Widget*&&) */

void __thiscall
std::__ndk1::__function::
__func<std::__ndk1::__bind<int(cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*),cocos2d::ui::Layout*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<int(cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*),cocos2d::ui::Layout*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,int(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*)>
::operator()(__func<std::__ndk1::__bind<int(cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*),cocos2d::ui::Layout*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>,std::__ndk1::allocator<std::__ndk1::__bind<int(cocos2d::ui::Layout::*)(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*),cocos2d::ui::Layout*,std::__ndk1::placeholders::__ph<1>const&,std::__ndk1::placeholders::__ph<2>const&>>,int(cocos2d::ui::Widget::FocusDirection,cocos2d::ui::Widget*)>
             *this,FocusDirection *param_1,Widget **param_2)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* catch() { ... } // from try @ 00db2294 with catch @ 00db256c */
  UNRECOVERED_JUMPTABLE = *(code **)(this + 8);
  plVar1 = (long *)(*(long *)(this + 0x18) + ((long)*(ulong *)(this + 0x10) >> 1));
  if ((*(ulong *)(this + 0x10) & 1) != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(UNRECOVERED_JUMPTABLE + *plVar1);
  }
                    /* WARNING: Could not recover jumptable at 0x00db2588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* catch() { ... } // from try @ 00db25b8 with catch @ 00db2588 */
  (*UNRECOVERED_JUMPTABLE)(plVar1,*(undefined4 *)param_1,*param_2);
  return;
}

