
undefined4 FUN_00a39d10(long param_1,int param_2,long *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  ulong uVar7;
  void *__dest;
  long *plVar8;
  long lVar9;
  ulong *puVar10;
  ulong uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  long lVar14;
  byte *pbVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  ulong uVar18;
  char *pcVar19;
  void *__src;
  
                    /* try { // try from 00a39d28 to 00b39d7b has its CatchHandler @ 00a39d28
                       catch() { ... } // from try @ 00a39d28 with catch @ 00a39d28
                       catch() { ... } // from try @ 00a39e1c with catch @ 00a39d28
                       catch() { ... } // from try @ 00a39e80 with catch @ 00a39d28 */
  uVar4 = 4;
  uVar5 = 0x30;
  if (param_2 < 0x2711) {
    switch(param_2) {
    case 3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3a420 to 00b3a433 has its CatchHandler @ 00a3a448 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x260) = *puVar17;
      break;
    case 0xd:
                    /* try { // try from 00a3a434 to 00b3a483 has its CatchHandler @ 00a3a304 */
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3a358 with catch @ 00a3a448
                       catch() { ... } // from try @ 00a3a420 with catch @ 00a3a448 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x358) = *plVar8 * 1000;
      break;
    case 0xe:
switchD_00a39e68_caseD_75a3:
                    /* try { // try from 00a39e6c to 00b39e7f has its CatchHandler @ 00a39ecc */
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a39e80 to 00b39ee7 has its CatchHandler @ 00a39d28 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x388) = *puVar17;
      break;
    case 0x13:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a484 to 00b3a4d7 has its CatchHandler @ 00a3a484
                       catch() { ... } // from try @ 00a3a484 with catch @ 00a3a484
                       catch() { ... } // from try @ 00a3a574 with catch @ 00a3a484
                       catch() { ... } // from try @ 00a3a5d8 with catch @ 00a3a484 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x390) = *puVar17;
      break;
    case 0x14:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x398) = *puVar17;
      break;
    case 0x15:
switchD_00a39e68_caseD_75a4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a39e04 with catch @ 00a39ec0 */
        *param_3 = (long)(puVar17 + 1);
      }
                    /* catch() { ... } // from try @ 00a39d98 with catch @ 00a39ec4 */
                    /* catch() { ... } // from try @ 00a39d7c with catch @ 00a39ec8
                       catch() { ... } // from try @ 00a39e54 with catch @ 00a39ec8 */
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00a39dc0 with catch @ 00a39ecc
                       catch() { ... } // from try @ 00a39e6c with catch @ 00a39ecc */
      *(undefined8 *)(param_1 + 0x3b0) = *puVar17;
      break;
    case 0x1b:
                    /* try { // try from 00a3a4d8 to 00b3a4ef has its CatchHandler @ 00a3a620 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3a4f4 to 00b3a50f has its CatchHandler @ 00a3a61c */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x3d2) = *plVar8 != 0;
      break;
    case 0x20:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a51c to 00b3a54f has its CatchHandler @ 00a3a624 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x440) = *puVar17;
      break;
    case 0x21:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a55c to 00b3a573 has its CatchHandler @ 00a3a618 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a3a574 to 00b3a5ab has its CatchHandler @ 00a3a484 */
      *(int *)(param_1 + 0x420) = (int)*puVar17;
      break;
    case 0x22:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x428) = *puVar17;
                    /* try { // try from 00a3a5ac to 00b3a5bf has its CatchHandler @ 00a3a620 */
      break;
    case 0x29:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a5c4 to 00b3a5d7 has its CatchHandler @ 00a3a624 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a3a5d8 to 00b3a63f has its CatchHandler @ 00a3a484 */
      uVar5 = 0;
      *(bool *)(param_1 + 0x628) = *plVar8 != 0;
      break;
    case 0x2a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00a3a55c with catch @ 00a3a618 */
                    /* catch() { ... } // from try @ 00a3a4f4 with catch @ 00a3a61c */
                    /* catch() { ... } // from try @ 00a3a4d8 with catch @ 00a3a620
                       catch() { ... } // from try @ 00a3a5ac with catch @ 00a3a620 */
      *(bool *)(param_1 + 0x61d) = *plVar8 != 0;
                    /* catch() { ... } // from try @ 00a3a51c with catch @ 00a3a624
                       catch() { ... } // from try @ 00a3a5c4 with catch @ 00a3a624 */
      break;
    case 0x2b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3a640 to 00b3a68f has its CatchHandler @ 00a3a640
                       catch() { ... } // from try @ 00a3a640 with catch @ 00a3a640
                       catch() { ... } // from try @ 00a3a6ec with catch @ 00a3a640
                       catch() { ... } // from try @ 00a3a730 with catch @ 00a3a640 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      uVar3 = *(uint *)(param_1 + 0x978) | 0x10;
      if (*plVar8 == 0) {
        uVar3 = *(uint *)(param_1 + 0x978) & 0xffffffef;
      }
      *(bool *)(param_1 + 0x617) = *plVar8 != 0;
      *(uint *)(param_1 + 0x978) = uVar3;
      break;
    case 0x2c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3a690 to 00b3a6eb has its CatchHandler @ 00a3a770 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x620) = *plVar8 != 0;
      break;
    case 0x2d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x618) = *plVar8 != 0;
                    /* try { // try from 00a3a6ec to 00b3a71b has its CatchHandler @ 00a3a640 */
      break;
    case 0x2e:
    case 0x36:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      *(bool *)(param_1 + 0x621) = lVar9 != 0;
      if (lVar9 != 0) {
                    /* try { // try from 00a39fac to 00b39fb3 has its CatchHandler @ 00a3a144 */
        uVar4 = 4;
        goto LAB_00a3a724;
      }
LAB_00a3e1f0:
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = 1;
      break;
    case 0x2f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a3e1f0;
                    /* try { // try from 00a3a71c to 00b3a72f has its CatchHandler @ 00a3a770 */
      uVar4 = 2;
LAB_00a3a724:
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = uVar4;
      *(undefined1 *)(param_1 + 0x620) = 0;
      break;
    case 0x30:
                    /* try { // try from 00a3a730 to 00b3a78b has its CatchHandler @ 00a3a640 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x615) = *plVar8 != 0;
      break;
    case 0x32:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3a690 with catch @ 00a3a770
                       catch() { ... } // from try @ 00a3a71c with catch @ 00a3a770 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3a78c to 00b3a7db has its CatchHandler @ 00a3a78c
                       catch() { ... } // from try @ 00a3a78c with catch @ 00a3a78c
                       catch() { ... } // from try @ 00a3a810 with catch @ 00a3a78c
                       catch() { ... } // from try @ 00a3a858 with catch @ 00a3a78c */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x614) = *plVar8 != 0;
      break;
    case 0x33:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x624) = (int)*puVar17;
      break;
    case 0x34:
                    /* try { // try from 00a3a7dc to 00b3a7f3 has its CatchHandler @ 00a3a89c */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3a7f8 to 00b3a80f has its CatchHandler @ 00a3a898 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a3a810 to 00b3a843 has its CatchHandler @ 00a3a78c */
      *(bool *)(param_1 + 0x61a) = *plVar8 != 0;
      break;
    case 0x35:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a3a844 to 00b3a857 has its CatchHandler @ 00a3a89c */
      *(bool *)(param_1 + 0x613) = *plVar8 != 0;
      break;
    case 0x3a:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a858 to 00b3a8b7 has its CatchHandler @ 00a3a78c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x61f) = *plVar8 != 0;
      break;
    case 0x3b:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3a7f8 with catch @ 00a3a898 */
                    /* catch() { ... } // from try @ 00a3a7dc with catch @ 00a3a89c
                       catch() { ... } // from try @ 00a3a844 with catch @ 00a3a89c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
                    /* try { // try from 00a3a8b8 to 00b3a90b has its CatchHandler @ 00a3a8b8
                       catch() { ... } // from try @ 00a3a8b8 with catch @ 00a3a8b8
                       catch() { ... } // from try @ 00a3a9a8 with catch @ 00a3a8b8
                       catch() { ... } // from try @ 00a3aa0c with catch @ 00a3a8b8 */
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x238) = *puVar17;
      break;
    case 0x3c:
