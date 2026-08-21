
/* cocos2d::Node::setCascadeOpacityEnabled(bool) */

void __thiscall cocos2d::Node::setCascadeOpacityEnabled(Node *this,bool param_1)

{
  if (this[0x221] == (Node)param_1) {
    return;
  }
  this[0x221] = (Node)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f2777c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)this + 0x508))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f27784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x510))();
  return;
}

