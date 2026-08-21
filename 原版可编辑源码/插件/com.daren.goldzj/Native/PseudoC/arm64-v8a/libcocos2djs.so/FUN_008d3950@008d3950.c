
void FUN_008d3950(Ref *param_1)

{
  *(undefined ***)param_1 = &PTR_FUN_01c676d0;
  if (*(int *)(param_1 + 0xc) != 0) {
    __android_log_print(3,"jswrapper","Destroy WebGLShader (%u) by GC\n");
    glDeleteShader(*(undefined4 *)(param_1 + 0xc));
    FUN_008d3790(&DAT_01d36ed0,*(undefined4 *)(param_1 + 0xc));
  }
  cocos2d::Ref::~Ref(param_1);
  return;
}

