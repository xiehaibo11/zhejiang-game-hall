
/* se::Class::defineFinalizeFunction(void (*)(void*)) */

undefined8 __thiscall se::Class::defineFinalizeFunction(Class *this,_func_void_void_ptr *param_1)

{
  *(_func_void_void_ptr **)(this + 0x40) = param_1;
  return 1;
}

