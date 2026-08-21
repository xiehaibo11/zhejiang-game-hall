
/* std::__ndk1::__num_get_base::__get_base(std::__ndk1::ios_base&) */

undefined8 std::__ndk1::__num_get_base::__get_base(ios_base *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 8) & 0x4a;
  if (uVar1 == 0) {
    return 0;
  }
  if (uVar1 != 0x40) {
    if (uVar1 == 8) {
      return 0x10;
    }
    return 10;
  }
  return 8;
}

