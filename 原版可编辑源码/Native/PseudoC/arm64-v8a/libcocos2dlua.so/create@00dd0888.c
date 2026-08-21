
/* cocos2d::ui::RichElementNewLine::create(int, cocos2d::Color3B const&, unsigned char) */

Ref * cocos2d::ui::RichElementNewLine::create(int param_1,Color3B *param_2,uchar param_3)

{
  undefined2 uVar1;
  Ref *this;
  
                    /* try { // try from 00dd08a0 to 00ed08a3 has its CatchHandler @ 00dd0f48 */
  this = operator_new(0x30,(nothrow_t *)&std::nothrow);
  if (this != (Ref *)0x0) {
                    /* try { // try from 00dd08c0 to 00ed08c7 has its CatchHandler @ 00dd0eec */
    Ref::Ref(this);
                    /* try { // try from 00dd08c8 to 00ed0907 has its CatchHandler @ 00dd0f50 */
    *(undefined ***)this = &PTR__Ref_0169e108;
    Color3B::Color3B((Color3B *)(this + 0x2c));
    *(undefined4 *)(this + 0x24) = 3;
    *(int *)(this + 0x28) = param_1;
    *(undefined ***)this = &PTR__Ref_0169e188;
    uVar1 = *(undefined2 *)param_2;
    this[0x2e] = *(Ref *)(param_2 + 2);
    *(undefined2 *)(this + 0x2c) = uVar1;
    this[0x2f] = (Ref)param_3;
    Ref::autorelease(this);
  }
  return this;
}

