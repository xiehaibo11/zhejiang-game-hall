
/* cocos2d::ResizeTo::clone() const */

Action * __thiscall cocos2d::ResizeTo::clone(ResizeTo *this)

{
  Action *this_00;
  float fVar1;
  
                    /* catch() { ... } // from try @ 00ee050c with catch @ 00ee06c0 */
  this_00 = operator_new(0x70,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
    Action::Action(this_00);
                    /* catch() { ... } // from try @ 00ee05c0 with catch @ 00ee06d4
                       catch() { ... } // from try @ 00ee0640 with catch @ 00ee06d4 */
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00ee05e4 with catch @ 00ee06e4 */
    *(undefined ***)this_00 = &PTR__Action_016f8d68;
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f8dc8;
    Size::Size((Size *)(this_00 + 0x58));
    Size::Size((Size *)(this_00 + 0x60));
    Size::Size((Size *)(this_00 + 0x68));
  }
  fVar1 = 1e-06;
  if (1e-06 < ABS(*(float *)(this + 0x4c))) {
    fVar1 = *(float *)(this + 0x4c);
  }
  *(undefined4 *)(this_00 + 0x50) = 0;
  *(undefined2 *)(this_00 + 0x54) = 1;
  *(float *)(this_00 + 0x4c) = fVar1;
  Size::operator=((Size *)(this_00 + 0x60),(Size *)(this + 0x60));
  Ref::autorelease((Ref *)this_00);
  return this_00;
}