switchD_00a39e68_caseD_75a8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a39f3c to 00b39f53 has its CatchHandler @ 00a3a178 */
      if ((*(long *)(param_1 + 0x2a0) < lVar9) &&
         (*(long *)(param_1 + 0x290) == *(long *)(param_1 + 0x850))) {
                    /* try { // try from 00a39f58 to 00b39f67 has its CatchHandler @ 00a3a174 */
        (*(code *)PTR_free_01769a00)();
        *(undefined8 *)(param_1 + 0x850) = 0;
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
      uVar5 = 0;
                    /* try { // try from 00a39f68 to 00b39f7b has its CatchHandler @ 00a3a154 */
      *(long *)(param_1 + 0x2a0) = lVar9;
      break;
    case 0x3d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x612) = *plVar8 != 0;
      break;
    case 0x40:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a90c to 00b3a923 has its CatchHandler @ 00a3aa54 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a3a928 to 00b3a943 has its CatchHandler @ 00a3aa50 */
      uVar5 = 0;
      *(bool *)(param_1 + 0x448) = *plVar8 != 0;
      break;
    case 0x44:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a950 to 00b3a983 has its CatchHandler @ 00a3aa58 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x280) = *puVar17;
      break;
    case 0x45:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3a990 to 00b3a9a7 has its CatchHandler @ 00a3aa4c */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x611) = *plVar8 != 0;
                    /* try { // try from 00a3a9a8 to 00b3a9df has its CatchHandler @ 00a3a8b8 */
      break;
    case 0x47:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x8d8) = *puVar17;
      break;
    case 0x4a:
                    /* try { // try from 00a3a9e0 to 00b3a9f3 has its CatchHandler @ 00a3aa54 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3a9f8 to 00b3aa0b has its CatchHandler @ 00a3aa58 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a3aa0c to 00b3aa73 has its CatchHandler @ 00a3a8b8 */
      *(bool *)(param_1 + 0x62b) = *plVar8 != 0;
      break;
    case 0x4b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00a3a990 with catch @ 00a3aa4c */
                    /* catch() { ... } // from try @ 00a3a928 with catch @ 00a3aa50 */
      *(bool *)(param_1 + 0x62a) = *plVar8 != 0;
                    /* catch() { ... } // from try @ 00a3a90c with catch @ 00a3aa54
                       catch() { ... } // from try @ 00a3a9e0 with catch @ 00a3aa54 */
      break;
    case 0x4e:
                    /* catch() { ... } // from try @ 00a3a950 with catch @ 00a3aa58
                       catch() { ... } // from try @ 00a3a9f8 with catch @ 00a3aa58 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3aa74 to 00b3aac3 has its CatchHandler @ 00a3aa74
                       catch() { ... } // from try @ 00a3aa74 with catch @ 00a3aa74
                       catch() { ... } // from try @ 00a3ab20 with catch @ 00a3aa74
                       catch() { ... } // from try @ 00a3ab64 with catch @ 00a3aa74 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x360) = *plVar8 * 1000;
      break;
    case 0x50:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* try { // try from 00a3aac4 to 00b3ab1f has its CatchHandler @ 00a3aba4 */
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = 1;
      *(undefined2 *)(param_1 + 0x620) = 0;
      break;
    case 0x51:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      if (*plVar8 == 1) {
LAB_00a3b9f0:
        FUN_00a38a08(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
        return 0x2b;
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x449) = *plVar8 != 0;
      break;
    case 0x54:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3ab20 to 00b3ab4f has its CatchHandler @ 00a3aa74 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      if (2 < *plVar8) {
        return 1;
      }
      uVar5 = 0;
                    /* try { // try from 00a3de2c to 00b3de47 has its CatchHandler @ 00a3dec4 */
      *(long *)(param_1 + 0x438) = *plVar8;
      break;
    case 0x55:
                    /* try { // try from 00a3ab50 to 00b3ab63 has its CatchHandler @ 00a3aba4 */
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3ab64 to 00b3abbf has its CatchHandler @ 00a3aa74 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x62c) = *plVar8 != 0;
      break;
    case 0x5a:
      uVar5 = thunk_FUN_00a5cd30(param_1);
      break;
    case 0x5b:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3aac4 with catch @ 00a3aba4
                       catch() { ... } // from try @ 00a3ab50 with catch @ 00a3aba4 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x63d) = *plVar8 != 0;
      break;
    case 0x5c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5c8) = *puVar17;
      break;
    case 0x60:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x3d1) = *plVar8 != 0;
      break;
    case 0x62:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      lVar9 = 0;
      if (*plVar8 - 1U < 0x3fff) {
        lVar9 = *plVar8;
      }
      *(long *)(param_1 + 0x5d0) = lVar9;
      break;
    case 99:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x63c) = *plVar8 != 0;
                    /* try { // try from 00a3acc0 to 00b3ae4f has its CatchHandler @ 00a3acc0
                       catch() { ... } // from try @ 00a3acc0 with catch @ 00a3acc0
                       catch() { ... } // from try @ 00a3aed0 with catch @ 00a3acc0 */
      break;
    case 0x65:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x5c0) = (int)*puVar17;
      break;
    case 0x69:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x61c) = *plVar8 != 0;
      break;
    case 0x6a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x62d) = *plVar8 != 0;
      break;
    case 0x6b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        uVar7 = *(ulong *)(param_3[1] + (long)iVar6);
        if (uVar7 == 0) {
          uVar18 = 0;
        }
        else {
LAB_00a3ad9c:
          *(byte *)(param_1 + 0x8c12) = (byte)((uint)uVar7 >> 4) & 1;
          if ((uVar7 & 0x10) != 0) {
            uVar7 = uVar7 & 0xffffffffffffffe9 | 2;
          }
          uVar11 = 0;
          uVar18 = uVar7 & 0xfffffffffffffffb;
          do {
            if (0x1e < (long)uVar11) {
              return 4;
            }
            uVar7 = uVar11 & 0x3f;
            uVar11 = uVar11 + 1;
          } while ((1L << uVar7 & uVar18) == 0);
        }
      }
      else {
        puVar10 = (ulong *)*param_3;
        *param_3 = (long)(puVar10 + 1);
        uVar7 = *puVar10;
        uVar18 = 0;
        if (uVar7 != 0) goto LAB_00a3ad9c;
      }
      uVar5 = 0;
      *(ulong *)(param_1 + 0x268) = uVar18;
      break;
    case 0x6e:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      if ((lVar9 == 2) || (lVar9 == 1)) {
        uVar5 = 0;
        *(int *)(param_1 + 0x5fc) = (int)lVar9;
      }
      else if (lVar9 == 0) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x5fc) = 0;
      }
      else {
LAB_00a3de20:
        uVar5 = 0x30;
      }
      break;
    case 0x6f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        uVar7 = *(ulong *)(param_3[1] + (long)iVar6);
        if (uVar7 == 0) {
          uVar18 = 0;
        }
        else {
LAB_00a3ae60:
          *(byte *)(param_1 + 0x8c32) = (byte)((uint)uVar7 >> 4) & 1;
          if ((uVar7 & 0x10) != 0) {
            uVar7 = uVar7 & 0xffffffffffffffe9 | 2;
          }
          uVar11 = 0;
                    /* try { // try from 00a3ae84 to 00b3ae97 has its CatchHandler @ 00a3af1c */
          uVar18 = uVar7 & 0xfffffffffffffffb;
          do {
            if (0x1e < (long)uVar11) {
              return 4;
            }
            uVar7 = uVar11 & 0x3f;
            uVar11 = uVar11 + 1;
                    /* try { // try from 00a3ae9c to 00b3aecf has its CatchHandler @ 00a3af20 */
          } while ((1L << uVar7 & uVar18) == 0);
        }
      }
      else {
        puVar10 = (ulong *)*param_3;
                    /* try { // try from 00a3ae50 to 00b3ae83 has its CatchHandler @ 00a3af50 */
        *param_3 = (long)(puVar10 + 1);
        uVar7 = *puVar10;
        uVar18 = 0;
        if (uVar7 != 0) goto LAB_00a3ae60;
      }
      uVar5 = 0;
      *(ulong *)(param_1 + 0x270) = uVar18;
      break;
    case 0x70:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3aed0 to 00b3af6b has its CatchHandler @ 00a3acc0 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x370) = *plVar8 * 1000;
      break;
    case 0x71:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5e8) = *puVar17;
                    /* catch() { ... } // from try @ 00a3ae84 with catch @ 00a3af1c */
      break;
    case 0x72:
switchD_00a39e68_caseD_75a5:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a39ee8 to 00b39f3b has its CatchHandler @ 00a39ee8
                       catch() { ... } // from try @ 00a39ee8 with catch @ 00a39ee8
                       catch() { ... } // from try @ 00a3a058 with catch @ 00a39ee8
                       catch() { ... } // from try @ 00a3a0d8 with catch @ 00a39ee8 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3defc to 00b3df4f has its CatchHandler @ 00a3defc
                       catch() { ... } // from try @ 00a3defc with catch @ 00a3defc
                       catch() { ... } // from try @ 00a3e014 with catch @ 00a3defc
                       catch() { ... } // from try @ 00a3e0bc with catch @ 00a3defc */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5f0) = *puVar17;
      break;
    case 0x77:
                    /* catch() { ... } // from try @ 00a3ae9c with catch @ 00a3af20 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x630) = (int)*puVar17;
                    /* catch() { ... } // from try @ 00a3ae50 with catch @ 00a3af50 */
      break;
    case 0x79:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x63e) = *plVar8 != 0;
      break;
    case 0x81:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x634) = (int)*puVar17;
      break;
    case 0x88:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e3c0 to 00b3e4ef has its CatchHandler @ 00a3e3c0
                       catch() { ... } // from try @ 00a3e3c0 with catch @ 00a3e3c0
                       catch() { ... } // from try @ 00a3e570 with catch @ 00a3e3c0 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x63f) = *plVar8 != 0;
      break;
    case 0x89:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x640) = *plVar8 != 0;
      break;
    case 0x8a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x5f8) = (int)*puVar17;
      break;
    case 0x8b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar2 = FUN_00a2c6f0(*puVar17);
      uVar5 = 0;
      *(undefined2 *)(param_1 + 0x2a8) = uVar2;
      break;
    case 0x8c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar4 = FUN_00a2c6e4(*puVar17);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x2ac) = uVar4;
      break;
    case 0x8d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x641) = *plVar8 != 0;
      break;
    case 0x96:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x5b0) = *plVar8 != 0;
      break;
    case 0x9a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(int *)(param_1 + 0x638) = (int)*puVar17;
      break;
    case 0x9b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x358) = *puVar17;
      break;
    case 0x9c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x360) = *puVar17;
      break;
    case 0x9d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x650) = *plVar8 == 0;
      break;
    case 0x9e:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x651) = *plVar8 == 0;
      break;
    case 0x9f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x658) = *puVar17;
      break;
    case 0xa0:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x660) = *puVar17;
      break;
    case 0xa1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar3 = FUN_00a2c6e4(*puVar17);
      uVar5 = 0;
      *(uint *)(param_1 + 0x288) = uVar3 & 7;
      break;
    case 0xa6:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      if (*plVar8 == 1) {
        uVar5 = 0;
        *(undefined1 *)(param_1 + 0x668) = 1;
      }
      else {
        if (*plVar8 != 0) goto LAB_00a3de20;
        uVar5 = 0;
        *(undefined1 *)(param_1 + 0x668) = 0;
      }
      break;
    case 0xab:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar4 = FUN_00a2c6ec(*puVar17);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x858) = uVar4;
      break;
    case 0xac:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x4b0) = *plVar8 != 0;
      break;
    case 0xb2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x378) = *puVar17;
      break;
    case 0xb5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x860) = *puVar17;
      break;
    case 0xb6:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x868) = *puVar17;
      break;
    case 0xbc:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x62e) = *plVar8 != 0;
      break;
    case 0xbd:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      iVar6 = 0;
      if (*plVar8 - 1U < 0xb) {
        iVar6 = (int)(*plVar8 - 1U) + 1;
      }
      *(int *)(param_1 + 0x87c) = iVar6;
      break;
    case 0xc1:
    case 0xc2:
                    /* try { // try from 00a39dc0 to 00b39df3 has its CatchHandler @ 00a39ecc */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar16 = *puVar17;
      lVar9 = 0x8ce0;
