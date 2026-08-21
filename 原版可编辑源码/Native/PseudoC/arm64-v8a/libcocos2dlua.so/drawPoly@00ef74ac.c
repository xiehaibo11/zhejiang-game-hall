
/* cocos2d::DrawPrimitives::drawPoly(cocos2d::Vec2 const*, unsigned int, bool) */

void cocos2d::DrawPrimitives::drawPoly(Vec2 *param_1,uint param_2,bool param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  
  FUN_00ef6ebc();
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,param_1);
  uVar4 = 2;
  if (!param_3) {
    uVar4 = 3;
  }
  glDrawArrays(uVar4,0,(ulong)param_2);
  lVar2 = Director::getInstance();
                    /* try { // try from 00ef753c to 00ff7543 has its CatchHandler @ 00ef78b0 */
  lVar3 = *(long *)(lVar2 + 0x1b0);
                    /* try { // try from 00ef7544 to 00ff7583 has its CatchHandler @ 00ef72c0 */
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar3);
  lVar2 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3);
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3) = lVar2 + (ulong)param_2;
  return;
}

