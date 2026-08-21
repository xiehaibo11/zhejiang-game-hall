
void pvmp3_mpeg2_get_scale_factors
               (undefined4 *param_1,long param_2,int param_3,int param_4,undefined8 param_5,
               long param_6)

{
  undefined4 *puVar1;
  long lVar2;
  undefined4 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
                    /* catch() { ... } // from try @ 00ec2030 with catch @ 00ec21b8 */
  pvmp3_mpeg2_get_scale_data(param_2,param_3,param_4,param_5,param_6 + 0xe0);
  if (*(int *)(param_2 + (long)param_4 * 0xa0 + (long)param_3 * 0x48 + 0x28) != 0) {
    if (*(int *)(param_2 + (long)param_4 * 0xa0 + (long)param_3 * 0x48 + 0x2c) == 2) {
      if (*(int *)(param_2 + (long)param_4 * 0xa0 + (long)param_3 * 0x48 + 0x30) == 0) {
        lVar2 = 0;
        puVar3 = (undefined4 *)(param_6 + 0xe8);
        do {
          puVar1 = (undefined4 *)((long)param_1 + lVar2 + 0x90);
          lVar2 = lVar2 + 4;
          puVar1[-0xd] = puVar3[-2];
          *puVar1 = puVar3[-1];
          puVar1[0xd] = *puVar3;
          puVar3 = puVar3 + 3;
        } while (lVar2 != 0x30);
      }
      else {
        *param_1 = *(undefined4 *)(param_6 + 0xe0);
        param_1[1] = *(undefined4 *)(param_6 + 0xe4);
        param_1[2] = *(undefined4 *)(param_6 + 0xe8);
        param_1[3] = *(undefined4 *)(param_6 + 0xec);
        param_1[4] = *(undefined4 *)(param_6 + 0xf0);
        param_1[5] = *(undefined4 *)(param_6 + 0xf4);
                    /* catch() { ... } // from try @ 00ec2294 with catch @ 00ec2268 */
        param_1[0x1a] = *(undefined4 *)(param_6 + 0xf8);
        param_1[0x27] = *(undefined4 *)(param_6 + 0xfc);
        param_1[0x34] = *(undefined4 *)(param_6 + 0x100);
        param_1[0x1b] = *(undefined4 *)(param_6 + 0x104);
        param_1[0x28] = *(undefined4 *)(param_6 + 0x108);
                    /* try { // try from 00ec228c to 00fc2293 has its CatchHandler @ 00ec22d8 */
        param_1[0x35] = *(undefined4 *)(param_6 + 0x10c);
                    /* try { // try from 00ec2294 to 00fc22f3 has its CatchHandler @ 00ec2268 */
        param_1[0x1c] = *(undefined4 *)(param_6 + 0x110);
        param_1[0x29] = *(undefined4 *)(param_6 + 0x114);
        param_1[0x36] = *(undefined4 *)(param_6 + 0x118);
        param_1[0x1d] = *(undefined4 *)(param_6 + 0x11c);
        param_1[0x2a] = *(undefined4 *)(param_6 + 0x120);
        param_1[0x37] = *(undefined4 *)(param_6 + 0x124);
        param_1[0x1e] = *(undefined4 *)(param_6 + 0x128);
        param_1[0x2b] = *(undefined4 *)(param_6 + 300);
                    /* catch() { ... } // from try @ 00ec228c with catch @ 00ec22d8 */
        param_1[0x38] = *(undefined4 *)(param_6 + 0x130);
        param_1[0x1f] = *(undefined4 *)(param_6 + 0x134);
        param_1[0x2c] = *(undefined4 *)(param_6 + 0x138);
        param_1[0x39] = *(undefined4 *)(param_6 + 0x13c);
                    /* try { // try from 00ec22f4 to 00fc2657 has its CatchHandler @ 00ec22f4
                       catch() { ... } // from try @ 00ec22f4 with catch @ 00ec22f4
                       catch() { ... } // from try @ 00ec2664 with catch @ 00ec22f4
                       catch() { ... } // from try @ 00ec26e0 with catch @ 00ec22f4 */
        param_1[0x20] = *(undefined4 *)(param_6 + 0x140);
        param_1[0x2d] = *(undefined4 *)(param_6 + 0x144);
        param_1[0x3a] = *(undefined4 *)(param_6 + 0x148);
        param_1[0x21] = *(undefined4 *)(param_6 + 0x14c);
        param_1[0x2e] = *(undefined4 *)(param_6 + 0x150);
        param_1[0x3b] = *(undefined4 *)(param_6 + 0x154);
        param_1[0x22] = *(undefined4 *)(param_6 + 0x158);
        param_1[0x2f] = *(undefined4 *)(param_6 + 0x15c);
        param_1[0x3c] = *(undefined4 *)(param_6 + 0x160);
        *(undefined8 *)(param_6 + 0x78) = *(undefined8 *)(param_6 + 0x6c);
        *(undefined8 *)(param_6 + 0x70) = *(undefined8 *)(param_6 + 100);
        *(undefined8 *)(param_6 + 0x88) = *(undefined8 *)(param_6 + 0x7c);
        *(undefined8 *)(param_6 + 0x80) = *(undefined8 *)(param_6 + 0x74);
        uVar5 = *(undefined8 *)(param_6 + 0x4c);
        uVar4 = *(undefined8 *)(param_6 + 0x44);
        *(undefined4 *)(param_6 + 0x4c) = *(undefined4 *)(param_6 + 0x40);
        *(undefined8 *)(param_6 + 0x44) = *(undefined8 *)(param_6 + 0x38);
        *(undefined8 *)(param_6 + 0x58) = uVar5;
        *(undefined8 *)(param_6 + 0x50) = uVar4;
        *(undefined8 *)(param_6 + 0x68) = *(undefined8 *)(param_6 + 0x5c);
        *(undefined8 *)(param_6 + 0x60) = *(undefined8 *)(param_6 + 0x54);
        *(undefined8 *)(param_6 + 0x3c) = *(undefined8 *)(param_6 + 0x30);
        *(undefined8 *)(param_6 + 0x34) = *(undefined8 *)(param_6 + 0x28);
        *(undefined8 *)(param_6 + 0x2c) = *(undefined8 *)(param_6 + 0x20);
        *(undefined8 *)(param_6 + 0x24) = *(undefined8 *)(param_6 + 0x18);
      }
      param_1[0x23] = 0;
      param_1[0x30] = 0;
      param_1 = param_1 + 0x3d;
      goto LAB_00ec2468;
    }
  }
  *param_1 = *(undefined4 *)(param_6 + 0xe0);
  param_1[1] = *(undefined4 *)(param_6 + 0xe4);
  param_1[2] = *(undefined4 *)(param_6 + 0xe8);
  param_1[3] = *(undefined4 *)(param_6 + 0xec);
  param_1[4] = *(undefined4 *)(param_6 + 0xf0);
  param_1[5] = *(undefined4 *)(param_6 + 0xf4);
  param_1[6] = *(undefined4 *)(param_6 + 0xf8);
  param_1[7] = *(undefined4 *)(param_6 + 0xfc);
  param_1[8] = *(undefined4 *)(param_6 + 0x100);
  param_1[9] = *(undefined4 *)(param_6 + 0x104);
  param_1[10] = *(undefined4 *)(param_6 + 0x108);
  param_1[0xb] = *(undefined4 *)(param_6 + 0x10c);
  param_1[0xc] = *(undefined4 *)(param_6 + 0x110);
  param_1[0xd] = *(undefined4 *)(param_6 + 0x114);
  param_1[0xe] = *(undefined4 *)(param_6 + 0x118);
  param_1[0xf] = *(undefined4 *)(param_6 + 0x11c);
  param_1[0x10] = *(undefined4 *)(param_6 + 0x120);
  param_1[0x11] = *(undefined4 *)(param_6 + 0x124);
  param_1[0x12] = *(undefined4 *)(param_6 + 0x128);
  param_1[0x13] = *(undefined4 *)(param_6 + 300);
  param_1[0x14] = *(undefined4 *)(param_6 + 0x130);
  param_1[0x15] = 0;
  param_1 = param_1 + 0x16;
LAB_00ec2468:
  *param_1 = 0;
  return;
}

