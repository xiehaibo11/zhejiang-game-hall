
/* v8::internal::double_pack(unsigned long, unsigned long, unsigned long) */

undefined1  [16] v8::internal::double_pack(ulong param_1,ulong param_2,ulong param_3)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_2 << 0x34 | param_1 << 0x3f | param_3;
  return auVar1;
}

