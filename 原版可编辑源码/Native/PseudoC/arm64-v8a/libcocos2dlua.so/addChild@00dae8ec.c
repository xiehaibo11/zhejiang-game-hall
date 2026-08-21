
/* cocos2d::ui::Layout::addChild(cocos2d::Node*, int, int) */

void __thiscall cocos2d::ui::Layout::addChild(Layout *this,Node *param_1,int param_2,int param_3)

{
  long lVar1;
  
                    /* try { // try from 00dae8ec to 00eae8ff has its CatchHandler @ 00daed44 */
                    /* try { // try from 00dae918 to 00eae927 has its CatchHandler @ 00daed40 */
                    /* try { // try from 00dae928 to 00eae93b has its CatchHandler @ 00daed3c */
  if ((param_1 != (Node *)0x0) &&
     (lVar1 = __dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0), lVar1 != 0)) {
    supplyTheLayoutParameterLackToChild(this,(Widget *)param_1);
  }
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
                    /* try { // try from 00dae954 to 00eae963 has its CatchHandler @ 00daed38 */
  Node::addChild((Node *)this,param_1,param_2,param_3);
                    /* try { // try from 00dae964 to 00eae977 has its CatchHandler @ 00daed34 */
  this[0x7b0] = (Layout)0x1;
  return;
}

