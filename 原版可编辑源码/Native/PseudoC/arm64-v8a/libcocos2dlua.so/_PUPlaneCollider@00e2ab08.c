
/* cocos2d::PUPlaneCollider::~PUPlaneCollider() */

void __thiscall cocos2d::PUPlaneCollider::~PUPlaneCollider(PUPlaneCollider *this)

{
                    /* try { // try from 00e2ab0c to 00f2ab0f has its CatchHandler @ 00e2ab24 */
                    /* try { // try from 00e2ab10 to 00f2ab8b has its CatchHandler @ 00e2aadc */
  PUBaseCollider::~PUBaseCollider((PUBaseCollider *)this);
                    /* catch() { ... } // from try @ 00e2ab0c with catch @ 00e2ab24 */
  operator_delete(this);
  return;
}

