
/* bool 
   native_ptr_to_seval<cocos2d::AudioProfile>(std::__ndk1::enable_if<!std::is_base_of<cocos2d::Ref,
   cocos2d::AudioProfile>::value, cocos2d::AudioProfile>::type*, se::Value*, bool*) */

bool native_ptr_to_seval<cocos2d::AudioProfile>(type *param_1,Value *param_2,bool *param_3)

{
  long lVar1;
  long lVar2;
  Class *pCVar3;
  Object *pOVar4;
  
                    /* catch() { ... } // from try @ 0098f514 with catch @ 0098f42c */
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_2);
  }
  else {
    lVar1 = se::NativePtrToObjectMap::find(param_1);
    lVar2 = se::NativePtrToObjectMap::end();
    if (lVar1 == lVar2) {
                    /* try { // try from 0098f47c to 00a8f47f has its CatchHandler @ 0098f514 */
      pCVar3 = JSBClassType::findClass<cocos2d::AudioProfile>((AudioProfile *)param_1);
      pOVar4 = (Object *)se::Object::createObjectWithClass(pCVar3);
      se::Value::setObject(param_2,pOVar4,true);
      se::Object::setPrivateData(pOVar4,param_1);
      if (param_3 != (bool *)0x0) {
        *param_3 = false;
      }
    }
    else {
      pOVar4 = *(Object **)(lVar1 + 0x18);
      if (param_3 != (bool *)0x0) {
        *param_3 = true;
      }
      se::Value::setObject(param_2,pOVar4,false);
    }
  }
                    /* try { // try from 0098f4b8 to 00a8f4e3 has its CatchHandler @ 0098f518 */
  return true;
}

