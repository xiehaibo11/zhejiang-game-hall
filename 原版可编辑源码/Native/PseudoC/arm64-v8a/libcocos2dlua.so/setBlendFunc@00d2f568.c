
/* cocos2d::Mesh::setBlendFunc(cocos2d::BlendFunc const&) */

void __thiscall cocos2d::Mesh::setBlendFunc(Mesh *this,BlendFunc *param_1)

{
  StateBlock *this_00;
  
  if ((*(int *)(this + 0x138) != *(int *)param_1) ||
     (*(int *)(this + 0x13c) != *(int *)(param_1 + 4))) {
    this[0x140] = (Mesh)0x1;
    *(undefined8 *)(this + 0x138) = *(undefined8 *)param_1;
  }
  if (*(RenderState **)(this + 0x148) != (RenderState *)0x0) {
    this_00 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setBlendFunc(this_00,param_1);
    bindMeshCommand(this);
    return;
  }
  return;
}

