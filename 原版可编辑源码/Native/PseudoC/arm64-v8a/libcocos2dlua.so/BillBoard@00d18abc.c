
/* cocos2d::BillBoard::BillBoard() */

void __thiscall cocos2d::BillBoard::BillBoard(BillBoard *this)

{
  long lVar1;
  undefined8 local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  Sprite::Sprite((Sprite *)this);
  *(undefined ***)this = &PTR__BillBoard_016d2d48;
  *(undefined ***)(this + 0x2f8) = &PTR__BillBoard_016d33c8;
  Mat4::Mat4((Mat4 *)(this + 0x530));
  Mat4::Mat4((Mat4 *)(this + 0x570));
  *(undefined4 *)(this + 0x5b0) = 0;
  this[0x5b4] = (BillBoard)0x0;
  local_40 = 0x3f0000003f000000;
  Node::setAnchorPoint((Node *)this,(Vec2 *)&local_40);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

