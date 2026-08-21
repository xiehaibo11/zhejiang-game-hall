
/* v8::base::RandomNumberGenerator::NextInt(int) */

ulong __thiscall v8::base::RandomNumberGenerator::NextInt(RandomNumberGenerator *this,int param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined2 uVar6;
  uint uVar7;
  
  if (0 < param_1) {
    uVar7 = CONCAT13(POPCOUNT((char)((uint)param_1 >> 0x18)),
                     CONCAT12(POPCOUNT((char)((uint)param_1 >> 0x10)),
                              CONCAT11(POPCOUNT((char)((uint)param_1 >> 8)),POPCOUNT((char)param_1))
                             ));
    uVar6 = NEON_uaddlv((ulong)uVar7,1);
    if (CONCAT22((short)(uVar7 >> 0x10),uVar6) < 2) {
      uVar3 = *(ulong *)(this + 0x10);
      uVar4 = *(ulong *)(this + 8) ^ *(ulong *)(this + 8) << 0x17;
      uVar4 = uVar4 ^ uVar3 ^ uVar3 >> 0x1a ^ uVar4 >> 0x11;
      *(ulong *)(this + 8) = uVar3;
      *(ulong *)(this + 0x10) = uVar4;
      return (uVar4 + uVar3 >> 0x21) * (ulong)(uint)param_1 >> 0x1f;
    }
  }
  uVar3 = *(ulong *)(this + 8);
  uVar4 = *(ulong *)(this + 0x10);
  do {
    uVar5 = uVar4;
    uVar3 = uVar3 ^ uVar3 << 0x17;
    uVar4 = uVar3 ^ uVar5 ^ uVar5 >> 0x1a ^ uVar3 >> 0x11;
    iVar2 = 0;
    uVar7 = (uint)(uVar4 + uVar5 >> 0x21);
    if (param_1 != 0) {
      iVar2 = (int)uVar7 / param_1;
    }
    uVar1 = uVar7 - iVar2 * param_1;
    uVar3 = uVar5;
  } while ((int)((uVar1 - uVar7) + 0x7fffffff) < param_1 + -1);
  *(ulong *)(this + 8) = uVar5;
  *(ulong *)(this + 0x10) = uVar4;
  return (ulong)uVar1;
}

