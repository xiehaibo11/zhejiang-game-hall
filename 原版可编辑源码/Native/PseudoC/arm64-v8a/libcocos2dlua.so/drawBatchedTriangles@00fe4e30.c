
/* cocos2d::Renderer::drawBatchedTriangles() */

void __thiscall cocos2d::Renderer::drawBatchedTriangles(Renderer *this)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  TrianglesCommand TVar4;
  bool bVar5;
  void *pvVar6;
  Configuration *this_00;
  TrianglesCommand *pTVar7;
  uint uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  long lVar16;
  
  plVar15 = *(long **)(this + 0x60);
  plVar3 = *(long **)(this + 0x68);
  if (plVar15 != plVar3) {
    puVar9 = *(undefined8 **)(this + 0x1b0088);
    uVar14 = 0;
    bVar5 = true;
    iVar11 = -1;
    *(undefined8 *)(this + 0x1b0090) = 0;
    *puVar9 = 0;
    puVar9[1] = 0;
                    /* catch() { ... } // from try @ 00fe4ee0 with catch @ 00fe4e88
                       catch() { ... } // from try @ 00fe4fb8 with catch @ 00fe4e88 */
    do {
      pTVar7 = (TrianglesCommand *)*plVar15;
      iVar13 = *(int *)(pTVar7 + 0x18);
      TVar4 = pTVar7[0x11];
      fillVerticesAndIndices(this,pTVar7);
      iVar12 = (int)uVar14;
      if (((bool)(iVar11 != iVar13 & (bVar5 ^ 1U))) || (TVar4 != (TrianglesCommand)0x0)) {
        if (bVar5) {
          pvVar6 = *(void **)(this + 0x1b0088);
                    /* try { // try from 00fe4ed8 to 010e4edf has its CatchHandler @ 00fe5094 */
          uVar10 = (ulong)iVar12;
        }
        else {
                    /* try { // try from 00fe4ee0 to 010e4f8b has its CatchHandler @ 00fe4e88 */
          pvVar6 = *(void **)(this + 0x1b0088);
          uVar10 = (long)iVar12 + 1;
          uVar14 = uVar10 & 0xffffffff;
          *(int *)((long)pvVar6 + uVar10 * 0x10 + 0xc) =
               *(int *)((long)pvVar6 + (long)iVar12 * 0x10 + 8) +
               *(int *)((long)pvVar6 + (long)iVar12 * 0x10 + 0xc);
        }
        plVar1 = (long *)((long)pvVar6 + uVar10 * 0x10);
        if (TVar4 != (TrianglesCommand)0x0) {
          iVar13 = -1;
        }
        *plVar1 = *plVar15;
        *(undefined4 *)(plVar1 + 1) = *(undefined4 *)(*plVar15 + 0x44);
        iVar11 = iVar13;
      }
      else {
        if ((!bVar5) &&
           (*(int *)(*(long *)(*(long *)(this + 0x1b0088) +
                              (-(uVar14 >> 0x1f) & 0xfffffff000000000 | uVar14 << 4)) + 0x18) !=
            *(int *)(*plVar15 + 0x18))) {
          __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderer.cpp"
                              ,"drawBatchedTriangles",0x2f9);
        }
        pvVar6 = *(void **)(this + 0x1b0088);
        plVar1 = (long *)((long)pvVar6 + (long)iVar12 * 0x10);
        iVar11 = *(int *)(*plVar15 + 0x44);
                    /* try { // try from 00fe4f8c to 010e4fb7 has its CatchHandler @ 00fe5058 */
        *plVar1 = *plVar15;
        *(int *)(plVar1 + 1) = (int)plVar1[1] + iVar11;
        iVar11 = iVar13;
      }
      iVar13 = (int)uVar14;
      if (*(int *)(this + 0x1b0084) <= iVar13 + 1) {
                    /* try { // try from 00fe4fb8 to 010e50af has its CatchHandler @ 00fe4e88 */
        uVar8 = (uint)((double)*(int *)(this + 0x1b0084) * 1.4);
        *(uint *)(this + 0x1b0084) = uVar8;
        pvVar6 = realloc(pvVar6,-(ulong)(uVar8 >> 0x1f) & 0xfffffff000000000 | (ulong)uVar8 << 4);
        *(void **)(this + 0x1b0088) = pvVar6;
      }
      plVar15 = plVar15 + 1;
      bVar5 = false;
    } while (plVar3 != plVar15);
    this_00 = (Configuration *)Configuration::getInstance();
    uVar14 = Configuration::supportsShareableVAO(this_00);
    if (((uVar14 & 1) == 0) ||
       (uVar14 = Configuration::supportsMapBuffer(this_00), (uVar14 & 1) == 0)) {
                    /* catch() { ... } // from try @ 00fe4f8c with catch @ 00fe5058 */
      glBindBuffer(0x8892,*(undefined4 *)(this + 0x1b007c));
      glBufferData(0x8892,(long)*(int *)(this + 0x1b0090) * 0x18,this + 0x78,0x88e8);
      GL::enableVertexAttribs(7);
                    /* catch() { ... } // from try @ 00fe4ed8 with catch @ 00fe5094 */
      glVertexAttribPointer(0,3,0x1406,0,0x18,0);
      glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
      glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
    }
    else {
      GL::bindVAO(*(uint *)(this + 0x1b0078));
      glBindBuffer(0x8892,*(undefined4 *)(this + 0x1b007c));
      glBufferData(0x8892,(long)*(int *)(this + 0x1b0090) * 0x18,0,0x88e4);
      pvVar6 = (void *)glMapBufferOES(0x8892,0x88b9);
      memcpy(pvVar6,this + 0x78,(long)*(int *)(this + 0x1b0090) * 0x18);
      glUnmapBufferOES(0x8892);
      glBindBuffer(0x8892,0);
    }
    glBindBuffer(0x8893,*(undefined4 *)(this + 0x1b0080));
    glBufferData(0x8893,(long)*(int *)(this + 0x1b0094) << 1,this + 0x180078,0x88e4);
    if (-1 < iVar13) {
      uVar14 = (ulong)(iVar13 + 1);
      lVar16 = 0;
      pTVar7 = (TrianglesCommand *)**(long **)(this + 0x1b0088);
      while( true ) {
        if (pTVar7 == (TrianglesCommand *)0x0) {
                    /* try { // try from 00fe51a0 to 010e521b has its CatchHandler @ 00fe51a0
                       catch() { ... } // from try @ 00fe51a0 with catch @ 00fe51a0
                       catch() { ... } // from try @ 00fe5234 with catch @ 00fe51a0 */
          __android_log_print(6,"cocos2d-x assert","%s function:%s line:%d",
                              "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/renderer/CCRenderer.cpp"
                              ,"drawBatchedTriangles",0x34f);
          pTVar7 = *(TrianglesCommand **)(*(long *)(this + 0x1b0088) + lVar16);
        }
        TrianglesCommand::useMaterial(pTVar7);
        glDrawElements(4,*(undefined4 *)(*(long *)(this + 0x1b0088) + lVar16 + 8),0x1403,
                       (long)*(int *)(*(long *)(this + 0x1b0088) + lVar16 + 0xc) << 1);
        uVar14 = uVar14 - 1;
        lVar2 = *(long *)(this + 0x1b0088) + lVar16;
        *(long *)(this + 0x1b00a0) = *(long *)(this + 0x1b00a0) + 1;
        lVar16 = lVar16 + 0x10;
        *(long *)(this + 0x1b00a8) = *(long *)(this + 0x1b00a8) + (long)*(int *)(lVar2 + 8);
        if (uVar14 == 0) break;
        pTVar7 = *(TrianglesCommand **)(*(long *)(this + 0x1b0088) + lVar16);
      }
    }
    uVar14 = Configuration::supportsShareableVAO(this_00);
    if (((uVar14 & 1) == 0) ||
       (uVar14 = Configuration::supportsMapBuffer(this_00), (uVar14 & 1) == 0)) {
      glBindBuffer(0x8892,0);
      glBindBuffer(0x8893,0);
    }
    else {
      GL::bindVAO(0);
    }
    *(undefined8 *)(this + 0x68) = *(undefined8 *)(this + 0x60);
    *(undefined8 *)(this + 0x1b0090) = 0;
  }
                    /* try { // try from 00fe521c to 010e5233 has its CatchHandler @ 00fe5294 */
  return;
}

