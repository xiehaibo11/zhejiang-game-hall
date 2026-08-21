
/* cocos2d::Mesh::setMaterial(cocos2d::Material*) */

void __thiscall cocos2d::Mesh::setMaterial(Mesh *this,Material *param_1)

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
  Mesh *pMVar8;
  long lVar9;
  Pass *this_02;
  MeshIndexData *pMVar10;
  Mesh *pMVar11;
  undefined8 *puVar12;
  
  this_00 = *(Ref **)(this + 0x148);
  if (this_00 != (Ref *)param_1) {
    if (this_00 != (Ref *)0x0) {
      Ref::release(this_00);
    }
    *(Material **)(this + 0x148) = param_1;
    if (param_1 == (Material *)0x0) goto LAB_00d2f4a8;
    Ref::retain((Ref *)param_1);
    param_1 = *(Material **)(this + 0x148);
  }
  if (param_1 != (Material *)0x0) {
    plVar5 = (long *)Material::getTechniques(param_1);
    puVar2 = (undefined8 *)plVar5[1];
    for (puVar1 = (undefined8 *)*plVar5; puVar1 != puVar2; puVar1 = puVar1 + 1) {
      plVar5 = (long *)Technique::getPasses((Technique *)*puVar1);
      puVar3 = (undefined8 *)plVar5[1];
      for (puVar12 = (undefined8 *)*plVar5; puVar12 != puVar3; puVar12 = puVar12 + 1) {
        this_02 = (Pass *)*puVar12;
        pMVar10 = *(MeshIndexData **)(this + 0x128);
        pGVar6 = (GLProgramState *)Pass::getGLProgramState(this_02);
        pVVar7 = (VertexAttribBinding *)VertexAttribBinding::create(pMVar10,pGVar6);
        Pass::setVertexAttribBinding(this_02,pVVar7);
      }
    }
  }
LAB_00d2f4a8:
  pMVar11 = *(Mesh **)(this + 0x28);
  while (pMVar11 != this + 0x30) {
    setTexture(this,*(undefined8 *)(pMVar11 + 0x28),*(undefined4 *)(pMVar11 + 0x20),1);
    pMVar8 = *(Mesh **)(pMVar11 + 8);
    if (*(Mesh **)(pMVar11 + 8) == (Mesh *)0x0) {
      pMVar8 = pMVar11 + 0x10;
      bVar4 = *(Mesh **)*(Mesh **)pMVar8 != pMVar11;
      pMVar11 = *(Mesh **)pMVar8;
      if (bVar4) {
        do {
          lVar9 = *(long *)pMVar8;
          pMVar8 = (Mesh *)(lVar9 + 0x10);
          pMVar11 = *(Mesh **)pMVar8;
        } while (*(long *)pMVar11 != lVar9);
      }
    }
    else {
      do {
        pMVar11 = pMVar8;
        pMVar8 = *(Mesh **)pMVar11;
      } while (*(Mesh **)pMVar11 != (Mesh *)0x0);
    }
  }
  if ((this[0x140] != (Mesh)0x0) && (*(RenderState **)(this + 0x148) != (RenderState *)0x0)) {
    this_01 = (StateBlock *)RenderState::getStateBlock(*(RenderState **)(this + 0x148));
    RenderState::StateBlock::setBlendFunc(this_01,(BlendFunc *)(this + 0x138));
    bindMeshCommand(this);
  }
  bindMeshCommand(this);
  return;
}

