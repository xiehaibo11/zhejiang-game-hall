
int FUN_00e4808c(byte *param_1,uint *param_2,undefined8 *param_3)

{
  uint uVar1;
  byte bVar2;
  undefined6 uVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  short sVar12;
  undefined8 uVar14;
  ulong uVar15;
  int local_44;
  undefined4 uVar13;
  
  local_44 = 0;
  if (param_3[0xd] != 0) {
    return 0;
  }
  puVar6 = (uint *)(param_1 + 1);
  if (puVar6 <= param_2) {
    uVar11 = (ulong)*param_1 & 0xf;
    bVar2 = *param_1 >> 4;
    uVar9 = uVar11 + bVar2;
    if ((uint *)((long)puVar6 + uVar9 * 2) <= param_2) {
      puVar4 = (uint *)FUN_00e13bcc(*param_3,4,0,uVar9,0,&local_44);
      if (local_44 != 0) {
        return local_44;
      }
      param_3[0xd] = puVar4;
      param_3[0xb] = puVar4 + uVar11;
      if ((int)uVar9 != 0) {
        uVar1 = (uint)bVar2 + (int)uVar11;
        uVar11 = (ulong)(uVar1 - 1);
        if ((3 < uVar11 + 1) &&
           ((param_1 + uVar11 * 2 + 3 <= puVar4 || (puVar4 + uVar11 + 1 <= puVar6)))) {
          uVar1 = uVar1 & 3;
          lVar8 = (uVar11 + 1) - (ulong)uVar1;
          uVar9 = (ulong)(uint)((int)uVar9 - (int)lVar8);
          lVar7 = (uVar11 + 1) - (ulong)uVar1;
          puVar5 = puVar4;
          puVar10 = puVar6;
          do {
            uVar14 = *(undefined8 *)puVar10;
            lVar7 = lVar7 + -4;
            uVar11 = NEON_rev16(uVar14,1);
            uVar15 = uVar11 & 0xffffffffffff00ff;
            uVar11 = CONCAT44((int)(uVar15 >> 0x20),CONCAT22((short)(uVar11 >> 0x10),(short)uVar15))
                     & 0xffffffff00ffffff;
            uVar11 = CONCAT26((short)(uVar11 >> 0x30),CONCAT24((short)(uVar15 >> 0x20),(int)uVar11))
                     & 0xff00ffffffffff;
            sVar12 = CONCAT11((char)uVar14,(char)uVar11);
            uVar13 = CONCAT13((char)((ulong)uVar14 >> 0x10),CONCAT12((char)(uVar11 >> 0x10),sVar12))
            ;
            uVar3 = CONCAT15((char)((ulong)uVar14 >> 0x20),CONCAT14((char)(uVar11 >> 0x20),uVar13));
            *(ulong *)(puVar5 + 2) =
                 CONCAT44((int)(short)(CONCAT17((char)((ulong)uVar14 >> 0x30),
                                                CONCAT16((char)(uVar11 >> 0x30),uVar3)) >> 0x30),
                          (int)(short)((uint6)uVar3 >> 0x20));
            *(ulong *)puVar5 = CONCAT44((int)(short)((uint)uVar13 >> 0x10),(int)sVar12);
            puVar5 = puVar5 + 4;
            puVar10 = puVar10 + 2;
          } while (lVar7 != 0);
          puVar6 = (uint *)((long)puVar6 + lVar8 * 2);
          puVar4 = puVar4 + lVar8;
          if (uVar1 == 0) {
            return 0;
          }
        }
        do {
          uVar1 = (int)uVar9 - 1;
          uVar9 = (ulong)uVar1;
          *puVar4 = (int)(short)((ushort)(byte)*puVar6 << 8) | (uint)*(byte *)((long)puVar6 + 1);
          puVar6 = (uint *)((long)puVar6 + 2);
          puVar4 = puVar4 + 1;
        } while (uVar1 != 0);
        return 0;
      }
      return 0;
    }
  }
  return 8;
}

