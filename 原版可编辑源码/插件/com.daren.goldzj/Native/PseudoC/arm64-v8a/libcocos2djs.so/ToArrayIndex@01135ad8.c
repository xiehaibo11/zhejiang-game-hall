
/* v8::internal::String::ToArrayIndex(unsigned long) */

uint v8::internal::String::ToArrayIndex(ulong param_1)

{
  uint uVar1;
  ulong uVar2;
  uint local_1c;
  ulong local_18;
  
  uVar1 = *(uint *)(param_1 + 3);
  if ((uVar1 & 0xc0000003) == 0) {
    uVar1 = uVar1 >> 3 & 0xffffff;
  }
  else {
    if ((uVar1 & 3) != 2) {
      local_18 = param_1;
      uVar2 = SlowAsArrayIndex((String *)&local_18,&local_1c);
      if ((int)local_1c < 0) {
        local_1c = 0xffffffff;
      }
      if ((uVar2 & 1) != 0) {
        return local_1c;
      }
    }
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

