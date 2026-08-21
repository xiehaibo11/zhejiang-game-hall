
/* cocos2d::Pass::bind(int) */

void __thiscall cocos2d::Pass::bind(Pass *this,int param_1)

{
  GLProgramState *this_00;
  
  if (*(VertexAttribBinding **)(this + 0x68) != (VertexAttribBinding *)0x0) {
    VertexAttribBinding::bind(*(VertexAttribBinding **)(this + 0x68),param_1);
  }
  this_00 = *(GLProgramState **)(this + 0x60);
  if (this_00 == (GLProgramState *)0x0) {
    this_00 = (GLProgramState *)
              Node::getGLProgramState(*(Node **)(*(long *)(*(long *)(this + 0x38) + 0x38) + 0x98));
  }
  GLProgramState::applyGLProgram(this_00);
  GLProgramState::applyUniforms(this_00);
                    /* catch() { ... } // from try @ 00fe11c4 with catch @ 00fe118c */
  RenderState::bind((RenderState *)this,this);
  return;
}

