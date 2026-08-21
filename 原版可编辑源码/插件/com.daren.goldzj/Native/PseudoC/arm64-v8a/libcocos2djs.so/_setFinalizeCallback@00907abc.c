
/* se::Object::_setFinalizeCallback(void (*)(void*)) */

void __thiscall se::Object::_setFinalizeCallback(Object *this,_func_void_void_ptr *param_1)

{
  *(_func_void_void_ptr **)(this + 0x48) = param_1;
  return;
}

