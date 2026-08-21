
/* cocos2d::EaseCubicActionOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseCubicActionOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* catch() { ... } // from try @ 00ed101c with catch @ 00ed110c */
                    /* catch() { ... } // from try @ 00ed0ff8 with catch @ 00ed1114 */
                    /* catch() { ... } // from try @ 00ed0fb0 with catch @ 00ed1118 */
                    /* catch() { ... } // from try @ 00ed0f8c with catch @ 00ed1120 */
                    /* catch() { ... } // from try @ 00ed0f44 with catch @ 00ed1124 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00ed0f20 with catch @ 00ed112c */
                    /* catch() { ... } // from try @ 00ed0ed8 with catch @ 00ed1130 */
  if (this != (Action *)0x0) {
                    /* catch() { ... } // from try @ 00ed0eb4 with catch @ 00ed1138 */
    Action::Action(this);
                    /* catch() { ... } // from try @ 00ed0e6c with catch @ 00ed113c */
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* catch() { ... } // from try @ 00ed0e48 with catch @ 00ed1144 */
                    /* catch() { ... } // from try @ 00ed0e00 with catch @ 00ed1148 */
                    /* catch() { ... } // from try @ 00ed0ddc with catch @ 00ed1150 */
                    /* catch() { ... } // from try @ 00ed0d94 with catch @ 00ed1154 */
    *(undefined ***)this = &PTR__ActionEase_016f6bc0;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f6c28;
                    /* catch() { ... } // from try @ 00ed0d70 with catch @ 00ed115c */
                    /* catch() { ... } // from try @ 00ed0d28 with catch @ 00ed1160 */
                    /* catch() { ... } // from try @ 00ed0d04 with catch @ 00ed1168 */
                    /* catch() { ... } // from try @ 00ed0cbc with catch @ 00ed116c */
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00ed0bc0 with catch @ 00ed118c */
      Ref::release((Ref *)this);
                    /* catch() { ... } // from try @ 00ed0b78 with catch @ 00ed1190 */
      this = (Action *)0x0;
    }
    else {
                    /* catch() { ... } // from try @ 00ed0c98 with catch @ 00ed1174 */
      *(ActionInterval **)(this + 0x58) = param_1;
                    /* catch() { ... } // from try @ 00ed0c50 with catch @ 00ed1178 */
      Ref::retain((Ref *)param_1);
                    /* catch() { ... } // from try @ 00ed0c2c with catch @ 00ed1180 */
      Ref::autorelease((Ref *)this);
                    /* catch() { ... } // from try @ 00ed0be4 with catch @ 00ed1184 */
    }
  }
  return this;
}

