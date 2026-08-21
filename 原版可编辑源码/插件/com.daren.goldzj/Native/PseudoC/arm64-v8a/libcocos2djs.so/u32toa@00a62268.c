
/* rapidjson::internal::u32toa(unsigned int, char*) */

char * rapidjson::internal::u32toa(uint param_1,char *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  long lVar10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  
  if (0x270 < param_1 >> 4) {
    if (99999999 < param_1) {
      uVar6 = param_1 % 100000000;
      if (param_1 < 1000000000) {
        pcVar9 = param_2 + 1;
        *param_2 = (char)(param_1 / 100000000) + '0';
      }
      else {
                    /* try { // try from 00a623b4 to 00b623cb has its CatchHandler @ 00a6266c */
        lVar10 = (ulong)(param_1 / 100000000) * 2;
        cVar1 = (&GetDigitsLut()::cDigitsLut)[(uint)lVar10 | 1];
        pcVar9 = param_2 + 2;
        *param_2 = (&GetDigitsLut()::cDigitsLut)[lVar10];
        param_2[1] = cVar1;
      }
      uVar14 = (ulong)uVar6 / 500000 & 0x3ffe;
      uVar11 = (ulong)(uVar6 / 10000 + (uVar6 / 1000000) * -100);
      uVar15 = (ulong)(uVar6 % 10000) / 100;
      *pcVar9 = (&GetDigitsLut()::cDigitsLut)[uVar14];
      lVar10 = (ulong)((uVar6 % 10000) % 100) * 2;
      cVar1 = (&GetDigitsLut()::cDigitsLut)[uVar11 * 2];
      cVar2 = (&GetDigitsLut()::cDigitsLut)[uVar11 << 1 | 1];
      cVar3 = (&GetDigitsLut()::cDigitsLut)[uVar15 * 2];
      cVar4 = (&GetDigitsLut()::cDigitsLut)[uVar15 << 1 | 1];
      pcVar9[1] = (&GetDigitsLut()::cDigitsLut)[uVar14 | 1];
      cVar5 = (&GetDigitsLut()::cDigitsLut)[lVar10];
      pcVar8 = pcVar9 + 7;
      pcVar12 = &GetDigitsLut()::cDigitsLut + ((uint)lVar10 | 1);
      pcVar7 = pcVar9 + 8;
      pcVar9[2] = cVar1;
      pcVar9[3] = cVar2;
      pcVar9[4] = cVar3;
      pcVar9[5] = cVar4;
      pcVar9[6] = cVar5;
      goto LAB_00a62528;
    }
    uVar11 = (ulong)param_1 / 10000 & 0xffff;
                    /* try { // try from 00a622f8 to 00b62357 has its CatchHandler @ 00a621b0 */
    uVar14 = (ulong)param_1 / 500000 & 0x3ffe;
    lVar13 = (ulong)(uint)((int)uVar11 + (int)(uVar11 / 100) * -100) * 2;
    uVar11 = ((ulong)(param_1 % 10000) / 100) * 2;
                    /* catch() { ... } // from try @ 00a62210 with catch @ 00a62330 */
    lVar10 = (ulong)((param_1 % 10000) % 100) * 2;
                    /* catch() { ... } // from try @ 00a62204 with catch @ 00a62334 */
    if (param_1 < 10000000) {
                    /* try { // try from 00a623d4 to 00b623df has its CatchHandler @ 00a62668 */
                    /* try { // try from 00a623e0 to 00b623eb has its CatchHandler @ 00a62664 */
      if (999999 < param_1) goto LAB_00a623e8;
      pcVar9 = param_2;
      if (0xc34 < param_1 >> 5) goto LAB_00a623fc;
    }
    else {
                    /* catch() { ... } // from try @ 00a62218 with catch @ 00a6233c */
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar14];
      param_2 = param_2 + 1;
LAB_00a623e8:
                    /* try { // try from 00a623ec to 00b625d7 has its CatchHandler @ 00a6267c */
      *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar14 | 1];
      pcVar9 = param_2 + 1;
LAB_00a623fc:
      param_2 = pcVar9 + 1;
      *pcVar9 = (&GetDigitsLut()::cDigitsLut)[lVar13];
    }
    pcVar7 = param_2 + 5;
    cVar1 = (&GetDigitsLut()::cDigitsLut)[uVar11 | 1];
    param_2[1] = (&GetDigitsLut()::cDigitsLut)[uVar11];
    cVar2 = (&GetDigitsLut()::cDigitsLut)[lVar10];
    cVar3 = (&GetDigitsLut()::cDigitsLut)[(ulong)((uint)lVar13 | 1) & 0xffff];
    param_2[2] = cVar1;
    param_2[3] = cVar2;
    pcVar8 = param_2 + 4;
    *param_2 = cVar3;
    pcVar12 = &GetDigitsLut()::cDigitsLut + ((uint)lVar10 | 1);
    goto LAB_00a62528;
  }
  uVar11 = ((ulong)(param_1 & 0xffff) / 100) * 2;
  lVar10 = ((ulong)(param_1 + ((param_1 & 0xffff) / 100) * -100) & 0xffff) * 2;
  if (param_1 < 1000) {
    pcVar9 = param_2;
    if (99 < param_1) goto LAB_00a62354;
    pcVar8 = param_2;
    if (9 < param_1) goto LAB_00a62368;
  }
  else {
    *param_2 = (&GetDigitsLut()::cDigitsLut)[uVar11];
    pcVar9 = param_2 + 1;
LAB_00a62354:
                    /* try { // try from 00a62358 to 00b623b3 has its CatchHandler @ 00a62358
                       catch() { ... } // from try @ 00a62358 with catch @ 00a62358
                       catch() { ... } // from try @ 00a625d8 with catch @ 00a62358 */
    param_2 = pcVar9 + 1;
    *pcVar9 = (&GetDigitsLut()::cDigitsLut)[uVar11 | 1];
LAB_00a62368:
    *param_2 = (&GetDigitsLut()::cDigitsLut)[lVar10];
    pcVar8 = param_2 + 1;
  }
  pcVar7 = pcVar8 + 1;
  pcVar12 = &GetDigitsLut()::cDigitsLut + (ushort)((ushort)lVar10 | 1);
LAB_00a62528:
  *pcVar8 = *pcVar12;
  return pcVar7;
}

