
/* cocos2d::DrawPrimitives::drawPoint(cocos2d::Vec2 const&) */

void cocos2d::DrawPrimitives::drawPoint(Vec2 *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00ef703c to 00ff7043 has its CatchHandler @ 00ef708c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
                    /* try { // try from 00ef7044 to 00ff708f has its CatchHandler @ 00ef6ff8 */
  FUN_00ef6ebc();
  local_40 = *(undefined8 *)param_1;
  GL::enableVertexAttribs(1);
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00ef703c with catch @ 00ef708c
                        */
                    /* try { // try from 00ef7090 to 00ff7113 has its CatchHandler @ 00ef7090
                       catch() { ... } // from try @ 00ef7090 with catch @ 00ef7090
                       catch() { ... } // from try @ 00ef7128 with catch @ 00ef7090 */
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
  GLProgram::setUniformLocationWith1f(DAT_0178f770,DAT_0177792c,DAT_01777930);
  glVertexAttribPointer(0,2,0x1406,0,0,&local_40);
  glDrawArrays(0,0,1);
  lVar2 = Director::getInstance();
  lVar2 = *(long *)(lVar2 + 0x1b0);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) + 1;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2) = lVar3 + 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ef7114 to 00ff7127 has its CatchHandler @ 00ef719c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

