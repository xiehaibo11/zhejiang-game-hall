
/* seval_to_Color4F(se::Value const&, cocos2d::Color4F*) */

undefined4 seval_to_Color4F(Value *param_1,Color4F *param_2)

{
  long lVar1;
  undefined8 uVar2;
  byte bVar3;
  Object *this;
  ulong uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  Value aVStack_78 [16];
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
    se::Value::Value(aVStack_78);
    uVar4 = se::Object::getProperty(this,"r",aVStack_48);
    if (((((uVar4 & 1) == 0) || (local_40 != '\x02')) ||
        (uVar4 = se::Object::getProperty(this,"g",aVStack_58), (uVar4 & 1) == 0)) ||
       (((local_50 != '\x02' ||
         (uVar4 = se::Object::getProperty(this,"b",aVStack_68), (uVar4 & 1) == 0)) ||
        ((local_60 != '\x02' ||
         (bVar3 = se::Object::getProperty(this,"a",aVStack_78), (bVar3 & local_60 == '\x02') == 0)))
        ))) {
      uVar2 = cocos2d::Color4F::BLACK._0_8_;
      uVar5 = 0;
      *(undefined8 *)(param_2 + 8) = cocos2d::Color4F::BLACK._8_8_;
      *(undefined8 *)param_2 = uVar2;
    }
    else {
      uVar5 = se::Value::toFloat(aVStack_48);
      *(undefined4 *)param_2 = uVar5;
      uVar5 = se::Value::toFloat(aVStack_58);
      *(undefined4 *)(param_2 + 4) = uVar5;
      uVar5 = se::Value::toFloat(aVStack_68);
      *(undefined4 *)(param_2 + 8) = uVar5;
      uVar6 = se::Value::toFloat(aVStack_78);
      uVar5 = 1;
      *(undefined4 *)(param_2 + 0xc) = uVar6;
    }
    se::Value::~Value(aVStack_78);
    se::Value::~Value(aVStack_68);
    se::Value::~Value(aVStack_58);
    se::Value::~Value(aVStack_48);
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x1e0,"seval_to_Color4F");
    __android_log_print(6,"jswrapper","Convert parameter to Color4F failed!");
    uVar5 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

