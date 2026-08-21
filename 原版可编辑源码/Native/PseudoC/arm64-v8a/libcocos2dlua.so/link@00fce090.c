
/* cocos2d::GLProgram::link() */

void __thiscall cocos2d::GLProgram::link(GLProgram *this)

{
  long lVar1;
  int local_2c;
  long local_28;
  
                    /* catch() { ... } // from try @ 00fce0ec with catch @ 00fce098 */
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_2c = 1;
  bindPredefinedVertexAttribs(this);
  glLinkProgram(*(undefined4 *)(this + 0x24));
  glGetProgramiv(*(undefined4 *)(this + 0x24),0x8b82,&local_2c);
  if (local_2c == 0) {
    GL::deleteProgram(*(uint *)(this + 0x24));
    *(undefined4 *)(this + 0x24) = 0;
  }
  else {
    parseVertexAttribs(this);
                    /* try { // try from 00fce0e4 to 010ce0eb has its CatchHandler @ 00fce17c */
    parseUniforms(this);
                    /* try { // try from 00fce0ec to 010ce197 has its CatchHandler @ 00fce098 */
    if (*(int *)(this + 0x28) != 0) {
      glDeleteShader();
    }
    if (*(int *)(this + 0x2c) != 0) {
      glDeleteShader();
    }
    *(undefined8 *)(this + 0x28) = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(local_2c == 1);
}

