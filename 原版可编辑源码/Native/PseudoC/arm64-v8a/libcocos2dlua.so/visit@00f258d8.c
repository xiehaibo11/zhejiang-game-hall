
/* cocos2d::Node::visit() */

void __thiscall cocos2d::Node::visit(Node *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(*(Director **)(this + 0x198) + 0x1b0);
  uVar1 = Director::getMatrix(*(Director **)(this + 0x198),0);
                    /* WARNING: Could not recover jumptable at 0x00f25918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x358))(this,uVar2,uVar1,1);
  return;
}

