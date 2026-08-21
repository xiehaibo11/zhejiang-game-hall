
/* cocos2d::TextFieldTTF::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::TextFieldTTF::visit(TextFieldTTF *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  long *plVar1;
  ulong uVar2;
  
  plVar1 = *(long **)(this + 0x6a8);
                    /* try { // try from 00f56888 to 0105688b has its CatchHandler @ 00f568a4 */
  if ((plVar1 != (long *)0x0) &&
     (uVar2 = (**(code **)(*plVar1 + 0x30))(plVar1,this,param_1,param_2,param_3), (uVar2 & 1) != 0))
  {
                    /* try { // try from 00f5688c to 0105691b has its CatchHandler @ 00f56838 */
    return;
  }
                    /* catch() { ... } // from try @ 00f56888 with catch @ 00f568a4 */
  Label::visit((Label *)this,param_1,param_2,param_3);
  return;
}

