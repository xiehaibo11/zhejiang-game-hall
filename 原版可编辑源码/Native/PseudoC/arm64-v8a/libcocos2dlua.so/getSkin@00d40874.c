
/* cocos2d::Sprite3D::getSkin() const */

long __thiscall cocos2d::Sprite3D::getSkin(Sprite3D *this)

{
  long *plVar1;
  long lVar2;
  
  plVar1 = *(long **)(this + 0x350);
  do {
    if (plVar1 == *(long **)(this + 0x358)) {
      return 0;
    }
    lVar2 = *plVar1;
    plVar1 = plVar1 + 1;
  } while (*(long *)(lVar2 + 0x40) == 0);
  return *(long *)(lVar2 + 0x40);
}

