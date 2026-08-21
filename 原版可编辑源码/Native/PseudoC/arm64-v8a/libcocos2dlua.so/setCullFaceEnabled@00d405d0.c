
/* cocos2d::Sprite3D::setCullFaceEnabled(bool) */

void __thiscall cocos2d::Sprite3D::setCullFaceEnabled(Sprite3D *this,bool param_1)

{
  RenderState *this_00;
  StateBlock *this_01;
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)(this + 0x358);
  for (puVar1 = *(undefined8 **)(this + 0x350); puVar1 != puVar2; puVar1 = puVar1 + 1) {
    this_00 = (RenderState *)Mesh::getMaterial((Mesh *)*puVar1);
    this_01 = (StateBlock *)RenderState::getStateBlock(this_00);
    RenderState::StateBlock::setCullFace(this_01,param_1);
  }
  return;
}