LAB_00a3d214:
      uVar5 = 0;
      *(undefined8 *)(param_1 + lVar9) = uVar16;
      break;
    case 0xc5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x888) = *plVar8 != 0;
      break;
    case 0xcf:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x61b) = *plVar8 != 0;
      break;
    case 0xd2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x8b0) = *puVar17;
      break;
    case 0xd4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e4f0 to 00b3e523 has its CatchHandler @ 00a3e5f0 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x368) = *puVar17;
      break;
    case 0xd5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8b8) = *plVar8 != 0;
      break;
    case 0xd6:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x8c0) = *puVar17;
      break;
    case 0xd7:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x8c8) = *puVar17;
      break;
    case 0xd8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e524 to 00b3e537 has its CatchHandler @ 00a3e5bc */
        puVar13 = (uint *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (uint *)*param_3;
        *param_3 = (long)(puVar13 + 2);
      }
      uVar3 = *puVar13;
      uVar5 = 0;
      *(byte *)(param_1 + 0x480) = (byte)uVar3 & 1;
      *(byte *)(param_1 + 0x481) = (byte)(uVar3 >> 1) & 1;
      break;
    case 0xda:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x878) = *plVar8 != 0;
      break;
    case 0xe1:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3b6f4 to 00b3b743 has its CatchHandler @ 00a3b6f4
                       catch() { ... } // from try @ 00a3b6f4 with catch @ 00a3b6f4
                       catch() { ... } // from try @ 00a3b790 with catch @ 00a3b6f4
                       catch() { ... } // from try @ 00a3b7d4 with catch @ 00a3b6f4 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e53c to 00b3e56f has its CatchHandler @ 00a3e5c0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8e0) = *plVar8 != 0;
      break;
    case 0xe2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3b744 to 00b3b78f has its CatchHandler @ 00a3b814 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8e1) = *plVar8 != 0;
      break;
    case 0xe3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a3b790 to 00b3b7bf has its CatchHandler @ 00a3b6f4 */
      *(undefined8 *)(param_1 + 0x8e8) = *puVar17;
      break;
    case 0xe5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar12 = (undefined4 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar12 = (undefined4 *)*param_3;
        *param_3 = (long)(puVar12 + 2);
      }
                    /* try { // try from 00a3b7c0 to 00b3b7d3 has its CatchHandler @ 00a3b814 */
      uVar5 = 0;
      *(byte *)(param_1 + 0x3d0) = (byte)*puVar12 & 1;
      break;
    case 0xe8:
      uVar7 = thunk_FUN_00a5ec14();
                    /* try { // try from 00a3b7d4 to 00b3b82f has its CatchHandler @ 00a3b6f4 */
      if ((uVar7 & 1) == 0) {
LAB_00a3ba7c:
        uVar5 = 4;
      }
      else {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar8 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar8 = (long *)*param_3;
          *param_3 = (long)(plVar8 + 1);
        }
        uVar5 = 0;
        *(bool *)(param_1 + 0x44a) = *plVar8 != 0;
      }
      break;
    case 0xe9:
                    /* catch() { ... } // from try @ 00a3b744 with catch @ 00a3b814
                       catch() { ... } // from try @ 00a3b7c0 with catch @ 00a3b814 */
      uVar7 = FUN_00a2e820();
      if ((uVar7 & 1) == 0) goto LAB_00a3ba7c;
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3b830 to 00b3b88f has its CatchHandler @ 00a3b830
                       catch() { ... } // from try @ 00a3b830 with catch @ 00a3b830
                       catch() { ... } // from try @ 00a3b964 with catch @ 00a3b830 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x4b1) = *plVar8 != 0;
      break;
    case 0xea:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e570 to 00b3e60b has its CatchHandler @ 00a3e3c0 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8e2) = *plVar8 != 0;
                    /* try { // try from 00a3b890 to 00b3b8d7 has its CatchHandler @ 00a3ba24 */
      break;
    case 0xed:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8e3) = *plVar8 != 0;
      break;
    case 0xef:
      goto switchD_00a39d68_caseD_2800;
    case 0xf2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a3b8f4 to 00b3b90f has its CatchHandler @ 00a3ba20 */
      uVar5 = 0;
      *(bool *)(param_1 + 0x380) = *plVar8 != 0;
      break;
    case 0xf4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3b928 to 00b3b963 has its CatchHandler @ 00a3ba1c */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8d0) = *plVar8 != 0;
      break;
    case 0xf5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3b964 to 00b3ba3f has its CatchHandler @ 00a3b830 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x619) = *plVar8 != 0;
      break;
    case 0xf8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x500) = *plVar8 != 0;
      break;
    case 0xf9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      if (*plVar8 == 1) goto LAB_00a3b9f0;
                    /* try { // try from 00a3de48 to 00b3defb has its CatchHandler @ 00a3dde0 */
      uVar5 = 0;
      *(bool *)(param_1 + 0x501) = *plVar8 != 0;
      break;
    case 0xfa:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3b928 with catch @ 00a3ba1c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a3e524 with catch @ 00a3e5bc */
                    /* catch() { ... } // from try @ 00a3e53c with catch @ 00a3e5c0 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* catch() { ... } // from try @ 00a3b8f4 with catch @ 00a3ba20 */
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a3b890 with catch @ 00a3ba24 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x4f8) = *puVar17;
      break;
    case 0x105:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar13 = (uint *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar13 = (uint *)*param_3;
        *param_3 = (long)(puVar13 + 2);
      }
      uVar3 = *puVar13;
      uVar5 = 0;
      *(byte *)(param_1 + 0x538) = (byte)uVar3 & 1;
      *(byte *)(param_1 + 0x539) = (byte)(uVar3 >> 1) & 1;
    }
    goto switchD_00a39d68_caseD_2713;
  }
  if (param_2 < 0x4e2c) {
    switch(param_2) {
    case 0x2711:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a39d7c to 00b39d93 has its CatchHandler @ 00a39ec8 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a39d98 to 00b39db3 has its CatchHandler @ 00a39ec4 */
      *(undefined8 *)(param_1 + 0x240) = *puVar17;
      break;
    case 0x2712:
      if (*(char *)(param_1 + 0x910) != '\0') {
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x908));
        *(undefined8 *)(param_1 + 0x908) = 0;
        *(undefined1 *)(param_1 + 0x910) = 0;
      }
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x738));
      *(undefined8 *)(param_1 + 0x738) = 0;
      if (lVar9 == 0) {
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x908) = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          uVar5 = 0x1b;
          *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_1 + 0x738);
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x738) = lVar9;
          *(long *)(param_1 + 0x908) = lVar9;
        }
      }
      break;
    case 0x2713:
    case 0x2718:
    case 0x271b:
    case 0x271c:
    case 0x271d:
    case 0x271e:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x272b:
    case 0x272e:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2733:
    case 0x2736:
    case 0x2738:
    case 0x2739:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2740:
    case 0x2741:
    case 0x2742:
    case 0x2743:
    case 0x2744:
    case 0x2745:
    case 0x2746:
    case 0x2747:
    case 0x2748:
    case 0x274a:
    case 0x274b:
    case 0x274c:
    case 0x274d:
    case 0x2750:
    case 0x2752:
    case 0x2753:
    case 0x2754:
    case 0x2755:
    case 0x2757:
    case 0x2758:
    case 0x2759:
    case 0x275a:
    case 0x275b:
    case 0x275e:
    case 0x275f:
    case 0x2760:
    case 0x2761:
    case 0x2764:
    case 0x2765:
    case 0x276a:
    case 0x276b:
    case 0x276c:
    case 0x276e:
    case 0x2770:
    case 0x2772:
    case 0x2773:
    case 0x2775:
    case 0x2779:
    case 0x277a:
    case 0x277b:
    case 0x277c:
    case 0x277e:
    case 0x277f:
    case 0x2780:
    case 0x2781:
    case 0x2782:
    case 0x2783:
    case 0x2784:
    case 0x2785:
    case 0x2787:
    case 0x2788:
    case 0x2789:
    case 0x278a:
    case 0x278b:
    case 0x278c:
    case 0x278d:
    case 0x278e:
    case 0x278f:
    case 0x2790:
    case 0x2791:
    case 0x2792:
    case 0x2794:
    case 0x2795:
    case 0x2798:
    case 0x2799:
    case 0x279a:
    case 0x279b:
    case 0x279c:
    case 0x279d:
    case 0x279e:
    case 0x279f:
    case 0x27a0:
    case 0x27a1:
    case 0x27a2:
    case 0x27a4:
    case 0x27a6:
    case 0x27a7:
    case 0x27a8:
    case 0x27a9:
    case 0x27aa:
    case 0x27ab:
    case 0x27ac:
    case 0x27ad:
    case 0x27ae:
    case 0x27af:
    case 0x27b0:
    case 0x27b1:
    case 0x27b2:
    case 0x27b3:
    case 0x27b6:
    case 0x27b7:
    case 0x27bb:
    case 0x27bc:
    case 0x27c2:
    case 0x27c3:
    case 0x27c4:
    case 0x27c5:
    case 0x27c6:
    case 0x27c7:
    case 0x27c8:
    case 0x27c9:
    case 0x27cc:
    case 0x27cd:
    case 0x27d1:
    case 0x27d2:
    case 0x27d4:
    case 0x27d5:
    case 0x27d6:
    case 0x27d7:
    case 0x27d8:
    case 0x27df:
    case 0x27e0:
    case 0x27e2:
    case 0x27e4:
    case 0x27e5:
    case 0x27e6:
    case 0x27e7:
    case 0x27e8:
    case 0x27ea:
    case 0x27eb:
    case 0x27f1:
    case 0x27f2:
    case 0x27f3:
    case 0x27f5:
    case 0x27f8:
    case 0x27f9:
    case 0x27fa:
    case 0x27fb:
    case 0x27fd:
    case 0x27ff:
    case 0x2802:
    case 0x2804:
    case 0x2805:
    case 0x2808:
    case 0x2809:
    case 0x280a:
    case 0x2815:
      break;
    case 0x2714:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a3e4f0 with catch @ 00a3e5f0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3bb40 to 00b3bb9f has its CatchHandler @ 00a3bb40
                       catch() { ... } // from try @ 00a3bb40 with catch @ 00a3bb40
                       catch() { ... } // from try @ 00a3bc70 with catch @ 00a3bb40 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x718));
      *(undefined8 *)(param_1 + 0x718) = 0;
      if (lVar9 == 0) {
LAB_00a3e830:
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
LAB_00a3dd94:
                    /* catch() { ... } // from try @ 00a3dd10 with catch @ 00a3dd94 */
          uVar5 = 0x1b;
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x718) = lVar9;
        }
      }
      break;
    case 0x2715:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3bba0 to 00b3bbb7 has its CatchHandler @ 00a3bd34 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a3fc80(*puVar17,param_1 + 0x7b8,param_1 + 0x7c0);
      break;
    case 0x2716:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e60c to 00b3e65b has its CatchHandler @ 00a3e60c
                       catch() { ... } // from try @ 00a3e60c with catch @ 00a3e60c
                       catch() { ... } // from try @ 00a3e6a4 with catch @ 00a3e60c
                       catch() { ... } // from try @ 00a3e724 with catch @ 00a3e60c */
      }
      else {
                    /* try { // try from 00a3bbd4 to 00b3bbe7 has its CatchHandler @ 00a3bd2c */
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a3fc80(*puVar17,param_1 + 2000,param_1 + 0x7d8);
      break;
    case 0x2717:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3bc04 to 00b3bc1f has its CatchHandler @ 00a3bd30 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x728));
      *(undefined8 *)(param_1 + 0x728) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* try { // try from 00a3bc38 to 00b3bc4f has its CatchHandler @ 00a3bd28 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
                    /* try { // try from 00a3bc58 to 00b3bc6f has its CatchHandler @ 00a3bd24 */
      *(long *)(param_1 + 0x728) = lVar9;
      break;
    case 0x2719:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3bc70 to 00b3bd4f has its CatchHandler @ 00a3bb40 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x248) = *puVar17;
      break;
    case 0x271a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x230) = *puVar17;
      break;
    case 0x271f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      *(undefined8 *)(param_1 + 0x290) = *puVar17;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x850));
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined4 *)(param_1 + 0x430) = 2;
      break;
    case 0x2720:
      if (*(char *)(param_1 + 0x920) != '\0') {
                    /* catch() { ... } // from try @ 00a3bc58 with catch @ 00a3bd24 */
                    /* catch() { ... } // from try @ 00a3bc38 with catch @ 00a3bd28 */
                    /* catch() { ... } // from try @ 00a3bbd4 with catch @ 00a3bd2c */
                    /* catch() { ... } // from try @ 00a3bc04 with catch @ 00a3bd30 */
                    /* catch() { ... } // from try @ 00a3bba0 with catch @ 00a3bd34 */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x918));
        *(undefined8 *)(param_1 + 0x918) = 0;
        *(undefined1 *)(param_1 + 0x920) = 0;
      }
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3bd50 to 00b3bd9f has its CatchHandler @ 00a3bd50
                       catch() { ... } // from try @ 00a3bd50 with catch @ 00a3bd50
                       catch() { ... } // from try @ 00a3bdec with catch @ 00a3bd50
                       catch() { ... } // from try @ 00a3be30 with catch @ 00a3bd50 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x730));
      *(undefined8 *)(param_1 + 0x730) = 0;
      if (lVar9 == 0) {
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x918) = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          uVar5 = 0x1b;
          *(undefined8 *)(param_1 + 0x918) = *(undefined8 *)(param_1 + 0x730);
        }
        else {
                    /* try { // try from 00a3bda0 to 00b3bdeb has its CatchHandler @ 00a3be70 */
          uVar5 = 0;
          *(long *)(param_1 + 0x730) = lVar9;
          *(long *)(param_1 + 0x918) = lVar9;
        }
      }
      break;
    case 0x2721:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6d0));
                    /* try { // try from 00a3bdec to 00b3be1b has its CatchHandler @ 00a3bd50 */
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      if (lVar9 == 0) {
        lVar9 = 0;
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x6d0);
          uVar5 = 0x1b;
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x6d0) = lVar9;
        }
      }
                    /* try { // try from 00a3df50 to 00b3df67 has its CatchHandler @ 00a3e0d8 */
      *(bool *)(param_1 + 0x616) = lVar9 != 0;
      break;
    case 0x2722:
                    /* try { // try from 00a3be1c to 00b3be2f has its CatchHandler @ 00a3be70 */
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3be30 to 00b3be8b has its CatchHandler @ 00a3bd50 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e65c to 00b3e673 has its CatchHandler @ 00a3e73c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x790));
      *(undefined8 *)(param_1 + 0x790) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* catch() { ... } // from try @ 00a3bda0 with catch @ 00a3be70
                       catch() { ... } // from try @ 00a3be1c with catch @ 00a3be70 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x790) = lVar9;
      break;
    case 0x2726:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x690));
      *(undefined8 *)(param_1 + 0x690) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x690) = lVar9;
      break;
    case 0x2727:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e678 to 00b3e6a3 has its CatchHandler @ 00a3e738 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3b8) = *puVar17;
      break;
    case 0x2728:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar16 = *puVar17;
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = 3;
      *(undefined8 *)(param_1 + 0x3c8) = uVar16;
      *(undefined1 *)(param_1 + 0x620) = 0;
      break;
    case 0x2729:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3bf74 to 00b3bfc3 has its CatchHandler @ 00a3bf74
                       catch() { ... } // from try @ 00a3bf74 with catch @ 00a3bf74
                       catch() { ... } // from try @ 00a3c010 with catch @ 00a3bf74
                       catch() { ... } // from try @ 00a3c054 with catch @ 00a3bf74 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x670));
      *(undefined8 *)(param_1 + 0x670) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
                    /* try { // try from 00a3bfc4 to 00b3c00f has its CatchHandler @ 00a3c094 */
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x670) = lVar9;
      break;
    case 0x272a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6e8));
                    /* try { // try from 00a3c010 to 00b3c03f has its CatchHandler @ 00a3bf74 */
      *(undefined8 *)(param_1 + 0x6e8) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6e8) = lVar9;
      break;
    case 0x272c:
                    /* try { // try from 00a3c040 to 00b3c053 has its CatchHandler @ 00a3c094 */
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3c054 to 00b3c0af has its CatchHandler @ 00a3bf74 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e6a4 to 00b3e6cb has its CatchHandler @ 00a3e60c */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3d8) = *puVar17;
      break;
    case 0x272d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a3bfc4 with catch @ 00a3c094
                       catch() { ... } // from try @ 00a3c040 with catch @ 00a3c094 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x250) = *puVar17;
      break;
    case 0x272f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = FUN_00a2c4a8(*(undefined8 *)(param_1 + 0x928));
      if (lVar9 == 0) {
        FUN_00a2c624(*(undefined8 *)(param_1 + 0x928));
        *(undefined8 *)(param_1 + 0x928) = 0;
        return 0x1b;
                    /* try { // try from 00a3df6c to 00b3df9b has its CatchHandler @ 00a3e0d4 */
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x928) = lVar9;
      break;
    case 0x2734:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e6cc to 00b3e6df has its CatchHandler @ 00a3e73c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6a0));
      *(undefined8 *)(param_1 + 0x6a0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6a0) = lVar9;
      break;
    case 0x2735:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      pcVar1 = pthread_rwlock_tryrdlock;
      if ((code *)*puVar17 != (code *)0x0) {
        pcVar1 = (code *)*puVar17;
      }
      *(code **)(param_1 + 0x220) = pcVar1;
      break;
    case 0x2737:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3e0) = *puVar17;
      break;
    case 0x2749:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x348) = *puVar17;
      break;
    case 0x274e:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6b0));
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6b0) = lVar9;
      break;
    case 0x274f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3c290 to 00b3c2df has its CatchHandler @ 00a3c290
                       catch() { ... } // from try @ 00a3c290 with catch @ 00a3c290
                       catch() { ... } // from try @ 00a3c32c with catch @ 00a3c290
                       catch() { ... } // from try @ 00a3c370 with catch @ 00a3c290 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x708));
      *(undefined8 *)(param_1 + 0x708) = 0;
      if (lVar9 == 0) {
        lVar9 = 0;
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x708);
          uVar5 = 0x1b;
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x708) = lVar9;
                    /* try { // try from 00a3c2e0 to 00b3c32b has its CatchHandler @ 00a3c3b0 */
        }
      }
      *(bool *)(param_1 + 0x629) = lVar9 != 0;
      break;
    case 0x2751:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e71c to 00b3e723 has its CatchHandler @ 00a3e738 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x750));
      *(undefined8 *)(param_1 + 0x750) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3c32c to 00b3c35b has its CatchHandler @ 00a3c290 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) {
LAB_00a3de10:
        uVar5 = 0x1b;
      }
      else {
        uVar5 = 0;
        *(long *)(param_1 + 0x750) = lVar9;
      }
      break;
    case 0x2756:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3c35c to 00b3c36f has its CatchHandler @ 00a3c3b0 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e724 to 00b3e757 has its CatchHandler @ 00a3e60c */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3c370 to 00b3c3cb has its CatchHandler @ 00a3c290 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x408) = *puVar17;
      break;
    case 0x275c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3c2e0 with catch @ 00a3c3b0
                       catch() { ... } // from try @ 00a3c35c with catch @ 00a3c3b0 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x788));
      *(undefined8 *)(param_1 + 0x788) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x788) = lVar9;
      break;
    case 0x275d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a3e678 with catch @ 00a3e738
                       catch() { ... } // from try @ 00a3e71c with catch @ 00a3e738 */
                    /* catch() { ... } // from try @ 00a3e65c with catch @ 00a3e73c
                       catch() { ... } // from try @ 00a3e6cc with catch @ 00a3e73c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x780));
      *(undefined8 *)(param_1 + 0x780) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x780) = lVar9;
      break;
    case 0x2762:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x698));
      *(undefined8 *)(param_1 + 0x698) = 0;
      uVar4 = 0;
      if (lVar9 != 0) {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          uVar4 = 0x1b;
        }
        else {
          uVar4 = 0;
          *(long *)(param_1 + 0x698) = lVar9;
        }
      }
      lVar9 = FUN_00a313d0(param_1,0,*(undefined8 *)(param_1 + 0x938),
                           *(undefined1 *)(param_1 + 0x3d1));
                    /* try { // try from 00a3dfa8 to 00b3dfdb has its CatchHandler @ 00a3e0dc */
      uVar5 = 0x1b;
      if (lVar9 != 0) {
        uVar5 = uVar4;
      }
      *(long *)(param_1 + 0x938) = lVar9;
      break;
    case 0x2763:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e758 to 00b3e7a7 has its CatchHandler @ 00a3e758
                       catch() { ... } // from try @ 00a3e758 with catch @ 00a3e758
                       catch() { ... } // from try @ 00a3e7f0 with catch @ 00a3e758
                       catch() { ... } // from try @ 00a3e870 with catch @ 00a3e758 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x770));
      *(undefined8 *)(param_1 + 0x770) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x770) = lVar9;
      break;
    case 0x2766:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x680));
      *(undefined8 *)(param_1 + 0x680) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x680) = lVar9;
      break;
    case 0x2767:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6d8));
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6d8) = lVar9;
      break;
    case 0x2768:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6f8));
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6f8) = lVar9;
      break;
    case 0x2769:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        pcVar19 = *(char **)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
        pcVar19 = (char *)*puVar17;
      }
      if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) goto LAB_00a3e830;
      uVar5 = thunk_FUN_00a5cc40(param_1);
      break;
    case 0x276d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 1000) = *puVar17;
      break;
    case 0x276f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e7a8 to 00b3e7bf has its CatchHandler @ 00a3e888 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x228) = *puVar17;
                    /* try { // try from 00a3c718 to 00b3ca6f has its CatchHandler @ 00a3c718
                       catch() { ... } // from try @ 00a3c718 with catch @ 00a3c718
                       catch() { ... } // from try @ 00a3caf0 with catch @ 00a3c718 */
      break;
    case 0x2771:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x740));
      *(undefined8 *)(param_1 + 0x740) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x740) = lVar9;
      break;
    case 0x2774:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      if (*(long *)(param_1 + 0x70) != 0) {
        FUN_00a4bf64(param_1,1,2);
        if (*(int *)(param_1 + 0x58) == 3) {
          *(undefined8 *)(param_1 + 0x50) = 0;
          *(undefined4 *)(param_1 + 0x58) = 0;
        }
        lVar14 = *(long *)(param_1 + 0x70);
        if (*(long *)(lVar14 + 0x50) == *(long *)(param_1 + 0x938)) {
          *(undefined8 *)(param_1 + 0x938) = 0;
        }
        if (*(long *)(lVar14 + 0x58) == *(long *)(param_1 + 0x8b30)) {
          *(long *)(param_1 + 0x8b30) = 0;
        }
        *(int *)(lVar14 + 4) = *(int *)(lVar14 + 4) + -1;
        FUN_00a4bfbc(param_1,1);
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      *(long *)(param_1 + 0x70) = lVar9;
      if (lVar9 == 0) goto LAB_00a3de08;
      FUN_00a4bf64(param_1,1,2);
      pbVar15 = *(byte **)(param_1 + 0x70);
      *(int *)(pbVar15 + 4) = *(int *)(pbVar15 + 4) + 1;
      if ((*pbVar15 >> 3 & 1) != 0) {
        *(byte **)(param_1 + 0x50) = pbVar15 + 0x20;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      if (*(long *)(pbVar15 + 0x50) != 0) {
        FUN_00a32668(*(undefined8 *)(param_1 + 0x938));
        pbVar15 = *(byte **)(param_1 + 0x70);
        *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(pbVar15 + 0x50);
      }
      lVar9 = *(long *)(pbVar15 + 0x58);
      if (lVar9 != 0) {
        *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(pbVar15 + 0x60);
        *(long *)(param_1 + 0x8b30) = lVar9;
      }
      FUN_00a4bfbc(param_1,1);
      uVar5 = 0;
      break;
    case 0x2776:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e7c4 to 00b3e7ef has its CatchHandler @ 00a3e884 */
        pcVar19 = *(char **)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
        pcVar19 = (char *)*puVar17;
      }
      if ((pcVar19 != (char *)0x0) && (*pcVar19 == '\0')) {
        pcVar19 = "deflate, gzip";
      }
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6b8));
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      if (pcVar19 == (char *)0x0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(pcVar19);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6b8) = lVar9;
      break;
    case 0x2777:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5d8) = *puVar17;
      break;
    case 0x2778:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5e0) = *puVar17;
      break;
    case 0x277d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e7f0 to 00b3e817 has its CatchHandler @ 00a3e758 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x4a8) = *puVar17;
      break;
    case 0x2786:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x710));
      *(undefined8 *)(param_1 + 0x710) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x710) = lVar9;
      break;
    case 0x2793:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x350) = *puVar17;
      break;
    case 0x2796:
                    /* try { // try from 00a3ca70 to 00b3caa3 has its CatchHandler @ 00a3cb70 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e818 to 00b3e82b has its CatchHandler @ 00a3e888 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3caa4 to 00b3cab7 has its CatchHandler @ 00a3cb3c */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6c0));
      *(undefined8 *)(param_1 + 0x6c0) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3cabc to 00b3caef has its CatchHandler @ 00a3cb40 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x6c0) = lVar9;
      break;
    case 0x2797:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3caf0 to 00b3cb8b has its CatchHandler @ 00a3c718 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a3e830;
      iVar6 = FUN_00a4a0f8(lVar9,"ALL");
      if (iVar6 == 0) {
        iVar6 = FUN_00a4a0f8(lVar9,&DAT_013c5236);
        if (iVar6 == 0) {
                    /* try { // try from 00a3eb40 to 00b3eb93 has its CatchHandler @ 00a3e9f0 */
          iVar6 = FUN_00a4a0f8(lVar9,"FLUSH");
          if (iVar6 == 0) {
            iVar6 = FUN_00a4a0f8(lVar9,"RELOAD");
            if (iVar6 == 0) {
              if (*(long *)(param_1 + 0x938) == 0) {
                uVar16 = FUN_00a313d0(param_1,0,0,1);
                *(undefined8 *)(param_1 + 0x938) = uVar16;
              }
              lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
              if ((lVar9 == 0) || (*(long *)(param_1 + 0x938) == 0)) {
                (*(code *)PTR_free_01769a00)(lVar9);
                uVar5 = 0x1b;
              }
              else {
                FUN_00a4bf64(param_1,2,2);
                iVar6 = FUN_00a4a37c("Set-Cookie:",lVar9,0xb);
                lVar14 = lVar9;
                if (iVar6 != 0) {
                  lVar14 = lVar9 + 0xb;
                }
                FUN_00a316c0(param_1,*(undefined8 *)(param_1 + 0x938),iVar6 != 0,lVar14,0,0);
                FUN_00a4bfbc(param_1,2);
                (*(code *)PTR_free_01769a00)(lVar9);
                uVar5 = 0;
              }
            }
            else {
              FUN_00a31328(param_1);
              uVar5 = 0;
            }
          }
          else {
                    /* catch() { ... } // from try @ 00a3ea80 with catch @ 00a3eb54
                       catch() { ... } // from try @ 00a3eb38 with catch @ 00a3eb54 */
                    /* catch() { ... } // from try @ 00a3ea44 with catch @ 00a3eb58
                       catch() { ... } // from try @ 00a3ead8 with catch @ 00a3eb58 */
            FUN_00a331b4(param_1,0);
            uVar5 = 0;
          }
          break;
        }
        FUN_00a4bf64(param_1,2,2);
        FUN_00a32f60(*(undefined8 *)(param_1 + 0x938));
      }
      else {
        FUN_00a4bf64(param_1,2,2);
        FUN_00a32ea8(*(undefined8 *)(param_1 + 0x938));
      }
                    /* try { // try from 00a3dfe8 to 00b3e013 has its CatchHandler @ 00a3e0d0 */
      FUN_00a4bfbc(param_1,2);
      uVar5 = 0;
      break;
    case 0x27a3:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3caa4 with catch @ 00a3cb3c */
                    /* catch() { ... } // from try @ 00a3cabc with catch @ 00a3cb40 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3ca70 with catch @ 00a3cb70 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6c8));
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x6c8) = lVar9;
      break;
    case 0x27a5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x300) = *puVar17;
      break;
    case 0x27b4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e868 to 00b3e86f has its CatchHandler @ 00a3e884 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x310) = *puVar17;
      break;
    case 0x27b5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e870 to 00b3e8a3 has its CatchHandler @ 00a3e758 */
        __src = *(void **)(param_3[1] + (long)iVar6);
        if (__src == (void *)0x0) goto LAB_00a3e880;
