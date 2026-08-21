
/* spine::DefaultSpineExtension::_readFile(spine::String const&, int*) */

void * __thiscall
spine::DefaultSpineExtension::_readFile(DefaultSpineExtension *this,String *param_1,int *param_2)

{
  int iVar1;
  FILE *__stream;
  long lVar2;
  void *__ptr;
  
  __stream = fopen(*(char **)(param_1 + 0x10),"rb");
  if (__stream == (FILE *)0x0) {
    __ptr = (void *)0x0;
  }
  else {
    fseek(__stream,0,2);
    lVar2 = ftell(__stream);
    *param_2 = (int)lVar2;
    fseek(__stream,0,0);
    iVar1 = *param_2;
    if (SpineExtension::_instance == (long *)0x0) {
      SpineExtension::_instance = (long *)getDefaultExtension();
    }
    __ptr = (void *)(**(code **)(*SpineExtension::_instance + 0x10))
                              (SpineExtension::_instance,(long)iVar1,
                               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Extension.cpp"
                               ,0x77);
    fread(__ptr,1,(long)*param_2,__stream);
    fclose(__stream);
  }
  return __ptr;
}

