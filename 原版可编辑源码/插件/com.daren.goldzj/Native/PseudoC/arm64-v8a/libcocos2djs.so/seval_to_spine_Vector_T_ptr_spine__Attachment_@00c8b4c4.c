
/* bool seval_to_spine_Vector_T_ptr<spine::Attachment>(se::Value const&,
   spine::Vector<spine::Attachment*>*) */

bool seval_to_spine_Vector_T_ptr<spine::Attachment>(Value *param_1,Vector *param_2)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  Object *this_00;
  undefined8 uVar3;
  long *plVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  bool bVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_7c;
  Value aVStack_78 [8];
  char local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  this = (Object *)se::Value::toObject(param_1);
  local_7c = 0;
  uVar2 = se::Object::getArrayLength(this,&local_7c);
  if ((uVar2 & 1) == 0) {
    bVar9 = false;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    se::Value::Value(aVStack_78);
    if (local_7c != 0) {
      uVar10 = 0;
      do {
        uVar2 = se::Object::getArrayElement(this,uVar10,aVStack_78);
        if (((uVar2 & 1) == 0) || (local_70 != '\x05')) {
          bVar9 = false;
          *(undefined8 *)(param_2 + 8) = 0;
          goto LAB_00c8b608;
        }
        this_00 = (Object *)se::Value::toObject(aVStack_78);
        uVar3 = se::Object::getPrivateData(this_00);
        uVar2 = *(ulong *)(param_2 + 8);
        if (uVar2 == *(ulong *)(param_2 + 0x10)) {
          uVar6 = (uint)((float)uVar2 * 1.75);
          uVar11 = *(undefined8 *)(param_2 + 0x18);
          if (uVar6 < 9) {
            uVar6 = 8;
          }
          *(long *)(param_2 + 0x10) = (long)(int)uVar6;
          plVar4 = (long *)spine::SpineExtension::getInstance();
          lVar5 = (**(code **)(*plVar4 + 0x20))
                            (plVar4,uVar11,
                             -(ulong)(uVar6 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar6 << 3,
                             "F:/darenneiqian/frameworks/cocos2d-x/cocos/editor-support\\spine/Vector.h"
                             ,0x6a);
          lVar7 = *(long *)(param_2 + 8);
          *(long *)(param_2 + 0x18) = lVar5;
          *(long *)(param_2 + 8) = lVar7 + 1;
          puVar8 = (undefined8 *)(lVar5 + lVar7 * 8);
        }
        else {
          *(ulong *)(param_2 + 8) = uVar2 + 1;
          puVar8 = (undefined8 *)(*(long *)(param_2 + 0x18) + uVar2 * 8);
        }
        *puVar8 = uVar3;
        uVar10 = uVar10 + 1;
      } while (uVar10 < local_7c);
    }
    bVar9 = true;
LAB_00c8b608:
    se::Value::~Value(aVStack_78);
  }
  if (*(long *)(lVar1 + 0x28) == local_68) {
    return bVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

