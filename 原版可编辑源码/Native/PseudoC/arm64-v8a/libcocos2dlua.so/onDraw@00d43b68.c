
/* cocos2d::Terrain::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::Terrain::onDraw(Mat4 *param_1,uint param_2)

{
  Mat4 *__s2;
  long lVar1;
  int iVar2;
  uint uVar3;
  GLProgram *this;
  Camera *this_00;
  void *__s2_00;
  undefined8 *puVar4;
  ulong uVar5;
  Mat4 *pMVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  Vec3 aVStack_f8 [16];
  Mat4 aMStack_e8 [48];
  float local_b8;
  float fStack_b4;
  float local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00d43b9c to 00e43ba3 has its CatchHandler @ 00d43e24 */
                    /* try { // try from 00d43ba4 to 00e43c8f has its CatchHandler @ 00d439dc */
  (**(code **)(*(long *)param_1 + 0x430))(&local_a8);
  __s2 = param_1 + 0x80588;
  iVar2 = memcmp(&local_a8,__s2,0x40);
  if (iVar2 != 0) {
    *(undefined8 *)(param_1 + 0x805b0) = uStack_80;
    *(undefined8 *)(param_1 + 0x805a8) = local_88;
    *(undefined8 *)(param_1 + 0x805c0) = uStack_70;
    *(undefined8 *)(param_1 + 0x805b8) = local_78;
    *(undefined8 *)(param_1 + 0x80590) = uStack_a0;
    *(undefined8 *)__s2 = local_a8;
    *(undefined8 *)(param_1 + 0x805a0) = uStack_90;
    *(undefined8 *)(param_1 + 0x80598) = local_98;
    QuadTree::preCalculateAABB(*(QuadTree **)(param_1 + 0x4f0),__s2);
  }
  this = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(this);
  RenderState::StateBlock::bind(*(StateBlock **)(param_1 + 0x80628));
  GL::enableVertexAttribs
            (1 << (ulong)(*(uint *)(param_1 + 0x805d0) & 0x1f) |
             1 << (ulong)(*(uint *)(param_1 + 0x805cc) & 0x1f) |
             1 << (ulong)(*(uint *)(param_1 + 0x805c8) & 0x1f));
  GLProgram::setUniformsForBuiltins(this,(Mat4 *)(ulong)param_2);
  GLProgramState::applyUniforms(*(GLProgramState **)(param_1 + 0x1d8));
  glUniform3f(*(undefined4 *)(param_1 + 0x488),*(undefined4 *)(param_1 + 0x48c),
              *(undefined4 *)(param_1 + 0x490),*(undefined4 *)(param_1 + 0x80624));
  if (*(long *)(param_1 + 0x478) == 0) {
                    /* try { // try from 00d43d0c to 00e43d13 has its CatchHandler @ 00d43e2c */
    uVar3 = Texture2D::getName(*(Texture2D **)(param_1 + 0x458));
    GL::bindTexture2D(uVar3);
                    /* try { // try from 00d43d14 to 00e43d2f has its CatchHandler @ 00d439dc */
    glUniform1i(*(undefined4 *)(param_1 + 0x805f4),0);
    glUniform1i(*(undefined4 *)(param_1 + 0x80608),0);
  }
  else {
    if (0 < *(int *)(param_1 + 0x8053c)) {
      uVar5 = 0;
                    /* try { // try from 00d43c90 to 00e43c97 has its CatchHandler @ 00d43e0c */
      pMVar6 = param_1 + 0x3c0;
      do {
                    /* try { // try from 00d43c98 to 00e43d0b has its CatchHandler @ 00d439dc */
        uVar3 = Texture2D::getName(*(Texture2D **)(param_1 + uVar5 * 8 + 0x458));
        GL::bindTexture2DN((uint)uVar5,uVar3);
        glUniform1i(*(undefined4 *)(param_1 + uVar5 * 4 + 0x805f4),uVar5 & 0xffffffff);
        glUniform1f(*(undefined4 *)pMVar6,*(undefined4 *)(param_1 + uVar5 * 4 + 0x80614));
        uVar5 = uVar5 + 1;
        pMVar6 = pMVar6 + 0x20;
      } while ((long)uVar5 < (long)*(int *)(param_1 + 0x8053c));
    }
    glUniform1i(*(undefined4 *)(param_1 + 0x80608),1);
    uVar3 = Texture2D::getName(*(Texture2D **)(param_1 + 0x478));
    GL::bindTexture2DN(4,uVar3);
    glUniform1i(*(undefined4 *)(param_1 + 0x80604),4);
  }
                    /* try { // try from 00d43d30 to 00e43d3b has its CatchHandler @ 00d43e10 */
  if (*(long *)(param_1 + 0x480) == 0) {
    glUniform1i(*(undefined4 *)(param_1 + 0x8060c),0);
  }
  else {
                    /* try { // try from 00d43d3c to 00e43e47 has its CatchHandler @ 00d439dc */
    glUniform1i(*(undefined4 *)(param_1 + 0x8060c),1);
    uVar3 = Texture2D::getName(*(Texture2D **)(param_1 + 0x480));
    GL::bindTexture2DN(5,uVar3);
    glUniform1i(*(undefined4 *)(param_1 + 0x80610),5);
  }
  this_00 = (Camera *)Camera::getVisitingCamera();
  __s2_00 = (void *)Camera::getViewMatrix(this_00);
  iVar2 = memcmp(param_1 + 0x328,__s2_00,0x40);
  if (iVar2 != 0) {
    param_1[0x368] = (Mat4)0x1;
    puVar4 = (undefined8 *)Camera::getViewMatrix(this_00);
    uVar7 = puVar4[4];
    uVar9 = puVar4[7];
    uVar8 = puVar4[6];
    uVar11 = puVar4[1];
    uVar10 = *puVar4;
    uVar13 = puVar4[3];
    uVar12 = puVar4[2];
    *(undefined8 *)(param_1 + 0x350) = puVar4[5];
    *(undefined8 *)(param_1 + 0x348) = uVar7;
    *(undefined8 *)(param_1 + 0x360) = uVar9;
    *(undefined8 *)(param_1 + 0x358) = uVar8;
    *(undefined8 *)(param_1 + 0x330) = uVar11;
    *(undefined8 *)(param_1 + 0x328) = uVar10;
    *(undefined8 *)(param_1 + 0x340) = uVar13;
    *(undefined8 *)(param_1 + 0x338) = uVar12;
  }
  if (param_1[0x368] != (Mat4)0x0) {
    (**(code **)(*(long *)this_00 + 0x430))(aMStack_e8,this_00);
    Vec3::Vec3(aVStack_f8,local_b8,fStack_b4,local_b0);
    setChunksLOD((Vec3 *)param_1);
    Mat4::~Mat4(aMStack_e8);
    if ((param_1[0x368] != (Mat4)0x0) &&
       (QuadTree::resetNeedDraw(*(QuadTree **)(param_1 + 0x4f0),true), param_1[0x80538] != (Mat4)0x0
       )) {
                    /* catch() { ... } // from try @ 00d43c90 with catch @ 00d43e0c */
                    /* catch() { ... } // from try @ 00d43d30 with catch @ 00d43e10 */
      QuadTree::cullByCamera(*(QuadTree **)(param_1 + 0x4f0),this_00,__s2);
    }
  }
  QuadTree::draw(*(QuadTree **)(param_1 + 0x4f0));
                    /* catch() { ... } // from try @ 00d43b9c with catch @ 00d43e24 */
                    /* catch() { ... } // from try @ 00d43ac0 with catch @ 00d43e28 */
  if (param_1[0x368] != (Mat4)0x0) {
                    /* catch() { ... } // from try @ 00d43d0c with catch @ 00d43e2c */
    param_1[0x368] = (Mat4)0x0;
  }
  glActiveTexture(0x84c0);
  Mat4::~Mat4((Mat4 *)&local_a8);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

