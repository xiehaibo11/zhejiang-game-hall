
/* cocos2d::NavMeshDebugDraw::drawImplement(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::NavMeshDebugDraw::drawImplement(Mat4 *param_1,uint param_2)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  undefined4 *puVar5;
  long lVar6;
  
                    /* try { // try from 0101dc88 to 0111dc93 has its CatchHandler @ 0101dcec */
                    /* try { // try from 0101dc94 to 0111dd23 has its CatchHandler @ 0101dc64 */
  GLProgram::use(*(GLProgram **)(param_1 + 0x40));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(param_1 + 0x40),(Mat4 *)(ulong)param_2);
  glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0xb0));
  GL::enableVertexAttribs(3);
  glVertexAttribPointer(0,3,0x1406,0,0x1c,0);
                    /* catch() { ... } // from try @ 0101dc88 with catch @ 0101dcec */
  glVertexAttribPointer(1,4,0x1406,0,0x1c,0xc);
  if (param_1[0xb4] != (Mat4)0x0) {
    glBufferData(0x8892,*(long *)(param_1 + 0x10) - *(long *)(param_1 + 8),*(long *)(param_1 + 8),
                 0x88e4);
    param_1[0xb4] = (Mat4)0x0;
  }
  plVar3 = *(long **)(param_1 + 0x28);
                    /* catch() { ... } // from try @ 0101dda0 with catch @ 0101dd24 */
  for (plVar2 = *(long **)(param_1 + 0x20); plVar2 != plVar3; plVar2 = plVar2 + 1) {
                    /* try { // try from 0101dd90 to 0111dd9f has its CatchHandler @ 0101de10 */
    if (*(int *)*plVar2 != 0) {
                    /* try { // try from 0101dda0 to 0111de6f has its CatchHandler @ 0101dd24 */
      RenderState::StateBlock::setDepthWrite
                (*(StateBlock **)(param_1 + 0xa0),SUB41(((int *)*plVar2)[1],0));
      if (*(int *)*plVar2 == 1) {
        glLineWidth(((int *)*plVar2)[3]);
      }
      RenderState::StateBlock::bind(*(StateBlock **)(param_1 + 0xa0));
      puVar5 = (undefined4 *)*plVar2;
      glDrawArrays(*puVar5,*(ushort *)((long)puVar5 + 6),
                   (uint)*(ushort *)(puVar5 + 2) - (uint)*(ushort *)((long)puVar5 + 6));
      lVar4 = Director::getInstance();
      lVar6 = *(long *)(lVar4 + 0x1b0);
      plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar6);
      lVar4 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar6);
      *plVar1 = *plVar1 + 1;
                    /* try { // try from 0101dd6c to 0111dd73 has its CatchHandler @ 0101de08 */
      *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar6) =
           ((ulong)*(ushort *)(*plVar2 + 8) - (ulong)*(ushort *)(*plVar2 + 6)) + lVar4;
    }
  }
  glBindBuffer(0x8892,0);
  return;
}

