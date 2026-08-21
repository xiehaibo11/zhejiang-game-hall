
/* cocos2d::Node::setCascadeColorEnabled(bool) */

void __thiscall cocos2d::Node::setCascadeColorEnabled(Node *this,bool param_1)

{
  if (this[0x220] == (Node)param_1) {
    return;
  }
  this[0x220] = (Node)param_1;
  if (param_1) {
                    /* WARNING: Could not recover jumptable at 0x00f27968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f27968 to 0102796f has its CatchHandler @ 00f27ac4 */
    (**(code **)(*(long *)this + 0x518))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00f27970. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                    /* try { // try from 00f27970 to 01027ae3 has its CatchHandler @ 00f2758c */
  (**(code **)(*(long *)this + 0x520))();
  return;
}