LAB_00a3cc38:
        if (*(long *)(param_1 + 0x2a0) == -1) goto LAB_00a3e880;
        if (*(long *)(param_1 + 0x2a0) < 0) goto LAB_00a3e8c8;
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x850));
        *(undefined8 *)(param_1 + 0x850) = 0;
        lVar9 = *(long *)(param_1 + 0x2a0);
        if (lVar9 == 0) {
          lVar9 = 1;
        }
        __dest = (void *)(*(code *)PTR_malloc_017699f8)(lVar9);
        if (__dest == (void *)0x0) goto LAB_00a3e8c8;
                    /* try { // try from 00a3cc8c to 00b3ccd7 has its CatchHandler @ 00a3cc8c
                       catch() { ... } // from try @ 00a3cc8c with catch @ 00a3cc8c
                       catch() { ... } // from try @ 00a3ccdc with catch @ 00a3cc8c */
        if (*(size_t *)(param_1 + 0x2a0) != 0) {
          memcpy(__dest,__src,*(size_t *)(param_1 + 0x2a0));
        }
        uVar5 = 0;
        *(void **)(param_1 + 0x850) = __dest;
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        __src = (void *)*plVar8;
        if (__src != (void *)0x0) goto LAB_00a3cc38;
LAB_00a3e880:
                    /* catch() { ... } // from try @ 00a3e7c4 with catch @ 00a3e884
                       catch() { ... } // from try @ 00a3e868 with catch @ 00a3e884 */
                    /* catch() { ... } // from try @ 00a3e7a8 with catch @ 00a3e888
                       catch() { ... } // from try @ 00a3e818 with catch @ 00a3e888 */
        (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x850));
        *(undefined8 *)(param_1 + 0x850) = 0;
        if (__src == (void *)0x0) {
          uVar5 = 0;
        }
        else {
                    /* try { // try from 00a3e8a4 to 00b3e8f3 has its CatchHandler @ 00a3e8a4
                       catch() { ... } // from try @ 00a3e8a4 with catch @ 00a3e8a4
                       catch() { ... } // from try @ 00a3e93c with catch @ 00a3e8a4
                       catch() { ... } // from try @ 00a3e9bc with catch @ 00a3e8a4 */
          lVar9 = (*(code *)PTR_strdup_01769a10)(__src);
          if (lVar9 == 0) {
LAB_00a3e8c8:
            uVar5 = 0x1b;
          }
          else {
            uVar5 = 0;
            *(long *)(param_1 + 0x850) = lVar9;
          }
        }
      }
      *(undefined4 *)(param_1 + 0x430) = 2;
      *(undefined8 *)(param_1 + 0x290) = *(undefined8 *)(param_1 + 0x850);
      break;
    case 0x27b8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x328) = *puVar17;
                    /* try { // try from 00a3ccd8 to 00b3ccdb has its CatchHandler @ 00a3cd10 */
      break;
    case 0x27b9:
                    /* try { // try from 00a3ccdc to 00b3cd23 has its CatchHandler @ 00a3cc8c */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e8f4 to 00b3e90b has its CatchHandler @ 00a3e9d4 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3ccd8 with catch @ 00a3cd10 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x798));
      *(undefined8 *)(param_1 + 0x798) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3cd24 to 00b3cdf3 has its CatchHandler @ 00a3cd24
                       catch() { ... } // from try @ 00a3cd24 with catch @ 00a3cd24
                       catch() { ... } // from try @ 00a3ce74 with catch @ 00a3cd24 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x798) = lVar9;
      break;
    case 0x27ba:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7a8));
      *(undefined8 *)(param_1 + 0x7a8) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x7a8) = lVar9;
      break;
    case 0x27bd:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e910 to 00b3e93b has its CatchHandler @ 00a3e9d0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7b8));
      *(undefined8 *)(param_1 + 0x7b8) = 0;
                    /* try { // try from 00a3cdf4 to 00b3ce27 has its CatchHandler @ 00a3cef4 */
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x7b8) = lVar9;
      break;
    case 0x27be:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3ce28 to 00b3ce3b has its CatchHandler @ 00a3cec0 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3ce40 to 00b3ce73 has its CatchHandler @ 00a3cec4 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7c0));
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* try { // try from 00a3ce74 to 00b3cf0f has its CatchHandler @ 00a3cd24 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x7c0) = lVar9;
      break;
    case 0x27bf:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3ce28 with catch @ 00a3cec0 */
                    /* catch() { ... } // from try @ 00a3ce40 with catch @ 00a3cec4 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 2000));
      *(undefined8 *)(param_1 + 2000) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 2000) = lVar9;
                    /* catch() { ... } // from try @ 00a3cdf4 with catch @ 00a3cef4 */
      break;
    case 0x27c0:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7d8));
      *(undefined8 *)(param_1 + 0x7d8) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x7d8) = lVar9;
      break;
    case 0x27c1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e93c to 00b3e963 has its CatchHandler @ 00a3e8a4 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7e0));
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x7e0) = lVar9;
      break;
    case 0x27ca:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x808));
      *(undefined8 *)(param_1 + 0x808) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x808) = lVar9;
      break;
    case 0x27cb:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x870) = *puVar17;
      break;
    case 0x27ce:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e964 to 00b3e977 has its CatchHandler @ 00a3e9d4 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a3d094 to 00b3d117 has its CatchHandler @ 00a3d094
                       catch() { ... } // from try @ 00a3d094 with catch @ 00a3d094
                       catch() { ... } // from try @ 00a3d174 with catch @ 00a3d094
                       catch() { ... } // from try @ 00a3d1cc with catch @ 00a3d094 */
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7e8));
      *(undefined8 *)(param_1 + 0x7e8) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x7e8) = lVar9;
      break;
    case 0x27cf:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7f0));
                    /* try { // try from 00a3d118 to 00b3d12f has its CatchHandler @ 00a3d240 */
      *(undefined8 *)(param_1 + 0x7f0) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x7f0) = lVar9;
      break;
    case 0x27d0:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3d14c to 00b3d173 has its CatchHandler @ 00a3d23c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d174 to 00b3d1c3 has its CatchHandler @ 00a3d094 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7f8));
      *(undefined8 *)(param_1 + 0x7f8) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x7f8) = lVar9;
      break;
    case 0x27d3:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3d1c4 to 00b3d1cb has its CatchHandler @ 00a3d23c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3d1cc to 00b3d25b has its CatchHandler @ 00a3d094 */
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 600) = *puVar17;
      break;
    case 0x27d9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar16 = *puVar17;
      lVar9 = 0x8d60;
      goto LAB_00a3d214;
    case 0x27da:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a3d14c with catch @ 00a3d23c
                       catch() { ... } // from try @ 00a3d1c4 with catch @ 00a3d23c */
                    /* catch() { ... } // from try @ 00a3d118 with catch @ 00a3d240 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x8a8) = *puVar17;
      break;
    case 0x27db:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar16 = *puVar17;
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x410) = uVar16;
      *(undefined8 *)(param_1 + 0x930) = uVar16;
      break;
    case 0x27dc:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e9b4 to 00b3e9bb has its CatchHandler @ 00a3e9d0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a3e9bc to 00b3e9ef has its CatchHandler @ 00a3e8a4 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x818));
      *(undefined8 *)(param_1 + 0x818) = 0;
      if (lVar9 != 0) {
                    /* try { // try from 00a3d2dc to 00b3d3c3 has its CatchHandler @ 00a3d2dc
                       catch() { ... } // from try @ 00a3d2dc with catch @ 00a3d2dc
                       catch() { ... } // from try @ 00a3d444 with catch @ 00a3d2dc */
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x818);
joined_r0x00a3e014:
          uVar5 = 0x1b;
          goto joined_r0x00a3e014;
        }
        uVar5 = 0;
        *(long *)(param_1 + 0x818) = lVar9;
        iVar6 = *(int *)(param_1 + 0x4f0);
        goto joined_r0x00a3e01c;
      }
      goto LAB_00a3de08;
    case 0x27dd:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x828));
      *(undefined8 *)(param_1 + 0x828) = 0;
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x818);
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x818);
          goto joined_r0x00a3e014;
        }
        *(long *)(param_1 + 0x828) = lVar9;
        lVar9 = *(long *)(param_1 + 0x818);
      }
      uVar5 = 0;
