
/* rapidjson::internal::DigitGen(rapidjson::internal::DiyFp const&, rapidjson::internal::DiyFp
   const&, unsigned long, char*, int*, int*) */

void rapidjson::internal::DigitGen
               (DiyFp *param_1,DiyFp *param_2,ulong param_3,char *param_4,int *param_5,int *param_6)

{
  ulong uVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  
  uVar11 = *(ulong *)param_2;
  uVar5 = 1;
  lVar12 = *(long *)param_1;
  uVar9 = (ulong)(uint)-*(int *)(param_2 + 8);
                    /* try { // try from 0092518c to 00a251d7 has its CatchHandler @ 0092518c
                       catch() { ... } // from try @ 0092518c with catch @ 0092518c
                       catch() { ... } // from try @ 009251dc with catch @ 0092518c */
  uVar4 = uVar11 >> (uVar9 & 0x3f);
  uVar3 = (uint)uVar4;
  uVar6 = (1L << (uVar9 & 0x3f)) - 1U & uVar11;
  if (9 < uVar3) {
    if (uVar3 < 100) {
      uVar5 = 2;
    }
    else if (uVar3 < 1000) {
      uVar5 = 3;
    }
    else {
                    /* try { // try from 009251d8 to 00a251db has its CatchHandler @ 00925230 */
      if (uVar3 >> 4 < 0x271) {
                    /* try { // try from 009251dc to 00a25243 has its CatchHandler @ 0092518c */
        uVar5 = 4;
      }
      else if (uVar3 < 100000) {
        uVar5 = 5;
      }
      else if (uVar3 < 1000000) {
        uVar5 = 6;
      }
      else if (uVar3 < 10000000) {
        uVar5 = 7;
      }
      else {
        uVar7 = 8;
        if (99999999 < uVar3) {
          uVar7 = 9;
        }
        uVar5 = (ulong)uVar7;
      }
    }
  }
                    /* catch() { ... } // from try @ 009251d8 with catch @ 00925230 */
  uVar8 = uVar11 - lVar12;
                    /* try { // try from 00925244 to 00a25313 has its CatchHandler @ 00925244
                       catch() { ... } // from try @ 00925244 with catch @ 00925244
                       catch() { ... } // from try @ 00925394 with catch @ 00925244 */
  *param_5 = 0;
  uVar3 = (uint)uVar5;
  do {
    if (uVar3 < 10) {
                    /* WARNING: Could not recover jumptable at 0x009252b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&UNK_009252bc + (ulong)(byte)(&DAT_012c8068)[uVar5] * 4))();
      return;
    }
    uVar4 = uVar4 & 0xffffffff;
    iVar2 = *param_5;
    if (iVar2 != 0) {
      *param_5 = iVar2 + 1;
      param_4[iVar2] = '0';
    }
    lVar13 = uVar4 << (uVar9 & 0x3f);
    uVar1 = lVar13 + uVar6;
    uVar3 = (int)uVar5 - 1;
    uVar5 = (ulong)uVar3;
  } while (param_3 < uVar1);
  *param_6 = *param_6 + uVar3;
                    /* catch() { ... } // from try @ 00925314 with catch @ 00925414 */
  if ((uVar1 < uVar8) &&
     (uVar4 = (ulong)(uint)(&DigitGen(rapidjson::internal::DiyFp_const&,rapidjson::internal::DiyFp_const&,unsigned_long,char*,int*,int*)
                             ::kPow10)[uVar3] << (uVar9 & 0x3f), uVar4 <= param_3 - uVar1)) {
    iVar2 = *param_5;
                    /* try { // try from 00925430 to 00a254b7 has its CatchHandler @ 00925430
                       catch() { ... } // from try @ 00925430 with catch @ 00925430
                       catch() { ... } // from try @ 00925538 with catch @ 00925430 */
    lVar10 = -lVar13;
    uVar5 = uVar6 + uVar4 + lVar13;
    do {
      if ((uVar8 <= uVar5) && ((uVar8 - uVar6) + lVar10 <= (lVar12 - uVar11) + uVar5)) {
        return;
      }
      param_4[(long)iVar2 + -1] = param_4[(long)iVar2 + -1] + -1;
      if (uVar8 <= uVar5) {
        return;
      }
      uVar9 = ((param_3 - uVar6) - uVar4) + lVar10;
      lVar10 = lVar10 - uVar4;
      uVar5 = uVar5 + uVar4;
    } while (uVar4 <= uVar9);
  }
                    /* try { // try from 00925504 to 00a25537 has its CatchHandler @ 00925588 */
  return;
}

