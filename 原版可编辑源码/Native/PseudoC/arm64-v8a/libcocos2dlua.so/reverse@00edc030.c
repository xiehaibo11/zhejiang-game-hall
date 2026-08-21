
/* cocos2d::ExtraAction::reverse() const */

Action * cocos2d::ExtraAction::reverse(void)

{
  Action *this;
  
                    /* catch() { ... } // from try @ 00edbd80 with catch @ 00edc03c */
                    /* catch() { ... } // from try @ 00edbcd0 with catch @ 00edc040 */
                    /* catch() { ... } // from try @ 00edbc20 with catch @ 00edc044 */
  this = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x30) = 0;
    *(undefined8 *)(this + 0x48) = 0;
    *(undefined8 *)(this + 0x40) = 0;
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x10) = 0;
    *(undefined8 *)(this + 0x28) = 0;
    *(undefined8 *)(this + 0x20) = 0;
    *(undefined8 *)(this + 8) = 0;
    *(undefined8 *)this = 0;
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00edbb8c with catch @ 00edc074 */
    *(undefined ***)this = &PTR__Action_016f9768;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f97c8;
    Ref::autorelease((Ref *)this);
  }
  return this;
}

