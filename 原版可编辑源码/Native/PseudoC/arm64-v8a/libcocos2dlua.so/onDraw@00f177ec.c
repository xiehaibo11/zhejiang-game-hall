
/* cocos2d::LayerRadialGradient::onDraw(cocos2d::Mat4 const&, unsigned int) */

void cocos2d::LayerRadialGradient::onDraw(Mat4 *param_1,uint param_2)

{
  GLProgram *this;
  long lVar1;
  long lVar2;
  
  this = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(this);
  GLProgram::setUniformsForBuiltins(this,(Mat4 *)(ulong)param_2);
  GLProgram::setUniformLocationWith4f
            (this,*(int *)(param_1 + 0x3d0),*(float *)(param_1 + 0x324),*(float *)(param_1 + 0x328),
             *(float *)(param_1 + 0x32c),*(float *)(param_1 + 0x330));
  GLProgram::setUniformLocationWith4f
            (this,*(int *)(param_1 + 0x3d4),*(float *)(param_1 + 0x338),*(float *)(param_1 + 0x33c),
             *(float *)(param_1 + 0x340),*(float *)(param_1 + 0x344));
  GLProgram::setUniformLocationWith2f
            (this,*(int *)(param_1 + 0x3d8),*(float *)(param_1 + 0x348),*(float *)(param_1 + 0x34c))
  ;
  GLProgram::setUniformLocationWith1f(this,*(int *)(param_1 + 0x3dc),*(float *)(param_1 + 0x350));
  GLProgram::setUniformLocationWith1f(this,*(int *)(param_1 + 0x3e0),*(float *)(param_1 + 0x354));
  GL::enableVertexAttribs(1);
  glBindBuffer(0x8892,0);
  glVertexAttribPointer(0,2,0x1406,0,0,param_1 + 0x358);
  GL::blendFunc(*(uint *)(param_1 + 0x3e4),*(uint *)(param_1 + 1000));
  glDrawArrays(5,0,4);
  lVar1 = Director::getInstance();
  lVar1 = *(long *)(lVar1 + 0x1b0);
  lVar2 = *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar1);
  *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar1) =
       *(long *)((long)&__DT_SYMTAB[0xa30].st_name + lVar1) + 4;
  *(long *)((long)&__DT_SYMTAB[0xa2f].st_size + lVar1) = lVar2 + 1;
  return;
}

