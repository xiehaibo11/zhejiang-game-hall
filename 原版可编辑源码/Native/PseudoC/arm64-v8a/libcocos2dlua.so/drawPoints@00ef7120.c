
/* cocos2d::DrawPrimitives::drawPoints(cocos2d::Vec2 const*, unsigned int) */

void cocos2d::DrawPrimitives::drawPoints(Vec2 *param_1,uint param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  
                    /* try { // try from 00ef7128 to 00ff71b7 has its CatchHandler @ 00ef7090 */
  FUN_00ef6ebc();
  GL::enableVertexAttribs(1);
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GLProgram::setUniformLocationWith1f(DAT_0178f770,DAT_0177792c,DAT_01777930);
                    /* catch() { ... } // from try @ 00ef7114 with catch @ 00ef719c */
  glVertexAttribPointer(0,2,0x1406,0,0,param_1);
  glDrawArrays(0,0,(ulong)param_2);
                    /* try { // try from 00ef71b8 to 00ff71e7 has its CatchHandler @ 00ef71b8
                       catch() { ... } // from try @ 00ef71b8 with catch @ 00ef71b8
                       catch() { ... } // from try @ 00ef7258 with catch @ 00ef71b8 */
  lVar2 = Director::getInstance();
  lVar3 = *(long *)(lVar2 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar3);
  lVar2 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3);
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar3) = lVar2 + (ulong)param_2;
                    /* try { // try from 00ef71e8 to 00ff71eb has its CatchHandler @ 00ef72a8 */
  return;
}

