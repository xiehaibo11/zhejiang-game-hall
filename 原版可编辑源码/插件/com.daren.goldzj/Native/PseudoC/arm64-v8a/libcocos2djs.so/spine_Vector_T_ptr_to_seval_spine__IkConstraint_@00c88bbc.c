
/* bool spine_Vector_T_ptr_to_seval<spine::IkConstraint>(spine::Vector<spine::IkConstraint*> const&,
   se::Value*) */

bool spine_Vector_T_ptr_to_seval<spine::IkConstraint>(Vector *param_1,Value *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  bool bVar4;
  Object *pOVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined **local_80;
  ulong local_78;
  long lStack_70;
  undefined8 *local_68;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar5 = (Object *)se::Object::createArrayObject(*(ulong *)(param_1 + 8));
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar5);
  local_80 = &PTR__Vector_01c8d198;
  local_78 = *(ulong *)(param_1 + 8);
  lVar1 = *(long *)(param_1 + 0x10);
  local_68 = (undefined8 *)0x0;
  lStack_70 = lVar1;
  if (lVar1 == 0) {
LAB_00c88c80:
    if ((int)local_78 != 0) {
LAB_00c88c84:
      uVar8 = 0;
      uVar9 = local_78 & 0xffffffff;
      do {
        se::Value::Value(aVStack_58);
        bVar4 = native_ptr_to_rooted_seval<spine::IkConstraint>
                          ((type *)local_68[uVar8],aVStack_58,(bool *)0x0);
        if ((bVar4) &&
           (uVar7 = se::Object::setArrayElement(local_60,(uint)uVar8,aVStack_58), (uVar7 & 1) != 0))
        {
          bVar4 = true;
        }
        else {
          se::Value::setUndefined(param_2);
          bVar4 = false;
        }
        se::Value::~Value(aVStack_58);
      } while ((bVar4) && (uVar8 = uVar8 + 1, uVar8 < uVar9));
      if (!bVar4) {
        bVar4 = false;
        goto LAB_00c88d0c;
      }
    }
  }
  else {
    plVar6 = (long *)spine::SpineExtension::getInstance();
    local_68 = (undefined8 *)
               (**(code **)(*plVar6 + 0x18))
                         (plVar6,lVar1 << 3,
                          "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                          ,0xc5);
    if (local_78 != 0) {
      *local_68 = **(undefined8 **)(param_1 + 0x18);
      if (local_78 != 1) {
        uVar8 = 1;
        do {
          uVar9 = uVar8 + 1;
          local_68[uVar8] = *(undefined8 *)(*(long *)(param_1 + 0x18) + uVar8 * 8);
          uVar8 = uVar9;
        } while (local_78 != uVar9);
        goto LAB_00c88c80;
      }
      goto LAB_00c88c84;
    }
  }
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  bVar4 = true;
LAB_00c88d0c:
  puVar3 = local_68;
  local_80 = &PTR__Vector_01c8d198;
  local_78 = 0;
  if (local_68 != (undefined8 *)0x0) {
    plVar6 = (long *)spine::SpineExtension::getInstance();
    (**(code **)(*plVar6 + 0x28))
              (plVar6,puVar3,
               "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h",0xce);
  }
  spine::SpineObject::~SpineObject((SpineObject *)&local_80);
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return bVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

