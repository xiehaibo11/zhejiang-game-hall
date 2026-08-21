
/* cocos2d::ui::RichText::setTagDescription(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&, bool,
   std::__ndk1::function<std::__ndk1::pair<std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >,
   cocos2d::ui::RichElement*> (std::__ndk1::unordered_map<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, cocos2d::Value,
   std::__ndk1::hash<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >, std::__ndk1::equal_to<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, cocos2d::Value> > >
   const&)>) */

void cocos2d::ui::RichText::setTagDescription(undefined8 param_1,uint param_2,long *param_3)

{
  long lVar1;
  long *plVar2;
  code *pcVar3;
  long alStack_70 [4];
  long *local_50;
  long local_38;
  
  local_50 = alStack_70;
  lVar1 = tpidr_el0;
                    /* try { // try from 00dd6d2c to 00ed6d3b has its CatchHandler @ 00dd72e0 */
  local_38 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)param_3[4];
  if (plVar2 == (long *)0x0) {
    local_50 = (long *)0x0;
  }
  else if (param_3 == plVar2) {
    (**(code **)(*plVar2 + 0x18))(plVar2,alStack_70);
  }
  else {
    local_50 = (long *)(**(code **)(*plVar2 + 0x10))(plVar2);
  }
                    /* try { // try from 00dd6d88 to 00ed6d93 has its CatchHandler @ 00dd725c */
                    /* try { // try from 00dd6d98 to 00ed6da3 has its CatchHandler @ 00dd724c */
  MyXMLVisitor::setTagDescription(param_1,param_2 & 1,alStack_70);
  if (alStack_70 == local_50) {
    pcVar3 = *(code **)(*local_50 + 0x20);
  }
  else {
    if (local_50 == (long *)0x0) goto LAB_00dd6dc4;
    pcVar3 = *(code **)(*local_50 + 0x28);
                    /* try { // try from 00dd6db4 to 00ed6db7 has its CatchHandler @ 00dd7244 */
  }
  (*pcVar3)();
LAB_00dd6dc4:
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00dd6dd8 to 00ed6ddf has its CatchHandler @ 00dd7248 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

