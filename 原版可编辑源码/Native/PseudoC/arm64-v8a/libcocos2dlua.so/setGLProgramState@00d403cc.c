
/* cocos2d::Sprite3D::setGLProgramState(cocos2d::GLProgramState*) */

void __thiscall cocos2d::Sprite3D::setGLProgramState(Sprite3D *this,GLProgramState *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  Node::setGLProgramState((Node *)this,param_1);
  puVar1 = *(undefined8 **)(this + 0x358);
  for (puVar2 = *(undefined8 **)(this + 0x350); puVar2 != puVar1; puVar2 = puVar2 + 1) {
    Mesh::setGLProgramState((Mesh *)*puVar2,param_1);
  }
  return;
}

