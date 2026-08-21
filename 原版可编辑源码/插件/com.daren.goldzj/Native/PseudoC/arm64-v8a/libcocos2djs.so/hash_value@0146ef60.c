
/* v8::base::hash_value(unsigned int) */

uint v8::base::hash_value(uint param_1)

{
  uint uVar1;
  
  uVar1 = ~param_1 + param_1 * 0x8000;
  uVar1 = (uVar1 ^ uVar1 >> 0xc) * 5;
  uVar1 = (uVar1 ^ uVar1 >> 4) * 0x809;
  return uVar1 ^ uVar1 >> 0x10;
}

