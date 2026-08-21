
/* cocos2d::Pass::clone() const */

RenderState * __thiscall cocos2d::Pass::clone(Pass *this)

{
  RenderState *this_00;
  Ref *pRVar1;
  
  this_00 = operator_new(0x78,(nothrow_t *)&std::nothrow);
  if (this_00 != (RenderState *)0x0) {
    RenderState::RenderState(this_00);
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined4 *)(this_00 + 0x70) = 0x405;
    *(undefined ***)this_00 = &PTR__Pass_01724160;
    this_00[0x74] = (RenderState)0x1;
    RenderState::cloneInto((RenderState *)this,this_00);
    pRVar1 = (Ref *)GLProgramState::clone(*(GLProgramState **)(this + 0x60));
    *(Ref **)(this_00 + 0x60) = pRVar1;
    if (pRVar1 != (Ref *)0x0) {
      Ref::retain(pRVar1);
    }
    pRVar1 = *(Ref **)(this + 0x68);
    *(Ref **)(this_00 + 0x68) = pRVar1;
    if (pRVar1 != (Ref *)0x0) {
      Ref::retain(pRVar1);
    }
    *(undefined4 *)(this_00 + 0x70) = *(undefined4 *)(this + 0x70);
    *(Pass *)(this_00 + 0x74) = this[0x74];
    Ref::autorelease((Ref *)this_00);
  }
                    /* catch() { ... } // from try @ 00fe0fb0 with catch @ 00fe0f6c */
  return this_00;
}

