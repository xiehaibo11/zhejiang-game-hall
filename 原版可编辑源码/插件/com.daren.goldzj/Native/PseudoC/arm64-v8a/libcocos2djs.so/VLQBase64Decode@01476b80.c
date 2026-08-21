
/* v8::base::VLQBase64Decode(char const*, unsigned long, unsigned long*) */

uint v8::base::VLQBase64Decode(char *param_1,ulong param_2,ulong *param_3)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar3 = *param_3;
  uVar2 = 0;
  uVar4 = 0;
  if (uVar3 < param_2) {
    while (bVar1 = param_1[uVar3], -1 < (char)bVar1) {
      uVar5 = (uint)(char)(&DAT_01a3dab1)[bVar1];
      if (uVar5 == 0xffffffff) {
        return 0x80000000;
      }
      if ((0x1f < uVar4 + 5) && (3 < (ulong)bVar1 - 0x41)) {
        return 0x80000000;
      }
      uVar3 = uVar3 + 1;
      uVar2 = ((uVar5 & 0x1f) << (ulong)((uint)uVar4 & 0x1f)) + uVar2;
      *param_3 = uVar3;
      if ((uVar5 >> 5 & 1) == 0) {
        uVar5 = -(uVar2 >> 1);
        if ((uVar2 & 1) == 0) {
          uVar5 = uVar2 >> 1;
        }
        return uVar5;
      }
      uVar4 = uVar4 + 5;
      if (param_2 <= uVar3) {
        return 0x80000000;
      }
    }
  }
  return 0x80000000;
}

