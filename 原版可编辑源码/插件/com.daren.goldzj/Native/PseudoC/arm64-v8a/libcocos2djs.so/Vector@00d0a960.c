
/* spine::Vector<spine::Skin::AttachmentMap::Entry>::Vector(spine::Vector<spine::Skin::AttachmentMap::Entry>
   const&) */

void __thiscall
spine::Vector<spine::Skin::AttachmentMap::Entry>::Vector
          (Vector<spine::Skin::AttachmentMap::Entry> *this,Vector *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  *(undefined ***)this = &PTR__Vector_01c8f6b0;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  lVar5 = *(long *)(param_1 + 0x10);
  *(long *)(this + 0x10) = lVar5;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar5 != 0) {
    plVar3 = (long *)SpineExtension::getInstance();
    lVar5 = (**(code **)(*plVar3 + 0x18))
                      (plVar3,lVar5 * 0x28,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0xc5);
    *(long *)(this + 0x18) = lVar5;
    if (*(long *)(this + 8) != 0) {
      lVar6 = 0;
      uVar7 = 1;
      while( true ) {
        lVar8 = *(long *)(param_1 + 0x18);
        puVar1 = (undefined8 *)(lVar5 + lVar6);
        puVar2 = (undefined8 *)(lVar8 + lVar6);
        *puVar1 = *puVar2;
        puVar1[1] = &PTR__String_01c67868;
        if (puVar2[3] == 0) {
          puVar1[2] = 0;
          puVar1[3] = 0;
        }
        else {
          puVar1[2] = puVar2[2];
          lVar4 = puVar2[2];
          plVar3 = (long *)SpineExtension::getInstance();
          __dest = (void *)(**(code **)(*plVar3 + 0x18))
                                     (plVar3,lVar4 + 1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x47);
          puVar1[3] = __dest;
          memcpy(__dest,(void *)puVar2[3],puVar2[2] + 1);
        }
        *(undefined8 *)(lVar5 + lVar6 + 0x20) = *(undefined8 *)(lVar8 + lVar6 + 0x20);
        if (*(ulong *)(this + 8) <= uVar7) break;
        lVar5 = *(long *)(this + 0x18);
        lVar6 = lVar6 + 0x28;
        uVar7 = uVar7 + 1;
      }
    }
  }
  return;
}

