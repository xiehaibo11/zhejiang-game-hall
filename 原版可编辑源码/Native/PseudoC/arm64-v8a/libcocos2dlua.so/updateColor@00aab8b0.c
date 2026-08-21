
/* fairygui::FUISprite::updateColor() */

void __thiscall fairygui::FUISprite::updateColor(FUISprite *this)

{
  undefined4 uVar1;
  long lVar2;
  long lVar3;
  
  cocos2d::Sprite::updateColor((Sprite *)this);
  if ((*(long *)(this + 0x560) != 0) && (0 < *(int *)(this + 0x540))) {
    uVar1 = *(undefined4 *)(this + 0x45c);
    *(undefined4 *)(*(long *)(this + 0x560) + 0xc) = uVar1;
    if (1 < *(int *)(this + 0x540)) {
      lVar2 = 1;
      lVar3 = 0x24;
      do {
        lVar2 = lVar2 + 1;
        *(undefined4 *)(*(long *)(this + 0x560) + lVar3) = uVar1;
        lVar3 = lVar3 + 0x18;
      } while (lVar2 < *(int *)(this + 0x540));
    }
  }
  return;
}

