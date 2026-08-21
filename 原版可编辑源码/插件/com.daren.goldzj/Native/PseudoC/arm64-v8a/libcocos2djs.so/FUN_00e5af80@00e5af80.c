
void FUN_00e5af80(long param_1,char param_2,uint param_3,short *param_4,ushort *param_5)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  ushort uVar4;
  short sVar5;
  ushort uVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  int local_6c;
  uint local_68;
  int local_64;
  
  bVar3 = param_2 == '\0';
  lVar10 = param_1 + 0x1f8;
  if (bVar3) {
    lVar10 = param_1 + 400;
  }
  puVar11 = *(undefined8 **)(param_1 + 0x388);
  uVar4 = *(ushort *)(lVar10 + 0x26);
  lVar10 = 0x4e8;
  if (bVar3) {
    lVar10 = 0x4e0;
  }
  lVar7 = 0x598;
  if (bVar3) {
    lVar7 = 0x590;
  }
  if (uVar4 != 0) {
    lVar7 = *(long *)(param_1 + lVar7);
    uVar9 = *(undefined8 *)(param_1 + 0xc0);
    uVar1 = *(long *)(param_1 + lVar10) + lVar7;
    if (uVar4 < param_3 || uVar4 == param_3) {
      uVar2 = lVar7 + (ulong)uVar4 * 4;
      if (uVar2 <= uVar1) {
        lVar10 = uVar2 - 4;
        local_64 = FUN_00e1bb5c(uVar9,lVar10);
        if (local_64 == 0) {
          uVar6 = FUN_00e1bcf8(uVar9,&local_64);
          *param_5 = uVar6;
          if (local_64 == 0) {
            if (uVar1 < lVar10 + (ulong)((param_3 - uVar4) * 2 + 4) + 2) {
              *param_4 = 0;
            }
            else {
              local_64 = FUN_00e1bb5c(uVar9);
              if (local_64 == 0) {
                sVar5 = FUN_00e1bcf8(uVar9,&local_64);
                *param_4 = sVar5;
              }
            }
            goto joined_r0x00e5b15c;
          }
        }
      }
    }
    else if ((lVar7 + (ulong)(param_3 << 2) + 4 <= uVar1) &&
            (local_64 = FUN_00e1bb5c(uVar9), local_64 == 0)) {
      uVar4 = FUN_00e1bcf8(uVar9,&local_64);
      *param_5 = uVar4;
      if (local_64 == 0) {
        sVar5 = FUN_00e1bcf8(uVar9,&local_64);
        *param_4 = sVar5;
        if (local_64 == 0) goto joined_r0x00e5b15c;
      }
    }
  }
  *param_4 = 0;
  *param_5 = 0;
joined_r0x00e5b15c:
  if (puVar11 != (undefined8 *)0x0) {
    local_68 = (uint)*param_5;
    local_6c = (int)*param_4;
    if (param_2 == '\0') {
      if ((code *)*puVar11 != (code *)0x0) {
        (*(code *)*puVar11)(param_1,param_3,&local_68);
      }
      pcVar8 = (code *)puVar11[1];
    }
    else {
      if ((code *)puVar11[3] != (code *)0x0) {
        (*(code *)puVar11[3])(param_1,param_3,&local_68);
      }
      pcVar8 = (code *)puVar11[4];
    }
    if (pcVar8 != (code *)0x0) {
      (*pcVar8)(param_1,param_3,&local_6c);
    }
    *param_5 = (ushort)local_68;
    *param_4 = (short)local_6c;
  }
  return;
}

