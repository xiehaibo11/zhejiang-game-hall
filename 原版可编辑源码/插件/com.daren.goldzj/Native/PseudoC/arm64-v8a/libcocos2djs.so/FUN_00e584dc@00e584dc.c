
ulong FUN_00e584dc(long param_1,long param_2)

{
  short *psVar1;
  ulong uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ushort *puVar12;
  int iVar13;
  ushort *puVar14;
  long local_70;
  uint local_64;
  
  uVar9 = *(undefined8 *)(param_2 + 0x38);
  *(long *)(param_1 + 0x260) = param_2;
  uVar4 = (**(code **)(param_1 + 0x340))(param_1,0x6e616d65,param_2,&local_70);
  local_64 = (uint)uVar4;
  if (local_64 == 0) {
    psVar1 = (short *)(param_1 + 0x238);
    lVar5 = FUN_00e1d4a0(param_2);
    uVar4 = FUN_00e1dd74(param_2,&DAT_0197806c,psVar1);
    local_64 = (uint)uVar4;
    if (local_64 == 0) {
      iVar13 = *(int *)(param_1 + 0x23c);
      uVar10 = lVar5 + 6 + (ulong)(uint)(iVar13 * 0xc);
      uVar2 = local_70 + lVar5;
      if (uVar2 < uVar10) {
        uVar4 = 0x91;
      }
      else {
        uVar3 = 0;
        if (*psVar1 == 1) {
          uVar4 = FUN_00e1bb5c(param_2,uVar10);
          local_64 = (uint)uVar4;
          if (local_64 != 0) {
            return uVar4;
          }
          uVar3 = FUN_00e1bcf8(param_2,&local_64);
          uVar3 = uVar3 & 0xffff;
          *(uint *)(param_1 + 0x250) = uVar3;
          if (local_64 != 0) {
            return (ulong)local_64;
          }
          uVar6 = FUN_00e13bcc(uVar9,0x18,0,uVar3,0,&local_64);
          *(undefined8 *)(param_1 + 600) = uVar6;
          if (local_64 != 0) {
            return (ulong)local_64;
          }
          uVar4 = FUN_00e1d718(param_2,*(int *)(param_1 + 0x250) << 2);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          uVar10 = uVar10 + (uVar3 << 2 | 2);
          local_64 = 0;
          if (*(uint *)(param_1 + 0x250) != 0) {
            puVar12 = *(ushort **)(param_1 + 600);
            puVar14 = puVar12 + (ulong)*(uint *)(param_1 + 0x250) * 0xc;
            local_64 = 0;
            do {
              local_64 = FUN_00e1dd74(param_2,&DAT_0197809c,puVar12);
              uVar4 = lVar5 + (ulong)*(uint *)(param_1 + 0x240) + *(long *)(puVar12 + 4);
              *(ulong *)(puVar12 + 4) = uVar4;
              if ((uVar4 < uVar10) || (uVar2 < uVar4 + *puVar12)) {
                *puVar12 = 0;
              }
              puVar12 = puVar12 + 0xc;
            } while (puVar12 < puVar14);
          }
          FUN_00e1d90c(param_2);
          uVar3 = FUN_00e1bb5c(param_2,lVar5 + 6);
          iVar13 = *(int *)(param_1 + 0x23c);
        }
        local_64 = uVar3;
        uVar6 = FUN_00e13bcc(uVar9,0x20,0,iVar13,0,&local_64);
        *(undefined8 *)(param_1 + 0x248) = uVar6;
        uVar4 = (ulong)local_64;
        if ((local_64 == 0) &&
           (uVar4 = FUN_00e1d718(param_2,*(int *)(param_1 + 0x23c) * 0xc), (int)uVar4 == 0)) {
          iVar13 = *(int *)(param_1 + 0x23c);
          lVar8 = *(long *)(param_1 + 0x248);
          if (iVar13 == 0) {
            uVar7 = 0;
            local_64 = 0;
            lVar11 = lVar8;
          }
          else {
            local_64 = 0;
LAB_00e58774:
            do {
              local_64 = FUN_00e1dd74(param_2,&DAT_01978080,lVar8);
              if ((local_64 == 0) && ((ulong)*(ushort *)(lVar8 + 8) != 0)) {
                uVar4 = lVar5 + (ulong)*(uint *)(param_1 + 0x240) + *(long *)(lVar8 + 0x10);
                *(ulong *)(lVar8 + 0x10) = uVar4;
                if (((uVar10 <= uVar4) && (uVar4 + *(ushort *)(lVar8 + 8) <= uVar2)) &&
                   (((*psVar1 != 1 || (-1 < (short)*(ushort *)(lVar8 + 4))) ||
                    ((uVar3 = *(ushort *)(lVar8 + 4) - 0x8000, uVar3 < *(uint *)(param_1 + 0x250) &&
                     (*(short *)(*(long *)(param_1 + 600) + (ulong)uVar3 * 0x18) != 0)))))) {
                  lVar8 = lVar8 + 0x20;
                  iVar13 = iVar13 + -1;
                  lVar11 = lVar8;
                  if (iVar13 == 0) break;
                  goto LAB_00e58774;
                }
              }
              iVar13 = iVar13 + -1;
              lVar11 = lVar8;
            } while (iVar13 != 0);
            lVar8 = *(long *)(param_1 + 0x248);
            uVar7 = *(undefined4 *)(param_1 + 0x23c);
          }
          uVar9 = FUN_00e13bcc(uVar9,0x20,uVar7,(ulong)(lVar11 - lVar8) >> 5 & 0xffffffff,lVar8,
                               &local_64);
          *(undefined8 *)(param_1 + 0x248) = uVar9;
          *(int *)(param_1 + 0x23c) = (int)((ulong)(lVar11 - lVar8) >> 5);
          FUN_00e1d90c(param_2);
          *(short *)(param_1 + 0x230) = (short)*(undefined4 *)(param_1 + 0x23c);
          uVar4 = (ulong)local_64;
        }
      }
    }
  }
  return uVar4;
}

