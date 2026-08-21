
/* covariant return thunk to cocos2d::ExtraAction::clone() const */

Action * __thiscall cocos2d::ExtraAction::clone(ExtraAction *this)

{
  Action *pAVar1;
  Action *this_00;
  
                    /* try { // try from 00edbfa8 to 00fdbfb3 has its CatchHandler @ 00edc02c */
                    /* try { // try from 00edbfb4 to 00fdbfbf has its CatchHandler @ 00edc028 */
  this_00 = operator_new(0x50,(nothrow_t *)&std::nothrow);
  if (this_00 != (Action *)0x0) {
                    /* try { // try from 00edbfc0 to 00fdbfcb has its CatchHandler @ 00edc024 */
    *(undefined8 *)(this_00 + 0x38) = 0;
    *(undefined8 *)(this_00 + 0x30) = 0;
    *(undefined8 *)(this_00 + 0x48) = 0;
    *(undefined8 *)(this_00 + 0x40) = 0;
    *(undefined8 *)(this_00 + 0x18) = 0;
    *(undefined8 *)(this_00 + 0x10) = 0;
    *(undefined8 *)(this_00 + 0x28) = 0;
    *(undefined8 *)(this_00 + 0x20) = 0;
                    /* try { // try from 00edbfcc to 00fdbfd7 has its CatchHandler @ 00edc020 */
    *(undefined8 *)(this_00 + 8) = 0;
    *(undefined8 *)this_00 = 0;
    Action::Action(this_00);
                    /* catch() { ... } // from try @ 00edbdf8 with catch @ 00edbfd8
                       try { // try from 00edbfd8 to 00fdc0cb has its CatchHandler @ 00edbb48 */
    *(undefined4 *)(this_00 + 0x4c) = 0;
                    /* catch() { ... } // from try @ 00edbd48 with catch @ 00edbfdc */
                    /* catch() { ... } // from try @ 00edbc98 with catch @ 00edbfe0 */
                    /* catch() { ... } // from try @ 00edbbe8 with catch @ 00edbfe4 */
                    /* catch() { ... } // from try @ 00edbe74 with catch @ 00edbfe8 */
                    /* catch() { ... } // from try @ 00edbdd4 with catch @ 00edbfec */
                    /* catch() { ... } // from try @ 00edbdc4 with catch @ 00edbff0 */
    *(undefined ***)this_00 = &PTR__Action_016f9768;
                    /* catch() { ... } // from try @ 00edbd24 with catch @ 00edbff4 */
    *(undefined ***)(this_00 + 0x28) = &PTR_clone_016f97c8;
                    /* catch() { ... } // from try @ 00edbd14 with catch @ 00edbff8 */
    Ref::autorelease((Ref *)this_00);
  }
                    /* catch() { ... } // from try @ 00edbc74 with catch @ 00edbffc */
                    /* catch() { ... } // from try @ 00edbc64 with catch @ 00edc000 */
                    /* catch() { ... } // from try @ 00edbbc4 with catch @ 00edc004 */
  pAVar1 = (Action *)0x0;
  if (this_00 != (Action *)0x0) {
    pAVar1 = this_00 + 0x28;
  }
  return pAVar1;
}

