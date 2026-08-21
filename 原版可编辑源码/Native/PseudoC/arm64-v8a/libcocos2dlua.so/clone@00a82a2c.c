
/* fairygui::ActionMovieClip::clone() const */

Action * __thiscall fairygui::ActionMovieClip::clone(ActionMovieClip *this)

{
  ActionMovieClip AVar1;
  Animation *pAVar2;
  Action *this_00;
  float fVar3;
  
  pAVar2 = (Animation *)(**(code **)(**(long **)(this + 0x50) + 0x10))();
  fVar3 = *(float *)(this + 0x6c);
  AVar1 = this[0x70];
                    /* try { // try from 00a82a64 to 00b82aa3 has its CatchHandler @ 00a82a64
                       catch() { ... } // from try @ 00a82a64 with catch @ 00a82a64
                       catch() { ... } // from try @ 00a82b30 with catch @ 00a82a64
                       catch() { ... } // from try @ 00a82bfc with catch @ 00a82a64 */
  this_00 = operator_new(0xd0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    cocos2d::Action::Action(this_00);
                    /* try { // try from 00a82aa4 to 00b82abb has its CatchHandler @ 00a82c48 */
    *(undefined8 *)(this_00 + 0x68) = 0x3f800000;
    *(undefined8 *)(this_00 + 0x50) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
    *(undefined8 *)(this_00 + 0x5d) = 0;
    this_00[0x70] = (Action)0x0;
    *(undefined8 *)(this_00 + 0xa0) = 0;
    *(undefined8 *)(this_00 + 0xbc) = 0;
                    /* try { // try from 00a82ac8 to 00b82adf has its CatchHandler @ 00a82c18 */
    *(undefined8 *)(this_00 + 0xb4) = 0;
    *(undefined4 *)(this_00 + 0xb0) = 0xffffffff;
    *(undefined ***)this_00 = &PTR__ActionMovieClip_016a60d0;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016a6130;
    *(undefined4 *)(this_00 + 0xc4) = 0;
    setAnimation((ActionMovieClip *)this_00,pAVar2,fVar3,AVar1 != (ActionMovieClip)0x0);
                    /* try { // try from 00a82ae4 to 00b82afb has its CatchHandler @ 00a82c14 */
    cocos2d::Ref::autorelease((Ref *)this_00);
  }
  return this_00;
}

