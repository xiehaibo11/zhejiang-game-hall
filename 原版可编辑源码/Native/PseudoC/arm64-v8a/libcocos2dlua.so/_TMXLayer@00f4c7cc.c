
/* non-virtual thunk to cocos2d::TMXLayer::~TMXLayer() */

void __thiscall cocos2d::TMXLayer::~TMXLayer(TMXLayer *this)

{
                    /* try { // try from 00f4c7d0 to 0104c7e7 has its CatchHandler @ 00f4d474 */
  ~TMXLayer(this + -0x2f8);
  operator_delete(this + -0x2f8);
  return;
}

