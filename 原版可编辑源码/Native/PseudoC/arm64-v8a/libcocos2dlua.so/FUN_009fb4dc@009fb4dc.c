
/* WARNING: Removing unreachable block (ram,0x009fb584) */
/* WARNING: Removing unreachable block (ram,0x009fb590) */
/* WARNING: Removing unreachable block (ram,0x009fb59c) */
/* WARNING: Removing unreachable block (ram,0x009fb5a4) */
/* WARNING: Removing unreachable block (ram,0x009fb5cc) */
/* WARNING: Removing unreachable block (ram,0x009fb5f4) */

long FUN_009fb4dc(ulong *param_1,ulong *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  byte *pbVar7;
  
  pbVar2 = (byte *)*param_1;
  if ((byte *)param_1[1] <= pbVar2) {
    return 0;
  }
  if ((char)*pbVar2 < '\0') {
    uVar4 = ((uint)*pbVar2 + (uint)pbVar2[1] * 0x80) - 0x80;
    if ((char)pbVar2[1] < '\0') {
      uVar4 = (uVar4 + (uint)pbVar2[2] * 0x4000) - 0x4000;
      if ((char)pbVar2[2] < '\0') {
        iVar1 = uVar4 + (uint)pbVar2[3] * 0x200000;
        uVar4 = iVar1 - 0x200000;
        if ((char)pbVar2[3] < '\0') {
          uVar5 = (uint)pbVar2[4];
          uVar4 = iVar1 + 0xefe00000;
          if ((char)pbVar2[4] < '\0') {
            uVar5 = (uVar5 + (uint)pbVar2[5] * 0x80) - 0x80;
            if ((char)pbVar2[5] < '\0') {
              uVar5 = (uVar5 + (uint)pbVar2[6] * 0x4000) - 0x4000;
              if ((char)pbVar2[6] < '\0') {
                iVar1 = uVar5 + (uint)pbVar2[7] * 0x200000;
                uVar5 = iVar1 - 0x200000;
                if ((char)pbVar2[7] < '\0') {
                  bVar3 = pbVar2[8];
                  uVar6 = (ulong)bVar3;
                  uVar5 = iVar1 + 0xefe00000;
                  if ((char)bVar3 < '\0') {
                    if ((char)pbVar2[9] < '\0') {
                      return 0;
                    }
                    pbVar7 = pbVar2 + 10;
                    uVar6 = (ulong)(((uint)bVar3 + (uint)pbVar2[9] * 0x80) - 0x80);
                  }
                  else {
                    pbVar7 = pbVar2 + 9;
                  }
                }
                else {
                  uVar6 = 0;
                  pbVar7 = pbVar2 + 8;
                }
              }
              else {
                uVar6 = 0;
                pbVar7 = pbVar2 + 7;
              }
            }
            else {
              uVar6 = 0;
              pbVar7 = pbVar2 + 6;
            }
          }
          else {
            uVar6 = 0;
            pbVar7 = pbVar2 + 5;
          }
        }
        else {
          uVar5 = 0;
          uVar6 = 0;
          pbVar7 = pbVar2 + 4;
        }
      }
      else {
        uVar5 = 0;
        uVar6 = 0;
        pbVar7 = pbVar2 + 3;
      }
    }
    else {
      uVar5 = 0;
      uVar6 = 0;
      pbVar7 = pbVar2 + 2;
    }
    *param_2 = (ulong)uVar4 | (ulong)uVar5 << 0x1c | uVar6 << 0x38;
    *param_1 = (ulong)pbVar7;
    return (long)pbVar7 - (long)pbVar2;
  }
  *param_1 = (ulong)(pbVar2 + 1);
  *param_2 = (long)(char)*pbVar2;
  return 1;
}

