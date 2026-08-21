
void FUN_008d42ec(Ref *param_1)

{
  Ref *pRVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_01c67768;
  pRVar1 = param_1 + 0xc;
  if (*(int *)pRVar1 != 0) {
    __android_log_print(3,"jswrapper","Destroy WebGLTexture (%u) by GC\n");
    glDeleteTextures(1,pRVar1);
    FUN_008d3790(&DAT_01d36e08,*(int *)pRVar1);
  }
  cocos2d::Ref::~Ref(param_1);
  return;
}

