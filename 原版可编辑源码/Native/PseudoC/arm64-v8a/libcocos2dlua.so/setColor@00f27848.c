
/* cocos2d::Node::setColor(cocos2d::Color3B const&) */

void __thiscall cocos2d::Node::setColor(Node *this,Color3B *param_1)

{
  undefined2 uVar1;
  
  uVar1 = *(undefined2 *)param_1;
  this[0x21f] = *(Node *)(param_1 + 2);
  *(undefined2 *)(this + 0x21d) = uVar1;
  uVar1 = *(undefined2 *)param_1;
  this[0x21c] = *(Node *)(param_1 + 2);
  *(undefined2 *)(this + 0x21a) = uVar1;
                    /* WARNING: Could not recover jumptable at 0x00f27874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x518))();
  return;
}

