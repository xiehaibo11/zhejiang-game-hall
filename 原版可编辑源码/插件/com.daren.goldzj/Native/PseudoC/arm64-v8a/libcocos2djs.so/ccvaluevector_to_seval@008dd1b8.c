
/* ccvaluevector_to_seval(std::__ndk1::vector<cocos2d::Value, std::__ndk1::allocator<cocos2d::Value>
   > const&, se::Value*) */

undefined4 ccvaluevector_to_seval(vector *param_1,Value *param_2)

{
  Value *pVVar1;
  long lVar2;
  bool bVar3;
  bool bVar4;
  Object *pOVar5;
  ulong uVar6;
  undefined4 uVar7;
  Value *pVVar8;
  uint uVar9;
  Object *local_70;
  Value aVStack_68 [16];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  pOVar5 = (Object *)se::Object::createArrayObject(*(long *)(param_1 + 8) - *(long *)param_1 >> 4);
  se::HandleObject::HandleObject((HandleObject *)&local_70,pOVar5);
  pVVar8 = *(Value **)param_1;
  pVVar1 = *(Value **)(param_1 + 8);
  if (pVVar8 != pVVar1) {
    uVar9 = 0;
    bVar3 = true;
    do {
      se::Value::Value(aVStack_68);
      uVar6 = ccvalue_to_seval(pVVar8,aVStack_68);
      bVar4 = (uVar6 & 1) == 0;
      if (bVar4) {
        se::Value::setUndefined(param_2);
        bVar3 = false;
      }
      else {
        se::Object::setArrayElement(local_70,uVar9,aVStack_68);
        uVar9 = uVar9 + 1;
      }
      se::Value::~Value(aVStack_68);
    } while ((!bVar4) && (bVar4 = pVVar1 + -0x10 != pVVar8, pVVar8 = pVVar8 + 0x10, bVar4));
    if (!bVar3) {
      uVar7 = 0;
      goto LAB_008dd298;
    }
  }
  se::Value::setObject(param_2,(HandleObject *)&local_70,false);
  uVar7 = 1;
LAB_008dd298:
  se::HandleObject::~HandleObject((HandleObject *)&local_70);
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

