
/* TechniqueParameter_to_seval(cocos2d::renderer::Technique::Parameter const&, se::Value*) */

undefined8 TechniqueParameter_to_seval(Parameter *param_1,Value *param_2)

{
  long lVar1;
  Object *this;
  Value aVStack_58 [16];
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  this = (Object *)se::Object::createPlainObject();
  se::Value::Value(aVStack_48);
  se::Value::setInt32(aVStack_48,(uint)(byte)param_1[0x31]);
  se::Object::setProperty(this,"type",aVStack_48);
  se::Value::Value(aVStack_58);
  se::Value::setString(aVStack_58,(basic_string *)(param_1 + 0x10));
  se::Object::setProperty(this,"name",aVStack_58);
  se::Value::setObject(param_2,this,false);
  se::Value::~Value(aVStack_58);
  se::Value::~Value(aVStack_48);
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

