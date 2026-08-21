
/* cocos2d::BillBoard::~BillBoard() */

void __thiscall cocos2d::BillBoard::~BillBoard(BillBoard *this)

{
  *(undefined ***)this = &PTR__BillBoard_016d2d48;
  *(undefined ***)(this + 0x2f8) = &PTR__BillBoard_016d33c8;
  Mat4::~Mat4((Mat4 *)(this + 0x570));
  Mat4::~Mat4((Mat4 *)(this + 0x530));
  Sprite::~Sprite((Sprite *)this);
  return;
}

