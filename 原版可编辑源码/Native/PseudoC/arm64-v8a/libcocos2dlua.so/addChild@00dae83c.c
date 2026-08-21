
/* cocos2d::ui::Layout::addChild(cocos2d::Node*) */

void __thiscall cocos2d::ui::Layout::addChild(Layout *this,Node *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  
  iVar1 = (**(code **)(*(long *)param_1 + 0x30))(param_1);
                    /* try { // try from 00dae864 to 00eae873 has its CatchHandler @ 00daed58 */
                    /* try { // try from 00dae874 to 00eae887 has its CatchHandler @ 00daed54 */
  iVar2 = (**(code **)(*(long *)param_1 + 0x2b8))(param_1);
  if ((param_1 != (Node *)0x0) &&
     (lVar3 = __dynamic_cast(param_1,&Node::typeinfo,&Widget::typeinfo,0), lVar3 != 0)) {
                    /* try { // try from 00dae8a0 to 00eae8af has its CatchHandler @ 00daed50 */
    supplyTheLayoutParameterLackToChild(this,(Widget *)param_1);
  }
                    /* try { // try from 00dae8b0 to 00eae8c3 has its CatchHandler @ 00daed4c */
  (**(code **)(*(long *)param_1 + 0x40))(*(undefined4 *)(this + 0x170),param_1);
  Node::addChild((Node *)this,param_1,iVar1,iVar2);
  this[0x7b0] = (Layout)0x1;
                    /* try { // try from 00dae8dc to 00eae8eb has its CatchHandler @ 00daed48 */
  return;
}

