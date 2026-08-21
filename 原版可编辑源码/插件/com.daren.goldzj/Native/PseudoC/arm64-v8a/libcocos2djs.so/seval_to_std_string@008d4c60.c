
/* seval_to_std_string(se::Value const&, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >*) */

undefined8 seval_to_std_string(Value *param_1,basic_string *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  lVar1 = tpidr_el0;
  lVar2 = *(long *)(lVar1 + 0x28);
  se::Value::toStringForce();
  if (((byte)*param_2 & 1) == 0) {
    *(undefined2 *)param_2 = 0;
  }
  else {
    **(undefined1 **)(param_2 + 0x10) = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    if (((byte)*param_2 & 1) != 0) {
      operator_delete(*(void **)(param_2 + 0x10));
      *(undefined8 *)param_2 = 0;
    }
  }
  *(undefined8 *)(param_2 + 0x10) = local_30;
  *(undefined8 *)(param_2 + 8) = uStack_38;
  *(undefined8 *)param_2 = local_40;
  if (*(long *)(lVar1 + 0x28) == lVar2) {
    return 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

