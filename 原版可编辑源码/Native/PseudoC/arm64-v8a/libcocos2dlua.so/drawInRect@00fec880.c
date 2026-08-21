
/* cocos2d::Texture2D::drawInRect(cocos2d::Rect const&) */

void __thiscall cocos2d::Texture2D::drawInRect(Texture2D *this,Rect *param_1)

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
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00fec8bc with catch @ 00fec880 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  uStack_44 = *(undefined4 *)(this + 0x38);
  local_48 = 0;
  local_40 = *(undefined4 *)(this + 0x34);
  local_38 = 0;
                    /* try { // try from 00fec8b4 to 010ec8bb has its CatchHandler @ 00fec8f4 */
  uStack_2c = 0;
                    /* try { // try from 00fec8bc to 010ec90f has its CatchHandler @ 00fec880 */
  local_68 = *(float *)param_1;
  fStack_64 = *(float *)(param_1 + 4);
  local_60 = *(float *)(param_1 + 8) + local_68;
  local_54 = *(float *)(param_1 + 0xc) + fStack_64;
  local_5c = fStack_64;
  fStack_58 = local_68;
  fStack_50 = local_60;
  local_4c = local_54;
  uStack_3c = uStack_44;
  local_30 = local_40;
  GL::enableVertexAttribs(5);
                    /* catch() { ... } // from try @ 00fec8b4 with catch @ 00fec8f4 */
  GLProgram::use(*(GLProgram **)(this + 0x48));
  GLProgram::setUniformsForBuiltins(*(GLProgram **)(this + 0x48));
  GL::bindTexture2D(*(uint *)(this + 0x30));
  glVertexAttribPointer(0,2,0x1406,0,0,&local_68);
  glVertexAttribPointer(2,2,0x1406,0,0,&local_48);
  glDrawArrays(5,0,4);
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

