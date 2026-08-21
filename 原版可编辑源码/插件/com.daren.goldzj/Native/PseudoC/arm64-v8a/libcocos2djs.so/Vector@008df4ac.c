
/* spine::Vector<spine::String>::Vector(spine::Vector<spine::String> const&) */

void __thiscall spine::Vector<spine::String>::Vector(Vector<spine::String> *this,Vector *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *__dest;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  *(undefined ***)this = &PTR__Vector_01c678a0;
  *(undefined8 *)(this + 8) = *(undefined8 *)(param_1 + 8);
  lVar3 = *(long *)(param_1 + 0x10);
  *(long *)(this + 0x10) = lVar3;
  *(undefined8 *)(this + 0x18) = 0;
  if (lVar3 != 0) {
    plVar1 = (long *)SpineExtension::getInstance();
    lVar3 = (**(code **)(*plVar1 + 0x18))
                      (plVar1,lVar3 * 0x18,
                       "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",
                       0xc5);
    *(long *)(this + 0x18) = lVar3;
    if (*(long *)(this + 8) != 0) {
      lVar4 = 0;
      uVar5 = 1;
      while( true ) {
        lVar6 = *(long *)(param_1 + 0x18);
        puVar2 = SpineObject::operator_new(0x18,(void *)(lVar3 + lVar4));
        *puVar2 = &PTR__String_01c67868;
        lVar6 = lVar6 + lVar4;
        if (*(long *)(lVar6 + 0x10) == 0) {
          puVar2[1] = 0;
          puVar2[2] = 0;
        }
        else {
          puVar2[1] = *(undefined8 *)(lVar6 + 8);
          lVar3 = *(long *)(lVar6 + 8);
          plVar1 = (long *)SpineExtension::getInstance();
          __dest = (void *)(**(code **)(*plVar1 + 0x18))
                                     (plVar1,lVar3 + 1,
                                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                      ,0x47);
          puVar2[2] = __dest;
          memcpy(__dest,*(void **)(lVar6 + 0x10),*(long *)(lVar6 + 8) + 1);
        }
        if (*(ulong *)(this + 8) <= uVar5) break;
        lVar3 = *(long *)(this + 0x18);
        uVar5 = uVar5 + 1;
        lVar4 = lVar4 + 0x18;
      }
    }
  }
  return;
}

