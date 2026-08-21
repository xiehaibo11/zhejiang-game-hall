
/* std_vector_int_to_seval(std::__ndk1::vector<int, std::__ndk1::allocator<int> > const&,
   se::Value*) */

undefined4 std_vector_int_to_seval(vector *param_1,Value *param_2)

{
  int *piVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)se::Object::createArrayObject(*(long *)(param_1 + 8) - *(long *)param_1 >> 2);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  piVar7 = *(int **)param_1;
  piVar1 = *(int **)(param_1 + 8);
  if (piVar7 != piVar1) {
    uVar6 = 0;
    do {
      pOVar3 = local_60;
      se::Value::Value(aVStack_58,*piVar7);
      uVar4 = se::Object::setArrayElement(pOVar3,uVar6,aVStack_58);
      se::Value::~Value(aVStack_58);
      if ((uVar4 & 1) == 0) {
        se::Value::setUndefined(param_2);
        uVar5 = 0;
        goto LAB_008dda84;
      }
      piVar7 = piVar7 + 1;
      uVar6 = uVar6 + 1;
    } while (piVar1 != piVar7);
  }
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  uVar5 = 1;
LAB_008dda84:
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

