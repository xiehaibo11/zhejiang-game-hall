
/* cocos2d::renderer::SimpleSprite2D::fillBuffers(cocos2d::renderer::NodeProxy*,
   cocos2d::renderer::ModelBatcher*, unsigned long) */

void cocos2d::renderer::SimpleSprite2D::fillBuffers
               (NodeProxy *param_1,ModelBatcher *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  short sVar5;
  RenderData *this;
  MeshBuffer *this_00;
  uint *puVar6;
  Vec3 *pVVar7;
  void *__src;
  short *psVar8;
  long lVar9;
  float *pfVar10;
  Mat4 *this_01;
  ulong uVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  this = (RenderData *)RenderDataList::getRenderData(*(RenderDataList **)(param_1 + 0x38),0);
  if (this != (RenderData *)0x0) {
    this_00 = (MeshBuffer *)
              ModelBatcher::getBuffer((ModelBatcher *)param_3,*(VertexFormat **)(param_1 + 0x70));
    puVar6 = (uint *)MeshBuffer::request(this_00,4,6);
    uVar1 = *puVar6;
    uVar2 = puVar6[1];
    uVar3 = puVar6[2];
                    /* try { // try from 009d037c to 00ad0383 has its CatchHandler @ 009d08a0 */
                    /* try { // try from 009d0384 to 00ad0393 has its CatchHandler @ 009d0890 */
    if (((**(byte **)(param_1 + 0x18) >> 1 & 1) != 0) || (**(uint **)(param_2 + 0x80) >> 0x1e != 0))
    {
      this_01 = *(Mat4 **)(param_2 + 0x98);
      pfVar10 = *(float **)(param_1 + 0x98);
      uVar11 = (ulong)*(uint *)(param_1 + 0x58) & 0xfffffffc;
                    /* try { // try from 009d03ac to 00ad03b3 has its CatchHandler @ 009d08a0 */
      fVar12 = *pfVar10;
      fVar13 = pfVar10[1];
      fVar14 = pfVar10[2];
      fVar15 = pfVar10[3];
                    /* try { // try from 009d03b4 to 00ad03c3 has its CatchHandler @ 009d0890 */
      pVVar7 = (Vec3 *)RenderData::getVertices(this);
      uVar4 = *(undefined4 *)(pVVar7 + 8);
                    /* try { // try from 009d03dc to 00ad03e3 has its CatchHandler @ 009d08a0 */
      Mat4::transformVector(this_01,fVar12,fVar13,0.0,1.0,pVVar7);
      *(undefined4 *)(pVVar7 + 8) = uVar4;
                    /* try { // try from 009d03e4 to 00ad03f3 has its CatchHandler @ 009d0890 */
      pVVar7 = pVVar7 + uVar11;
      uVar4 = *(undefined4 *)(pVVar7 + 8);
      Mat4::transformVector(this_01,fVar14,fVar13,0.0,1.0,pVVar7);
      *(undefined4 *)(pVVar7 + 8) = uVar4;
                    /* try { // try from 009d040c to 00ad0413 has its CatchHandler @ 009d08a0 */
      pVVar7 = pVVar7 + uVar11;
      uVar4 = *(undefined4 *)(pVVar7 + 8);
                    /* try { // try from 009d0414 to 00ad0423 has its CatchHandler @ 009d0890 */
                    /* try { // try from 009d042c to 00ad043b has its CatchHandler @ 009d088c */
      Mat4::transformVector(this_01,fVar12,fVar15,0.0,1.0,pVVar7);
      *(undefined4 *)(pVVar7 + 8) = uVar4;
      pVVar7 = pVVar7 + uVar11;
      uVar4 = *(undefined4 *)(pVVar7 + 8);
                    /* try { // try from 009d0448 to 00ad0883 has its CatchHandler @ 009d08c8 */
      Mat4::transformVector(this_01,fVar14,fVar15,0.0,1.0,pVVar7);
      *(undefined4 *)(pVVar7 + 8) = uVar4;
      **(uint **)(param_1 + 0x18) = **(uint **)(param_1 + 0x18) & 0xfffffffd;
    }
    lVar9 = *(long *)this_00;
    __src = (void *)RenderData::getVertices(this);
    memcpy((void *)(lVar9 + (ulong)(uVar1 >> 2) * 4),__src,
           (ulong)(uint)(*(int *)(param_1 + 0x58) << 2));
    psVar8 = (short *)RenderData::getIndices(this);
    lVar9 = *(long *)(this_00 + 8);
    sVar5 = (short)uVar3;
    *(short *)(lVar9 + (ulong)uVar2 * 2) = *psVar8 + sVar5;
    *(short *)(lVar9 + (ulong)(uVar2 + 1) * 2) = psVar8[1] + sVar5;
    *(short *)(lVar9 + (ulong)(uVar2 + 2) * 2) = psVar8[2] + sVar5;
    *(short *)(lVar9 + (ulong)(uVar2 + 3) * 2) = psVar8[3] + sVar5;
    *(short *)(lVar9 + (ulong)(uVar2 + 4) * 2) = psVar8[4] + sVar5;
    *(short *)(lVar9 + (ulong)(uVar2 + 5) * 2) = psVar8[5] + sVar5;
  }
  return;
}

