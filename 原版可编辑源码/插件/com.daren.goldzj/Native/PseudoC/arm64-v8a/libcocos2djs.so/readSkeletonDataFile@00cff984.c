
/* spine::SkeletonJson::readSkeletonDataFile(spine::String const&) */

undefined8 __thiscall spine::SkeletonJson::readSkeletonDataFile(SkeletonJson *this,String *param_1)

{
  long lVar1;
  long *plVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined **local_68;
  undefined8 uStack_60;
  undefined8 *local_58;
  int local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  plVar2 = (long *)SpineExtension::getInstance();
  pcVar3 = (char *)(**(code **)(*plVar2 + 0x30))(plVar2,param_1,&local_4c);
  if ((pcVar3 == (char *)0x0) || (local_4c == 0)) {
    uStack_60 = 0x1e;
    local_68 = &PTR__String_01c67868;
    plVar2 = (long *)SpineExtension::getInstance();
    puVar5 = (undefined8 *)
             (**(code **)(*plVar2 + 0x18))
                       (plVar2,0x1f,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                        ,0x39);
    builtin_strncpy((char *)((long)puVar5 + 0x17)," file: ",8);
    builtin_strncpy((char *)((long)puVar5 + 0xf),"skeleton",8);
    puVar5[1] = 0x732064616572206f;
    *puVar5 = 0x7420656c62616e55;
    local_58 = puVar5;
    setError(this,(Json *)0x0,(String *)&local_68,param_1);
    local_68 = &PTR__String_01c67868;
    if (puVar5 != (undefined8 *)0x0) {
      plVar2 = (long *)SpineExtension::getInstance();
      (**(code **)(*plVar2 + 0x28))
                (plVar2,puVar5,
                 "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",
                 0xc9);
    }
    SpineObject::~SpineObject((SpineObject *)&local_68);
    uVar4 = 0;
  }
  else {
    uVar4 = readSkeletonData(this,pcVar3);
    plVar2 = (long *)SpineExtension::getInstance();
    (**(code **)(*plVar2 + 0x28))
              (plVar2,pcVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/SkeletonJson.cpp",
               0x6e);
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

