
void FUN_0010654c(undefined8 *param_1)

{
  if ((9 < DAT_00113190) && (((DAT_00113194 + -1) * DAT_00113194 & 1U) != 0)) goto LAB_001065f0;
  while( true ) {
    *(undefined4 *)(param_1 + 2) = 0x98badcfe;
    *(undefined4 *)((long)param_1 + 0x14) = 0x10325476;
    param_1[1] = 0xefcdab8967452301;
    *param_1 = 0;
    if ((DAT_00113190 < 10) || (((DAT_00113194 + -1) * DAT_00113194 & 1U) == 0)) break;
LAB_001065f0:
    *(undefined4 *)(param_1 + 2) = 0x98badcfe;
    *(undefined4 *)((long)param_1 + 0x14) = 0x10325476;
    param_1[1] = 0xefcdab8967452301;
    *param_1 = 0;
  }
  return;
}

