
/* seval_to_Color3F(se::Value const&, cocos2d::Color3F*) */

undefined4 seval_to_Color3F(Value *param_1,Color3F *param_2)

{
  long lVar1;
  undefined8 uVar2;
  Object *this;
  ulong uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  Value aVStack_68 [8];
  char local_60;
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
    se::Value::Value(aVStack_68);
    uVar3 = se::Object::getProperty(this,"r",aVStack_48);
    if (((((uVar3 & 1) == 0) || (local_40 != '\x02')) ||
        (uVar3 = se::Object::getProperty(this,"g",aVStack_58), (uVar3 & 1) == 0)) ||
       (((local_50 != '\x02' ||
         (uVar3 = se::Object::getProperty(this,"b",aVStack_68), (uVar3 & 1) == 0)) ||
        (local_60 != '\x02')))) {
      uVar2 = cocos2d::Color3F::BLACK;
      uVar4 = 0;
      *(undefined4 *)(param_2 + 8) = DAT_01d37ed8;
      *(undefined8 *)param_2 = uVar2;
    }
    else {
      uVar4 = se::Value::toFloat(aVStack_48);
      *(undefined4 *)param_2 = uVar4;
      uVar4 = se::Value::toFloat(aVStack_58);
      *(undefined4 *)(param_2 + 4) = uVar4;
      uVar5 = se::Value::toFloat(aVStack_68);
      uVar4 = 1;
      *(undefined4 *)(param_2 + 8) = uVar5;
    }
    se::Value::~Value(aVStack_68);
    se::Value::~Value(aVStack_58);
    se::Value::~Value(aVStack_48);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x1f8,"seval_to_Color3F");
    __android_log_print(6,"jswrapper","Convert parameter to Color3F failed!");
    uVar4 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

