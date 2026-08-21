
/* spine::Atlas::Atlas(spine::String const&, spine::TextureLoader*, bool) */

void __thiscall spine::Atlas::Atlas(Atlas *this,String *param_1,TextureLoader *param_2,bool param_3)

{
  long lVar1;
  bool bVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  size_t sVar6;
  long *plVar7;
  char *__s;
  undefined **local_80;
  size_t local_78;
  char *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined ***)(this + 8) = &PTR__Vector_01c8e800;
  *(undefined ***)this = &PTR__Atlas_01c8e698;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined ***)(this + 0x28) = &PTR__Vector_01c8e838;
  *(undefined8 *)(this + 0x40) = 0;
  *(TextureLoader **)(this + 0x48) = param_2;
  __s = *(char **)(param_1 + 0x10);
  pcVar4 = strrchr(__s,0x2f);
  pcVar5 = strrchr(__s,0x5c);
  if (pcVar4 <= pcVar5) {
    pcVar4 = pcVar5;
  }
  local_80 = &PTR__String_01c67868;
  if (pcVar4 == (char *)0x0) {
    sVar6 = 0;
    pcVar5 = (char *)0x0;
    local_78 = 0;
    local_70 = (char *)0x0;
    if (__s == (char *)0x0) goto LAB_00ce17b0;
LAB_00ce1764:
    if (sVar6 != *(size_t *)(param_1 + 8)) {
      bVar2 = false;
      goto LAB_00ce17bc;
    }
    bVar2 = false;
    if ((pcVar5 == (char *)0x0) || (__s == (char *)0x0)) goto LAB_00ce17bc;
    iVar3 = strcmp(pcVar5,__s);
    bVar2 = iVar3 == 0;
  }
  else {
    sVar6 = strlen(pcVar4);
    local_78 = sVar6;
    plVar7 = (long *)SpineExtension::getInstance();
    pcVar5 = (char *)(**(code **)(*plVar7 + 0x18))
                               (plVar7,sVar6 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x39);
    local_70 = pcVar5;
    memcpy(pcVar5,pcVar4,sVar6 + 1);
    __s = *(char **)(param_1 + 0x10);
    if (pcVar5 != __s) goto LAB_00ce1764;
LAB_00ce17b0:
    bVar2 = true;
LAB_00ce17bc:
    local_80 = &PTR__String_01c67868;
    if (pcVar5 == (char *)0x0) goto LAB_00ce17e8;
  }
  local_80 = &PTR__String_01c67868;
  plVar7 = (long *)SpineExtension::getInstance();
  (**(code **)(*plVar7 + 0x28))
            (plVar7,pcVar5,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h",0xc9);
LAB_00ce17e8:
  SpineObject::~SpineObject((SpineObject *)&local_80);
  if (bVar2) {
    pcVar4 = pcVar4 + 1;
  }
  iVar3 = 0;
  if (pcVar4 != (char *)0x0) {
    iVar3 = (int)pcVar4 - *(int *)(param_1 + 0x10);
  }
  plVar7 = (long *)SpineExtension::getInstance();
  pcVar4 = (char *)(**(code **)(*plVar7 + 0x18))
                             (plVar7,(long)(iVar3 + 1),
                              "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp"
                              ,0x36);
  memcpy(pcVar4,*(void **)(param_1 + 0x10),(long)iVar3);
  pcVar4[iVar3] = '\0';
  plVar7 = (long *)SpineExtension::getInstance();
  pcVar5 = (char *)(**(code **)(*plVar7 + 0x30))(plVar7,param_1,&local_80);
  if (pcVar5 != (char *)0x0) {
    load(this,pcVar5,(int)local_80,pcVar4,param_3);
  }
  plVar7 = (long *)SpineExtension::getInstance();
  (**(code **)(*plVar7 + 0x28))
            (plVar7,pcVar5,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp",0x3f);
  plVar7 = (long *)SpineExtension::getInstance();
  (**(code **)(*plVar7 + 0x28))
            (plVar7,pcVar4,
             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support/spine/Atlas.cpp",0x40);
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

