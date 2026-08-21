
/* cocos2d::ScaleBy::create(float, float) */

Action * cocos2d::ScaleBy::create(float param_1,float param_2)

{
  Action *this;
  float fVar1;
  
                    /* try { // try from 00ee1fa0 to 00fe1fab has its CatchHandler @ 00ee1fe8 */
                    /* try { // try from 00ee1fac to 00fe1fef has its CatchHandler @ 00ee1e88 */
  this = operator_new(0x88,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    Action::Action(this);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1f50 with catch @ 00ee1fe8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1f78 with catch @ 00ee1fe8
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1fa0 with catch @ 00ee1fe8
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ee1ef0 with catch @ 00ee1fec
                       catch(type#1 @ 00000000) { ... } // from try @ 00ee1f1c with catch @ 00ee1fec
                        */
                    /* catch() { ... } // from try @ 00ee201c with catch @ 00ee1ff0 */
    *(undefined2 *)(this + 0x54) = 1;
    fVar1 = 1e-06;
    if (1e-06 < ABS(param_1)) {
      fVar1 = param_1;
    }
    *(undefined4 *)(this + 0x50) = 0;
    *(float *)(this + 0x70) = param_2;
    *(float *)(this + 0x74) = param_2;
    *(undefined ***)this = &PTR__Action_016f91c8;
                    /* try { // try from 00ee2014 to 00fe201b has its CatchHandler @ 00ee2088 */
    *(undefined ***)(this + 0x28) = &PTR_clone_016f9228;
    *(float *)(this + 0x4c) = fVar1;
                    /* try { // try from 00ee201c to 00fe20a3 has its CatchHandler @ 00ee1ff0 */
    *(float *)(this + 0x78) = param_2;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

