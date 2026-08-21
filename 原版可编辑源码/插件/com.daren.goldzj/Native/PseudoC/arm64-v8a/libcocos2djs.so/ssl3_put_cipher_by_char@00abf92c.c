
undefined8 ssl3_put_cipher_by_char(long param_1,undefined1 *param_2)

{
  uint uVar1;
  
  if (param_2 != (undefined1 *)0x0) {
    uVar1 = *(uint *)(param_1 + 0x10);
    if (uVar1 >> 0x18 != 3) {
      return 0;
    }
    param_2[1] = (char)uVar1;
    *param_2 = (char)(uVar1 >> 8);
  }
  return 2;
}