joined_r0x00a3e014:
                    /* try { // try from 00a3e014 to 00b3e03f has its CatchHandler @ 00a3defc */
      if (lVar9 != 0) {
        iVar6 = *(int *)(param_1 + 0x4f0);
joined_r0x00a3e01c:
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x4f0) = 1;
        }
      }
      break;
    case 0x27de:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a3e910 with catch @ 00a3e9d0
                       catch() { ... } // from try @ 00a3e9b4 with catch @ 00a3e9d0 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a3e8f4 with catch @ 00a3e9d4
                       catch() { ... } // from try @ 00a3e964 with catch @ 00a3e9d4 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      iVar6 = FUN_00a4a220(*puVar17,&DAT_013d25bd,3);
      uVar5 = 0;
      *(uint *)(param_1 + 0x4f0) = (uint)(iVar6 != 0);
      break;
    case 0x27e1:
                    /* try { // try from 00a3d3c4 to 00b3d3f7 has its CatchHandler @ 00a3d4c4 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 800) = *puVar17;
      break;
    case 0x27e3:
                    /* try { // try from 00a3d3f8 to 00b3d40b has its CatchHandler @ 00a3d490 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3d410 to 00b3d443 has its CatchHandler @ 00a3d494 */
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a4c280(param_1,*puVar17);
      break;
    case 0x27e9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e9f0 to 00b3ea43 has its CatchHandler @ 00a3e9f0
                       catch() { ... } // from try @ 00a3e9f0 with catch @ 00a3e9f0
                       catch() { ... } // from try @ 00a3eab0 with catch @ 00a3e9f0
                       catch() { ... } // from try @ 00a3eb40 with catch @ 00a3e9f0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a3d444 to 00b3d4df has its CatchHandler @ 00a3d2dc */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x810));
      *(undefined8 *)(param_1 + 0x810) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00a3d3f8 with catch @ 00a3d490 */
      *(long *)(param_1 + 0x810) = lVar9;
                    /* catch() { ... } // from try @ 00a3d410 with catch @ 00a3d494 */
      break;
    case 0x27ec:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3d3c4 with catch @ 00a3d4c4 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x838));
      *(undefined8 *)(param_1 + 0x838) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* try { // try from 00a3d4e0 to 00b3d52f has its CatchHandler @ 00a3d4e0
                       catch() { ... } // from try @ 00a3d4e0 with catch @ 00a3d4e0
                       catch() { ... } // from try @ 00a3d58c with catch @ 00a3d4e0
                       catch() { ... } // from try @ 00a3d5d0 with catch @ 00a3d4e0 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x838) = lVar9;
      break;
    case 0x27ed:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
                    /* try { // try from 00a3d530 to 00b3d58b has its CatchHandler @ 00a3d610 */
      uVar5 = FUN_00a4c288(param_1,*puVar17);
      break;
    case 0x27ee:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a4c290(param_1,*puVar17);
      break;
    case 0x27ef:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3d58c to 00b3d5bb has its CatchHandler @ 00a3d4e0 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a4c298(param_1,*puVar17);
      break;
    case 0x27f0:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3d5bc to 00b3d5cf has its CatchHandler @ 00a3d610 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d5d0 to 00b3d62b has its CatchHandler @ 00a3d4e0 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7c8));
      *(undefined8 *)(param_1 + 0x7c8) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x7c8) = lVar9;
      break;
    case 0x27f4:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3d530 with catch @ 00a3d610
                       catch() { ... } // from try @ 00a3d5bc with catch @ 00a3d610 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3d62c to 00b3d67b has its CatchHandler @ 00a3d62c
                       catch() { ... } // from try @ 00a3d62c with catch @ 00a3d62c
                       catch() { ... } // from try @ 00a3d6d8 with catch @ 00a3d62c
                       catch() { ... } // from try @ 00a3d758 with catch @ 00a3d62c */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3c0) = *puVar17;
      break;
    case 0x27f6:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3ea44 to 00b3ea77 has its CatchHandler @ 00a3eb58 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x760));
                    /* try { // try from 00a3d67c to 00b3d693 has its CatchHandler @ 00a3d770 */
      *(undefined8 *)(param_1 + 0x760) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x760) = lVar9;
      break;
    case 0x27f7:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3d6b0 to 00b3d6d7 has its CatchHandler @ 00a3d76c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d6d8 to 00b3d6ff has its CatchHandler @ 00a3d62c */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x840));
      *(undefined8 *)(param_1 + 0x840) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3d700 to 00b3d713 has its CatchHandler @ 00a3d770 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x840) = lVar9;
      break;
    case 0x27fc:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d750 to 00b3d757 has its CatchHandler @ 00a3d76c */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x800));
      *(undefined8 *)(param_1 + 0x800) = 0;
                    /* try { // try from 00a3d758 to 00b3d78b has its CatchHandler @ 00a3d62c */
      if (lVar9 == 0) goto LAB_00a3e830;
                    /* catch() { ... } // from try @ 00a3d6b0 with catch @ 00a3d76c
                       catch() { ... } // from try @ 00a3d750 with catch @ 00a3d76c */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
                    /* catch() { ... } // from try @ 00a3d67c with catch @ 00a3d770
                       catch() { ... } // from try @ 00a3d700 with catch @ 00a3d770 */
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x800) = lVar9;
      break;
    case 0x27fe:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6a8));
      *(undefined8 *)(param_1 + 0x6a8) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x6a8) = lVar9;
      break;
    case 0x2800:
    case 0x2801:
      goto switchD_00a39d68_caseD_2800;
    case 0x2803:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3d810 to 00b3d85f has its CatchHandler @ 00a3d810
                       catch() { ... } // from try @ 00a3d810 with catch @ 00a3d810
                       catch() { ... } // from try @ 00a3d8bc with catch @ 00a3d810
                       catch() { ... } // from try @ 00a3d93c with catch @ 00a3d810 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x418) = *puVar17;
      break;
    case 0x2806:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3ea80 to 00b3eaaf has its CatchHandler @ 00a3eb54 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x758));
                    /* try { // try from 00a3d860 to 00b3d877 has its CatchHandler @ 00a3d954 */
      *(undefined8 *)(param_1 + 0x758) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x758) = lVar9;
      break;
    case 0x2807:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3d894 to 00b3d8bb has its CatchHandler @ 00a3d950 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d8bc to 00b3d8e3 has its CatchHandler @ 00a3d810 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x748));
      *(undefined8 *)(param_1 + 0x748) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3d8e4 to 00b3d8f7 has its CatchHandler @ 00a3d954 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x748) = lVar9;
      break;
    case 0x280b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a3d934 to 00b3d93b has its CatchHandler @ 00a3d950 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x820));
      *(undefined8 *)(param_1 + 0x820) = 0;
                    /* try { // try from 00a3d93c to 00b3d96f has its CatchHandler @ 00a3d810 */
      if (lVar9 != 0) {
                    /* catch() { ... } // from try @ 00a3d894 with catch @ 00a3d950
                       catch() { ... } // from try @ 00a3d934 with catch @ 00a3d950 */
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
                    /* catch() { ... } // from try @ 00a3d860 with catch @ 00a3d954
                       catch() { ... } // from try @ 00a3d8e4 with catch @ 00a3d954 */
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x820);
joined_r0x00a3e044:
          uVar5 = 0x1b;
          goto joined_r0x00a3dea4;
        }
        uVar5 = 0;
        *(long *)(param_1 + 0x820) = lVar9;
        iVar6 = *(int *)(param_1 + 0x5a8);
        goto joined_r0x00a3e04c;
      }
