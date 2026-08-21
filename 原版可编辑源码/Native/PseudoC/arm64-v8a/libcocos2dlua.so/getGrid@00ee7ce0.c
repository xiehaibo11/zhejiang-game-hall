
/* cocos2d::PageTurn3D::getGrid() */

void __thiscall cocos2d::PageTurn3D::getGrid(PageTurn3D *this)

{
  long lVar1;
  
  lVar1 = Grid3D::create((Size *)(this + 0x58),(Rect *)(*(long *)(this + 0x60) + 0x3d0));
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x90) = 1;
  }
  return;
}

