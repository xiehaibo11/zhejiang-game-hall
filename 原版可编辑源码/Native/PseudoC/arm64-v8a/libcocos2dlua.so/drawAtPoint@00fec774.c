
/* cocos2d::Texture2D::drawAtPoint(cocos2d::Vec2 const&) */

void __thiscall cocos2d::Texture2D::drawAtPoint(Texture2D *this,Vec2 *param_1)

{
  long lVar1;
  float local_68;
  float fStack_64;
  float local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  undefined4 local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  undefined8 local_38;
  float local_30;
  undefined4 uStack_2c;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  fStack_44 = *(float *)(this + 0x38);
  local_48 = 0;
  local_40 = *(float *)(this + 0x34);
  local_38 = 0;
  uStack_2c = 0;
                    /* catch() { ... } // from try @ 00fec7e0 with catch @ 00fec7b0 */
  local_68 = *(float *)param_1;
  fStack_64 = *(float *)(param_1 + 4);
  local_60 = local_40 * (float)*(int *)(this + 0x28) + local_68;
                    /* try { // try from 00fec7d8 to 010ec7df has its CatchHandler @ 00fec840 */
  local_54 = fStack_44 * (float)*(int *)(this + 0x2c) + fStack_64;
  local_5c = fStack_64;
  fStack_58 = local_68;
  fStack_50 = local_60;
  local_4c = local_54;
  fStack_3c = fStack_44;
  local_30 = local_40;
                    /* try { // try from 00fec7e0 to 010ec85b has its CatchHandler @ 00fec7b0 */
  GL::enableVertexAttribs(5);
  GLProgram::use(*(GLProgram **)(this + 0x48));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0x48));
  GL::bindTexture2D(*(uint *)(this + 0x30));
  glVertexAttribPointer(0,2,0x1406,0,0,&local_68);
                    /* catch() { ... } // from try @ 00fec7d8 with catch @ 00fec840 */
  glVertexAttribPointer(2,2,0x1406,0,0,&local_48);
  glDrawArrays(5,0,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

