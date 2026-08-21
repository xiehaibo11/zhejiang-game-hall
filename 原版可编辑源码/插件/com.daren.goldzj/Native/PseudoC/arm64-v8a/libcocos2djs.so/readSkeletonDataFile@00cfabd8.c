
/* spine::SkeletonBinary::readSkeletonDataFile(spine::String const&) */

undefined8 __thiscall
spine::SkeletonBinary::readSkeletonDataFile(SkeletonBinary *this,String *param_1)

{
  size_t __n;
  long lVar1;
  void *pvVar2;
  long *plVar3;
  uchar *puVar4;
  undefined8 uVar5;
  char *__s;
  undefined **local_68;
  size_t local_60;
  void *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  __s = *(char **)(param_1 + 0x10);
  local_68 = &PTR__String_01c67868;
  if (__s == (char *)0x0) {
    local_60 = 0;
    local_58 = (void *)0x0;
  }
  else {
    local_60 = strlen(__s);
    __n = local_60 + 1;
    plVar3 = (long *)SpineExtension::getInstance();
    local_58 = (void *)(**(code **)(*plVar3 + 0x18))
                                 (plVar3,__n,
                                  "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                  ,0x39);
    memcpy(local_58,__s,__n);
  }
  plVar3 = (long *)SpineExtension::getInstance();
  puVar4 = (uchar *)(**(code **)(*plVar3 + 0x30))(plVar3,&local_68,&local_4c);
  pvVar2 = local_58;
  local_68 = &PTR__String_01c67868;
  if (local_58 != (void *)0x0) {
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,pvVar2,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9
              );
  }
  SpineObject::~SpineObject((SpineObject *)&local_68);
  if ((puVar4 == (uchar *)0x0) || (local_4c == 0)) {
    setError(this,"Unable to read skeleton file: ",*(char **)(param_1 + 0x10));
    uVar5 = 0;
  }
  else {
    uVar5 = readSkeletonData(this,puVar4,local_4c);
    plVar3 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar3 + 0x28))
              (plVar3,puVar4,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonBinary.cpp",
               0x165);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

