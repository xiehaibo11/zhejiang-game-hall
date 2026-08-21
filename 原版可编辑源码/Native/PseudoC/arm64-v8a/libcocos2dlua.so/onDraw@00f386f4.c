
/* cocos2d::ProgressTimer::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::ProgressTimer::onDraw(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  GLProgram *pGVar4;
  uint *puVar5;
  long lVar6;
  Texture2D *pTVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  
  pGVar4 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(pGVar4);
  pGVar4 = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::setUniformsForBuiltins(pGVar4,(Mat4 *)(ulong)param_2);
  puVar5 = (uint *)(**(code **)(**(long **)(param_1 + 0x310) + 0x5e8))();
  uVar2 = *puVar5;
  lVar6 = (**(code **)(**(long **)(param_1 + 0x310) + 0x5e8))(*(long **)(param_1 + 0x310));
  GL::blendFunc(uVar2,*(uint *)(lVar6 + 4));
  GL::enableVertexAttribs(7);
  pTVar7 = (Texture2D *)(**(code **)(**(long **)(param_1 + 0x310) + 0x550))();
  GL::bindTexture2D(pTVar7);
  glVertexAttribPointer(0,2,0x1406,0,0x14,*(undefined8 *)(param_1 + 800));
  glVertexAttribPointer(2,2,0x1406,0,0x14,*(long *)(param_1 + 800) + 0xc);
  glVertexAttribPointer(1,4,0x1401,1,0x14,*(long *)(param_1 + 800) + 8);
  if (*(int *)(param_1 + 0x2f8) == 1) {
    iVar3 = *(int *)(param_1 + 0x318);
    if (param_1[0x380] != (Mat4)0x0) {
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      glDrawArrays(5,0,iVar3 >> 1);
      iVar3 = *(int *)(param_1 + 0x318);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      glDrawArrays(5,4,iVar3 >> 1);
      lVar6 = 2;
      goto LAB_00f38848;
    }
    uVar8 = 5;
  }
  else {
    if (*(int *)(param_1 + 0x2f8) != 0) {
      return;
    }
    iVar3 = *(int *)(param_1 + 0x318);
    uVar8 = 6;
  }
  glDrawArrays(uVar8,0,iVar3);
  lVar6 = 1;
LAB_00f38848:
  lVar9 = Director::getInstance();
  lVar10 = *(long *)(lVar9 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar10);
  lVar9 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar10);
  *plVar1 = *plVar1 + lVar6;
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar10) = lVar9 + *(int *)(param_1 + 0x318);
  return;
}

