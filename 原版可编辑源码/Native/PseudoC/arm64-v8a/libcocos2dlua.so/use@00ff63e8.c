
/* cocos2d::VertexData::use() */

void __thiscall cocos2d::VertexData::use(VertexData *this)

{
  VertexData *pVVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  VertexData VVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  VertexData *pVVar10;
  VertexData *pVVar11;
  VertexData *pVVar12;
  long lVar13;
  VertexBuffer *this_00;
  int iVar14;
  
  pVVar1 = this + 0x30;
  if (*(VertexData **)(this + 0x28) == pVVar1) {
    uVar7 = 0;
  }
  else {
    uVar7 = 0;
    pVVar11 = *(VertexData **)(this + 0x28);
    do {
      uVar7 = 1 << (ulong)(*(uint *)(pVVar11 + 0x38) & 0x1f) | uVar7;
      pVVar10 = *(VertexData **)(pVVar11 + 8);
      if (*(VertexData **)(pVVar11 + 8) == (VertexData *)0x0) {
        pVVar10 = pVVar11 + 0x10;
        pVVar12 = *(VertexData **)pVVar10;
        if (*(VertexData **)pVVar12 != pVVar11) {
          do {
            lVar13 = *(long *)pVVar10;
            pVVar10 = (VertexData *)(lVar13 + 0x10);
            pVVar12 = *(VertexData **)pVVar10;
          } while (*(long *)pVVar12 != lVar13);
        }
      }
      else {
        do {
          pVVar12 = pVVar10;
          pVVar10 = *(VertexData **)pVVar12;
        } while (*(VertexData **)pVVar12 != (VertexData *)0x0);
      }
      pVVar11 = pVVar12;
    } while (pVVar12 != pVVar1);
  }
  GL::enableVertexAttribs(uVar7);
  if (*(VertexData **)(this + 0x28) != pVVar1) {
    iVar14 = -1;
    pVVar11 = *(VertexData **)(this + 0x28);
    do {
      this_00 = *(VertexBuffer **)(pVVar11 + 0x28);
      VVar6 = pVVar11[0x30];
      uVar2 = *(undefined4 *)(pVVar11 + 0x3c);
      uVar4 = *(undefined4 *)(pVVar11 + 0x40);
      iVar3 = *(int *)(pVVar11 + 0x34);
      uVar5 = *(undefined4 *)(pVVar11 + 0x38);
      iVar8 = VertexBuffer::getVBO(this_00,0);
      if (iVar8 != iVar14) {
        uVar9 = VertexBuffer::getVBO(this_00,0);
        glBindBuffer(0x8892,uVar9);
        iVar14 = iVar8;
      }
      uVar9 = VertexBuffer::getSizePerVertex(this_00);
      glVertexAttribPointer(uVar5,uVar4,uVar2,(byte)VVar6 & 1,uVar9,(long)iVar3);
      pVVar10 = *(VertexData **)(pVVar11 + 8);
      if (*(VertexData **)(pVVar11 + 8) == (VertexData *)0x0) {
        pVVar10 = pVVar11 + 0x10;
        pVVar12 = *(VertexData **)pVVar10;
        if (*(VertexData **)pVVar12 != pVVar11) {
          do {
            lVar13 = *(long *)pVVar10;
            pVVar10 = (VertexData *)(lVar13 + 0x10);
            pVVar12 = *(VertexData **)pVVar10;
          } while (*(long *)pVVar12 != lVar13);
        }
      }
      else {
        do {
          pVVar12 = pVVar10;
          pVVar10 = *(VertexData **)pVVar12;
        } while (*(VertexData **)pVVar12 != (VertexData *)0x0);
      }
      pVVar11 = pVVar12;
    } while (pVVar12 != pVVar1);
  }
  return;
}

