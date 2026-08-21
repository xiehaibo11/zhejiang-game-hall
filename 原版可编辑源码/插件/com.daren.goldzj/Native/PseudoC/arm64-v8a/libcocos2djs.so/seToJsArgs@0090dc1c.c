
/* se::internal::seToJsArgs(v8::Isolate*, std::__ndk1::vector<se::Value,
   std::__ndk1::allocator<se::Value> > const&, std::__ndk1::vector<v8::Local<v8::Value>,
   std::__ndk1::allocator<v8::Local<v8::Value> > >*) */

void se::internal::seToJsArgs(Isolate *param_1,vector *param_2,vector *param_3)

{
  Value *pVVar1;
  Value *pVVar2;
  long lVar3;
  undefined8 local_50;
  long local_48;
  
  lVar3 = tpidr_el0;
  local_48 = *(long *)(lVar3 + 0x28);
  pVVar2 = *(Value **)(param_2 + 8);
  for (pVVar1 = *(Value **)param_2; pVVar1 != pVVar2; pVVar1 = pVVar1 + 0x10) {
    local_50 = 0;
    seToJsValue(param_1,pVVar1,(Local *)&local_50);
    if (*(undefined8 **)(param_3 + 8) == *(undefined8 **)(param_3 + 0x10)) {
      std::__ndk1::vector<v8::Local<v8::Value>,std::__ndk1::allocator<v8::Local<v8::Value>>>::
      __push_back_slow_path<v8::Local<v8::Value>const&>
                ((vector<v8::Local<v8::Value>,std::__ndk1::allocator<v8::Local<v8::Value>>> *)
                 param_3,(Local *)&local_50);
    }
    else {
      **(undefined8 **)(param_3 + 8) = local_50;
      *(long *)(param_3 + 8) = *(long *)(param_3 + 8) + 8;
    }
  }
  if (*(long *)(lVar3 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

