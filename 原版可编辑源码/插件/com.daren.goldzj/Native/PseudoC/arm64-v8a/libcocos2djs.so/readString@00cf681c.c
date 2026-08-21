
/* spine::SkeletonBinary::readString(spine::SkeletonBinary::DataInput*) */

void * __thiscall spine::SkeletonBinary::readString(SkeletonBinary *this,DataInput *param_1)

{
  long *plVar1;
  void *__dest;
  uint uVar2;
  byte *pbVar3;
  size_t __n;
  
  pbVar3 = *(byte **)(param_1 + 8);
  *(byte **)(param_1 + 8) = pbVar3 + 1;
  uVar2 = *pbVar3 & 0x7f;
  if ((char)*pbVar3 < '\0') {
    *(byte **)(param_1 + 8) = pbVar3 + 2;
    uVar2 = uVar2 | (pbVar3[1] & 0x7f) << 7;
    if ((char)pbVar3[1] < '\0') {
      *(byte **)(param_1 + 8) = pbVar3 + 3;
      uVar2 = uVar2 | (pbVar3[2] & 0x7f) << 0xe;
      if ((char)pbVar3[2] < '\0') {
        *(byte **)(param_1 + 8) = pbVar3 + 4;
        uVar2 = uVar2 | (pbVar3[3] & 0x7f) << 0x15;
        if ((char)pbVar3[3] < '\0') {
          *(byte **)(param_1 + 8) = pbVar3 + 5;
          uVar2 = uVar2 | (uint)pbVar3[4] << 0x1c;
        }
      }
    }
  }
  if (uVar2 == 0) {
    __dest = (void *)0x0;
  }
  else {
    plVar1 = (long *)SpineExtension::getInstance();
    __dest = (void *)(**(code **)(*plVar1 + 0x10))
                               (plVar1,(long)(int)uVar2,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp"
                                ,0x176);
    __n = (long)(int)uVar2 - 1;
    memcpy(__dest,*(void **)(param_1 + 8),__n);
    *(size_t *)(param_1 + 8) = *(long *)(param_1 + 8) + __n;
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  return __dest;
}

