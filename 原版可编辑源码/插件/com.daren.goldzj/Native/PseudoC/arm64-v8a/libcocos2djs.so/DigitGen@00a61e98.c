
/* rapidjson::internal::DigitGen(rapidjson::internal::DiyFp const&, rapidjson::internal::DiyFp
   const&, unsigned long, char*, int*, int*) */

void rapidjson::internal::DigitGen
               (DiyFp *param_1,DiyFp *param_2,ulong param_3,char *param_4,int *param_5,int *param_6)

{
  ulong uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  uint uVar15;
  int iVar16;
  long lVar17;
  
  uVar13 = *(ulong *)param_2;
  uVar9 = 1;
  lVar14 = *(long *)param_1;
  uVar11 = (ulong)(uint)-*(int *)(param_2 + 8);
  uVar7 = 1L << (uVar11 & 0x3f);
                    /* try { // try from 00a61eb0 to 00b61f07 has its CatchHandler @ 00a61eb0
                       catch() { ... } // from try @ 00a61eb0 with catch @ 00a61eb0
                       catch() { ... } // from try @ 00a620a8 with catch @ 00a61eb0 */
  uVar6 = uVar13 >> (uVar11 & 0x3f);
  uVar4 = (uint)uVar6;
  uVar8 = uVar7 - 1 & uVar13;
  if (9 < uVar4) {
    if (uVar4 < 100) {
      uVar9 = 2;
    }
    else if (uVar4 < 1000) {
      uVar9 = 3;
    }
    else {
                    /* try { // try from 00a61f08 to 00b61f0f has its CatchHandler @ 00a62138 */
      if (uVar4 >> 4 < 0x271) {
        uVar9 = 4;
                    /* try { // try from 00a61f14 to 00b61f1b has its CatchHandler @ 00a62130 */
      }
      else {
                    /* try { // try from 00a61f1c to 00b61f2b has its CatchHandler @ 00a62128 */
        if (uVar4 < 100000) {
          uVar9 = 5;
        }
        else if (uVar4 < 1000000) {
          uVar9 = 6;
                    /* try { // try from 00a61f34 to 00b61f6f has its CatchHandler @ 00a62140 */
        }
        else if (uVar4 < 10000000) {
          uVar9 = 7;
        }
        else {
          uVar9 = 8;
          if (99999999 < uVar4) {
            uVar9 = 9;
          }
        }
      }
    }
  }
                    /* try { // try from 00a61f70 to 00b61f7f has its CatchHandler @ 00a62124 */
                    /* try { // try from 00a61f80 to 00b620a7 has its CatchHandler @ 00a62150 */
  uVar10 = uVar13 - lVar14;
  *param_5 = 0;
  do {
    uVar15 = (uint)uVar6;
    uVar4 = 0;
    uVar5 = uVar15;
    switch(uVar9) {
    case 0:
      iVar16 = -uVar9;
      do {
        uVar6 = param_3;
        iVar2 = *param_5;
        uVar13 = uVar8 * 10 >> (uVar11 & 0x3f);
        param_3 = uVar6 * 10;
        if (((uVar13 & 0xff) != 0) || (iVar2 != 0)) {
          *param_5 = iVar2 + 1;
          param_4[iVar2] = (char)uVar13 + '0';
        }
        uVar8 = uVar8 * 10 & uVar7 - 1;
        iVar16 = iVar16 + 1;
      } while (param_3 < uVar8 || param_3 - uVar8 == 0);
      *param_6 = *param_6 - iVar16;
      iVar2 = *param_5;
      if (iVar16 < 9) {
        uVar11 = (ulong)(uint)(&DigitGen(rapidjson::internal::DiyFp_const&,rapidjson::internal::DiyFp_const&,unsigned_long,char*,int*,int*)
                                ::kPow10)[iVar16];
                    /* catch() { ... } // from try @ 00a61f70 with catch @ 00a62124 */
                    /* catch() { ... } // from try @ 00a61f1c with catch @ 00a62128 */
      }
      else {
        uVar11 = 0;
      }
      if (param_3 - uVar8 < uVar7) {
        return;
      }
      uVar13 = uVar11 * uVar10;
      if (uVar13 <= uVar8) {
        return;
      }
      lVar17 = 0;
                    /* try { // try from 00a62204 to 00b6220f has its CatchHandler @ 00a62334 */
      lVar12 = (uVar6 * 10 - uVar7) - uVar8;
      lVar14 = uVar13 - uVar8;
      do {
        uVar8 = uVar7 + uVar8;
                    /* try { // try from 00a62210 to 00b62217 has its CatchHandler @ 00a62330 */
                    /* try { // try from 00a62218 to 00b622f7 has its CatchHandler @ 00a6233c */
        if ((uVar13 <= uVar8) && ((ulong)(lVar14 + lVar17) <= uVar8 - uVar11 * uVar10)) {
          return;
        }
        param_4[(long)iVar2 + -1] = param_4[(long)iVar2 + -1] + -1;
        if (uVar13 <= uVar8) {
          return;
        }
        uVar6 = lVar12 + lVar17;
        lVar17 = lVar17 - uVar7;
      } while (uVar7 <= uVar6);
      return;
    case 1:
      break;
    case 2:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 10);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 10) * -10;
      break;
    case 3:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 100);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 100) * -100;
      break;
    case 4:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 1000);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 1000) * -1000;
      break;
    case 5:
      uVar5 = (uint)((uVar6 & 0xffffffff) / 10000);
      uVar4 = uVar15 + (int)((uVar6 & 0xffffffff) / 10000) * -10000;
      break;
    case 6:
      uVar5 = uVar15 / 100000;
      uVar15 = uVar15 % 100000;
      goto joined_r0x00a62034;
    case 7:
      uVar5 = uVar15 / 1000000;
      uVar15 = uVar15 % 1000000;
      goto joined_r0x00a62034;
    case 8:
      uVar5 = uVar15 / 10000000;
      uVar15 = uVar15 % 10000000;
      goto joined_r0x00a62034;
    case 9:
      uVar5 = uVar15 / 100000000;
                    /* try { // try from 00a620a8 to 00b621af has its CatchHandler @ 00a61eb0 */
      uVar15 = uVar15 % 100000000;
      goto joined_r0x00a62034;
    default:
      iVar16 = *param_5;
      goto joined_r0x00a61fe4;
    }
    uVar15 = uVar4;
