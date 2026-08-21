
/* cocos2d::Sprite3D::setCullFace(unsigned int) */

void __thiscall cocos2d::Sprite3D::setCullFace(Sprite3D *this,uint param_1)

{
  RenderState *this_00;
  StateBlock *pSVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar3 = *(undefined8 **)(this + 0x358);
  for (puVar2 = *(undefined8 **)(this + 0x350); puVar2 != puVar3; puVar2 = puVar2 + 1) {
    this_00 = (RenderState *)Mesh::getMaterial((Mesh *)*puVar2);
    pSVar1 = (StateBlock *)RenderState::getStateBlock(this_00);
    RenderState::StateBlock::setCullFaceSide(pSVar1,param_1);
  }
  return;
}

