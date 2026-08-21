
/* bool 
   native_ptr_to_seval<cocos2d::network::WebSocket>(std::__ndk1::enable_if<std::is_base_of<cocos2d::Ref,
   cocos2d::network::WebSocket>::value, cocos2d::network::WebSocket>::type*, se::Value*, bool*) */

bool native_ptr_to_seval<cocos2d::network::WebSocket>(type *param_1,Value *param_2,bool *param_3)

{
  long lVar1;
  long lVar2;
  Class *pCVar3;
  Object *pOVar4;
  
  if (param_1 == (type *)0x0) {
    se::Value::setNull(param_2);
  }
  else {
    lVar1 = se::NativePtrToObjectMap::find(param_1);
    lVar2 = se::NativePtrToObjectMap::end();
    if (lVar1 == lVar2) {
                    /* catch() { ... } // from try @ 0099348c with catch @ 009936d8
                       catch() { ... } // from try @ 00993544 with catch @ 009936d8 */
      pCVar3 = JSBClassType::findClass<cocos2d::network::WebSocket>((WebSocket *)param_1);
      pOVar4 = (Object *)se::Object::createObjectWithClass(pCVar3);
                    /* catch() { ... } // from try @ 0099344c with catch @ 009936f0 */
                    /* catch() { ... } // from try @ 00993440 with catch @ 009936f4 */
      se::Value::setObject(param_2,pOVar4,true);
                    /* catch() { ... } // from try @ 00993420 with catch @ 009936f8 */
      se::Object::setPrivateData(pOVar4,param_1);
                    /* catch() { ... } // from try @ 00993458 with catch @ 00993708
                       catch() { ... } // from try @ 009934d8 with catch @ 00993708
                       catch() { ... } // from try @ 00993604 with catch @ 00993708 */
      cocos2d::Ref::retain((Ref *)param_1);
      if (param_3 != (bool *)0x0) {
        *param_3 = false;
      }
    }
    else {
      pOVar4 = *(Object **)(lVar1 + 0x18);
      if (param_3 != (bool *)0x0) {
                    /* catch() { ... } // from try @ 009934a0 with catch @ 009936b4 */
                    /* catch() { ... } // from try @ 009934b0 with catch @ 009936b8
                       catch() { ... } // from try @ 00993598 with catch @ 009936b8 */
        *param_3 = true;
      }
      se::Value::setObject(param_2,pOVar4,false);
    }
  }
  return true;
}

