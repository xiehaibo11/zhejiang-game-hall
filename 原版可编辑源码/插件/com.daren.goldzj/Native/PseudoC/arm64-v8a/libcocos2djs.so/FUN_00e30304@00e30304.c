
void FUN_00e30304(long param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  ushort *puVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_60;
  int local_54;
  
  lVar7 = *(long *)(param_1 + 0xc0);
  lVar10 = *(long *)(param_1 + 0x4c0);
  uVar8 = *(undefined8 *)(lVar7 + 0x38);
  *(undefined1 *)(lVar10 + 0x30) = 1;
  local_54 = (**(code **)(param_1 + 0x340))(param_1,0x61766172,lVar7,&local_60);
  if ((local_54 == 0) && (local_54 = FUN_00e1d718(lVar7,local_60), local_54 == 0)) {
    lVar3 = FUN_00e1da20(lVar7);
    uVar4 = FUN_00e1da20(lVar7);
    if ((lVar3 == 0x10000) && (uVar4 == **(uint **)(lVar10 + 0x18))) {
      puVar5 = (ushort *)FUN_00e13bcc(uVar8,0x10,0,uVar4,0,&local_54);
      *(ushort **)(lVar10 + 0x38) = puVar5;
      if ((local_54 == 0) && (0 < (long)uVar4)) {
        uVar11 = 0;
        do {
          uVar1 = FUN_00e1d970(lVar7);
          *puVar5 = uVar1;
          if (local_60 < (ulong)uVar1 << 2) {
LAB_00e3047c:
            lVar3 = *(long *)(lVar10 + 0x38);
            if ((int)uVar11 != 0) {
              uVar4 = uVar11 & 0xffffffff;
              lVar9 = (uVar11 & 0xffffffff) * 0x10 + -8;
              do {
                uVar4 = uVar4 - 1;
                FUN_00e139fc(uVar8,*(undefined8 *)(lVar3 + lVar9));
                lVar3 = *(long *)(lVar10 + 0x38);
                *(undefined8 *)(lVar3 + lVar9) = 0;
                lVar9 = lVar9 + -0x10;
              } while (0 < (long)uVar4);
            }
            FUN_00e139fc(uVar8);
            *(undefined8 *)(lVar10 + 0x38) = 0;
            break;
          }
          uVar6 = FUN_00e13bcc(uVar8,0x10,0,uVar1,0,&local_54);
          *(undefined8 *)(puVar5 + 4) = uVar6;
          if (local_54 != 0) goto LAB_00e3047c;
          if (*puVar5 != 0) {
            lVar3 = 0;
            uVar12 = 0;
            do {
              uVar2 = FUN_00e1d970(lVar7);
              *(long *)(*(long *)(puVar5 + 4) + lVar3) =
                   (long)(int)(-(uVar2 >> 0xf & 1) & 0xfffc0000 | (uVar2 & 0xffff) << 2);
              uVar2 = FUN_00e1d970(lVar7);
              uVar12 = uVar12 + 1;
              *(long *)(*(long *)(puVar5 + 4) + lVar3 + 8) =
                   (long)(int)(-(uVar2 >> 0xf & 1) & 0xfffc0000 | (uVar2 & 0xffff) << 2);
              lVar3 = lVar3 + 0x10;
            } while (uVar12 < *puVar5);
          }
          uVar11 = uVar11 + 1;
          puVar5 = puVar5 + 8;
        } while ((long)uVar11 < (long)uVar4);
      }
    }
    FUN_00e1d90c(lVar7);
  }
  return;
}

