
/* se::ScriptEngine::addRegisterCallback(bool (*)(se::Object*)) */

void __thiscall
se::ScriptEngine::addRegisterCallback(ScriptEngine *this,_func_bool_Object_ptr *param_1)

{
  long lVar1;
  _func_bool_Object_ptr *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  local_30 = param_1;
  if (*(undefined8 **)(this + 0x10) == *(undefined8 **)(this + 0x18)) {
    std::__ndk1::vector<bool(*)(se::Object*),std::__ndk1::allocator<bool(*)(se::Object*)>>::
    __push_back_slow_path<bool(*const&)(se::Object*)>
              ((vector<bool(*)(se::Object*),std::__ndk1::allocator<bool(*)(se::Object*)>> *)
               (this + 8),(_func_bool_Object_ptr *)&local_30);
  }
  else {
    **(undefined8 **)(this + 0x10) = param_1;
    *(long *)(this + 0x10) = *(long *)(this + 0x10) + 8;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

