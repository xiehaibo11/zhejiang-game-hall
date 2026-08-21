
/* bool 
   native_ptr_to_rooted_seval<dragonBones::SlotData>(std::__ndk1::enable_if<!std::is_base_of<cocos2d::Ref,
   dragonBones::SlotData>::value, dragonBones::SlotData>::type*, se::Class*, se::Value*, bool*) */

bool native_ptr_to_rooted_seval<dragonBones::SlotData>
               (type *param_1,Class *param_2,Value *param_3,bool *param_4)

{
  long lVar1;
  long lVar2;
  Object *this;
  
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_3);
  }
  else {
    lVar1 = se::NativePtrToObjectMap::find(param_1);
    lVar2 = se::NativePtrToObjectMap::end();
    if (lVar1 == lVar2) {
      this = (Object *)se::Object::createObjectWithClass(param_2);
      se::Object::root(this);
      se::Object::setPrivateData(this,param_1);
      if (param_4 != (bool *)0x0) {
        *param_4 = false;
      }
    }
    else {
      this = *(Object **)(lVar1 + 0x18);
      if (param_4 != (bool *)0x0) {
        *param_4 = true;
      }
    }
    se::Value::setObject(param_3,this,false);
  }
  return true;
}

