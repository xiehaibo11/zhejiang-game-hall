
/* cocos2d::ui::Scale9Sprite::~Scale9Sprite() */

void __thiscall cocos2d::ui::Scale9Sprite::~Scale9Sprite(Scale9Sprite *this)

{
  Sprite::~Sprite((Sprite *)this);
                    /* try { // try from 00de27e8 to 00ee28db has its CatchHandler @ 00de27e8
                       catch() { ... } // from try @ 00de27e8 with catch @ 00de27e8
                       catch() { ... } // from try @ 00de2a60 with catch @ 00de27e8 */
  operator_delete(this);
  return;
}

