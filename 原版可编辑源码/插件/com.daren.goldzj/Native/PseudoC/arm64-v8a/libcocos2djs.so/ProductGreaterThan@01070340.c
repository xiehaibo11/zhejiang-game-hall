
/* v8::internal::MutableBigInt::ProductGreaterThan(unsigned long, unsigned long, unsigned long,
   unsigned long) */

bool v8::internal::MutableBigInt::ProductGreaterThan
               (ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulong uVar3;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_1;
  uVar3 = SUB168(auVar1 * auVar2,8);
  if (param_3 < uVar3) {
    return true;
  }
  return (param_4 <= param_2 * param_1 && param_2 * param_1 - param_4 != 0) && uVar3 == param_3;
}

