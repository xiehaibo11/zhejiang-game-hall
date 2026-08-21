
/* spine::Animation::Animation(spine::String const&, spine::Vector<spine::Timeline*>&, float) */

void __thiscall
spine::Animation::Animation(Animation *this,String *param_1,Vector *param_2,float param_3)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *__dest;
  long lVar4;
  long lVar5;
  long lVar6;
  Animation *pAVar7;
  
  *(undefined ***)(this + 8) = &PTR__Vector_01c8cfd8;
  *(undefined ***)this = &PTR__Animation_01c8e2d8;
  *(undefined8 *)(this + 0x10) = *(undefined8 *)(param_2 + 8);
  lVar6 = *(long *)(param_2 + 0x10);
  *(long *)(this + 0x18) = lVar6;
  *(undefined8 *)(this + 0x20) = 0;
  if (lVar6 != 0) {
    plVar2 = (long *)SpineExtension::getInstance();
    puVar3 = (undefined8 *)
             (**(code **)(*plVar2 + 0x18))
                       (plVar2,lVar6 << 3,
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                        0xc5);
    lVar6 = *(long *)(this + 0x10);
    *(undefined8 **)(this + 0x20) = puVar3;
    if ((lVar6 != 0) && (*puVar3 = **(undefined8 **)(param_2 + 0x18), lVar6 != 1)) {
      lVar4 = 1;
      do {
        lVar5 = lVar4 * 8;
        lVar4 = lVar4 + 1;
        *(undefined8 *)(*(long *)(this + 0x20) + lVar5) =
             *(undefined8 *)(*(long *)(param_2 + 0x18) + lVar5);
      } while (lVar6 != lVar4);
    }
  }
  pAVar7 = this + 0x30;
  *(long *)pAVar7 = 0;
  *(undefined ***)(this + 0x28) = &PTR__HashMap_01c8e310;
  *(undefined8 *)(this + 0x38) = 0;
  *(float *)(this + 0x40) = param_3;
  *(undefined ***)(this + 0x48) = &PTR__String_01c67868;
  if (*(long *)(param_1 + 0x10) == 0) {
    *(undefined8 *)(this + 0x50) = 0;
    *(undefined8 *)(this + 0x58) = 0;
  }
  else {
    *(undefined8 *)(this + 0x50) = *(undefined8 *)(param_1 + 8);
    lVar6 = *(long *)(param_1 + 8);
    plVar2 = (long *)SpineExtension::getInstance();
    __dest = (void *)(**(code **)(*plVar2 + 0x18))
                               (plVar2,lVar6 + 1,
                                "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                ,0x47);
    *(void **)(this + 0x58) = __dest;
    memcpy(__dest,*(void **)(param_1 + 0x10),*(long *)(param_1 + 8) + 1);
  }
  if (0 < *(int *)(param_2 + 8)) {
    lVar6 = 0;
    do {
      iVar1 = (**(code **)(**(long **)(*(long *)(param_2 + 0x18) + lVar6 * 8) + 0x20))();
      for (lVar4 = *(long *)pAVar7; lVar4 != 0; lVar4 = *(long *)(lVar4 + 0x10)) {
        if (*(int *)(lVar4 + 8) == iVar1) {
          *(int *)(lVar4 + 8) = iVar1;
          *(undefined1 *)(lVar4 + 0xc) = 1;
          goto LAB_00cdcf60;
        }
      }
      puVar3 = SpineObject::operator_new
                         (0x20,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/HashMap.h"
                          ,0x73);
      *puVar3 = &PTR__SpineObject_01c8e348;
      puVar3[2] = 0;
      puVar3[3] = 0;
      *(int *)(puVar3 + 1) = iVar1;
      *(undefined1 *)((long)puVar3 + 0xc) = 1;
      lVar4 = *(long *)pAVar7;
      *(undefined8 **)pAVar7 = puVar3;
      if (lVar4 != 0) {
        *(undefined8 **)(lVar4 + 0x18) = puVar3;
        puVar3[2] = lVar4;
      }
      *(long *)(this + 0x38) = *(long *)(this + 0x38) + 1;
LAB_00cdcf60:
      lVar6 = lVar6 + 1;
    } while (lVar6 < *(int *)(param_2 + 8));
  }
  return;
}

