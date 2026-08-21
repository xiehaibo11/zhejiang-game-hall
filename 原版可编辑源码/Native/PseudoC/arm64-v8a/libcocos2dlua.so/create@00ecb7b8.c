
/* cocos2d::Follow::create(cocos2d::Node*, cocos2d::Rect const&) */

Follow * cocos2d::Follow::create(Node *param_1,Rect *param_2)

{
  Follow *this;
  ulong uVar1;
  
                    /* try { // try from 00ecb7c4 to 00fcb7d3 has its CatchHandler @ 00ecb8dc */
                    /* try { // try from 00ecb7d8 to 00fcb7e7 has its CatchHandler @ 00ecb8bc */
  this = operator_new(0x98,(nothrow_t *)&std::nothrow);
  if (this != (Follow *)0x0) {
                    /* try { // try from 00ecb7ec to 00fcb7fb has its CatchHandler @ 00ecb89c */
    Follow(this);
                    /* try { // try from 00ecb800 to 00fcb80f has its CatchHandler @ 00ecb87c */
    uVar1 = initWithTargetAndOffset(this,param_1,0.0,0.0,param_2);
    if ((uVar1 & 1) == 0) {
                    /* try { // try from 00ecb818 to 00fcb823 has its CatchHandler @ 00ecb838 */
                    /* try { // try from 00ecb824 to 00fcb93b has its CatchHandler @ 00ecb6b4 */
      (**(code **)(*(long *)this + 8))(this);
      this = (Follow *)0x0;
    }
    else {
      Ref::autorelease((Ref *)this);
    }
  }
                    /* catch() { ... } // from try @ 00ecb818 with catch @ 00ecb838 */
  return this;
}

