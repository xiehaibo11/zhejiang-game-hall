
void FUN_008d44d8(Ref *param_1)

{
  Ref *pRVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_01c677c8;
  pRVar1 = param_1 + 0xc;
  if (*(int *)pRVar1 != DAT_01d36ef8) {
    __android_log_print(3,"jswrapper","Destroy WebGLFramebuffer (%u) by GC\n");
    glDeleteFramebuffers(1,pRVar1);
    FUN_008d3790(&DAT_01d36e80,*(int *)pRVar1);
  }
  cocos2d::Ref::~Ref(param_1);
  return;
}

