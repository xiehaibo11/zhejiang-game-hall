
/* non-virtual thunk to cocos2d::Sprite::~Sprite() */

void __thiscall cocos2d::Sprite::~Sprite(Sprite *this)

{
                    /* try { // try from 00f3ef24 to 0103ef27 has its CatchHandler @ 00f3f4c4 */
  ~Sprite(this + -0x2f8);
  operator_delete(this + -0x2f8);
  return;
}

