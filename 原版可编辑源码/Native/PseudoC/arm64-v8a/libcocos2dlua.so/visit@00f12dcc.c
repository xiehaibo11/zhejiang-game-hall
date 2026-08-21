
/* cocos2d::LabelTTF::visit(cocos2d::Renderer*, cocos2d::Mat4 const&, unsigned int) */

void __thiscall
cocos2d::LabelTTF::visit(LabelTTF *this,Renderer *param_1,Mat4 *param_2,uint param_3)

{
  undefined8 uVar1;
  
  if (this[0x310] != (LabelTTF)0x0) {
    uVar1 = (**(code **)(**(long **)(this + 0x308) + 0x168))();
    (**(code **)(*(long *)this + 0x160))(this,uVar1);
    this[0x310] = (LabelTTF)0x0;
  }
  Node::visit((Node *)this,param_1,param_2,param_3);
  return;
}

