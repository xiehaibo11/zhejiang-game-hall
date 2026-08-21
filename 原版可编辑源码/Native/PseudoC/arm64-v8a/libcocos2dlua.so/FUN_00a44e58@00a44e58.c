
undefined8 FUN_00a44e58(short *param_1)

{
  uint uVar1;
  
  if (*param_1 != 10) {
    return 0;
  }
  uVar1 = *(byte *)((long)param_1 + 9) & 0xc0 | (uint)*(byte *)(param_1 + 4) << 8;
  if (uVar1 == 0) {
                    /* try { // try from 00a44eb4 to 00b44ee7 has its CatchHandler @ 00a44fb4 */
                    /* try { // try from 00a44ee8 to 00b44efb has its CatchHandler @ 00a44f80 */
                    /* try { // try from 00a44f00 to 00b44f33 has its CatchHandler @ 00a44f84 */
    if ((((((((((((((char)param_1[5] != '\0' || *(byte *)((long)param_1 + 9) != 0) ||
                  *(char *)((long)param_1 + 0xb) != '\0') || (char)param_1[6] != '\0') ||
                *(char *)((long)param_1 + 0xd) != '\0') || (char)param_1[7] != '\0') ||
              *(char *)((long)param_1 + 0xf) != '\0') || (char)param_1[8] != '\0') ||
            *(char *)((long)param_1 + 0x11) != '\0') || (char)param_1[9] != '\0') ||
          *(char *)((long)param_1 + 0x13) != '\0') || (char)param_1[10] != '\0') ||
        *(char *)((long)param_1 + 0x15) != '\0') || (char)param_1[0xb] != '\0') {
      return 0;
    }
    if (*(char *)((long)param_1 + 0x17) == '\x01') {
                    /* try { // try from 00a44f34 to 00b44fcf has its CatchHandler @ 00a44dcc */
      return 3;
    }
    return 0;
  }
  if (uVar1 == 0xfe80) {
    return 1;
  }
  if (uVar1 == 0xfec0) {
    return 2;
  }
  return 0;
}

