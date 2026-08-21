
/* cocos2d::Label::onDrawShadow(cocos2d::GLProgram*, cocos2d::Color4F const&) */

void __thiscall cocos2d::Label::onDrawShadow(Label *this,GLProgram *param_1,Color4F *param_2)

{
  Label LVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  Color3B aCStack_58 [8];
  undefined2 local_50;
  Label local_4e;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if (*(int *)(this + 0x308) != 0) {
    local_4e = this[0x21f];
    local_50 = *(undefined2 *)(this + 0x21d);
    LVar1 = this[0x218];
    this[0x218] = SUB41((int)(*(float *)(param_2 + 0xc) * ((float)(byte)LVar1 / 255.0) * 255.0),0);
    Color3B::Color3B(aCStack_58,param_2);
    (**(code **)(*(long *)this + 0x4c0))(this,aCStack_58);
    GLProgram::setUniformsForBuiltins(param_1,(Mat4 *)(this + 0x5c0));
    for (plVar3 = *(long **)(this + 0x650); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
      (**(code **)(*(long *)plVar3[3] + 0x3e0))();
    }
    plVar4 = *(long **)(this + 0x3e0);
    for (plVar3 = *(long **)(this + 0x3d8); plVar3 != plVar4; plVar3 = plVar3 + 1) {
      TextureAtlas::drawQuads(*(TextureAtlas **)(*plVar3 + 0x300));
    }
    this[0x218] = LVar1;
    (**(code **)(*(long *)this + 0x4c0))(this,&local_50);
    goto LAB_00f0d8a8;
  }
  if (*(int *)(this + 0x49c) == 1) {
    GLProgram::setUniformLocationWith1i(param_1,*(int *)(this + 0x604),2);
LAB_00f0d844:
    GLProgram::setUniformLocationWith4f
              (param_1,*(int *)(this + 0x600),*(float *)param_2,*(float *)(param_2 + 4),
               *(float *)(param_2 + 8),*(float *)(param_2 + 0xc));
  }
  else {
    GLProgram::setUniformLocationWith4f
              (param_1,*(int *)(this + 0x608),*(float *)param_2,*(float *)(param_2 + 4),
               *(float *)(param_2 + 8),*(float *)(param_2 + 0xc));
    if (*(int *)(this + 0x49c) == 3) goto LAB_00f0d844;
  }
  GLProgram::setUniformsForBuiltins(param_1,(Mat4 *)(this + 0x5c0));
  for (plVar3 = *(long **)(this + 0x650); plVar3 != (long *)0x0; plVar3 = (long *)*plVar3) {
    (**(code **)(*(long *)plVar3[3] + 0x3e0))();
  }
  plVar4 = *(long **)(this + 0x3e0);
  for (plVar3 = *(long **)(this + 0x3d8); plVar3 != plVar4; plVar3 = plVar3 + 1) {
    TextureAtlas::drawQuads(*(TextureAtlas **)(*plVar3 + 0x300));
  }
LAB_00f0d8a8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

