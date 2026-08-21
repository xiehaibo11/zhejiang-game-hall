
/* seval_to_mat(se::Value const&, int, float*) */

void seval_to_mat(Value *param_1,int param_2,float *param_3)

{
  long lVar1;
  Object *this;
  undefined8 uVar2;
  ulong uVar3;
  float fVar4;
  char local_5c [4];
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    se::Value::Value(aVStack_58);
    local_5c[2] = 0;
    local_5c[0] = '\0';
    local_5c[1] = '\0';
    if (0 < param_2) {
      uVar3 = 0;
      do {
        snprintf(local_5c,3,"m%2d",uVar3 & 0xffffffff);
        se::Object::getProperty(this,local_5c,aVStack_58);
        fVar4 = (float)se::Value::toFloat(aVStack_58);
        param_3[uVar3] = fVar4;
        uVar3 = uVar3 + 1;
      } while ((long)uVar3 < (long)param_2);
    }
    se::Value::~Value(aVStack_58);
    uVar2 = 1;
  }
  else {
    __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                        "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                        ,0x142,"seval_to_mat");
    __android_log_print(6,"jswrapper","Convert parameter to Matrix failed!");
    uVar2 = 0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar2);
}

