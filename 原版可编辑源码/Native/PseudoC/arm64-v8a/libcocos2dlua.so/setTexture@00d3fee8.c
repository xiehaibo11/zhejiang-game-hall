
/* cocos2d::Sprite3D::setTexture(cocos2d::Texture2D*) */

void __thiscall cocos2d::Sprite3D::setTexture(Sprite3D *this,Texture2D *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x358);
  for (puVar1 = *(undefined8 **)(this + 0x350); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    Mesh::setTexture((Mesh *)*puVar1,param_1);
  }
  return;
}

