
void * _spReadFile(char *param_1,int *param_2)

{
  FILE *__stream;
  long lVar1;
  void *__ptr;
  
  __stream = fopen(param_1,"rb");
  if (__stream == (FILE *)0x0) {
    __ptr = (void *)0x0;
  }
  else {
    fseek(__stream,0,2);
    lVar1 = ftell(__stream);
    *param_2 = (int)lVar1;
    fseek(__stream,0,0);
    if (DAT_017875e8 == (code *)0x0) {
      __ptr = (void *)(*(code *)PTR_malloc_01777060)((long)*param_2);
    }
    else {
      __ptr = (void *)(*DAT_017875e8)((long)*param_2,
                                      "F:/ZJB2021/ZJB2022/frameworks/cocos2d-x/cocos/editor-support/spine/extension.c"
                                      ,0x5f);
    }
    fread(__ptr,1,(long)*param_2,__stream);
    fclose(__stream);
  }
  return __ptr;
}

