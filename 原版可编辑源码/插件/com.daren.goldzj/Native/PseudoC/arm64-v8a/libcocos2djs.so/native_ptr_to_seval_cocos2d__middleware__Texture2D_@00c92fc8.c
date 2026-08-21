
/* bool 
   native_ptr_to_seval<cocos2d::middleware::Texture2D>(std::__ndk1::enable_if<std::is_base_of<cocos2d::Ref,
   cocos2d::middleware::Texture2D>::value, cocos2d::middleware::Texture2D>::type*, se::Class*,
   se::Value*, bool*) */

bool native_ptr_to_seval<cocos2d::middleware::Texture2D>
               (type *param_1,Class *param_2,Value *param_3,bool *param_4)

{
  long lVar1;
  long lVar2;
  Object *pOVar3;
  
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_3);
  }
  else {
    lVar1 = se::NativePtrToObjectMap::find(param_1);
    lVar2 = se::NativePtrToObjectMap::end();
    if (lVar1 == lVar2) {
      pOVar3 = (Object *)se::Object::createObjectWithClass(param_2);
      se::Value::setObject(param_3,pOVar3,true);
      se::Object::setPrivateData(pOVar3,param_1);
      cocos2d::Ref::retain((Ref *)param_1);
      if (param_4 != (bool *)0x0) {
        *param_4 = false;
      }
    }
    else {
      pOVar3 = *(Object **)(lVar1 + 0x18);
      if (param_4 != (bool *)0x0) {
        *param_4 = true;
      }
      se::Value::setObject(param_3,pOVar3,false);
    }
  }
  return true;
}

