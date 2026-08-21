
void FUN_008d4390(Ref *param_1)

{
  Ref *pRVar1;
  
  *(undefined ***)param_1 = &PTR_FUN_01c67788;
  pRVar1 = param_1 + 0xc;
  if (*(int *)pRVar1 != 0) {
    __android_log_print(3,"jswrapper","Destroy WebGLBuffer (%u) by GC\n");
    cocos2d::ccDeleteBuffers(1,(uint *)pRVar1);
    FUN_008d3790(&DAT_01d36e30,*(undefined4 *)pRVar1);
  }
  cocos2d::Ref::~Ref(param_1);
  return;
}

