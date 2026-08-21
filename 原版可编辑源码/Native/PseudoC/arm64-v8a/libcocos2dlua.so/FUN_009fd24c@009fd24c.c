
/* WARNING: Removing unreachable block (ram,0x009fd2dc) */
/* WARNING: Removing unreachable block (ram,0x009fd2e8) */
/* WARNING: Removing unreachable block (ram,0x009fd2f4) */
/* WARNING: Removing unreachable block (ram,0x009fd2fc) */
/* WARNING: Removing unreachable block (ram,0x009fd324) */
/* WARNING: Removing unreachable block (ram,0x009fd328) */
/* WARNING: Removing unreachable block (ram,0x009fd350) */
/* WARNING: Removing unreachable block (ram,0x009fd358) */

long FUN_009fd24c(ulong *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  pbVar1 = (byte *)*param_1;
  if ((byte *)param_1[1] <= pbVar1) {
    return 0;
  }
  if ((char)*pbVar1 < '\0') {
    iVar2 = (uint)*pbVar1 + (uint)pbVar1[1] * 0x80 + -0x80;
    if ((char)pbVar1[1] < '\0') {
      iVar2 = iVar2 + (uint)pbVar1[2] * 0x4000 + -0x4000;
      if ((char)pbVar1[2] < '\0') {
        iVar2 = iVar2 + (uint)pbVar1[3] * 0x200000 + -0x200000;
        if ((char)pbVar1[3] < '\0') {
          iVar2 = iVar2 + (uint)pbVar1[4] * 0x10000000 + -0x10000000;
          if ((char)pbVar1[4] < '\0') {
            if ((char)pbVar1[5] < '\0') {
              if ((char)pbVar1[6] < '\0') {
                if ((char)pbVar1[7] < '\0') {
                  if ((char)pbVar1[8] < '\0') {
                    if ((char)pbVar1[9] < '\0') {
                      return 0;
                    }
                    pbVar3 = pbVar1 + 10;
                  }
                  else {
                    pbVar3 = pbVar1 + 9;
                  }
                }
                else {
                  pbVar3 = pbVar1 + 8;
                }
              }
              else {
                pbVar3 = pbVar1 + 7;
              }
            }
            else {
              pbVar3 = pbVar1 + 6;
            }
          }
          else {
            pbVar3 = pbVar1 + 5;
          }
        }
        else {
          pbVar3 = pbVar1 + 4;
        }
      }
      else {
        pbVar3 = pbVar1 + 3;
      }
    }
    else {
      pbVar3 = pbVar1 + 2;
    }
    *param_2 = iVar2;
    *param_1 = (ulong)pbVar3;
    return (long)pbVar3 - (long)pbVar1;
  }
  *param_1 = (ulong)(pbVar1 + 1);
  *param_2 = (int)(char)*pbVar1;
  return 1;
}

