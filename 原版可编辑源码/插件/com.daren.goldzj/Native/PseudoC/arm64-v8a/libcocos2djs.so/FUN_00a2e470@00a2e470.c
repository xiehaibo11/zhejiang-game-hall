
undefined8 FUN_00a2e470(short *param_1)

{
  uint uVar1;
  
  if (*param_1 != 10) {
    return 0;
  }
  uVar1 = *(byte *)((long)param_1 + 9) & 0xc0 | (uint)*(byte *)(param_1 + 4) << 8;
  if (uVar1 == 0) {
                    /* try { // try from 00a2e4c4 to 00b2e51b has its CatchHandler @ 00a2e4c4
                       catch() { ... } // from try @ 00a2e4c4 with catch @ 00a2e4c4
                       catch() { ... } // from try @ 00a2e6b0 with catch @ 00a2e4c4 */
                    /* try { // try from 00a2e51c to 00b2e533 has its CatchHandler @ 00a2e730 */
    if ((((((((((((((char)param_1[5] != '\0' || *(byte *)((long)param_1 + 9) != 0) ||
                  *(char *)((long)param_1 + 0xb) != '\0') || (char)param_1[6] != '\0') ||
                *(char *)((long)param_1 + 0xd) != '\0') || (char)param_1[7] != '\0') ||
              *(char *)((long)param_1 + 0xf) != '\0') || (char)param_1[8] != '\0') ||
            *(char *)((long)param_1 + 0x11) != '\0') || (char)param_1[9] != '\0') ||
          *(char *)((long)param_1 + 0x13) != '\0') || (char)param_1[10] != '\0') ||
        *(char *)((long)param_1 + 0x15) != '\0') || (char)param_1[0xb] != '\0') {
      return 0;
    }
                    /* try { // try from 00a2e548 to 00b2e553 has its CatchHandler @ 00a2e728 */
    if (*(char *)((long)param_1 + 0x17) == '\x01') {
      return 3;
    }
                    /* try { // try from 00a2e554 to 00b2e6af has its CatchHandler @ 00a2e740 */
    return 0;
  }
  if (uVar1 == 0xfe80) {
    return 1;
  }
  if (uVar1 == 0xfec0) {
    return 2;
  }
                    /* try { // try from 00a2e53c to 00b2e547 has its CatchHandler @ 00a2e72c */
  return 0;
}

