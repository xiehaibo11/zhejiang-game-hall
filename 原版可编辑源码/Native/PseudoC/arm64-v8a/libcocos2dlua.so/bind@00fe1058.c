
/* cocos2d::Pass::bind(cocos2d::Mat4 const&) */

void __thiscall cocos2d::Pass::bind(Pass *this,Mat4 *param_1)

{
  GLProgramState *this_00;
  
                    /* catch() { ... } // from try @ 00fe0fa8 with catch @ 00fe1058 */
  if (*(VertexAttribBinding **)(this + 0x68) != (VertexAttribBinding *)0x0) {
    VertexAttribBinding::bind(*(VertexAttribBinding **)(this + 0x68));
  }
  this_00 = *(GLProgramState **)(this + 0x60);
  if (this_00 == (GLProgramState *)0x0) {
    this_00 = (GLProgramState *)
              Node::getGLProgramState(*(Node **)(*(long *)(*(long *)(this + 0x38) + 0x38) + 0x98));
  }
  GLProgramState::applyGLProgram(this_00,param_1);
  GLProgramState::applyUniforms(this_00);
  RenderState::bind((RenderState *)this,this);
  return;
}

