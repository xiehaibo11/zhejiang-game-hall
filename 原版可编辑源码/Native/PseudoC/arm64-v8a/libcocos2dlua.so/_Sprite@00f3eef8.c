
/* cocos2d::Sprite::~Sprite() */

void __thiscall cocos2d::Sprite::~Sprite(Sprite *this)

{
                    /* try { // try from 00f3ef00 to 0103ef0f has its CatchHandler @ 00f3f4f4 */
  ~Sprite(this);
  operator_delete(this);
  return;
}

