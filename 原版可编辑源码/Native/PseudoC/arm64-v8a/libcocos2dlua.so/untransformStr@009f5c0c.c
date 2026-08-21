
/* universe::network::Encryption::untransformStr(unsigned char const*, unsigned long, unsigned
   char**, unsigned long*) */

void __thiscall
universe::network::Encryption::untransformStr
          (Encryption *this,uchar *param_1,ulong param_2,uchar **param_3,ulong *param_4)

{
  bool bVar1;
  byte bVar2;
  uchar *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar8 = 0;
  if (param_1 != (uchar *)0x0) {
    uVar8 = param_2 >> 1;
  }
  *param_4 = uVar8;
  puVar3 = malloc(uVar8 + 1);
  *param_3 = puVar3;
  if (uVar8 == 0) {
    uVar8 = 0;
  }
  else {
    uVar4 = 1;
    uVar5 = 0;
    uVar6 = 1;
    do {
      bVar2 = param_1[uVar4 - 1];
      uVar7 = bVar2 - 0x30;
      if (9 < uVar7) {
        uVar9 = (uint)bVar2;
        if (bVar2 - 0x41 < 0x1a) {
          uVar7 = uVar9 - 0x37;
        }
        else {
          uVar7 = uVar9 - 0x57;
          if (0x19 < uVar9 - 0x61) {
            uVar7 = 0;
          }
        }
      }
      bVar2 = param_1[uVar4];
      uVar10 = (uint)bVar2;
      uVar9 = uVar10 - 0x30;
      if (9 < uVar9) {
        if (uVar10 - 0x41 < 0x1a) {
          uVar9 = uVar10 - 0x37;
        }
        else {
          uVar9 = bVar2 - 0x57;
          if (0x19 < bVar2 - 0x61) {
            uVar9 = 0;
          }
        }
      }
      uVar4 = uVar4 + 2;
      (*param_3)[uVar5] = (char)uVar9 + (char)uVar7 * '\x10';
      uVar8 = *param_4;
      bVar1 = uVar6 < uVar8;
      uVar5 = uVar6;
      uVar6 = (ulong)((int)uVar6 + 1);
    } while (bVar1);
    puVar3 = *param_3;
  }
  puVar3[uVar8] = '\0';
  return;
}

