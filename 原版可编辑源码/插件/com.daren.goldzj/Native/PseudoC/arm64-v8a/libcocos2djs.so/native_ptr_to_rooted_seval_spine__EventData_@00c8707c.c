
/* bool 
   native_ptr_to_rooted_seval<spine::EventData>(std::__ndk1::enable_if<!std::is_base_of<cocos2d::Ref,
   spine::EventData>::value, spine::EventData>::type const*, se::Value*, bool*) */

bool native_ptr_to_rooted_seval<spine::EventData>(type *param_1,Value *param_2,bool *param_3)

{
  long lVar1;
  long lVar2;
  Class *pCVar3;
  Object *this;
  
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_2);
  }
  else {
    lVar1 = se::NativePtrToObjectMap::find(param_1);
    lVar2 = se::NativePtrToObjectMap::end();
    if (lVar1 == lVar2) {
      pCVar3 = JSBClassType::findClass<spine::EventData>((EventData *)param_1);
      this = (Object *)se::Object::createObjectWithClass(pCVar3);
      se::Object::root(this);
      se::Object::setPrivateData(this,param_1);
      if (param_3 != (bool *)0x0) {
        *param_3 = false;
      }
    }
    else {
      this = *(Object **)(lVar1 + 0x18);
      if (param_3 != (bool *)0x0) {
        *param_3 = true;
      }
    }
    se::Value::setObject(param_2,this,false);
  }
  return true;
}