LAB_00a3de08:
      uVar5 = 0;
      break;
    case 0x280c:
                    /* try { // try from 00a3d970 to 00b3d9bf has its CatchHandler @ 00a3d970
                       catch() { ... } // from try @ 00a3d970 with catch @ 00a3d970
                       catch() { ... } // from try @ 00a3da08 with catch @ 00a3d970
                       catch() { ... } // from try @ 00a3da50 with catch @ 00a3d970 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x830));
      *(undefined8 *)(param_1 + 0x830) = 0;
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x820);
      }
      else {
                    /* try { // try from 00a3d9c0 to 00b3d9d7 has its CatchHandler @ 00a3da94 */
        lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
        if (lVar9 == 0) {
                    /* try { // try from 00a3e040 to 00b3e053 has its CatchHandler @ 00a3e0d8 */
          lVar9 = *(long *)(param_1 + 0x820);
          goto joined_r0x00a3e044;
        }
        *(long *)(param_1 + 0x830) = lVar9;
        lVar9 = *(long *)(param_1 + 0x820);
      }
      uVar5 = 0;
joined_r0x00a3dea4:
      if (lVar9 != 0) {
        iVar6 = *(int *)(param_1 + 0x5a8);
joined_r0x00a3e04c:
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x5a8) = 1;
                    /* try { // try from 00a3e058 to 00b3e06b has its CatchHandler @ 00a3e0dc */
        }
      }
      break;
    case 0x280d:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3d9f4 to 00b3da07 has its CatchHandler @ 00a3da90 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3eab0 to 00b3ead7 has its CatchHandler @ 00a3e9f0 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
                    /* try { // try from 00a3da08 to 00b3da3b has its CatchHandler @ 00a3d970 */
      iVar6 = FUN_00a4a220(*puVar17,&DAT_013d25bd,3);
      uVar5 = 0;
      *(uint *)(param_1 + 0x5a8) = (uint)(iVar6 != 0);
      break;
    case 0x280e:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3da3c to 00b3da4f has its CatchHandler @ 00a3da94 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3da50 to 00b3daaf has its CatchHandler @ 00a3d970 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x678));
      *(undefined8 *)(param_1 + 0x678) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
                    /* catch() { ... } // from try @ 00a3d9f4 with catch @ 00a3da90 */
      if (lVar9 == 0) goto LAB_00a3dd94;
                    /* catch() { ... } // from try @ 00a3d9c0 with catch @ 00a3da94
                       catch() { ... } // from try @ 00a3da3c with catch @ 00a3da94 */
      uVar5 = 0;
      *(long *)(param_1 + 0x678) = lVar9;
      break;
    case 0x280f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x688));
      *(undefined8 *)(param_1 + 0x688) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x688) = lVar9;
      break;
    case 0x2810:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3ead8 to 00b3eaeb has its CatchHandler @ 00a3eb58 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6e0));
      *(undefined8 *)(param_1 + 0x6e0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6e0) = lVar9;
      break;
    case 0x2811:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3db94 to 00b3dcc3 has its CatchHandler @ 00a3db94
                       catch() { ... } // from try @ 00a3db94 with catch @ 00a3db94
                       catch() { ... } // from try @ 00a3dd44 with catch @ 00a3db94 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x700));
      *(undefined8 *)(param_1 + 0x700) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x700) = lVar9;
      break;
    case 0x2812:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x6f0));
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x6f0) = lVar9;
      break;
    case 0x2813:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x778));
      *(undefined8 *)(param_1 + 0x778) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x778) = lVar9;
      break;
    case 0x2814:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a3dcc4 to 00b3dcf7 has its CatchHandler @ 00a3ddc4 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x7a0));
                    /* try { // try from 00a3dcf8 to 00b3dd0b has its CatchHandler @ 00a3dd90 */
      *(undefined8 *)(param_1 + 0x7a0) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3dd10 to 00b3dd43 has its CatchHandler @ 00a3dd94 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x7a0) = lVar9;
      break;
    case 0x2816:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a3dd44 to 00b3dddf has its CatchHandler @ 00a3db94 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x720));
      *(undefined8 *)(param_1 + 0x720) = 0;
      if (lVar9 == 0) goto LAB_00a3e830;
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3dd94;
      uVar5 = 0;
      *(long *)(param_1 + 0x720) = lVar9;
                    /* catch() { ... } // from try @ 00a3dcf8 with catch @ 00a3dd90 */
      break;
    case 0x2817:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a3dcc4 with catch @ 00a3ddc4 */
      (*(code *)PTR_free_01769a00)(*(undefined8 *)(param_1 + 0x768));
      *(undefined8 *)(param_1 + 0x768) = 0;
      if (lVar9 == 0) goto LAB_00a3de08;
                    /* try { // try from 00a3dde0 to 00b3de2b has its CatchHandler @ 00a3dde0
                       catch() { ... } // from try @ 00a3dde0 with catch @ 00a3dde0
                       catch() { ... } // from try @ 00a3de48 with catch @ 00a3dde0 */
      lVar9 = (*(code *)PTR_strdup_01769a10)(lVar9);
      if (lVar9 == 0) goto LAB_00a3de10;
      uVar5 = 0;
      *(long *)(param_1 + 0x768) = lVar9;
      break;
    default:
      if (param_2 == 0x4e2b) {
        iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a01c to 00b3a033 has its CatchHandler @ 00a3a140 */
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3eb38 to 00b3eb3f has its CatchHandler @ 00a3eb54 */
          plVar8 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar8 = (long *)*param_3;
          *param_3 = (long)(plVar8 + 1);
        }
        lVar9 = *plVar8;
        uVar5 = 0;
        *(long *)(param_1 + 0x2b0) = lVar9;
        if (lVar9 == 0) {
          *(undefined4 *)(param_1 + 0x2d4) = 0;
                    /* catch() { ... } // from try @ 00a3de2c with catch @ 00a3dec4 */
          *(code **)(param_1 + 0x2b0) = fwrite;
        }
        else {
          *(undefined4 *)(param_1 + 0x2d4) = 1;
        }
      }
    }
    goto switchD_00a39d68_caseD_2713;
  }
                    /* try { // try from 00a39e04 to 00b39e1b has its CatchHandler @ 00a39ec0 */
  switch(param_2) {
  case 0x4e58:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a39e1c to 00b39e53 has its CatchHandler @ 00a39d28 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar8 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar8 = (long *)*param_3;
      *param_3 = (long)(plVar8 + 1);
    }
    lVar9 = *plVar8;
    *(long *)(param_1 + 0x2d8) = lVar9;
    goto LAB_00a3a388;
  case 0x4e59:
  case 0x4e5a:
  case 0x4e5b:
  case 0x4e5c:
  case 0x4e5d:
  case 0x4e5e:
  case 0x4e5f:
  case 0x4e60:
  case 0x4e61:
  case 0x4e62:
  case 0x4e63:
  case 0x4e64:
  case 0x4e65:
  case 0x4e66:
  case 0x4e67:
  case 0x4e68:
  case 0x4e69:
  case 0x4e6a:
  case 0x4e6b:
  case 0x4e6c:
  case 0x4e6d:
  case 0x4e6e:
  case 0x4e70:
  case 0x4e71:
  case 0x4e72:
  case 0x4e73:
  case 0x4e74:
  case 0x4e75:
  case 0x4e76:
  case 0x4e77:
  case 0x4e78:
  case 0x4e79:
  case 0x4e7a:
  case 0x4e7b:
  case 0x4e7c:
  case 0x4e7d:
  case 0x4e7f:
  case 0x4e80:
  case 0x4e81:
  case 0x4e82:
  case 0x4e83:
  case 0x4e84:
  case 0x4e85:
  case 0x4e86:
  case 0x4e87:
  case 0x4e88:
  case 0x4e89:
  case 0x4e8a:
  case 0x4e8b:
  case 0x4e8d:
  case 0x4e8e:
  case 0x4e8f:
  case 0x4e90:
  case 0x4e91:
  case 0x4e92:
  case 0x4e93:
  case 0x4e94:
  case 0x4e95:
  case 0x4e96:
  case 0x4e97:
  case 0x4e98:
  case 0x4e99:
  case 0x4e9a:
  case 0x4e9b:
  case 0x4e9c:
  case 0x4e9d:
  case 0x4e9e:
  case 0x4e9f:
  case 0x4ea0:
  case 0x4ea1:
  case 0x4ea3:
  case 0x4ea4:
  case 0x4ea5:
  case 0x4ea6:
  case 0x4ea7:
  case 0x4ea8:
  case 0x4ea9:
  case 0x4eaa:
  case 0x4eab:
  case 0x4eac:
  case 0x4ead:
  case 0x4eb1:
  case 0x4eb2:
  case 0x4eb3:
  case 0x4eb5:
  case 0x4eb6:
  case 0x4eb7:
  case 0x4eb8:
  case 0x4eb9:
  case 0x4eba:
  case 0x4ebb:
  case 0x4ebc:
  case 0x4ebd:
  case 0x4ebe:
  case 0x4ebf:
  case 0x4ec0:
  case 0x4ec1:
  case 0x4ec2:
  case 0x4ec4:
  case 0x4ec5:
  case 0x4ec6:
  case 0x4ec8:
  case 0x4ec9:
  case 0x4eca:
  case 0x4ecb:
  case 0x4ecc:
  case 0x4ecd:
  case 0x4ece:
  case 0x4ecf:
  case 0x4ed0:
  case 0x4ed1:
  case 0x4ed2:
  case 0x4ed3:
  case 0x4ed4:
  case 0x4ed5:
  case 0x4ed6:
  case 0x4ed7:
  case 0x4ed8:
  case 0x4ed9:
  case 0x4eda:
  case 0x4edb:
  case 0x4edc:
  case 0x4edd:
  case 0x4ede:
  case 0x4edf:
  case 0x4ee0:
  case 0x4ee1:
  case 0x4ee2:
  case 0x4ee3:
  case 0x4ee5:
  case 0x4ee9:
  case 0x4eea:
  case 0x4eeb:
  case 0x4eec:
  case 0x4eed:
  case 0x4eee:
  case 0x4eef:
  case 0x4ef1:
  case 0x4ef2:
  case 0x4ef3:
  case 0x4ef4:
  case 0x4ef5:
  case 0x4ef6:
  case 0x4ef7:
  case 0x4ef8:
  case 0x4ef9:
  case 0x4efa:
    break;
  case 0x4e6f:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a050 to 00b3a057 has its CatchHandler @ 00a3a128 */
                    /* try { // try from 00a3a058 to 00b3a09f has its CatchHandler @ 00a39ee8 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2b8) = *puVar17;
    break;
  case 0x4e7e:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3a0a0 to 00b3a0b3 has its CatchHandler @ 00a3a178 */
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2e8) = *puVar17;
    break;
  case 0x4e8c:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a0c4 to 00b3a0d7 has its CatchHandler @ 00a3a188 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
                    /* try { // try from 00a3a0d8 to 00b3a1b3 has its CatchHandler @ 00a39ee8 */
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x4a0) = *puVar17;
    break;
  case 0x4ea2:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2f0) = *puVar17;
    break;
  case 0x4eae:
    iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a3a050 with catch @ 00a3a128 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
                    /* catch() { ... } // from try @ 00a3a01c with catch @ 00a3a140 */
                    /* catch() { ... } // from try @ 00a39fac with catch @ 00a3a144 */
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x330) = *puVar17;
    break;
  case 0x4eaf:
    iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a39f68 with catch @ 00a3a154 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e0a8 to 00b3e0af has its CatchHandler @ 00a3e0d4 */
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
                    /* catch() { ... } // from try @ 00a39f58 with catch @ 00a3a174 */
                    /* catch() { ... } // from try @ 00a39f3c with catch @ 00a3a178
                       catch() { ... } // from try @ 00a3a0a0 with catch @ 00a3a178 */
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x338) = *puVar17;
    break;
  case 0x4eb0:
    iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a39fe0 with catch @ 00a3a188
                       catch() { ... } // from try @ 00a3a0c4 with catch @ 00a3a188 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e0b4 to 00b3e0bb has its CatchHandler @ 00a3e0d0 */
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x340) = *puVar17;
                    /* try { // try from 00a3a1b4 to 00b3a203 has its CatchHandler @ 00a3a1b4
                       catch() { ... } // from try @ 00a3a1b4 with catch @ 00a3a1b4
                       catch() { ... } // from try @ 00a3a264 with catch @ 00a3a1b4
                       catch() { ... } // from try @ 00a3a2a8 with catch @ 00a3a1b4 */
    break;
  case 0x4eb4:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a3e0bc to 00b3e0f7 has its CatchHandler @ 00a3defc */
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2f8) = *puVar17;
    break;
  case 0x4ec3:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a3dfe8 with catch @ 00a3e0d0
                       catch() { ... } // from try @ 00a3e0b4 with catch @ 00a3e0d0 */
    }
    else {
                    /* try { // try from 00a3a204 to 00b3a263 has its CatchHandler @ 00a3a2e8 */
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x308) = *puVar17;
    break;
  case 0x4ec7:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a3df6c with catch @ 00a3e0d4
                       catch() { ... } // from try @ 00a3e0a8 with catch @ 00a3e0d4 */
                    /* catch() { ... } // from try @ 00a3df50 with catch @ 00a3e0d8
                       catch() { ... } // from try @ 00a3e040 with catch @ 00a3e0d8 */
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a3dfa8 with catch @ 00a3e0dc
                       catch() { ... } // from try @ 00a3e058 with catch @ 00a3e0dc */
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x298) = *puVar17;
    break;
  case 0x4ee4:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a264 to 00b3a293 has its CatchHandler @ 00a3a1b4 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2c0) = *puVar17;
    break;
  case 0x4ee6:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a294 to 00b3a2a7 has its CatchHandler @ 00a3a2e8 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3a2a8 to 00b3a303 has its CatchHandler @ 00a3a1b4 */
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x890) = *puVar17;
    break;
  case 0x4ee7:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
                    /* catch() { ... } // from try @ 00a3a204 with catch @ 00a3a2e8
                       catch() { ... } // from try @ 00a3a294 with catch @ 00a3a2e8 */
    *(undefined8 *)(param_1 + 0x898) = *puVar17;
    break;
  case 0x4ee8:
    iVar6 = (int)param_3[3];
                    /* try { // try from 00a3a304 to 00b3a357 has its CatchHandler @ 00a3a304
                       catch() { ... } // from try @ 00a3a304 with catch @ 00a3a304
                       catch() { ... } // from try @ 00a3a3b4 with catch @ 00a3a304
                       catch() { ... } // from try @ 00a3a434 with catch @ 00a3a304 */
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x8a0) = *puVar17;
    break;
  case 0x4ef0:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x318) = *puVar17;
    break;
  case 0x4efb:
                    /* try { // try from 00a3a358 to 00b3a3b3 has its CatchHandler @ 00a3a448 */
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar8 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar8 = (long *)*param_3;
      *param_3 = (long)(plVar8 + 1);
    }
    lVar9 = *plVar8;
    *(long *)(param_1 + 0x2e0) = lVar9;
