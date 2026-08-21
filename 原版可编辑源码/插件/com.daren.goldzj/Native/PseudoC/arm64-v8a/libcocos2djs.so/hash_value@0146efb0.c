
/* v8::base::hash_value(unsigned long long) */

long v8::base::hash_value(ulonglong param_1)

{
  ulong uVar1;
  
  uVar1 = ~param_1 + param_1 * 0x200000;
  uVar1 = (uVar1 ^ uVar1 >> 0x18) * 0x109;
  uVar1 = (uVar1 ^ uVar1 >> 0xe) * 0x15;
  return (uVar1 ^ uVar1 >> 0x1c) * 0x80000001;
}

