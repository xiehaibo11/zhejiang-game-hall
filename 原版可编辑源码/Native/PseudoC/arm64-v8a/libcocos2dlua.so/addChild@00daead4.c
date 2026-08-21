
/* cocos2d::ui::Layout::addChild(cocos2d::Node*, int, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
cocos2d::ui::Layout::addChild(Layout *this,Node *param_1,int param_2,basic_string *param_3)

{
  long lVar1;
  
                    /* try { // try from 00daeaf8 to 00eaeb07 has its CatchHandler @ 00daed00 */
                    /* try { // try from 00daeb08 to 00eaeb1b has its CatchHandler @ 00daecfc */
  if ((param_1 != (Node *)0x0) &&
     (lVar1 = __dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0), lVar1 != 0)) {
    supplyTheLayoutParameterLackToChild(this,(Widget *)param_1);
  }
                    /* try { // try from 00daeb34 to 00eaeb43 has its CatchHandler @ 00daecf8 */
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
                    /* try { // try from 00daeb44 to 00eaeb57 has its CatchHandler @ 00daecf4 */
  Node::addChild((Node *)this,param_1,param_2,param_3);
  this[0x7b0] = (Layout)0x1;
  return;
}

