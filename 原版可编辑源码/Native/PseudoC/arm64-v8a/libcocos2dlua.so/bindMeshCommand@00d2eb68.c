
/* cocos2d::Mesh::bindMeshCommand() */

void __thiscall cocos2d::Mesh::bindMeshCommand(Mesh *this)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  Texture2D *this_00;
  VertexBuffer *this_01;
  StateBlock *pSVar5;
  Pass *this_02;
  
  if ((*(long *)(this + 0x148) != 0) && (*(long *)(this + 0x128) != 0)) {
    this_02 = (Pass *)**(undefined8 **)(*(long *)(*(long *)(this + 0x148) + 0x90) + 0x78);
    uVar4 = Pass::getGLProgramState(this_02);
    this_00 = (Texture2D *)RenderState::getTexture((RenderState *)this_02);
    if (this_00 == (Texture2D *)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = Texture2D::getName(this_00);
    }
    this_01 = (VertexBuffer *)MeshIndexData::getVertexBuffer(*(MeshIndexData **)(this + 0x128));
    uVar2 = VertexBuffer::getVBO(this_01,0);
    uVar3 = IndexBuffer::getVBO(*(IndexBuffer **)(*(long *)(this + 0x128) + 0x28),0);
    MeshCommand::genMaterialID((MeshCommand *)(this + 0x68),uVar1,uVar4,uVar2,uVar3,0x30300000001);
    pSVar5 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setCullFace(pSVar5,true);
    pSVar5 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setDepthTest(pSVar5,true);
    return;
  }
  return;
}

