
/* cocos2d::DrawPrimitives::drawCircle(cocos2d::Vec2 const&, float, float, unsigned int, bool,
   float, float) */

void cocos2d::DrawPrimitives::drawCircle
               (Vec2 *param_1,float param_2,float param_3,uint param_4,bool param_5,float param_6,
               float param_7)

{
  long *plVar1;
  int iVar2;
  GLProgram *this;
  void *__ptr;
  long lVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  uint uVar7;
  float fVar8;
  float fVar9;
  float local_78;
  float fStack_74;
  
                    /* try { // try from 00ef7584 to 00ff758f has its CatchHandler @ 00ef78c4 */
  FUN_00ef6ebc();
  iVar2 = param_4 * 2;
                    /* try { // try from 00ef75b8 to 00ff75cf has its CatchHandler @ 00ef78e4 */
  iVar4 = 1;
  if (param_5) {
    iVar4 = 2;
  }
  __ptr = calloc((ulong)(iVar2 + 4),4);
  if (__ptr != (void *)0x0) {
    fVar8 = *(float *)param_1;
    fVar9 = *(float *)(param_1 + 4);
    uVar7 = 0;
    uVar6 = 1;
    do {
      sincosf((6.2831855 / (float)param_4) * (float)uVar7 + param_3,&fStack_74,&local_78);
                    /* try { // try from 00ef760c to 00ff7677 has its CatchHandler @ 00ef78c0 */
      uVar7 = uVar7 + 1;
      *(float *)((long)__ptr + (ulong)(uVar6 - 1) * 4) = local_78 * param_2 * param_6 + fVar8;
      *(float *)((long)__ptr + (ulong)uVar6 * 4) = fStack_74 * param_2 * param_7 + fVar9;
      this = DAT_0178f770;
      uVar6 = uVar6 + 2;
    } while (uVar7 <= param_4);
    *(float *)((long)__ptr + (ulong)(iVar2 + 2) * 4) = fVar8;
    *(float *)((long)__ptr + (ulong)(iVar2 + 3) * 4) = fVar9;
    GLProgram::use(this);
    GLProgram::setUniformsForBuiltins(DAT_0178f770);
    GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
    GL::enableVertexAttribs(1);
    glVertexAttribPointer(0,2,0x1406,0,0,__ptr);
                    /* try { // try from 00ef76a8 to 00ff76bf has its CatchHandler @ 00ef7858 */
    glDrawArrays(3,0,(ulong)(iVar4 + param_4));
    ::free(__ptr);
    lVar3 = Director::getInstance();
    lVar5 = *(long *)(lVar3 + 0x1b0);
    plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar5);
                    /* try { // try from 00ef76d8 to 00ff770b has its CatchHandler @ 00ef78a0 */
    lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5);
    *plVar1 = *plVar1 + 1;
    *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar5) = lVar3 + (ulong)(iVar4 + param_4);
  }
  return;
}

