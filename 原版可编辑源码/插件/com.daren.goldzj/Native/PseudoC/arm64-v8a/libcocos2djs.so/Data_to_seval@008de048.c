
/* Data_to_seval(cocos2d::Data const&, se::Value*) */

undefined8 Data_to_seval(Data *param_1,Value *param_2)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  Object *pOVar5;
  HandleObject aHStack_40 [8];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  uVar2 = cocos2d::Data::isNull(param_1);
  if ((uVar2 & 1) == 0) {
    uVar3 = cocos2d::Data::getBytes(param_1);
    uVar4 = cocos2d::Data::getSize(param_1);
    pOVar5 = (Object *)se::Object::createTypedArray(4,uVar3,uVar4);
    se::HandleObject::HandleObject(aHStack_40,pOVar5);
    se::Value::setObject(param_2,aHStack_40,true);
    se::HandleObject::~HandleObject(aHStack_40);
  }
  else {
    se::Value::setNull(param_2);
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

