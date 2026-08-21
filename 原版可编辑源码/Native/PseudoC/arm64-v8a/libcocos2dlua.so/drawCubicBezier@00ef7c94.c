
/* cocos2d::DrawPrimitives::drawCubicBezier(cocos2d::Vec2 const&, cocos2d::Vec2 const&,
   cocos2d::Vec2 const&, cocos2d::Vec2 const&, unsigned int) */

void cocos2d::DrawPrimitives::drawCubicBezier
               (Vec2 *param_1,Vec2 *param_2,Vec2 *param_3,Vec2 *param_4,uint param_5)

{
  float *pfVar1;
  long *plVar2;
  void *__s;
  long lVar3;
  long lVar4;
  ulong uVar5;
  float fVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  
  FUN_00ef6ebc();
  uVar5 = (ulong)(param_5 + 1);
  __s = operator_new__(uVar5 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
                    /* try { // try from 00ef7d1c to 00ff7e43 has its CatchHandler @ 00ef7a68 */
    pvVar8 = (void *)0x0;
joined_r0x00ef7d20:
    if (param_5 == 0) {
      fVar6 = *(float *)param_4;
      fVar12 = *(float *)(param_4 + 4);
      uVar7 = 0;
      goto LAB_00ef7dd0;
    }
  }
  else {
    pvVar8 = __s;
    if (param_5 + 1 != 0) {
      memset(__s,0,uVar5 << 3);
                    /* try { // try from 00ef7d10 to 00ff7d1b has its CatchHandler @ 00ef7dd8 */
      goto joined_r0x00ef7d20;
    }
  }
  uVar15 = *(undefined8 *)param_1;
  uVar16 = *(undefined8 *)param_2;
  uVar17 = *(undefined8 *)param_3;
  uVar9 = 0;
  uVar7 = (ulong)param_5;
  fVar18 = 0.0;
  fVar6 = (float)*(undefined8 *)param_4;
  fVar12 = (float)((ulong)*(undefined8 *)param_4 >> 0x20);
  do {
    fVar14 = 1.0 - fVar18;
    fVar10 = powf(fVar14,3.0);
    fVar11 = fVar18 * fVar14 * fVar14 * 3.0;
    fVar14 = fVar18 * fVar18 * fVar14 * 3.0;
    fVar13 = fVar18 * fVar18 * fVar18;
    *(ulong *)((long)pvVar8 + uVar9 * 8) =
         CONCAT44((float)((ulong)uVar15 >> 0x20) * fVar10 + (float)((ulong)uVar16 >> 0x20) * fVar11
                  + (float)((ulong)uVar17 >> 0x20) * fVar14 + fVar12 * fVar13,
                  (float)uVar15 * fVar10 + (float)uVar16 * fVar11 + (float)uVar17 * fVar14 +
                  fVar6 * fVar13);
    uVar9 = uVar9 + 1;
    fVar18 = 1.0 / (float)param_5 + fVar18;
  } while (uVar7 != uVar9);
LAB_00ef7dd0:
  pfVar1 = (float *)((long)pvVar8 + uVar7 * 8);
  *pfVar1 = fVar6;
  pfVar1[1] = fVar12;
                    /* catch() { ... } // from try @ 00ef7d10 with catch @ 00ef7dd8 */
  GLProgram::use(DAT_0178f770);
                    /* catch() { ... } // from try @ 00ef7c70 with catch @ 00ef7de8 */
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,__s);
  glDrawArrays(3,0,uVar5);
  if (pvVar8 != (void *)0x0) {
    operator_delete__(__s);
  }
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar2 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
  *plVar2 = *plVar2 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + uVar5;
  return;
}

