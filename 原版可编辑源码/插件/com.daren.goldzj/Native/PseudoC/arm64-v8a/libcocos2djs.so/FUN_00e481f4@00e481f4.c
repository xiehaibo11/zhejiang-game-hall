
int FUN_00e481f4(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  undefined8 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  int local_34;
  
  local_34 = 0;
  uVar9 = *param_3;
  puVar5 = (undefined8 *)FUN_00e1388c(uVar9,0x20,&local_34);
  if (local_34 == 0) {
    pbVar1 = param_1 + 4;
    if (pbVar1 <= param_2) {
      bVar3 = *param_1;
      uVar6 = 3;
      *(byte *)(puVar5 + 1) = bVar3;
      *(ushort *)((long)puVar5 + 10) = *(ushort *)(param_1 + 1) >> 8 | *(ushort *)(param_1 + 1) << 8
      ;
      bVar4 = param_1[3];
      *(byte *)((long)puVar5 + 9) = bVar4;
      if ((bVar4 & 1) != 0) {
        uVar6 = 5;
      }
      lVar2 = (ulong)uVar6 + ((ulong)(bVar4 >> 1) & 1);
      puVar5[2] = pbVar1 + ((ulong)*(uint *)(param_3 + 1) - param_3[0x1d]);
      iVar7 = (int)lVar2;
      *(int *)((long)puVar5 + 0xc) = iVar7;
      if (pbVar1 + lVar2 * (ulong)bVar3 <= param_2) {
        if (bVar3 != 0) {
          uVar6 = (uint)bVar3;
          if ((bVar4 & 1) == 0) {
            *(uint *)(puVar5 + 3) = (uint)param_1[5] | (uint)param_1[4] << 0x10;
            uVar8 = (uint)(pbVar1 + iVar7 * (uVar6 - 1))[1] |
                    (uint)pbVar1[iVar7 * (uVar6 - 1)] << 0x10;
          }
          else {
            uVar8 = (*(uint *)(param_1 + 4) & 0xff00ff00) >> 8 |
                    (*(uint *)(param_1 + 4) & 0xff00ff) << 8;
            *(uint *)(puVar5 + 3) = uVar8 >> 0x10 | uVar8 << 0x10;
            uVar8 = (*(uint *)(pbVar1 + iVar7 * (uVar6 - 1)) & 0xff00ff00) >> 8 |
                    (*(uint *)(pbVar1 + iVar7 * (uVar6 - 1)) & 0xff00ff) << 8;
            uVar8 = uVar8 >> 0x10 | uVar8 << 0x10;
          }
          *(uint *)((long)puVar5 + 0x1c) = uVar8;
          *puVar5 = 0;
          *(undefined8 **)param_3[0x1b] = puVar5;
          param_3[0x1b] = puVar5;
          *(uint *)(param_3 + 0x19) = *(int *)(param_3 + 0x19) + uVar6;
          return 0;
        }
        FUN_00e139fc(uVar9);
        return local_34;
      }
    }
    FUN_00e139fc(uVar9);
    local_34 = 8;
  }
  return local_34;
}

