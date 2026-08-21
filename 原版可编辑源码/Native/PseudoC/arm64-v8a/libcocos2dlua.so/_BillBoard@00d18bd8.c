
/* non-virtual thunk to cocos2d::BillBoard::~BillBoard() */

void __thiscall cocos2d::BillBoard::~BillBoard(BillBoard *this)

{
  *(undefined ***)(this + -0x2f8) = &PTR__BillBoard_016d2d48;
  *(undefined ***)this = &PTR__BillBoard_016d33c8;
  Mat4::~Mat4((Mat4 *)(this + 0x278));
  Mat4::~Mat4((Mat4 *)(this + 0x238));
  Sprite::~Sprite((Sprite *)(this + -0x2f8));
  return;
}

