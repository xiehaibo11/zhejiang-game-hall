
void FUN_00d66e58(long *param_1,undefined8 param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  char cVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  char cVar15;
  char *pcVar16;
  
  pcVar16 = (char *)*param_1;
                    /* try { // try from 00d66e64 to 00e66e6f has its CatchHandler @ 00d66f0c */
  *param_1 = (long)(pcVar16 + 1);
  if (*pcVar16 == '\x02') {
                    /* try { // try from 00d66e90 to 00e66e9f has its CatchHandler @ 00d66f08 */
    *param_1 = (long)(pcVar16 + 2);
    cVar1 = pcVar16[1];
                    /* try { // try from 00d66ea0 to 00e66eb3 has its CatchHandler @ 00d66f04 */
    *param_1 = (long)(pcVar16 + 3);
    cVar2 = pcVar16[2];
    *param_1 = (long)(pcVar16 + 4);
                    /* try { // try from 00d66eb4 to 00e66ebf has its CatchHandler @ 00d66f00 */
    cVar3 = pcVar16[3];
    *param_1 = (long)(pcVar16 + 5);
                    /* try { // try from 00d66ec0 to 00e66f8f has its CatchHandler @ 00d66d58 */
    cVar4 = pcVar16[4];
    *param_1 = (long)(pcVar16 + 6);
    cVar5 = pcVar16[5];
    *param_1 = (long)(pcVar16 + 7);
    cVar6 = pcVar16[6];
    *param_1 = (long)(pcVar16 + 8);
    cVar7 = pcVar16[7];
    *param_1 = (long)(pcVar16 + 9);
    cVar8 = pcVar16[8];
    *param_1 = (long)(pcVar16 + 10);
    cVar9 = pcVar16[9];
                    /* catch() { ... } // from try @ 00d66eb4 with catch @ 00d66f00 */
    *param_1 = (long)(pcVar16 + 0xb);
                    /* catch() { ... } // from try @ 00d66ea0 with catch @ 00d66f04 */
                    /* catch() { ... } // from try @ 00d66e90 with catch @ 00d66f08 */
    cVar10 = pcVar16[10];
                    /* catch() { ... } // from try @ 00d66e64 with catch @ 00d66f0c */
    *param_1 = (long)(pcVar16 + 0xc);
                    /* catch() { ... } // from try @ 00d66e50 with catch @ 00d66f10 */
                    /* catch() { ... } // from try @ 00d66e40 with catch @ 00d66f14 */
    cVar11 = pcVar16[0xb];
                    /* catch() { ... } // from try @ 00d66e14 with catch @ 00d66f18 */
    *param_1 = (long)(pcVar16 + 0xd);
                    /* catch() { ... } // from try @ 00d66e00 with catch @ 00d66f1c */
                    /* catch() { ... } // from try @ 00d66df0 with catch @ 00d66f20 */
    cVar12 = pcVar16[0xc];
                    /* catch() { ... } // from try @ 00d66dc4 with catch @ 00d66f24 */
    *param_1 = (long)(pcVar16 + 0xe);
    cVar13 = pcVar16[0xd];
    *param_1 = (long)(pcVar16 + 0xf);
    cVar14 = pcVar16[0xe];
                    /* catch() { ... } // from try @ 00d66db0 with catch @ 00d66f3c */
    *param_1 = (long)(pcVar16 + 0x10);
    cVar15 = pcVar16[0xf];
    *param_1 = (long)(pcVar16 + 0x11);
                    /* catch() { ... } // from try @ 00d66da0 with catch @ 00d66f54 */
                    /* catch() { ... } // from try @ 00d66d98 with catch @ 00d66f58
                       catch() { ... } // from try @ 00d66de8 with catch @ 00d66f58
                       catch() { ... } // from try @ 00d66e38 with catch @ 00d66f58
                       catch() { ... } // from try @ 00d66e88 with catch @ 00d66f58 */
    spCurveTimeline_setCurve
              (CONCAT31(CONCAT21(CONCAT11(cVar1,cVar2),cVar3),cVar4),
               CONCAT31(CONCAT21(CONCAT11(cVar5,cVar6),cVar7),cVar8),
               CONCAT31(CONCAT21(CONCAT11(cVar9,cVar10),cVar11),cVar12),
               CONCAT31(CONCAT21(CONCAT11(cVar13,cVar14),cVar15),pcVar16[0x10]),param_2,param_3);
    return;
  }
  if (*pcVar16 == '\x01') {
                    /* try { // try from 00d66e88 to 00e66e8b has its CatchHandler @ 00d66f58 */
    spCurveTimeline_setStepped(param_2,param_3);
    return;
  }
  return;
}

