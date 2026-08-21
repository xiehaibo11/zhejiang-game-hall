
/* v8::internal::Isolate::AddBeforeCallEnteredCallback(void (*)(v8::Isolate*)) */

void __thiscall
v8::internal::Isolate::AddBeforeCallEnteredCallback(Isolate *this,_func_void_Isolate_ptr *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _func_void_Isolate_ptr *local_18;
  
  puVar3 = *(undefined8 **)(this + 0xc628);
  puVar2 = *(undefined8 **)(this + 0xc630);
  if ((puVar3 != puVar2) && ((_func_void_Isolate_ptr *)*puVar3 != param_1)) {
    do {
      if (puVar2 + -1 == puVar3) goto LAB_00f56114;
      puVar1 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while ((_func_void_Isolate_ptr *)*puVar1 != param_1);
  }
  if (puVar3 == puVar2) {
LAB_00f56114:
    if (puVar2 == *(undefined8 **)(this + 0xc638)) {
      local_18 = param_1;
      std::__ndk1::vector<void(*)(v8::Isolate*),std::__ndk1::allocator<void(*)(v8::Isolate*)>>::
      __push_back_slow_path<void(*const&)(v8::Isolate*)>
                ((vector<void(*)(v8::Isolate*),std::__ndk1::allocator<void(*)(v8::Isolate*)>> *)
                 (this + 0xc628),(_func_void_Isolate_ptr *)&local_18);
    }
    else {
      *puVar2 = param_1;
      *(long *)(this + 0xc630) = *(long *)(this + 0xc630) + 8;
    }
  }
  return;
}

