
/* cocos2d::DrawPrimitives::drawCardinalSpline(cocos2d::PointArray*, float, unsigned int) */

void cocos2d::DrawPrimitives::drawCardinalSpline(PointArray *param_1,float param_2,uint param_3)

{
  uint uVar1;
  long *plVar2;
  long lVar3;
  void *__s;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  float *pfVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  long local_88;
  
                    /* try { // try from 00ef7a68 to 00ff7c6f has its CatchHandler @ 00ef7a68
                       catch() { ... } // from try @ 00ef7a68 with catch @ 00ef7a68
                       catch() { ... } // from try @ 00ef7d1c with catch @ 00ef7a68 */
  lVar3 = tpidr_el0;
  local_88 = *(long *)(lVar3 + 0x28);
  FUN_00ef6ebc();
  uVar1 = param_3 + 1;
  uVar7 = (ulong)uVar1;
  __s = operator_new__(uVar7 << 3,(nothrow_t *)&std::nothrow);
  if (__s == (void *)0x0) {
    pvVar8 = (void *)0x0;
  }
  else {
    pvVar8 = __s;
    if (uVar1 != 0) {
      memset(__s,0,uVar7 << 3);
    }
  }
  lVar4 = PointArray::count(param_1);
  if (uVar1 != 0) {
    uVar9 = 0;
    fVar13 = 1.0 / (float)lVar4;
    pfVar10 = (float *)((long)pvVar8 + 4);
    do {
      fVar12 = (float)(uVar9 & 0xffffffff) / (float)param_3;
      if (fVar12 == 1.0) {
        lVar4 = PointArray::count(param_1);
        lVar4 = lVar4 + -1;
        fVar12 = 1.0;
      }
      else {
        lVar4 = (long)(fVar12 / fVar13);
        fVar12 = (fVar12 - fVar13 * (float)lVar4) / fVar13;
      }
      puVar5 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar4 + -1);
      local_90 = *puVar5;
      puVar5 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar4);
      local_98 = *puVar5;
      puVar5 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar4 + 1);
      local_a0 = *puVar5;
      puVar5 = (undefined8 *)PointArray::getControlPointAtIndex(param_1,lVar4 + 2);
      local_a8 = *puVar5;
      fVar11 = (float)ccCardinalSplineAt((Vec2 *)&local_90,(Vec2 *)&local_98,(Vec2 *)&local_a0,
                                         (Vec2 *)&local_a8,param_2,fVar12);
      uVar9 = uVar9 + 1;
      pfVar10[-1] = fVar11;
      *pfVar10 = fVar12;
      pfVar10 = pfVar10 + 2;
    } while (uVar7 != uVar9);
  }
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,__s);
  glDrawArrays(3,0,uVar7);
  if (pvVar8 != (void *)0x0) {
    operator_delete__(__s);
  }
  lVar4 = Director::getInstance();
  lVar6 = *(long *)(lVar4 + 0x1b0);
  plVar2 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar6);
  lVar4 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar6);
  *plVar2 = *plVar2 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar6) = lVar4 + uVar7;
  if (*(long *)(lVar3 + 0x28) == local_88) {
                    /* try { // try from 00ef7c70 to 00ff7c7b has its CatchHandler @ 00ef7de8 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

