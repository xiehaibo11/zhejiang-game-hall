
/* cocos2d::DrawPrimitives::drawQuadBezier(cocos2d::Vec2 const&, cocos2d::Vec2 const&, cocos2d::Vec2
   const&, unsigned int) */

void cocos2d::DrawPrimitives::drawQuadBezier(Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,uint param_4)

{
  float *pfVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  void *pvVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
                    /* catch() { ... } // from try @ 00ef760c with catch @ 00ef78c0 */
                    /* catch() { ... } // from try @ 00ef7584 with catch @ 00ef78c4 */
  FUN_00ef6ebc();
                    /* catch() { ... } // from try @ 00ef75b8 with catch @ 00ef78e4 */
  uVar7 = (ulong)(param_4 + 1);
  __s = operator_new__(uVar7 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    pvVar8 = (void *)0x0;
joined_r0x00ef7924:
    if (param_4 == 0) {
      fVar11 = *(float *)param_3;
      fVar12 = *(float *)(param_3 + 4);
      uVar5 = 0;
                    /* try { // try from 00ef7930 to 00ff796f has its CatchHandler @ 00ef7930
                       catch() { ... } // from try @ 00ef7930 with catch @ 00ef7930
                       catch() { ... } // from try @ 00ef798c with catch @ 00ef7930 */
      goto LAB_00ef79a0;
    }
  }
  else {
    pvVar8 = __s;
    if (param_4 + 1 != 0) {
      memset(__s,0,uVar7 << 3);
      goto joined_r0x00ef7924;
    }
  }
  uVar9 = *(undefined8 *)param_1;
  uVar10 = *(undefined8 *)param_2;
  uVar6 = 0;
  uVar5 = (ulong)param_4;
  fVar11 = (float)*(undefined8 *)param_3;
  fVar12 = (float)((ulong)*(undefined8 *)param_3 >> 0x20);
  fVar13 = 0.0;
  do {
    fVar14 = 1.0 - fVar13;
                    /* try { // try from 00ef7970 to 00ff798b has its CatchHandler @ 00ef7a08 */
    fVar15 = fVar13 * (fVar14 + fVar14);
                    /* try { // try from 00ef798c to 00ff7a67 has its CatchHandler @ 00ef7930 */
    *(ulong *)((long)pvVar8 + uVar6 * 8) =
         CONCAT44((float)((ulong)uVar9 >> 0x20) * fVar14 * fVar14 +
                  (float)((ulong)uVar10 >> 0x20) * fVar15 + fVar12 * fVar13 * fVar13,
                  (float)uVar9 * fVar14 * fVar14 + (float)uVar10 * fVar15 + fVar11 * fVar13 * fVar13
                 );
    uVar6 = uVar6 + 1;
    fVar13 = 1.0 / (float)param_4 + fVar13;
  } while (uVar5 != uVar6);
LAB_00ef79a0:
  pfVar1 = (float *)((long)pvVar8 + uVar5 * 8);
  *pfVar1 = fVar11;
  pfVar1[1] = fVar12;
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,__s);
                    /* catch() { ... } // from try @ 00ef7970 with catch @ 00ef7a08 */
  glDrawArrays(3,0,uVar7);
  if (pvVar8 != (void *)0x0) {
    operator_delete__(__s);
  }
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar2 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar2 = *plVar2 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + uVar7;
  return;
}

