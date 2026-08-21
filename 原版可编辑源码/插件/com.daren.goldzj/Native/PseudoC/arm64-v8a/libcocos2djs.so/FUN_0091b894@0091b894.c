
/* WARNING: Removing unreachable block (ram,0x0091b918) */
/* WARNING: Removing unreachable block (ram,0x0091b924) */
/* WARNING: Removing unreachable block (ram,0x0091b934) */
/* WARNING: Removing unreachable block (ram,0x0091b97c) */
/* WARNING: Removing unreachable block (ram,0x0091b984) */
/* WARNING: Removing unreachable block (ram,0x0091b96c) */
/* WARNING: Removing unreachable block (ram,0x0091b974) */
/* WARNING: Removing unreachable block (ram,0x0091b95c) */
/* WARNING: Removing unreachable block (ram,0x0091b964) */
/* WARNING: Removing unreachable block (ram,0x0091b94c) */
/* WARNING: Removing unreachable block (ram,0x0091b954) */
/* WARNING: Recovered jumptable eliminated as dead code */

bool FUN_0091b894(byte *param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  
  if (3 < param_2 - 1U) {
    return false;
  }
  pbVar2 = param_1 + param_2;
  switch(param_2) {
  case 1:
    bVar1 = *param_1;
    if (((char)bVar1 < '\0') && (bVar1 < 0xc2)) {
      return false;
    }
    return bVar1 < 0xf5;
  case 2:
    goto switchD_0091b8b8_caseD_2;
  case 4:
    pbVar2 = pbVar2 + -1;
    if (-1 < (char)*pbVar2) {
      return false;
    }
    if (0xbf < *pbVar2) {
      return false;
    }
  }
  if (((char)pbVar2[-1] < '\0') && (pbVar2[-1] < 0xc0)) {
switchD_0091b8b8_caseD_2:
  }
  return false;
}

