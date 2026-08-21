
/* cocos2d::DrawPrimitives::drawLine(cocos2d::Vec2 const&, cocos2d::Vec2 const&) */

void cocos2d::DrawPrimitives::drawLine(Vec2 *param_1,Vec2 *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
                    /* try { // try from 00ef71ec to 00ff71f3 has its CatchHandler @ 00ef7298 */
                    /* try { // try from 00ef71fc to 00ff7213 has its CatchHandler @ 00ef725c */
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  FUN_00ef6ebc();
                    /* try { // try from 00ef7218 to 00ff721f has its CatchHandler @ 00ef7284 */
  local_48 = *(undefined8 *)param_1;
  local_40 = *(undefined8 *)param_2;
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
                    /* try { // try from 00ef724c to 00ff7257 has its CatchHandler @ 00ef725c */
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,(float *)&DAT_0178f760,1);
                    /* try { // try from 00ef7258 to 00ff72bb has its CatchHandler @ 00ef71b8 */
                    /* catch() { ... } // from try @ 00ef71fc with catch @ 00ef725c
                       catch() { ... } // from try @ 00ef724c with catch @ 00ef725c */
  GL::enableVertexAttribs(1);
  glVertexAttribPointer(0,2,0x1406,0,0,&local_48);
                    /* catch() { ... } // from try @ 00ef7218 with catch @ 00ef7284 */
  glDrawArrays(1,0,2);
  lVar2 = Director::getInstance();
  lVar2 = *(long *)(lVar2 + 0x1b0);
                    /* catch() { ... } // from try @ 00ef71ec with catch @ 00ef7298 */
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2);
                    /* catch() { ... } // from try @ 00ef71e8 with catch @ 00ef72a8 */
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar2) + 2;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar2) = lVar3 + 1;
  if (*(long *)(lVar1 + 0x28) == local_38) {
                    /* try { // try from 00ef72c0 to 00ff730f has its CatchHandler @ 00ef72c0
                       catch() { ... } // from try @ 00ef72c0 with catch @ 00ef72c0
                       catch() { ... } // from try @ 00ef7544 with catch @ 00ef72c0
                       catch() { ... } // from try @ 00ef783c with catch @ 00ef72c0 */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

