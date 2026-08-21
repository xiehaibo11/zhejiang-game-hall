
void FUN_00e6d75c(uint *param_1,ushort param_2,long param_3,ulong param_4)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar2 = param_1[1];
  if (((((long)(param_4 - param_3) < (long)(int)uVar2) &&
       (uVar3 = (param_3 + (int)uVar2) - 1U & (long)(int)-uVar2,
       uVar3 == ((long)(int)-uVar2 & param_4))) &&
      (uVar3 = (long)uVar3 >> ((ulong)*param_1 & 0x3f), -1 < (long)uVar3)) &&
     (uVar3 < param_1[0x28])) {
    lVar1 = *(long *)(param_1 + 0x14) + (long)((int)((uint)param_2 << 0x10) >> 0x13);
    *(byte *)(lVar1 + -(uVar3 * (long)(int)param_1[0x2a])) =
         *(byte *)(lVar1 + -(uVar3 * (long)(int)param_1[0x2a])) |
         (byte)(0x80 >> (ulong)((int)(short)param_2 & 7));
  }
  return;
}

