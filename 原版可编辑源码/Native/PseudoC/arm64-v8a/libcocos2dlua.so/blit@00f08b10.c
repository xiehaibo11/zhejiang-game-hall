
/* cocos2d::TiledGrid3D::blit() */

void __thiscall cocos2d::TiledGrid3D::blit(TiledGrid3D *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  
  fVar5 = *(float *)(this + 0x28);
  fVar6 = *(float *)(this + 0x2c);
                    /* catch() { ... } // from try @ 00f08aa0 with catch @ 00f08b20 */
  GLProgram::use(*(GLProgram **)(this + 0x50));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0x50));
  GL::enableVertexAttribs(5);
  glVertexAttribPointer(0,3,0x1406,0,0,*(undefined8 *)(this + 0x78));
  glVertexAttribPointer(2,2,0x1406,0,0,*(undefined8 *)(this + 0x70));
  iVar2 = (int)(fVar5 * fVar6) * 6;
  glDrawElements(4,iVar2,0x1403,*(undefined8 *)(this + 0x88));
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar1 = *plVar1 + 1;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + iVar2;
  return;
}

