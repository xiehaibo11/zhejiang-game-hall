
/* std_vector_float_to_seval(std::__ndk1::vector<float, std::__ndk1::allocator<float> > const&,
   se::Value*) */

undefined4 std_vector_float_to_seval(vector *param_1,Value *param_2)

{
  float *pfVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  float *pfVar7;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)se::Object::createArrayObject(*(long *)(param_1 + 8) - *(long *)param_1 >> 2);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  pfVar7 = *(float **)param_1;
  pfVar1 = *(float **)(param_1 + 8);
  if (pfVar7 != pfVar1) {
    uVar6 = 0;
    do {
      pOVar3 = local_60;
      se::Value::Value(aVStack_58,*pfVar7);
      uVar4 = se::Object::setArrayElement(pOVar3,uVar6,aVStack_58);
      se::Value::~Value(aVStack_58);
      if ((uVar4 & 1) == 0) {
        se::Value::setUndefined(param_2);
        uVar5 = 0;
        goto LAB_008ddcc4;
      }
      pfVar7 = pfVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (pfVar1 != pfVar7);
  }
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  uVar5 = 1;
LAB_008ddcc4:
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

