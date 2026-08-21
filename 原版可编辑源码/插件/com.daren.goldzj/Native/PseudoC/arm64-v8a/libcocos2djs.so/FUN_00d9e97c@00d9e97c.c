
uint FUN_00d9e97c(long *param_1,byte *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  
  lVar13 = param_1[0x4e];
  lVar9 = *(long *)(lVar13 + 0x20);
  if (lVar9 < 0x8000) {
    uVar5 = *(uint *)(lVar13 + 0x28);
    do {
      uVar8 = uVar5 - 1;
      *(uint *)(lVar13 + 0x28) = uVar8;
      bVar1 = (int)uVar5 < 1;
      uVar5 = uVar8;
      if (bVar1) {
        if (*(int *)((long)param_1 + 0x23c) == 0) {
          plVar14 = (long *)param_1[5];
          if ((plVar14[1] == 0) && (iVar4 = (*(code *)plVar14[3])(param_1), iVar4 == 0)) {
            puVar6 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar6 + 5) = 0x19;
            (*(code *)*puVar6)(param_1);
          }
          pbVar2 = (byte *)*plVar14;
          *plVar14 = (long)(pbVar2 + 1);
          plVar14[1] = plVar14[1] + -1;
          uVar10 = (ulong)*pbVar2;
          if (uVar10 == 0xff) {
            do {
              plVar14 = (long *)param_1[5];
              if ((plVar14[1] == 0) && (iVar4 = (*(code *)plVar14[3])(param_1), iVar4 == 0)) {
                puVar6 = (undefined8 *)*param_1;
                *(undefined4 *)(puVar6 + 5) = 0x19;
                (*(code *)*puVar6)(param_1);
              }
              pbVar2 = (byte *)*plVar14;
              *plVar14 = (long)(pbVar2 + 1);
              plVar14[1] = plVar14[1] + -1;
              bVar3 = *pbVar2;
            } while (bVar3 == 0xff);
            if (bVar3 == 0) {
              uVar10 = 0xff;
            }
            else {
              uVar10 = 0;
              *(uint *)((long)param_1 + 0x23c) = (uint)bVar3;
            }
          }
          uVar8 = *(uint *)(lVar13 + 0x28);
        }
        else {
          uVar10 = 0;
        }
        *(uint *)(lVar13 + 0x28) = uVar8 + 8;
        *(ulong *)(lVar13 + 0x18) = uVar10 | *(long *)(lVar13 + 0x18) << 8;
        uVar5 = uVar8 + 8;
        if ((int)uVar8 < -8) {
          uVar5 = uVar8 + 9;
          *(uint *)(lVar13 + 0x28) = uVar5;
          if (uVar5 == 0) {
            *(undefined8 *)(lVar13 + 0x20) = 0x8000;
          }
        }
      }
      lVar9 = *(long *)(lVar13 + 0x20) * 2;
      *(long *)(lVar13 + 0x20) = lVar9;
    } while (lVar9 < 0x8000);
  }
  else {
    uVar5 = *(uint *)(lVar13 + 0x28);
  }
  bVar3 = *param_2;
  uVar8 = (uint)bVar3;
  lVar11 = *(long *)(jpeg_aritab + (ulong)(bVar3 & 0x7f) * 8);
  lVar12 = lVar11 >> 0x10;
  lVar9 = lVar9 - lVar12;
  lVar7 = lVar9 << ((ulong)uVar5 & 0x3f);
  *(long *)(lVar13 + 0x20) = lVar9;
  if (*(long *)(lVar13 + 0x18) < lVar7) {
    if (0x7fff < lVar9) goto LAB_00d9eb48;
    if (lVar9 < lVar12) goto LAB_00d9eb3c;
  }
  else {
    *(long *)(lVar13 + 0x18) = *(long *)(lVar13 + 0x18) - lVar7;
    *(long *)(lVar13 + 0x20) = lVar12;
    if (lVar12 <= lVar9) {
LAB_00d9eb3c:
      *param_2 = bVar3 & 0x80 ^ (byte)lVar11;
      uVar8 = bVar3 ^ 0x80;
      goto LAB_00d9eb48;
    }
  }
  *param_2 = bVar3 & 0x80 ^ (byte)((ulong)lVar11 >> 8);
LAB_00d9eb48:
  return uVar8 >> 7;
}

