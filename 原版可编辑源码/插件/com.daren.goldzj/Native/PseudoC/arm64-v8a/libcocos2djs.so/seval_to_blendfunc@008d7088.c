
/* seval_to_blendfunc(se::Value const&, cocos2d::BlendFunc*) */

undefined4 seval_to_blendfunc(Value *param_1,BlendFunc *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  Object *this;
  ulong uVar4;
  Value aVStack_48 [16];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (param_1[8] != (Value)0x5) {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,700,"seval_to_blendfunc");
    __android_log_print(6,"jswrapper","Convert parameter to BlendFunc failed!");
    uVar2 = 0;
    goto LAB_008d7180;
  }
  this = (Object *)se::Value::toObject(param_1);
  se::Value::Value(aVStack_48);
  uVar4 = se::Object::getProperty(this,"src",aVStack_48);
  if ((uVar4 & 1) == 0) {
LAB_008d7164:
    uVar2 = 0;
    *(undefined8 *)param_2 = 1;
  }
  else {
    uVar2 = se::Value::toUint32(aVStack_48);
    *(undefined4 *)param_2 = uVar2;
    uVar4 = se::Object::getProperty(this,"dst",aVStack_48);
    if ((uVar4 & 1) == 0) goto LAB_008d7164;
    uVar3 = se::Value::toUint32(aVStack_48);
    uVar2 = 1;
    *(undefined4 *)(param_2 + 4) = uVar3;
  }
  se::Value::~Value(aVStack_48);
LAB_008d7180:
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

