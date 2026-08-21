
undefined8
spSkeletonBinary_readSkin
          (undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,undefined4 param_5
          )

{
  undefined8 uVar1;
  void *__ptr;
  long lVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
                    /* catch() { ... } // from try @ 00d6293c with catch @ 00d62c3c */
                    /* catch() { ... } // from try @ 00d62914 with catch @ 00d62c40 */
                    /* catch() { ... } // from try @ 00d62884 with catch @ 00d62c44 */
                    /* catch() { ... } // from try @ 00d627f8 with catch @ 00d62c48 */
                    /* catch() { ... } // from try @ 00d627e0 with catch @ 00d62c4c */
                    /* catch() { ... } // from try @ 00d627bc with catch @ 00d62c50 */
                    /* catch() { ... } // from try @ 00d62638 with catch @ 00d62c54 */
                    /* catch() { ... } // from try @ 00d6261c with catch @ 00d62c58 */
  pbVar3 = (byte *)*param_2;
                    /* catch() { ... } // from try @ 00d62600 with catch @ 00d62c5c */
                    /* catch() { ... } // from try @ 00d625e4 with catch @ 00d62c60 */
                    /* catch() { ... } // from try @ 00d6249c with catch @ 00d62c64 */
  *param_2 = (long)(pbVar3 + 1);
                    /* catch() { ... } // from try @ 00d62490 with catch @ 00d62c74 */
  uVar6 = *pbVar3 & 0x7f;
  if ((char)*pbVar3 < '\0') {
                    /* catch() { ... } // from try @ 00d62988 with catch @ 00d62c84 */
    *param_2 = (long)(pbVar3 + 2);
                    /* catch() { ... } // from try @ 00d628f8 with catch @ 00d62c88 */
                    /* catch() { ... } // from try @ 00d628e0 with catch @ 00d62c8c */
    uVar6 = uVar6 | (pbVar3[1] & 0x7f) << 7;
                    /* catch() { ... } // from try @ 00d628c8 with catch @ 00d62c90 */
    if ((char)pbVar3[1] < '\0') {
                    /* catch() { ... } // from try @ 00d6286c with catch @ 00d62c94 */
                    /* catch() { ... } // from try @ 00d625c4 with catch @ 00d62c98 */
      *param_2 = (long)(pbVar3 + 3);
                    /* catch() { ... } // from try @ 00d624e0 with catch @ 00d62c9c */
                    /* catch() { ... } // from try @ 00d624c4 with catch @ 00d62ca0 */
      uVar6 = uVar6 | (pbVar3[2] & 0x7f) << 0xe;
                    /* catch() { ... } // from try @ 00d624a8 with catch @ 00d62ca4 */
      if ((char)pbVar3[2] < '\0') {
                    /* catch() { ... } // from try @ 00d629e0 with catch @ 00d62ca8
                       catch() { ... } // from try @ 00d62a70 with catch @ 00d62ca8 */
                    /* catch() { ... } // from try @ 00d629a4 with catch @ 00d62cac */
        *param_2 = (long)(pbVar3 + 4);
        uVar6 = uVar6 | (pbVar3[3] & 0x7f) << 0x15;
        if ((char)pbVar3[3] < '\0') {
          *param_2 = (long)(pbVar3 + 5);
          uVar6 = uVar6 | (uint)pbVar3[4] << 0x1c;
        }
      }
    }
  }
  if (uVar6 == 0) {
    uVar1 = 0;
  }
  else {
                    /* try { // try from 00d62cd0 to 00e62daf has its CatchHandler @ 00d62cd0
                       catch() { ... } // from try @ 00d62cd0 with catch @ 00d62cd0
                       catch() { ... } // from try @ 00d63088 with catch @ 00d62cd0 */
    uVar1 = spSkin_create(param_3);
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        pbVar4 = (byte *)*param_2;
        pbVar3 = pbVar4 + 1;
        *param_2 = (long)pbVar3;
        uVar5 = *pbVar4 & 0x7f;
        if ((char)*pbVar4 < '\0') {
          pbVar3 = pbVar4 + 2;
          *param_2 = (long)pbVar3;
          uVar5 = uVar5 | (pbVar4[1] & 0x7f) << 7;
          if ((char)pbVar4[1] < '\0') {
            pbVar3 = pbVar4 + 3;
            *param_2 = (long)pbVar3;
            uVar5 = uVar5 | (pbVar4[2] & 0x7f) << 0xe;
            if ((char)pbVar4[2] < '\0') {
              pbVar3 = pbVar4 + 4;
              *param_2 = (long)pbVar3;
              uVar5 = uVar5 | (pbVar4[3] & 0x7f) << 0x15;
              if ((char)pbVar4[3] < '\0') {
                pbVar3 = pbVar4 + 5;
                *param_2 = (long)pbVar3;
                uVar5 = uVar5 | (uint)pbVar4[4] << 0x1c;
              }
            }
          }
        }
        *param_2 = (long)(pbVar3 + 1);
        uVar8 = *pbVar3 & 0x7f;
        if ((char)*pbVar3 < '\0') {
          *param_2 = (long)(pbVar3 + 2);
          uVar8 = uVar8 | (pbVar3[1] & 0x7f) << 7;
          if ((char)pbVar3[1] < '\0') {
            *param_2 = (long)(pbVar3 + 3);
            uVar8 = uVar8 | (pbVar3[2] & 0x7f) << 0xe;
            if ((char)pbVar3[2] < '\0') {
              *param_2 = (long)(pbVar3 + 4);
              uVar8 = uVar8 | (pbVar3[3] & 0x7f) << 0x15;
              if ((char)pbVar3[3] < '\0') {
                    /* try { // try from 00d62db0 to 00e62dbb has its CatchHandler @ 00d632c8 */
                *param_2 = (long)(pbVar3 + 5);
                uVar8 = uVar8 | (uint)pbVar3[4] << 0x1c;
              }
            }
          }
        }
                    /* try { // try from 00d62dbc to 00e62dc7 has its CatchHandler @ 00d632b8 */
        if (0 < (int)uVar8) {
          do {
            __ptr = (void *)readString(param_2);
                    /* try { // try from 00d62df8 to 00e62e03 has its CatchHandler @ 00d63188 */
            lVar2 = spSkeletonBinary_readAttachment
                              (param_1,param_2,uVar1,uVar5,__ptr,param_4,param_5);
            if (lVar2 != 0) {
              spSkin_addAttachment(uVar1,uVar5,__ptr,lVar2);
            }
                    /* try { // try from 00d62dc8 to 00e62dd3 has its CatchHandler @ 00d632a8 */
            _spFree(__ptr);
            uVar8 = uVar8 - 1;
                    /* try { // try from 00d62dd4 to 00e62ddf has its CatchHandler @ 00d63298 */
          } while (uVar8 != 0);
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 != uVar6);
    }
  }
                    /* try { // try from 00d62e28 to 00e62e33 has its CatchHandler @ 00d63184 */
  return uVar1;
}

