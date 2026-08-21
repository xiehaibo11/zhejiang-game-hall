
/* seval_to_spine_Vector_String(se::Value const&, spine::Vector<spine::String>*) */

undefined4 seval_to_spine_Vector_String(Value *param_1,Vector *param_2)

{
  long lVar1;
  void *pvVar2;
  byte bVar3;
  Object *this;
  ulong uVar4;
  byte *pbVar5;
  size_t sVar6;
  long *plVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined **local_98;
  size_t local_90;
  void *local_88;
  uint local_7c;
  Value aVStack_78 [8];
  char local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Object *)se::Value::toObject(param_1);
  local_7c = 0;
  uVar4 = se::Object::getArrayLength(this,&local_7c);
  if ((uVar4 & 1) == 0) {
    uVar4 = *(ulong *)(param_2 + 8);
    if (uVar4 != 0) {
      uVar9 = 0;
      lVar11 = -1;
      do {
        (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x18) + (uVar4 + lVar11) * 0x18))();
        uVar4 = *(ulong *)(param_2 + 8);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + -1;
      } while (uVar9 < uVar4);
    }
    uVar8 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    se::Value::Value(aVStack_78);
    if (local_7c != 0) {
      uVar10 = 0;
      do {
        bVar3 = se::Object::getArrayElement(this,uVar10,aVStack_78);
        if ((bVar3 & local_70 == '\x05') == 0) {
          uVar4 = *(ulong *)(param_2 + 8);
          if (uVar4 != 0) {
            uVar9 = 0;
            lVar11 = -1;
            do {
              (*(code *)**(undefined8 **)(*(long *)(param_2 + 0x18) + (uVar4 + lVar11) * 0x18))();
              uVar4 = *(ulong *)(param_2 + 8);
              uVar9 = uVar9 + 1;
              lVar11 = lVar11 + -1;
            } while (uVar9 < uVar4);
          }
          uVar8 = 0;
          *(undefined8 *)(param_2 + 8) = 0;
          goto LAB_008def54;
        }
        pbVar5 = (byte *)se::Value::toString(aVStack_78);
        if ((*pbVar5 & 1) == 0) {
          pbVar5 = pbVar5 + 1;
LAB_008dee1c:
          local_98 = &PTR__String_01c67868;
          sVar6 = strlen((char *)pbVar5);
          local_90 = sVar6;
          plVar7 = (long *)spine::SpineExtension::getInstance();
          local_88 = (void *)(**(code **)(*plVar7 + 0x18))
                                       (plVar7,sVar6 + 1,
                                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                                        ,0x39);
          memcpy(local_88,pbVar5,local_90 + 1);
        }
        else {
          pbVar5 = *(byte **)(pbVar5 + 0x10);
          local_98 = &PTR__String_01c67868;
          if (pbVar5 != (byte *)0x0) goto LAB_008dee1c;
          local_90 = 0;
          local_88 = (void *)0x0;
        }
        spine::Vector<spine::String>::add((Vector<spine::String> *)param_2,(String *)&local_98);
        pvVar2 = local_88;
        local_98 = &PTR__String_01c67868;
        if (local_88 != (void *)0x0) {
          plVar7 = (long *)spine::SpineExtension::getInstance();
          (**(code **)(*plVar7 + 0x28))
                    (plVar7,pvVar2,
                     "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/SpineString.h"
                     ,0xc9);
        }
        spine::SpineObject::~SpineObject((SpineObject *)&local_98);
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_7c);
    }
    uVar8 = 1;
LAB_008def54:
    se::Value::~Value(aVStack_78);
  }
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar8;
}

