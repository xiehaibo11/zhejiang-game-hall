
/* cocos2d::ui::RichElementCustomNode::create(int, cocos2d::Color3B const&, unsigned char,
   cocos2d::Node*) */

Ref * cocos2d::ui::RichElementCustomNode::create
                (int param_1,Color3B *param_2,uchar param_3,Node *param_4)

{
  undefined2 uVar1;
  Ref *this;
  
  this = operator_new(0x38,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
    Ref::Ref(this);
                    /* try { // try from 00dd07c0 to 00ed07c7 has its CatchHandler @ 00dd0ed4 */
    *(undefined ***)this = &PTR__Ref_0169e108;
                    /* try { // try from 00dd07c8 to 00ed082f has its CatchHandler @ 00dd0f1c */
    Color3B::Color3B((Color3B *)(this + 0x2c));
    *(undefined4 *)(this + 0x24) = 2;
    *(int *)(this + 0x28) = param_1;
    *(undefined ***)this = &PTR__RichElementCustomNode_0169e168;
    uVar1 = *(undefined2 *)param_2;
    this[0x2e] = *(Ref *)(param_2 + 2);
    *(undefined2 *)(this + 0x2c) = uVar1;
    this[0x2f] = (Ref)param_3;
    *(Node **)(this + 0x30) = param_4;
    Ref::retain((Ref *)param_4);
    Ref::autorelease(this);
  }
  return this;
}