joined_r0x00a62034:
    if (uVar5 == 0) {
      iVar16 = *param_5;
joined_r0x00a61fe4:
      if (iVar16 != 0) {
        cVar3 = '\0';
        goto LAB_00a62044;
      }
    }
    else {
      cVar3 = (char)uVar5;
      iVar16 = *param_5;
LAB_00a62044:
      *param_5 = iVar16 + 1;
      param_4[iVar16] = cVar3 + '0';
    }
    lVar17 = (ulong)uVar15 << (uVar11 & 0x3f);
    uVar1 = lVar17 + uVar8;
    uVar9 = uVar9 - 1;
    uVar6 = (ulong)uVar15;
    if (uVar1 <= param_3) {
                    /* catch() { ... } // from try @ 00a61f14 with catch @ 00a62130 */
                    /* catch() { ... } // from try @ 00a61f08 with catch @ 00a62138 */
      *param_6 = *param_6 + uVar9;
                    /* catch() { ... } // from try @ 00a61f34 with catch @ 00a62140 */
                    /* catch() { ... } // from try @ 00a61f80 with catch @ 00a62150 */
      if ((uVar1 < uVar10) &&
         (uVar6 = (ulong)(uint)(&DigitGen(rapidjson::internal::DiyFp_const&,rapidjson::internal::DiyFp_const&,unsigned_long,char*,int*,int*)
                                 ::kPow10)[uVar9] << (uVar11 & 0x3f), uVar6 <= param_3 - uVar1)) {
        iVar16 = *param_5;
        lVar12 = 0;
        uVar7 = uVar8 + uVar6 + lVar17;
        do {
          if ((uVar10 <= uVar7) &&
             (((uVar10 - uVar8) - lVar17) + lVar12 <= (lVar14 - uVar13) + uVar7)) {
            return;
          }
                    /* try { // try from 00a621b0 to 00b62203 has its CatchHandler @ 00a621b0
                       catch() { ... } // from try @ 00a621b0 with catch @ 00a621b0
                       catch() { ... } // from try @ 00a622f8 with catch @ 00a621b0 */
          param_4[(long)iVar16 + -1] = param_4[(long)iVar16 + -1] + -1;
          if (uVar10 <= uVar7) {
            return;
          }
          uVar11 = (((param_3 - uVar8) - uVar6) - lVar17) + lVar12;
          lVar12 = lVar12 - uVar6;
          uVar7 = uVar7 + uVar6;
        } while (uVar6 <= uVar11);
      }
      return;
    }
  } while( true );
}

