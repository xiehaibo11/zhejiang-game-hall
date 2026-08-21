
/* seval_to_Size(se::Value const&, cocos2d::Size*) */

undefined4 seval_to_Size(Value *param_1,Size *param_2)

{
  long lVar1;
  Object *this;
  ulong uVar2;
  undefined4 uVar3;
  Value aVStack_58 [8];
  char local_50;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x189,"seval_to_Size");
    __android_log_print(6,"jswrapper","Convert parameter to Size failed!");
    uVar3 = 0;
    goto LAB_008d5a00;
  }
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_48);
  se::Value::Value(aVStack_58);
  uVar2 = se::Object::getProperty(this,"width",aVStack_48);
  if (((uVar2 & 1) == 0) || (local_40 != '\x02')) {
    cocos2d::Size::operator=(param_2,(Size *)&cocos2d::Size::ZERO);
LAB_008d59ec:
    uVar3 = 0;
  }
  else {
    uVar2 = se::Object::getProperty(this,"height",aVStack_58);
    if (((uVar2 & 1) == 0) || (local_50 != '\x02')) {
      cocos2d::Size::operator=(param_2,(Size *)&cocos2d::Size::ZERO);
      goto LAB_008d59ec;
    }
    uVar3 = se::Value::toFloat(aVStack_48);
    *(undefined4 *)param_2 = uVar3;
    uVar3 = se::Value::toFloat(aVStack_58);
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar3 = 1;
  }
  se::Value::~Value(aVStack_58);
  se::Value::~Value(aVStack_48);
LAB_008d5a00:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

