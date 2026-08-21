
/* cocos2d::Sprite3D::setMaterial(cocos2d::Material*) */

void __thiscall cocos2d::Sprite3D::setMaterial(Sprite3D *this,Material *param_1)

{
  Material *pMVar1;
  long lVar2;
  long lVar3;
  Mesh *this_00;
  long lVar4;
  
  lVar2 = *(long *)(this + 0x350);
  lVar3 = *(long *)(this + 0x358) - lVar2;
  if (0 < lVar3) {
    lVar4 = 0;
    while( true ) {
      this_00 = *(Mesh **)(lVar2 + lVar4 * 8);
      pMVar1 = param_1;
      if (lVar4 != 0) {
        pMVar1 = (Material *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
      }
      Mesh::setMaterial(this_00,pMVar1);
      lVar4 = lVar4 + 1;
      if (lVar3 >> 3 <= lVar4) break;
      lVar2 = *(long *)(this + 0x350);
    }
  }
  this[0x3ca] = (Sprite3D)0x0;
  return;
}

