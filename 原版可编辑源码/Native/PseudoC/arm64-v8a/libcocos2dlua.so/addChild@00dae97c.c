
/* cocos2d::ui::Layout::addChild(cocos2d::Node*, int) */

void __thiscall cocos2d::ui::Layout::addChild(Layout *this,Node *param_1,int param_2)

{
  int iVar1;
  long lVar2;
  
                    /* try { // try from 00dae990 to 00eae99f has its CatchHandler @ 00daed30 */
                    /* try { // try from 00dae9a0 to 00eae9b3 has its CatchHandler @ 00daed2c */
  iVar1 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
                    /* try { // try from 00dae9cc to 00eae9db has its CatchHandler @ 00daed28 */
  if ((param_1 != (Node *)0x0) &&
     (lVar2 = __dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0), lVar2 != 0)) {
    supplyTheLayoutParameterLackToChild(this,(Widget *)param_1);
  }
                    /* try { // try from 00dae9dc to 00eae9ef has its CatchHandler @ 00daed24 */
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
  Node::addChild((Node *)this,param_1,param_2,iVar1);
                    /* try { // try from 00daea08 to 00eaea17 has its CatchHandler @ 00daed20 */
  this[0x7b0] = (Layout)0x1;
                    /* try { // try from 00daea18 to 00eaea2b has its CatchHandler @ 00daed1c */
  return;
}

