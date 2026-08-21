
/* cocos2d::CameraBackgroundDepthBrush::drawBackground(cocos2d::Camera*) */

void cocos2d::CameraBackgroundDepthBrush::drawBackground(Camera *param_1)

{
  Camera CVar1;
  long lVar2;
  char cVar3;
  Configuration *this;
  ulong uVar4;
  GLProgramState *this_00;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_58 [16];
  void *local_48;
  char local_40 [4];
  undefined4 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  CVar1 = param_1[0x3c];
  glColorMask(CVar1,CVar1,CVar1,CVar1);
  glStencilMask(0);
  cVar3 = glIsEnabled(0xb71);
  glGetIntegerv(0xb74,&local_3c);
  glGetBooleanv(0xb72,local_40);
  glDepthMask(1);
  glEnable(0xb71);
  glDepthFunc(0x207);
  this_00 = *(GLProgramState **)(param_1 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_58,"depth");
  GLProgramState::setUniformFloat(this_00,(basic_string *)local_58,*(float *)(param_1 + 0x38));
  if (((byte)local_58[0] & 1) != 0) {
    operator_delete(local_48);
  }
  GLProgramState::apply(*(GLProgramState **)(param_1 + 0x28),(Mat4 *)Mat4::IDENTITY);
  this = (Configuration *)Configuration::getInstance();
  uVar4 = Configuration::supportsShareableVAO(this);
  if ((uVar4 & 1) == 0) {
    glBindBuffer(0x8892,*(undefined4 *)(param_1 + 0xa4));
    GL::enableVertexAttribs(7);
    glVertexAttribPointer(0,3,0x1406,0,0x18,0);
                    /* try { // try from 00ef118c to 00ff11fb has its CatchHandler @ 00ef118c
                       catch() { ... } // from try @ 00ef118c with catch @ 00ef118c
                       catch() { ... } // from try @ 00ef1258 with catch @ 00ef118c */
    glVertexAttribPointer(1,4,0x1401,1,0x18,0xc);
    glVertexAttribPointer(2,2,0x1406,0,0x18,0x10);
    glBindBuffer(0x8893,*(undefined4 *)(param_1 + 0xa8));
    glDrawElements(4,6,0x1403,0);
    glBindBuffer(0x8892,0);
    glBindBuffer(0x8893,0);
  }
  else {
    GL::bindVAO(*(uint *)(param_1 + 0xa0));
    glDrawElements(4,6,0x1403,0);
    GL::bindVAO(0);
  }
                    /* try { // try from 00ef11fc to 00ff1207 has its CatchHandler @ 00ef1280 */
  if (cVar3 == '\0') {
    glDisable(0xb71);
  }
  glDepthFunc(local_3c);
  if (local_40[0] == '\0') {
    glDepthMask(0);
  }
  glStencilMask(0xfffff);
                    /* try { // try from 00ef1230 to 00ff1257 has its CatchHandler @ 00ef1288 */
  glColorMask(1,1,1,1);
  if (*(long *)(lVar2 + 0x28) == local_38) {
                    /* try { // try from 00ef1258 to 00ff12db has its CatchHandler @ 00ef118c */
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

