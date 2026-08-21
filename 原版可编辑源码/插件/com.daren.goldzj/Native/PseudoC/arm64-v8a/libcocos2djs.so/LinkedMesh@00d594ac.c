
/* spine::LinkedMesh::LinkedMesh(spine::MeshAttachment*, spine::String const&, unsigned long,
   spine::String const&, bool) */

void __thiscall
spine::LinkedMesh::LinkedMesh
          (LinkedMesh *this,MeshAttachment *param_1,String *param_2,ulong param_3,String *param_4,
          bool param_5)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  
  *(undefined ***)this = &PTR__LinkedMesh_01c91d00;
  *(MeshAttachment **)(this + 8) = param_1;
  *(undefined ***)(this + 0x10) = &PTR__String_01c67868;
  if (*(long *)(param_2 + 0x10) == 0) {
    *(undefined8 *)(this + 0x18) = 0;
    *(undefined8 *)(this + 0x20) = 0;
  }
  else {
    *(undefined8 *)(this + 0x18) = *(undefined8 *)(param_2 + 8);
    lVar3 = *(long *)(param_2 + 8);
    plVar1 = (long *)SpineExtension::getInstance();
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x18))
                               (plVar1,lVar3 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x20) = pvVar2;
    memcpy(pvVar2,*(void **)(param_2 + 0x10),*(long *)(param_2 + 8) + 1);
  }
  *(ulong *)(this + 0x28) = param_3;
  *(undefined ***)(this + 0x30) = &PTR__String_01c67868;
  if (*(long *)(param_4 + 0x10) == 0) {
    *(undefined8 *)(this + 0x38) = 0;
    *(undefined8 *)(this + 0x40) = 0;
  }
  else {
    *(undefined8 *)(this + 0x38) = *(undefined8 *)(param_4 + 8);
    lVar3 = *(long *)(param_4 + 8);
    plVar1 = (long *)SpineExtension::getInstance();
    pvVar2 = (void *)(**(code **)(*plVar1 + 0x18))
                               (plVar1,lVar3 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x40) = pvVar2;
    memcpy(pvVar2,*(void **)(param_4 + 0x10),*(long *)(param_4 + 8) + 1);
  }
  this[0x48] = (LinkedMesh)param_5;
  return;
}

