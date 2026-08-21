
/* v8::base::RandomNumberGenerator::NextDouble() */

undefined1  [16] __thiscall v8::base::RandomNumberGenerator::NextDouble(RandomNumberGenerator *this)

{
  ulong uVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar1 = *(ulong *)(this + 0x10);
  uVar2 = *(ulong *)(this + 8) ^ *(ulong *)(this + 8) << 0x17;
  *(ulong *)(this + 8) = uVar1;
  auVar3._0_8_ = (double)(uVar1 >> 0xc | 0x3ff0000000000000) + -1.0;
  *(ulong *)(this + 0x10) = uVar2 ^ uVar1 ^ uVar1 >> 0x1a ^ uVar2 >> 0x11;
  auVar3._8_8_ = 0;
  return auVar3;
}

