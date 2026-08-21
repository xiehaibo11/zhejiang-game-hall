
/* std_vector_string_to_seval(std::__ndk1::vector<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >,
   std::__ndk1::allocator<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > > > const&, se::Value*) */

undefined4 std_vector_string_to_seval(vector *param_1,Value *param_2)

{
  basic_string *pbVar1;
  long lVar2;
  Object *pOVar3;
  ulong uVar4;
  undefined4 uVar5;
  basic_string *pbVar6;
  uint uVar7;
  Object *local_60;
  Value aVStack_58 [16];
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  pOVar3 = (Object *)
           se::Object::createArrayObject
                     ((*(long *)(param_1 + 8) - *(long *)param_1 >> 3) * -0x5555555555555555);
  se::HandleObject::HandleObject((HandleObject *)&local_60,pOVar3);
  pbVar6 = *(basic_string **)param_1;
  pbVar1 = *(basic_string **)(param_1 + 8);
  if (pbVar6 != pbVar1) {
    uVar7 = 0;
    do {
      pOVar3 = local_60;
      se::Value::Value(aVStack_58,pbVar6);
      uVar4 = se::Object::setArrayElement(pOVar3,uVar7,aVStack_58);
      se::Value::~Value(aVStack_58);
      if ((uVar4 & 1) == 0) {
        se::Value::setUndefined(param_2);
        uVar5 = 0;
        goto LAB_008dd964;
      }
      pbVar6 = pbVar6 + 0x18;
      uVar7 = uVar7 + 1;
    } while (pbVar1 != pbVar6);
  }
  se::Value::setObject(param_2,(HandleObject *)&local_60,false);
  uVar5 = 1;
LAB_008dd964:
  se::HandleObject::~HandleObject((HandleObject *)&local_60);
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

