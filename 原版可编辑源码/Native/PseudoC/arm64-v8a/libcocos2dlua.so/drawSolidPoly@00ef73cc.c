
/* cocos2d::DrawPrimitives::drawSolidPoly(cocos2d::Vec2 const*, unsigned int, cocos2d::Color4F) */

void cocos2d::DrawPrimitives::drawSolidPoly
               (float param_1_00,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined8 param_1,ulong param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  float local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_48 = param_1_00;
  uStack_44 = param_2;
  local_40 = param_3;
  uStack_3c = param_4;
                    /* try { // try from 00ef73fc to 00ff741f has its CatchHandler @ 00ef788c */
  FUN_00ef6ebc();
  GLProgram::use(DAT_0178f770);
  GLProgram::setUniformsForBuiltins(DAT_0178f770);
                    /* try { // try from 00ef7424 to 00ff7433 has its CatchHandler @ 00ef7888 */
  GLProgram::setUniformLocationWith4fv(DAT_0178f770,DAT_01777928,&local_48,1);
  GL::enableVertexAttribs(1);
                    /* try { // try from 00ef7434 to 00ff7473 has its CatchHandler @ 00ef78a0 */
  glVertexAttribPointer(0,2,0x1406,0,0,param_1);
  glDrawArrays(6,0,param_6 & 0xffffffff);
  lVar3 = Director::getInstance();
  lVar4 = *(long *)(lVar3 + 0x1b0);
  plVar1 = (long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar4);
  lVar3 = *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4);
                    /* try { // try from 00ef7478 to 00ff7483 has its CatchHandler @ 00ef785c */
  *plVar1 = *plVar1 + 1;
  *(ulong *)((long)&__DT_SYMTAB[0xa30].st_name + lVar4) = lVar3 + (param_6 & 0xffffffff);
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

