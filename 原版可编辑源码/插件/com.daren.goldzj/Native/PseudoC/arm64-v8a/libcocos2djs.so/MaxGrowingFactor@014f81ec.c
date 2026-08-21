
/* v8::internal::MemoryController<v8::internal::GlobalMemoryTrait>::MaxGrowingFactor(unsigned long)
    */

undefined1  [16]
v8::internal::MemoryController<v8::internal::GlobalMemoryTrait>::MaxGrowingFactor(ulong param_1)

{
  undefined1 auVar1 [16];
  
  if (param_1 < 0x8000001) {
    param_1 = 0x8000000;
  }
  if (param_1 >> 0x1e != 0) {
    return ZEXT816(0x4010000000000000);
  }
  auVar1._0_8_ = ((double)(param_1 - 0x8000000) * 0.7) / 939524096.0 + 1.3;
  auVar1._8_8_ = 0;
  return auVar1;
}

