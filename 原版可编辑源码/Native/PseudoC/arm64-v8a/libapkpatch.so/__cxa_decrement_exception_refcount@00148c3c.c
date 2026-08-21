
void __cxa_decrement_exception_refcount(long param_1)

{
  long lVar1;
  
  if ((param_1 != 0) && (lVar1 = FUN_001655f0(0xffffffffffffffff,param_1 + -0x78), lVar1 == 1)) {
    if (*(code **)(param_1 + -0x68) != (code *)0x0) {
      (**(code **)(param_1 + -0x68))(param_1);
    }
    FUN_0015f3cc(param_1 + -0x80);
  }
  return;
}

