
/* std::__ndk1::__itoa::__u64toa(unsigned long, char*) */

char * std::__ndk1::__itoa::__u64toa(ulong param_1,char *param_2)

{
  char *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  undefined2 *puVar14;
  uint uVar15;
  long lVar16;
  ulong uVar17;
  
  if (99999999 < param_1) {
    if (param_1 < 10000000000000000) {
      uVar17 = param_1 % 100000000;
      puVar14 = (undefined2 *)FUN_00148474(param_2,param_1 / 100000000 & 0xffffffff);
      uVar10 = (int)uVar17 + (int)(uVar17 / 10000) * -10000;
      uVar15 = (uint)(uVar17 / 40000) / 0x19;
      uVar9 = (uVar10 >> 2 & 0x3fff) / 0x19;
      uVar2 = (&DAT_0011ed00)[uVar9];
      uVar3 = (&DAT_0011ed00)[(ulong)((int)(uVar17 / 10000) + uVar15 * -100) & 0xffff];
      uVar4 = (&DAT_0011ed00)[(ulong)(uVar10 + uVar9 * -100) & 0xffff];
      *puVar14 = (&DAT_0011ed00)[uVar15];
      puVar14[2] = uVar2;
      puVar14[1] = uVar3;
      puVar14[3] = uVar4;
      pcVar13 = (char *)(puVar14 + 4);
    }
    else {
      uVar17 = param_1 / 10000000000000000;
      uVar15 = (uint)uVar17;
      if (uVar15 < 100) {
        if (uVar15 < 10) {
          *param_2 = (char)uVar17 + '0';
          lVar16 = 1;
        }
        else {
          *(undefined2 *)param_2 = (&DAT_0011ed00)[uVar17];
          lVar16 = 2;
        }
      }
      else if (uVar15 < 1000) {
        uVar2 = (&DAT_0011ed00)[uVar15 % 100];
        *param_2 = (char)(uVar15 / 100) + '0';
        *(undefined2 *)(param_2 + 1) = uVar2;
        lVar16 = 3;
      }
      else {
        uVar2 = (&DAT_0011ed00)[uVar15 / 100];
        *(undefined2 *)(param_2 + 2) = (&DAT_0011ed00)[uVar15 % 100];
        lVar16 = 4;
        *(undefined2 *)param_2 = uVar2;
      }
      uVar17 = (param_1 % 10000000000000000) / 100000000;
      uVar11 = (int)(param_1 % 10000000000000000) + (int)uVar17 * -100000000;
      uVar12 = (int)uVar17 + (int)(uVar17 / 10000) * -10000;
      uVar15 = (uint)(uVar17 / 40000) / 0x19;
      uVar9 = (uVar11 / 40000 & 0x3fff) / 0x19;
      uVar10 = (uVar12 >> 2 & 0x3fff) / 0x19;
      uVar2 = (&DAT_0011ed00)[uVar9];
      uVar3 = (&DAT_0011ed00)[uVar10];
      uVar4 = (&DAT_0011ed00)[(uVar11 % 10000) / 100];
      uVar5 = (&DAT_0011ed00)[(ulong)((int)(uVar17 / 10000) + uVar15 * -100) & 0xffff];
      uVar6 = (&DAT_0011ed00)[(ulong)(uVar11 / 10000 + uVar9 * -100) & 0xffff];
      uVar7 = (&DAT_0011ed00)[(ulong)(uVar12 + uVar10 * -100) & 0xffff];
      uVar8 = (&DAT_0011ed00)[(uVar11 % 10000) % 100];
      pcVar1 = param_2 + lVar16;
      pcVar13 = pcVar1 + 0x10;
      *(undefined2 *)pcVar1 = (&DAT_0011ed00)[uVar15];
      *(undefined2 *)(pcVar1 + 8) = uVar2;
      *(undefined2 *)(pcVar1 + 4) = uVar3;
      *(undefined2 *)(pcVar1 + 0xc) = uVar4;
      *(undefined2 *)(pcVar1 + 2) = uVar5;
      *(undefined2 *)(pcVar1 + 10) = uVar6;
      *(undefined2 *)(pcVar1 + 6) = uVar7;
      *(undefined2 *)(pcVar1 + 0xe) = uVar8;
    }
    return pcVar13;
  }
  pcVar13 = (char *)FUN_00148474(param_2,param_1 & 0xffffffff);
  return pcVar13;
}

