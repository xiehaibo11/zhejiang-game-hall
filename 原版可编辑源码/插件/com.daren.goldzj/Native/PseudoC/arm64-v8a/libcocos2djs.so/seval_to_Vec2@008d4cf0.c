
/* seval_to_Vec2(se::Value const&, cocos2d::Vec2*) */

undefined4 seval_to_Vec2(Value *param_1,Vec2 *param_2)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Value aVStack_58 [8];
  char local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    se::Value::Value(aVStack_48);
    se::Value::Value(aVStack_58);
    uVar2 = se::Object::getProperty(this,"x",aVStack_48);
    if (((((uVar2 & 1) == 0) || (local_40 != '\x02')) ||
        (uVar2 = se::Object::getProperty(this,"y",aVStack_58), (uVar2 & 1) == 0)) ||
       (local_50 != '\x02')) {
      uVar3 = 0;
      *(undefined8 *)param_2 = cocos2d::Vec2::ZERO;
    }
    else {
      uVar3 = se::Value::toFloat(aVStack_48);
      *(undefined4 *)param_2 = uVar3;
      uVar4 = se::Value::toFloat(aVStack_58);
      uVar3 = 1;
      *(undefined4 *)(param_2 + 4) = uVar4;
    }
    se::Value::~Value(aVStack_58);
    se::Value::~Value(aVStack_48);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x105,"seval_to_Vec2");
    __android_log_print(6,"jswrapper","Convert parameter to Vec2 failed!");
    uVar3 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

