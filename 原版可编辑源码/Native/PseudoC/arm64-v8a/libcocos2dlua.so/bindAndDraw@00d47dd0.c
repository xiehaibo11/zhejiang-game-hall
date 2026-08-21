
/* cocos2d::Terrain::Chunk::bindAndDraw() */

void __thiscall cocos2d::Terrain::Chunk::bindAndDraw(Chunk *this)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  
  glBindBuffer(0x8892,*(undefined4 *)(this + 0x18));
  if ((*(char *)(*(long *)(this + 0xe8) + 0x368) != '\0') || (*(int *)(this + 0xa4) < 0)) {
    iVar2 = *(int *)(*(long *)(this + 0xe8) + 0x805dc);
    if (iVar2 == 1) {
      updateVerticesForLOD(this);
      updateIndicesLOD(this);
    }
    else if (iVar2 == 0) {
      updateIndicesLODSkirt(this);
    }
  }
  glBindBuffer(0x8893,*(undefined4 *)(this + 0x1c));
  glVertexAttribPointer(0,3,0x1406,0,0x20,0);
  glVertexAttribPointer(2,2,0x1406,0,0x20,0xc);
  glVertexAttribPointer(6,3,0x1406,0,0x20,0x14);
  glDrawElements(4,*(undefined2 *)(this + 0x20),0x1403,0);
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + (ulong)*(ushort *)(this + 0x20);
  return;
}

