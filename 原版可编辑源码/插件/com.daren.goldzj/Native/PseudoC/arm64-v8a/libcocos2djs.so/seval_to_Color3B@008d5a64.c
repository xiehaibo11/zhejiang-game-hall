
/* seval_to_Color3B(se::Value const&, cocos2d::Color3B*) */

undefined4 seval_to_Color3B(Value *param_1,Color3B *param_2)

{
  long lVar1;
  undefined2 uVar2;
  Color3B CVar3;
  Object *this;
  ulong uVar4;
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
    uVar4 = se::Object::getProperty(this,"r",aVStack_48);
    if (((((uVar4 & 1) == 0) || (local_40 != '\x02')) ||
        (uVar4 = se::Object::getProperty(this,"g",aVStack_58), (uVar4 & 1) == 0)) ||
       (((local_50 != '\x02' ||
         (uVar4 = se::Object::getProperty(this,"b",aVStack_68), (uVar4 & 1) == 0)) ||
        (local_60 != '\x02')))) {
      uVar2 = cocos2d::Color3B::BLACK;
      uVar5 = 0;
      param_2[2] = DAT_01d37ef0;
      *(undefined2 *)param_2 = uVar2;
    }
    else {
      CVar3 = (Color3B)se::Value::toUint16(aVStack_48);
      *param_2 = CVar3;
      CVar3 = (Color3B)se::Value::toUint16(aVStack_58);
      param_2[1] = CVar3;
      CVar3 = (Color3B)se::Value::toUint16(aVStack_68);
      uVar5 = 1;
      param_2[2] = CVar3;
    }
    se::Value::~Value(aVStack_68);
    se::Value::~Value(aVStack_58);
    se::Value::~Value(aVStack_48);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x1b4,"seval_to_Color3B");
    __android_log_print(6,"jswrapper","Convert parameter to Color3B failed!");
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

