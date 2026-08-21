
/* cocos2d::BatchMesh::setMaterial(cocos2d::Material*) */

void __thiscall cocos2d::BatchMesh::setMaterial(BatchMesh *this,Material *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  bool bVar4;
  Ref *this_00;
  long *plVar5;
  GLProgramState *pGVar6;
  VertexAttribBinding *pVVar7;
  StateBlock *this_01;
  BatchMesh *pBVar8;
  long lVar9;
  Pass *this_02;
  MeshIndexData *pMVar10;
  BatchMesh *pBVar11;
  undefined8 *puVar12;
  
  this_00 = *(Ref **)(this + 0x2a8);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Material **)(this + 0x2a8) = param_1;
    if (param_1 == (Material *)0x0) goto LAB_00d109d8;
    Ref::retain((Ref *)param_1);
    param_1 = *(Material **)(this + 0x2a8);
  }
  if (param_1 != (Material *)0x0) {
    plVar5 = (long *)Material::getTechniques(param_1);
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar5 = (long *)Technique::getPasses((Technique *)*puVar1);
      puVar3 = (undefined8 *)plVar5[1];
      for (puVar12 = (undefined8 *)*plVar5; puVar12 != puVar3; puVar12 = puVar12 + 1) {
        this_02 = (Pass *)*puVar12;
        pMVar10 = *(MeshIndexData **)(this + 0x2a0);
        pGVar6 = (GLProgramState *)Pass::getGLProgramState(this_02);
        pVVar7 = (VertexAttribBinding *)VertexAttribBinding::create(pMVar10,pGVar6);
        Pass::setVertexAttribBinding(this_02,pVVar7);
      }
    }
    this_01 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x2a8));
    RenderState::StateBlock::setDepthWrite(this_01,true);
  }
LAB_00d109d8:
  pBVar11 = *(BatchMesh **)(this + 0x40);
  while (pBVar11 != this + 0x48) {
    setTexture(this,*(undefined8 *)(pBVar11 + 0x28),*(undefined4 *)(pBVar11 + 0x20));
    pBVar8 = *(BatchMesh **)(pBVar11 + 8);
    if (*(BatchMesh **)(pBVar11 + 8) == (BatchMesh *)0x0) {
      pBVar8 = pBVar11 + 0x10;
      bVar4 = *(BatchMesh **)*(BatchMesh **)pBVar8 != pBVar11;
      pBVar11 = *(BatchMesh **)pBVar8;
      if (bVar4) {
        do {
          lVar9 = *(long *)pBVar8;
          pBVar8 = (BatchMesh *)(lVar9 + 0x10);
          pBVar11 = *(BatchMesh **)pBVar8;
        } while (*(long *)pBVar11 != lVar9);
      }
    }
    else {
      do {
        pBVar11 = pBVar8;
        pBVar8 = *(BatchMesh **)pBVar11;
      } while (*(BatchMesh **)pBVar11 != (BatchMesh *)0x0);
    }
  }
  return;
}

