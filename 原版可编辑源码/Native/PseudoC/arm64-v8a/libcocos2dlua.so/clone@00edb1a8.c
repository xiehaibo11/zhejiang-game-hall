
/* cocos2d::__CCCallFuncND::clone() const */

Action * __thiscall cocos2d::__CCCallFuncND::clone(__CCCallFuncND *this)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Action *this_00;
  undefined8 uVar3;
  Ref *this_01;
  
                    /* try { // try from 00edb1cc to 00fdb1d7 has its CatchHandler @ 00edb274 */
  this_00 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
                    /* try { // try from 00edb1d8 to 00fdb1e3 has its CatchHandler @ 00edb248 */
    Action::Action(this_00);
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* try { // try from 00edb1e4 to 00fdb1ef has its CatchHandler @ 00edb244 */
    *(undefined8 *)(this_00 + 0x90) = 0;
    *(undefined8 *)(this_00 + 0x60) = 0;
    *(undefined8 *)(this_00 + 0x68) = 0;
    *(undefined8 *)(this_00 + 0x58) = 0;
                    /* try { // try from 00edb1f0 to 00fdb1fb has its CatchHandler @ 00edb240 */
                    /* catch() { ... } // from try @ 00edb128 with catch @ 00edb1fc
                       try { // try from 00edb1fc to 00fdb293 has its CatchHandler @ 00edaea4 */
                    /* catch() { ... } // from try @ 00edb118 with catch @ 00edb200 */
    *(undefined ***)this_00 = &PTR__CallFunc_016f8460;
                    /* catch() { ... } // from try @ 00edb0b4 with catch @ 00edb204 */
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f84c8;
  }
                    /* catch() { ... } // from try @ 00edb03c with catch @ 00edb208 */
  this_01 = *(Ref **)(this + 0x58);
                    /* catch() { ... } // from try @ 00edafc4 with catch @ 00edb20c */
  if (this_01 != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00edaf0c with catch @ 00edb210 */
    uVar1 = *(undefined8 *)(this + 0xa0);
    uVar2 = *(undefined8 *)(this + 0xa8);
                    /* catch() { ... } // from try @ 00edb090 with catch @ 00edb214 */
    uVar3 = *(undefined8 *)(this + 0xb0);
                    /* catch() { ... } // from try @ 00edb080 with catch @ 00edb218 */
                    /* catch() { ... } // from try @ 00edb018 with catch @ 00edb21c */
    Ref::retain(this_01);
                    /* catch() { ... } // from try @ 00edb008 with catch @ 00edb220 */
                    /* catch() { ... } // from try @ 00edafa0 with catch @ 00edb224 */
    if (*(Ref **)(this_00 + 0x58) != (Ref *)0x0) {
                    /* catch() { ... } // from try @ 00edaf90 with catch @ 00edb228 */
      Ref::release(*(Ref **)(this_00 + 0x58));
    }
                    /* catch() { ... } // from try @ 00edaee8 with catch @ 00edb22c */
    *(Ref **)(this_00 + 0x58) = this_01;
                    /* catch() { ... } // from try @ 00edaed8 with catch @ 00edb230 */
    *(undefined8 *)(this_00 + 0xa8) = uVar2;
    *(undefined8 *)(this_00 + 0xb0) = uVar3;
    *(undefined8 *)(this_00 + 0xa0) = uVar1;
  }
  Ref::autorelease((Ref *)this_00);
                    /* catch() { ... } // from try @ 00edb0c4 with catch @ 00edb240
                       catch() { ... } // from try @ 00edb1f0 with catch @ 00edb240 */
                    /* catch() { ... } // from try @ 00edb04c with catch @ 00edb244
                       catch() { ... } // from try @ 00edb1e4 with catch @ 00edb244 */
                    /* catch() { ... } // from try @ 00edafd4 with catch @ 00edb248
                       catch() { ... } // from try @ 00edb1d8 with catch @ 00edb248 */
  return this_00;
}

