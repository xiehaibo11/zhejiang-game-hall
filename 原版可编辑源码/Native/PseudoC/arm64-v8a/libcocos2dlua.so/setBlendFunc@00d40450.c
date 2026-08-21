
/* cocos2d::Sprite3D::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::Sprite3D::setBlendFunc(Sprite3D *this,BlendFunc *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  if ((*(int *)(this + 0x348) != *(int *)param_1) ||
     (*(int *)(this + 0x34c) != *(int *)(param_1 + 4))) {
    puVar1 = *(undefined8 **)(this + 0x350);
    puVar2 = *(undefined8 **)(this + 0x358);
    *(undefined8 *)(this + 0x348) = *(undefined8 *)param_1;
    for (; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      Mesh::setBlendFunc((Mesh *)*puVar1,param_1);
    }
  }
  return;
}

