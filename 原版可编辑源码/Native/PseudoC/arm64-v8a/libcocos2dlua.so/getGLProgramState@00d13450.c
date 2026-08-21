
/* cocos2d::BatchMesh::getGLProgramState() */

void __thiscall cocos2d::BatchMesh::getGLProgramState(BatchMesh *this)

{
  Technique *this_00;
  Pass *this_01;
  
  this_00 = (Technique *)Material::getTechnique(*(Material **)(this + 0x2a8));
  this_01 = (Pass *)Technique::getPassByIndex(this_00,0);
  Pass::getGLProgramState(this_01);
  return;
}

