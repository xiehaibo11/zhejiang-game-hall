
/* seval_to_std_vector_Vec2(se::Value const&, std::__ndk1::vector<cocos2d::Vec2,
   std::__ndk1::allocator<cocos2d::Vec2> >*) */

undefined4 seval_to_std_vector_Vec2(Value *param_1,vector *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  Object *this;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined8 local_58;
  uint local_4c;
  Value aVStack_48 [16];
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar3 = se::Object::isArray(this);
    if ((uVar3 & 1) != 0) {
      local_4c = 0;
      uVar3 = se::Object::getArrayLength(this,&local_4c);
      if ((uVar3 & 1) == 0) {
        uVar5 = 1;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
      }
      else {
        se::Value::Value(aVStack_48);
        local_58 = 0;
        if (local_4c != 0) {
          uVar6 = 0;
          do {
            uVar3 = se::Object::getArrayElement(this,uVar6,aVStack_48);
            if (((uVar3 & 1) == 0) ||
               (uVar3 = seval_to_Vec2(aVStack_48,(Vec2 *)&local_58), (uVar3 & 1) == 0)) {
              uVar5 = 0;
              *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
              goto LAB_008d7cec;
            }
            puVar1 = *(undefined8 **)(param_2 + 8);
            if (puVar1 == *(undefined8 **)(param_2 + 0x10)) {
              std::__ndk1::vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>>::
              __push_back_slow_path<cocos2d::Vec2_const&>
                        ((vector<cocos2d::Vec2,std::__ndk1::allocator<cocos2d::Vec2>> *)param_2,
                         (Vec2 *)&local_58);
            }
            else {
              *puVar1 = local_58;
              *(undefined8 **)(param_2 + 8) = puVar1 + 1;
            }
            uVar6 = uVar6 + 1;
          } while (uVar6 < local_4c);
        }
        uVar5 = 1;
LAB_008d7cec:
        se::Value::~Value(aVStack_48);
      }
      goto LAB_008d7ca8;
    }
    uVar4 = 0x37d;
  }
  else {
    uVar4 = 0x37b;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,uVar4,"seval_to_std_vector_Vec2");
  __android_log_print(6,"jswrapper","Convert parameter to vector of Vec2 failed!");
  uVar5 = 0;
LAB_008d7ca8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

