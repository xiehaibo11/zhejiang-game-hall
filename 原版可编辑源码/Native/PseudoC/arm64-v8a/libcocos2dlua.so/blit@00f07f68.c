
/* cocos2d::Grid3D::blit() */

void __thiscall cocos2d::Grid3D::blit(Grid3D *this)

{
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(this + 0x28);
  fVar2 = *(float *)(this + 0x2c);
  GL::enableVertexAttribs(5);
  GLProgram::use(*(GLProgram **)(this + 0x50));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0x50));
  glVertexAttribPointer(0,3,0x1406,0,0,*(undefined8 *)(this + 0x78));
  glVertexAttribPointer(2,2,0x1406,0,0,*(undefined8 *)(this + 0x70));
  glDrawElements(4,(int)(fVar1 * fVar2) * 6,0x1403,*(undefined8 *)(this + 0x88));
  return;
}

