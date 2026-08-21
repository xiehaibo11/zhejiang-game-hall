
/* Color3B_to_seval(cocos2d::Color3B const&, se::Value*) */

undefined8 Color3B_to_seval(Color3B *param_1,Value *param_2)

{
  long lVar1;
  Object *pOVar2;
  Object *local_50;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  pOVar2 = (Object *)se::Object::createPlainObject();
  se::HandleObject::HandleObject((HandleObject *)&local_50,pOVar2);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,(uchar)*param_1);
  se::Object::setProperty(pOVar2,"r",aVStack_48);
  se::Value::~Value(aVStack_48);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,(uchar)param_1[1]);
  se::Object::setProperty(pOVar2,"g",aVStack_48);
  se::Value::~Value(aVStack_48);
  pOVar2 = local_50;
  se::Value::Value(aVStack_48,(uchar)param_1[2]);
  se::Object::setProperty(pOVar2,"b",aVStack_48);
  se::Value::~Value(aVStack_48);
  se::Value::Value(aVStack_48,0xff);
  se::Object::setProperty(local_50,"a",aVStack_48);
  se::Value::~Value(aVStack_48);
  se::Value::setObject(param_2,(HandleObject *)&local_50,false);
  se::HandleObject::~HandleObject((HandleObject *)&local_50);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

