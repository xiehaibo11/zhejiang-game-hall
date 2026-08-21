
/* v8::base::RandomNumberGenerator::NextInt64() */

long __thiscall v8::base::RandomNumberGenerator::NextInt64(RandomNumberGenerator *this)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar2 = *(ulong *)(this + 8) ^ *(ulong *)(this + 8) << 0x17;
  uVar2 = uVar2 ^ uVar1 ^ uVar1 >> 0x1a ^ uVar2 >> 0x11;
  *(ulong *)(this + 8) = uVar1;
  *(ulong *)(this + 0x10) = uVar2;
  return uVar2 + uVar1;
}