LAB_00a3a388:
    uVar5 = 0;
    *(bool *)(param_1 + 0x970) = lVar9 != 0;
    break;
  default:
                    /* try { // try from 00a39e54 to 00b39e67 has its CatchHandler @ 00a39ec8 */
    switch(param_2) {
    case 0x75a3:
      goto switchD_00a39e68_caseD_75a3;
    case 0x75a4:
      goto switchD_00a39e68_caseD_75a4;
    case 0x75a5:
      goto switchD_00a39e68_caseD_75a5;
    case 0x75a6:
    case 0x75a7:
    case 0x75a9:
    case 0x75aa:
    case 0x75ab:
    case 0x75ac:
    case 0x75ad:
    case 0x75ae:
    case 0x75af:
    case 0x75b0:
    case 0x75b1:
    case 0x75b2:
    case 0x75b3:
    case 0x75b4:
    case 0x75b5:
    case 0x75b6:
    case 0x75b7:
    case 0x75b8:
    case 0x75b9:
    case 0x75ba:
    case 0x75bb:
    case 0x75bc:
    case 0x75bd:
    case 0x75be:
    case 0x75bf:
    case 0x75c0:
      break;
    case 0x75a8:
      goto switchD_00a39e68_caseD_75a8;
    case 0x75c1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* try { // try from 00a3a3b4 to 00b3a41f has its CatchHandler @ 00a3a304 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3a0) = *puVar17;
      break;
    case 0x75c2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3a8) = *puVar17;
      break;
    default:
      if (param_2 == 0x4e2c) {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
          plVar8 = (long *)(param_3[1] + (long)iVar6);
        }
        else {
          plVar8 = (long *)*param_3;
                    /* try { // try from 00a39fe0 to 00b3a013 has its CatchHandler @ 00a3a188 */
          *param_3 = (long)(plVar8 + 1);
        }
        lVar9 = *plVar8;
        uVar5 = 0;
        *(long *)(param_1 + 0x2c8) = lVar9;
        if (lVar9 == 0) {
          *(undefined4 *)(param_1 + 0x2d0) = 0;
          *(code **)(param_1 + 0x2c8) = fread;
        }
        else {
          *(undefined4 *)(param_1 + 0x2d0) = 1;
        }
      }
    }
  }
switchD_00a39d68_caseD_2713:
  uVar4 = uVar5;
switchD_00a39d68_caseD_2800:
  return uVar4;
}

