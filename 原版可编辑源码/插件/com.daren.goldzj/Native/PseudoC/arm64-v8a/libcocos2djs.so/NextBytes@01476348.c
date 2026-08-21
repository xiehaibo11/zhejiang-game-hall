
/* v8::base::RandomNumberGenerator::NextBytes(void*, unsigned long) */

void __thiscall
v8::base::RandomNumberGenerator::NextBytes(RandomNumberGenerator *this,void *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  for (; param_2 != 0; param_2 = param_2 - 1) {
    uVar1 = *(ulong *)(this + 0x10);
    uVar2 = *(ulong *)(this + 8) ^ *(ulong *)(this + 8) << 0x17;
    uVar2 = uVar2 ^ uVar1 ^ uVar1 >> 0x1a ^ uVar2 >> 0x11;
    *(ulong *)(this + 8) = uVar1;
    *(ulong *)(this + 0x10) = uVar2;
    *(char *)param_1 = (char)(uVar2 + uVar1 >> 0x38);
    param_1 = (undefined1 *)((long)param_1 + 1);
  }
  return;
}

