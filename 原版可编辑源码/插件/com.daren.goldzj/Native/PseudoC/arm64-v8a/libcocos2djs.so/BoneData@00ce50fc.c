
/* spine::BoneData::BoneData(int, spine::String const&, spine::BoneData*) */

void __thiscall
spine::BoneData::BoneData(BoneData *this,int param_1,String *param_2,BoneData *param_3)

{
  long *plVar1;
  void *__dest;
  long lVar2;
  undefined8 uVar3;
  
  *(int *)(this + 8) = param_1;
  *(undefined ***)this = &PTR__BoneData_01c8ea50;
  *(undefined ***)(this + 0x10) = &PTR__String_01c67868;
  if (*(long *)(param_2 + 0x10) == 0) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
    lVar2 = *(long *)(param_2 + 8);
    plVar1 = (long *)SpineExtension::getInstance();
    __dest = (void *)(**(code **)(*plVar1 + 0x18))
                               (plVar1,lVar2 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x20) = __dest;
    memcpy(__dest,*(void **)(param_2 + 0x10),*(long *)(param_2 + 8) + 1);
  }
  uVar3 = NEON_fmov(0x3f800000,4);
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(BoneData **)(this + 0x28) = param_3;
  *(undefined8 *)(this + 0x4d) = 0;
  *(undefined8 *)(this + 0x40) = uVar3;
  *(undefined8 *)(this + 0x48) = 0;
  return;
}

