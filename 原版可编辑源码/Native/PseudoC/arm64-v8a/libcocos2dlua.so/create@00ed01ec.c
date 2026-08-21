
/* cocos2d::EaseQuadraticActionInOut::create(cocos2d::ActionInterval*) */

Action * cocos2d::EaseQuadraticActionInOut::create(ActionInterval *param_1)

{
  Action *this;
  ulong uVar1;
  
                    /* try { // try from 00ed01ec to 00fd01f3 has its CatchHandler @ 00ed02e8 */
                    /* try { // try from 00ed01f4 to 00fd0217 has its CatchHandler @ 00ed0184 */
  this = operator_new(0x60,(nothrow_t *)&std::nothrow);
  if (this != (Action *)0x0) {
                    /* try { // try from 00ed0218 to 00fd0223 has its CatchHandler @ 00ed02e8 */
    Action::Action(this);
    *(undefined4 *)(this + 0x4c) = 0;
    *(undefined8 *)(this + 0x58) = 0;
                    /* try { // try from 00ed0224 to 00fd024b has its CatchHandler @ 00ed0184 */
    *(undefined ***)this = &PTR__ActionEase_016f6488;
    *(undefined ***)(this + 0x28) = &PTR_clone_016f64f0;
                    /* try { // try from 00ed024c to 00fd0253 has its CatchHandler @ 00ed02e4 */
    if ((param_1 == (ActionInterval *)0x0) ||
       (uVar1 = ActionInterval::initWithDuration((ActionInterval *)this,*(float *)(param_1 + 0x4c)),
       (uVar1 & 1) == 0)) {
      Ref::release((Ref *)this);
      this = (Action *)0x0;
    }
    else {
                    /* try { // try from 00ed0254 to 00fd0273 has its CatchHandler @ 00ed0184 */
      *(ActionInterval **)(this + 0x58) = param_1;
      Ref::retain((Ref *)param_1);
      Ref::autorelease((Ref *)this);
    }
  }
                    /* try { // try from 00ed0274 to 00fd027b has its CatchHandler @ 00ed02e4 */
                    /* try { // try from 00ed027c to 00fd029b has its CatchHandler @ 00ed0184 */
  return this;
}

