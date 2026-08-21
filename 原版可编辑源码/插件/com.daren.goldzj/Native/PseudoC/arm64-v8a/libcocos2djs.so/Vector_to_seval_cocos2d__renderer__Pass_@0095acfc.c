
/* bool Vector_to_seval<cocos2d::renderer::Pass>(cocos2d::Vector<cocos2d::renderer::Pass*> const&,
   se::Value*) */

bool Vector_to_seval<cocos2d::renderer::Pass>(Vector *param_1,Value *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Object *pOVar3;
  uint uVar4;
  undefined8 *puVar5;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)se::Object::createArrayObject(*(long *)(param_1 + 8) - *(long *)param_1 >> 3);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  se::Value::Value(aVStack_58);
  puVar5 = *(undefined8 **)param_1;
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar5 != puVar1) {
    uVar4 = 0;
    do {
      native_ptr_to_seval<cocos2d::renderer::Pass>((type *)*puVar5,aVStack_58,(bool *)0x0);
      se::Object::setArrayElement(local_60,uVar4,aVStack_58);
      puVar5 = puVar5 + 1;
      uVar4 = uVar4 + 1;
    } while (puVar1 != puVar5);
  }
  se::Value::setObject(param_2,(HandleObject *)&local_60,true);
  se::Value::~Value(aVStack_58);
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return true;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

