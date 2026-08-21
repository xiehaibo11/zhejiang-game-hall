
/* cocos2d::PhysicsContactPreSolve::ignore() */

void __thiscall cocos2d::PhysicsContactPreSolve::ignore(PhysicsContactPreSolve *this)

{
                    /* try { // try from 01001e00 to 011020bb has its CatchHandler @ 01001e00
                       catch() { ... } // from try @ 01001e00 with catch @ 01001e00
                       catch() { ... } // from try @ 01002238 with catch @ 01001e00 */
  cpArbiterIgnore(*(undefined8 *)this);
  return;
}

