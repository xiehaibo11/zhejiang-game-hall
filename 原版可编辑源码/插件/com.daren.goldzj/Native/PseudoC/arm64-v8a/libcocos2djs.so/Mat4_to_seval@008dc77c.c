
/* Mat4_to_seval(cocos2d::Mat4 const&, se::Value*) */

undefined8 Mat4_to_seval(Mat4 *param_1,Value *param_2)

{
  long lVar1;
  Object *pOVar2;
  ulong uVar3;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  pOVar2 = (Object *)se::Object::createArrayObject(0x10);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar2);
  uVar3 = 0;
  do {
    pOVar2 = local_60;
    se::Value::Value(aVStack_58,*(float *)(param_1 + uVar3 * 4));
    se::Object::setArrayElement(pOVar2,(uint)uVar3,aVStack_58);
    se::Value::~Value(aVStack_58);
    uVar3 = uVar3 + 1;
  } while (uVar3 < 0x10);
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

