
/* cocos2d::TMXLayer::~TMXLayer() */

void __thiscall cocos2d::TMXLayer::~TMXLayer(TMXLayer *this)

{
  ~TMXLayer(this);
                    /* try { // try from 00f4c7bc to 0104c7c3 has its CatchHandler @ 00f4d448 */
  operator_delete(this);
  return;
}

