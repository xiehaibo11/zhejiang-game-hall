
/* cocos2d::Node::setOpacity(unsigned char) */

void __thiscall cocos2d::Node::setOpacity(Node *this,uchar param_1)

{
  this[0x219] = (Node)param_1;
  this[0x218] = (Node)param_1;
                    /* WARNING: Could not recover jumptable at 0x00f276c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x508))();
  return;
}

