
/* cocos2d::DrawPrimitives::drawSolidCircle(cocos2d::Vec2 const&, float, float, unsigned int, float,
   float) */

void cocos2d::DrawPrimitives::drawSolidCircle
               (Vec2 *param_1,float param_2,float param_3,uint param_4,float param_5,float param_6)

{
  long *plVar1;
  GLProgram *this;
  void *__ptr;
  long lVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float local_68;
  float fStack_64;
  
                    /* try { // try from 00ef7750 to 00ff7767 has its CatchHandler @ 00ef7854 */
  FUN_00ef6ebc();
  __ptr = calloc((ulong)(param_4 * 2 + 4),4);
  if (__ptr != (void *)0x0) {
    fVar7 = *(float *)param_1;
    fVar6 = *(float *)(param_1 + 4);
    uVar5 = 0;
    uVar4 = 1;
    do {
                    /* try { // try from 00ef77a0 to 00ff77af has its CatchHandler @ 00ef7884 */
      sincosf((6.2831855 / (float)param_4) * (float)uVar5 + param_3,&fStack_64,&local_68);
      uVar5 = uVar5 + 1;
                    /* try { // try from 00ef77d0 to 00ff77df has its CatchHandler @ 00ef784c */
      *(float *)((long)__ptr + (ulong)(uVar4 - 1) * 4) = local_68 * param_2 * param_5 + fVar7;
      *(float *)((long)__ptr + (ulong)uVar4 * 4) = fStack_64 * param_2 * param_6 + fVar6;
      this = DAT_0178f770;
      uVar4 = uVar4 + 2;
    } while (uVar5 <= param_4);
                    /* try { // try from 00ef77e4 to 00ff77f3 has its CatchHandler @ 00ef7848 */
    uVar5 = param_4 + 1;
    *(float *)((long)__ptr + (ulong)(uVar5 * 2) * 4) = fVar7;
    *(float *)((long)__ptr + (ulong)(uVar5 * 2 | 1) * 4) = fVar6;
    GLProgram::use(this);
    GLProgram::setUniformsForBuiltins(DAT_0178f770);
                    /* try { // try from 00ef7810 to 00ff7817 has its CatchHandler @ 00ef7850 */
    GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
                    /* try { // try from 00ef7828 to 00ff782f has its CatchHandler @ 00ef7844 */
    GL::enableVertexAttribs(1);
                    /* try { // try from 00ef7834 to 00ff783b has its CatchHandler @ 00ef7840 */
                    /* try { // try from 00ef783c to 00ff792f has its CatchHandler @ 00ef72c0 */
                    /* catch() { ... } // from try @ 00ef7834 with catch @ 00ef7840 */
                    /* catch() { ... } // from try @ 00ef7828 with catch @ 00ef7844 */
                    /* catch() { ... } // from try @ 00ef77e4 with catch @ 00ef7848 */
    glVertexAttribPointer(0,2,0x1406,0,0,__ptr);
                    /* catch() { ... } // from try @ 00ef77d0 with catch @ 00ef784c */
                    /* catch() { ... } // from try @ 00ef7810 with catch @ 00ef7850 */
                    /* catch() { ... } // from try @ 00ef7750 with catch @ 00ef7854 */
                    /* catch() { ... } // from try @ 00ef76a8 with catch @ 00ef7858 */
    glDrawArrays(6,0,(ulong)uVar5);
                    /* catch() { ... } // from try @ 00ef7478 with catch @ 00ef785c */
                    /* catch() { ... } // from try @ 00ef7340 with catch @ 00ef7860 */
    ::free(__ptr);
    lVar2 = Director::getInstance();
    lVar3 = *(long *)(lVar2 + 0x1b0);
    plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar3);
    lVar2 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3);
                    /* catch() { ... } // from try @ 00ef735c with catch @ 00ef7880 */
                    /* catch() { ... } // from try @ 00ef77a0 with catch @ 00ef7884 */
    *plVar1 = *plVar1 + 1;
    *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3) = lVar2 + (ulong)uVar5;
  }
                    /* catch() { ... } // from try @ 00ef7424 with catch @ 00ef7888 */
                    /* catch() { ... } // from try @ 00ef73fc with catch @ 00ef788c */
                    /* catch() { ... } // from try @ 00ef7310 with catch @ 00ef7890 */
                    /* catch() { ... } // from try @ 00ef7434 with catch @ 00ef78a0
                       catch() { ... } // from try @ 00ef76d8 with catch @ 00ef78a0 */
  return;
}

