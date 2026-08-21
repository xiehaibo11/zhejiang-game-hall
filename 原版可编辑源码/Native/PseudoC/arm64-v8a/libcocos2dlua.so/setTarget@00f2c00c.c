
/* cocos2d::NodeGrid::setTarget(cocos2d::Node*) */

void __thiscall cocos2d::NodeGrid::setTarget(NodeGrid *this,Node *param_1)

{
  if (*(Ref **)(this + 0x2f8) != (Ref *)0x0) {
    Ref::release(*(Ref **)(this + 0x2f8));
  }
  if (param_1 != (Node *)0x0) {
    Ref::retain((Ref *)param_1);
  }
  *(Node **)(this + 0x2f8) = param_1;
                    /* try { // try from 00f2c044 to 0102c04b has its CatchHandler @ 00f2c080 */
  return;
}

