
/* WARNING: Removing unreachable block (ram,0x0101f978) */
/* WARNING: Removing unreachable block (ram,0x0101f984) */
/* WARNING: Removing unreachable block (ram,0x0101f994) */
/* WARNING: Removing unreachable block (ram,0x0101f9dc) */
/* WARNING: Removing unreachable block (ram,0x0101f9e4) */
/* WARNING: Removing unreachable block (ram,0x0101f9cc) */
/* WARNING: Removing unreachable block (ram,0x0101f9d4) */
/* WARNING: Removing unreachable block (ram,0x0101f9bc) */
/* WARNING: Removing unreachable block (ram,0x0101f9c4) */
/* WARNING: Removing unreachable block (ram,0x0101f9ac) */
/* WARNING: Removing unreachable block (ram,0x0101f9b4) */
/* WARNING: Recovered jumptable eliminated as dead code */

bool FUN_0101f8f4(byte *param_1,int param_2)

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
                    /* catch() { ... } // from try @ 0101f8c0 with catch @ 0101f928 */
    if (((char)bVar1 < '\0') && (bVar1 < 0xc2)) {
      return false;
    }
    return bVar1 < 0xf5;
  case 2:
    goto switchD_0101f918_caseD_2;
  case 4:
    pbVar2 = pbVar2 + -1;
                    /* try { // try from 0101f944 to 0111f97b has its CatchHandler @ 0101f944
                       catch() { ... } // from try @ 0101f944 with catch @ 0101f944
                       catch() { ... } // from try @ 0101f9b8 with catch @ 0101f944 */
    if (-1 < (char)*pbVar2) {
      return false;
    }
    if (0xbf < *pbVar2) {
      return false;
    }
  }
  if (((char)pbVar2[-1] < '\0') && (pbVar2[-1] < 0xc0)) {
switchD_0101f918_caseD_2:
  }
  return false;
}

