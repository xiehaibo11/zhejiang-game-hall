
/* v8::base::RandomNumberGenerator::Next(int) */

ulong __thiscall v8::base::RandomNumberGenerator::Next(RandomNumberGenerator *this,int param_1)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar2 = *(ulong *)(this + 8) ^ *(ulong *)(this + 8) << 0x17;
  uVar2 = uVar2 ^ uVar1 ^ uVar1 >> 0x1a ^ uVar2 >> 0x11;
  *(ulong *)(this + 8) = uVar1;
  *(ulong *)(this + 0x10) = uVar2;
  return uVar2 + uVar1 >> ((ulong)(uint)-param_1 & 0x3f) & 0xffffffff;
}

