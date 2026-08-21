
/* seval_to_std_vector_float(se::Value const&, std::__ndk1::vector<float,
   std::__ndk1::allocator<float> >*) */

undefined4 seval_to_std_vector_float(Value *param_1,vector *param_2)

{
  float *pfVar1;
  long lVar2;
  byte bVar3;
  Object *this;
  ulong uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  uint uVar7;
  float local_50;
  uint local_4c;
  Value aVStack_48 [8];
  char local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_1[8] == (Value)0x5) {
    this = (Object *)se::Value::toObject(param_1);
    uVar4 = se::Object::isArray(this);
    if ((uVar4 & 1) != 0) {
      local_4c = 0;
      uVar4 = se::Object::getArrayLength(this,&local_4c);
      if ((uVar4 & 1) == 0) {
        uVar6 = 1;
        *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
      }
      else {
        se::Value::Value(aVStack_48);
        if (local_4c != 0) {
          uVar7 = 0;
          do {
            bVar3 = se::Object::getArrayElement(this,uVar7,aVStack_48);
            if ((bVar3 & local_40 == '\x02') == 0) {
              uVar6 = 0;
              *(undefined8 *)(param_2 + 8) = *(undefined8 *)param_2;
              goto LAB_008d7b3c;
            }
            local_50 = (float)se::Value::toFloat(aVStack_48);
            pfVar1 = *(float **)(param_2 + 8);
            if (pfVar1 < *(float **)(param_2 + 0x10)) {
              *pfVar1 = local_50;
              *(float **)(param_2 + 8) = pfVar1 + 1;
            }
            else {
              std::__ndk1::vector<float,std::__ndk1::allocator<float>>::__push_back_slow_path<float>
                        ((vector<float,std::__ndk1::allocator<float>> *)param_2,&local_50);
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 < local_4c);
        }
        uVar6 = 1;
LAB_008d7b3c:
        se::Value::~Value(aVStack_48);
      }
      goto LAB_008d7af8;
    }
    uVar5 = 0x367;
  }
  else {
    uVar5 = 0x365;
  }
  __android_log_print(6,"jswrapper","jsb: ERROR: File %s: Line: %d, Function: %s\n",
                      "F:/darenneiqian/frameworks/cocos2d-x/cocos/scripting/js-bindings/manual/jsb_conversions.cpp"
                      ,uVar5,"seval_to_std_vector_float");
  __android_log_print(6,"jswrapper","Convert parameter to vector of float failed!");
  uVar6 = 0;
LAB_008d7af8:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

