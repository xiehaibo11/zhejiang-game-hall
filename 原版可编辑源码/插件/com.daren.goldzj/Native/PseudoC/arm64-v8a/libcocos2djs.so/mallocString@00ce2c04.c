
/* spine::Atlas::mallocString(spine::Atlas::Str*) */

void * spine::Atlas::mallocString(Str *param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  void *__dest;
  size_t __n;
  
  lVar1 = *(long *)param_1;
  lVar2 = *(long *)(param_1 + 8);
  plVar3 = (long *)SpineExtension::getInstance();
  __dest = (void *)(**(code **)(*plVar3 + 0x18))
                             (plVar3,(lVar2 - lVar1 << 0x20) + 0x100000000 >> 0x20,
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                              ,0x135);
  __n = (size_t)(int)(lVar2 - lVar1);
  memcpy(__dest,*(void **)param_1,__n);
  *(undefined1 *)((long)__dest + __n) = 0;
  return __dest;
}

