
/* se::internal::jsToSeArgs(v8::FunctionCallbackInfo<v8::Value> const&,
   std::__ndk1::vector<se::Value, std::__ndk1::allocator<se::Value> >*) */

void se::internal::jsToSeArgs(FunctionCallbackInfo *param_1,vector *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  Value aVStack_58 [16];
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (0 < *(int *)(param_1 + 0x10)) {
    lVar4 = 0;
    uVar3 = *(undefined8 *)(*(long *)param_1 + 8);
    lVar5 = 0;
    do {
      se::Value::Value(aVStack_58);
      if (lVar5 < *(int *)(param_1 + 0x10)) {
        lVar2 = *(long *)(param_1 + 8) + lVar4;
      }
      else {
        lVar2 = *(long *)(*(long *)param_1 + 8) + 0xa0;
      }
      jsToSeValue(uVar3,lVar2,aVStack_58);
      if (*(Value **)(param_2 + 8) == *(Value **)(param_2 + 0x10)) {
        std::__ndk1::vector<se::Value,std::__ndk1::allocator<se::Value>>::
        __push_back_slow_path<se::Value_const&>
                  ((vector<se::Value,std::__ndk1::allocator<se::Value>> *)param_2,aVStack_58);
      }
      else {
        se::Value::Value(*(Value **)(param_2 + 8),aVStack_58);
        *(long *)(param_2 + 8) = *(long *)(param_2 + 8) + 0x10;
      }
      se::Value::~Value(aVStack_58);
      lVar5 = lVar5 + 1;
      lVar4 = lVar4 + -8;
    } while (lVar5 < *(int *)(param_1 + 0x10));
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

