
/* cocos2d::Label::onDraw(cocos2d::Mat4 const&, bool) */

void cocos2d::Label::onDraw(Mat4 *param_1,bool param_2)

{
  Color4F *pCVar1;
  int iVar2;
  GLProgram *this;
  long *plVar3;
  long *plVar4;
  
  this = (GLProgram *)Node::getGLProgram((Node *)param_1);
  GLProgram::use(this);
  GL::blendFunc(*(uint *)(param_1 + 0x634),*(uint *)(param_1 + 0x638));
  if (param_1[0x60f] != (Mat4)0x0) {
    pCVar1 = (Color4F *)(param_1 + 0x618);
    if (param_1[0x68c] != (Mat4)0x0) {
      pCVar1 = (Color4F *)(param_1 + 0x4b4);
    }
    onDrawShadow((Label *)param_1,this,pCVar1);
  }
                    /* try { // try from 00f0d92c to 0100da6f has its CatchHandler @ 00f0d92c
                       catch() { ... } // from try @ 00f0d92c with catch @ 00f0d92c
                       catch() { ... } // from try @ 00f0da78 with catch @ 00f0d92c */
  GLProgram::setUniformsForBuiltins(this,(Mat4 *)(ulong)param_2);
  for (plVar3 = *(long **)(param_1 + 0x650); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    (**(code **)(*(long *)plVar3[3] + 0x3e0))();
  }
  if (*(int *)(param_1 + 0x308) == 0) {
    iVar2 = *(int *)(param_1 + 0x49c);
    if (iVar2 != 0) {
      if (iVar2 == 3) {
        GLProgram::setUniformLocationWith4f
                  (this,*(int *)(param_1 + 0x600),*(float *)(param_1 + 0x4a0),
                   *(float *)(param_1 + 0x4a4),*(float *)(param_1 + 0x4a8),
                   *(float *)(param_1 + 0x4ac));
      }
      else {
        if (iVar2 != 1) goto LAB_00f0da14;
        GLProgram::setUniformLocationWith1i(this,*(int *)(param_1 + 0x604),1);
        GLProgram::setUniformLocationWith4f
                  (this,*(int *)(param_1 + 0x600),*(float *)(param_1 + 0x4a0),
                   *(float *)(param_1 + 0x4a4),*(float *)(param_1 + 0x4a8),
                   *(float *)(param_1 + 0x4ac));
        plVar4 = *(long **)(param_1 + 0x3e0);
        for (plVar3 = *(long **)(param_1 + 0x3d8); plVar3 != plVar4; plVar3 = plVar3 + 1) {
          TextureAtlas::drawQuads(*(TextureAtlas **)(*plVar3 + 0x300));
        }
        GLProgram::setUniformLocationWith1i(this,*(int *)(param_1 + 0x604),0);
      }
    }
    GLProgram::setUniformLocationWith4f
              (this,*(int *)(param_1 + 0x608),*(float *)(param_1 + 0x4b4),
               *(float *)(param_1 + 0x4b8),*(float *)(param_1 + 0x4bc),*(float *)(param_1 + 0x4c0));
  }
LAB_00f0da14:
  plVar4 = *(long **)(param_1 + 0x3e0);
  for (plVar3 = *(long **)(param_1 + 0x3d8); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    TextureAtlas::drawQuads(*(TextureAtlas **)(*plVar3 + 0x300));
  }
  return;
}

