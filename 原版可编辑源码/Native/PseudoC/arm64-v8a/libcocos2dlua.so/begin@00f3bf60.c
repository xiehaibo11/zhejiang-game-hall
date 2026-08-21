
/* cocos2d::RenderTexture::begin() */

void __thiscall cocos2d::RenderTexture::begin(RenderTexture *this)

{
  long lVar1;
  Director *pDVar2;
  undefined8 *puVar3;
  float *pfVar4;
  long lVar5;
  code *pcVar6;
  Renderer *this_00;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  float fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  float fVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  float local_98;
  float fStack_94;
  undefined **local_90;
  code *local_88;
  undefined8 uStack_80;
  RenderTexture *local_78;
  undefined ***local_70;
  long local_48;
  
                    /* catch() { ... } // from try @ 00f3bf30 with catch @ 00f3bf68 */
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pDVar2 = (Director *)Director::getInstance();
  Director::pushMatrix(pDVar2,1);
  puVar3 = (undefined8 *)Director::getMatrix(pDVar2,1);
  uVar7 = *puVar3;
  uVar15 = puVar3[3];
  uVar14 = puVar3[2];
  uVar12 = puVar3[5];
  uVar11 = puVar3[4];
  uVar9 = puVar3[7];
  uVar8 = puVar3[6];
  *(undefined8 *)(this + 0x688) = puVar3[1];
  *(undefined8 *)(this + 0x680) = uVar7;
  *(undefined8 *)(this + 0x6b8) = uVar9;
  *(undefined8 *)(this + 0x6b0) = uVar8;
  *(undefined8 *)(this + 0x6a8) = uVar12;
  *(undefined8 *)(this + 0x6a0) = uVar11;
  *(undefined8 *)(this + 0x698) = uVar15;
  *(undefined8 *)(this + 0x690) = uVar14;
  Director::pushMatrix(pDVar2,0);
  puVar3 = (undefined8 *)Director::getMatrix(pDVar2,0);
  uVar7 = *puVar3;
  uVar15 = puVar3[3];
  uVar14 = puVar3[2];
  uVar9 = puVar3[5];
  uVar8 = puVar3[4];
  uVar12 = puVar3[7];
  uVar11 = puVar3[6];
  *(undefined8 *)(this + 0x648) = puVar3[1];
  *(undefined8 *)(this + 0x640) = uVar7;
  *(undefined8 *)(this + 0x678) = uVar12;
  *(undefined8 *)(this + 0x670) = uVar11;
  *(undefined8 *)(this + 0x668) = uVar9;
  *(undefined8 *)(this + 0x660) = uVar8;
  *(undefined8 *)(this + 0x658) = uVar15;
  *(undefined8 *)(this + 0x650) = uVar14;
  if (this[0x2f8] == (RenderTexture)0x0) {
    Director::setProjection(pDVar2,*(undefined4 *)(pDVar2 + 0x194));
    pfVar4 = (float *)Texture2D::getContentSizeInPixels(*(Texture2D **)(this + 0x340));
    Director::getWinSizeInPixels();
    fVar10 = *pfVar4;
    fVar13 = pfVar4[1];
    Mat4::Mat4((Mat4 *)&local_90);
    Mat4::createOrthographicOffCenter
              (-1.0 / (local_98 / fVar10),1.0 / (local_98 / fVar10),-1.0 / (fStack_94 / fVar13),
               1.0 / (fStack_94 / fVar13),-1.0,1.0,(Mat4 *)&local_90);
    Director::multiplyMatrix(pDVar2,1,&local_90);
    Mat4::~Mat4((Mat4 *)&local_90);
  }
  GroupCommand::init((GroupCommand *)(this + 0x388),*(float *)(this + 0x170));
  lVar5 = Director::getInstance();
  this_00 = *(Renderer **)(lVar5 + 0x1b0);
  Renderer::addCommand(this_00,(RenderCommand *)(this + 0x388));
  Renderer::pushGroup(this_00,*(int *)(this + 0x3a0));
  CustomCommand::init((CustomCommand *)(this + 0x4a0),*(float *)(this + 0x170));
  local_90 = &PTR_FUN_0170fcc8;
  uStack_80 = 0;
  local_88 = onBegin;
  local_78 = this;
  local_70 = &local_90;
  FUN_008820fc(&local_90,this + 0x4c0);
  if (&local_90 == local_70) {
    pcVar6 = (code *)(*local_70)[4];
  }
  else {
    if (local_70 == (undefined ***)0x0) goto LAB_00f3c108;
    pcVar6 = (code *)(*local_70)[5];
  }
  (*pcVar6)();
LAB_00f3c108:
  lVar5 = Director::getInstance();
  Renderer::addCommand(*(Renderer **)(lVar5 + 0x1b0),(RenderCommand *)(this + 0x4a0));
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

