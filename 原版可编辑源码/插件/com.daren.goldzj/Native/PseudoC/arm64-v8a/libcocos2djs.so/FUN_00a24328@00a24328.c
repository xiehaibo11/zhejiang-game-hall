
undefined4 FUN_00a24328(long param_1,int param_2,long *param_3)

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
  
  uVar4 = 4;
  uVar5 = 0x30;
  if (param_2 < 0x2711) {
    switch(param_2) {
    case 3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28760 to 00b2876b has its CatchHandler @ 00a28918 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x260) = *puVar17;
      break;
    case 0xd:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a2876c to 00b288a3 has its CatchHandler @ 00a28930 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x358) = *plVar8 * 1000;
      break;
    case 0xe:
switchD_00a24480_caseD_75a3:
      iVar6 = (int)param_3[3];
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
switchD_00a24480_caseD_75a4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28508 to 00b2854b has its CatchHandler @ 00a28508
                       catch() { ... } // from try @ 00a28508 with catch @ 00a28508
                       catch() { ... } // from try @ 00a28564 with catch @ 00a28508 */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3b0) = *puVar17;
      break;
    case 0x1b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x3d2) = *plVar8 != 0;
      break;
    case 0x20:
      iVar6 = (int)param_3[3];
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
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
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
      break;
    case 0x29:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
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
      *(bool *)(param_1 + 0x61d) = *plVar8 != 0;
      break;
    case 0x2b:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a24d08 with catch @ 00a24c54
                       catch() { ... } // from try @ 00a24dc4 with catch @ 00a24c54
                       catch() { ... } // from try @ 00a24e28 with catch @ 00a24c54
                       catch() { ... } // from try @ 00a24e8c with catch @ 00a24c54 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
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
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a24cac to 00b24cb3 has its CatchHandler @ 00a24f60 */
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a24cb8 to 00b24cbf has its CatchHandler @ 00a24f44 */
      uVar5 = 0;
                    /* try { // try from 00a24cc4 to 00b24ccb has its CatchHandler @ 00a24f60 */
      *(bool *)(param_1 + 0x620) = *plVar8 != 0;
      break;
    case 0x2d:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a24cd0 to 00b24cd3 has its CatchHandler @ 00a24f34 */
                    /* try { // try from 00a24cd8 to 00b24ce3 has its CatchHandler @ 00a24f60 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a24cfc to 00b24d07 has its CatchHandler @ 00a24ef8 */
      *(bool *)(param_1 + 0x618) = *plVar8 != 0;
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
        uVar4 = 4;
        goto LAB_00a24d3c;
      }
LAB_00a28808:
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = 1;
      break;
    case 0x2f:
                    /* try { // try from 00a24d08 to 00b24d57 has its CatchHandler @ 00a24c54 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a28808;
      uVar4 = 2;
LAB_00a24d3c:
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x430) = uVar4;
      *(undefined1 *)(param_1 + 0x620) = 0;
      break;
    case 0x30:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a24d58 to 00b24d5f has its CatchHandler @ 00a24f60 */
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
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x614) = *plVar8 != 0;
                    /* try { // try from 00a24dbc to 00b24dc3 has its CatchHandler @ 00a24f5c */
      break;
    case 0x33:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a24dc4 to 00b24e1f has its CatchHandler @ 00a24c54 */
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
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* try { // try from 00a24e20 to 00b24e27 has its CatchHandler @ 00a24f5c */
                    /* try { // try from 00a24e28 to 00b24e83 has its CatchHandler @ 00a24c54 */
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
      *(bool *)(param_1 + 0x613) = *plVar8 != 0;
      break;
    case 0x3a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a24e84 to 00b24e8b has its CatchHandler @ 00a24f5c */
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a24e8c to 00b24fb3 has its CatchHandler @ 00a24c54 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x61f) = *plVar8 != 0;
      break;
    case 0x3b:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x238) = *puVar17;
      break;
    case 0x3c:
switchD_00a24480_caseD_75a8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      if ((*(long *)(param_1 + 0x2a0) < lVar9) &&
         (*(long *)(param_1 + 0x290) == *(long *)(param_1 + 0x850))) {
        (*(code *)PTR_free_01d1b748)();
        *(undefined8 *)(param_1 + 0x850) = 0;
        *(undefined8 *)(param_1 + 0x290) = 0;
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x2a0) = lVar9;
      break;
    case 0x3d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* catch() { ... } // from try @ 00a24cfc with catch @ 00a24ef8 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x612) = *plVar8 != 0;
      break;
    case 0x40:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* catch() { ... } // from try @ 00a24cd0 with catch @ 00a24f34 */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
                    /* catch() { ... } // from try @ 00a24cb8 with catch @ 00a24f44 */
      *(bool *)(param_1 + 0x448) = *plVar8 != 0;
      break;
    case 0x44:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a24dbc with catch @ 00a24f5c
                       catch() { ... } // from try @ 00a24e20 with catch @ 00a24f5c
                       catch() { ... } // from try @ 00a24e84 with catch @ 00a24f5c */
                    /* catch() { ... } // from try @ 00a24cac with catch @ 00a24f60
                       catch() { ... } // from try @ 00a24cc4 with catch @ 00a24f60
                       catch() { ... } // from try @ 00a24cd8 with catch @ 00a24f60
                       catch() { ... } // from try @ 00a24d58 with catch @ 00a24f60 */
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
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x611) = *plVar8 != 0;
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
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a288a4 to 00b28987 has its CatchHandler @ 00a286e0 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
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
      *(bool *)(param_1 + 0x62a) = *plVar8 != 0;
      break;
    case 0x4e:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
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
      if (lVar9 == 0) goto LAB_00a28e48;
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
LAB_00a26008:
        FUN_00a23020(param_1,"CURLOPT_SSL_VERIFYHOST no longer supports 1 as value!");
        return 0x2b;
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x449) = *plVar8 != 0;
      break;
    case 0x54:
      iVar6 = (int)param_3[3];
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
      *(long *)(param_1 + 0x438) = *plVar8;
      break;
    case 0x55:
      iVar6 = (int)param_3[3];
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
      uVar5 = thunk_FUN_00a46348(param_1);
      break;
    case 0x5b:
      iVar6 = (int)param_3[3];
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
                    /* try { // try from 00a25220 to 00b25267 has its CatchHandler @ 00a25220
                       catch() { ... } // from try @ 00a25220 with catch @ 00a25220
                       catch() { ... } // from try @ 00a253b8 with catch @ 00a25220 */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28760 with catch @ 00a28918 */
                    /* catch() { ... } // from try @ 00a28754 with catch @ 00a2891c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a28734 with catch @ 00a28920 */
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
                    /* try { // try from 00a25268 to 00b25273 has its CatchHandler @ 00a25434 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a25274 to 00b2527f has its CatchHandler @ 00a25430 */
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
                    /* catch() { ... } // from try @ 00a2876c with catch @ 00a28930 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x63c) = *plVar8 != 0;
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
                    /* try { // try from 00a25348 to 00b253b7 has its CatchHandler @ 00a25438 */
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
LAB_00a253b4:
                    /* try { // try from 00a253b8 to 00b2544b has its CatchHandler @ 00a25220 */
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
        if (uVar7 != 0) goto LAB_00a253b4;
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
                    /* catch() { ... } // from try @ 00a25274 with catch @ 00a25430 */
                    /* catch() { ... } // from try @ 00a25268 with catch @ 00a25434 */
                    /* catch() { ... } // from try @ 00a25348 with catch @ 00a25438 */
      if ((lVar9 == 2) || (lVar9 == 1)) {
        uVar5 = 0;
        *(int *)(param_1 + 0x5fc) = (int)lVar9;
      }
      else if (lVar9 == 0) {
        uVar5 = 0;
        *(undefined4 *)(param_1 + 0x5fc) = 0;
      }
      else {
LAB_00a28438:
        uVar5 = 0x30;
      }
      break;
    case 0x6f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28988 to 00b289db has its CatchHandler @ 00a28988
                       catch() { ... } // from try @ 00a28988 with catch @ 00a28988
                       catch() { ... } // from try @ 00a28b40 with catch @ 00a28988 */
        uVar7 = *(ulong *)(param_3[1] + (long)iVar6);
        if (uVar7 == 0) {
          uVar18 = 0;
        }
        else {
LAB_00a25478:
          *(byte *)(param_1 + 0x8c32) = (byte)((uint)uVar7 >> 4) & 1;
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
        if (uVar7 != 0) goto LAB_00a25478;
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
      break;
    case 0x72:
switchD_00a24480_caseD_75a5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
                    /* try { // try from 00a289dc to 00b289f3 has its CatchHandler @ 00a28bbc */
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
                    /* try { // try from 00a289fc to 00b28a07 has its CatchHandler @ 00a28bb8 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar2 = FUN_00a16d08(*puVar17);
      uVar5 = 0;
      *(undefined2 *)(param_1 + 0x2a8) = uVar2;
      break;
    case 0x8c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28a08 to 00b28a13 has its CatchHandler @ 00a28bb4 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar4 = FUN_00a16cfc(*puVar17);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x2ac) = uVar4;
      break;
    case 0x8d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28a14 to 00b28b3f has its CatchHandler @ 00a28bcc */
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
                    /* try { // try from 00a257b0 to 00b2580f has its CatchHandler @ 00a257b0
                       catch() { ... } // from try @ 00a257b0 with catch @ 00a257b0
                       catch() { ... } // from try @ 00a25814 with catch @ 00a257b0
                       catch() { ... } // from try @ 00a25938 with catch @ 00a257b0
                       catch() { ... } // from try @ 00a259f4 with catch @ 00a257b0
                       catch() { ... } // from try @ 00a25a5c with catch @ 00a257b0 */
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
                    /* try { // try from 00a25810 to 00b25813 has its CatchHandler @ 00a25a60 */
      break;
    case 0x9d:
                    /* try { // try from 00a25814 to 00b25933 has its CatchHandler @ 00a257b0 */
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
      uVar3 = FUN_00a16cfc(*puVar17);
      uVar5 = 0;
      *(uint *)(param_1 + 0x288) = uVar3 & 7;
      break;
    case 0xa6:
                    /* try { // try from 00a25934 to 00b25937 has its CatchHandler @ 00a25a5c */
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a25938 to 00b259b7 has its CatchHandler @ 00a257b0 */
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
        if (*plVar8 != 0) goto LAB_00a28438;
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
      uVar4 = FUN_00a16d04(*puVar17);
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x858) = uVar4;
      break;
    case 0xac:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a259b8 to 00b259f3 has its CatchHandler @ 00a25a74 */
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
                    /* try { // try from 00a259f4 to 00b25a57 has its CatchHandler @ 00a257b0 */
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
                    /* try { // try from 00a25a58 to 00b25a5b has its CatchHandler @ 00a25a74 */
                    /* catch() { ... } // from try @ 00a25934 with catch @ 00a25a5c
                       try { // try from 00a25a5c to 00b25ab7 has its CatchHandler @ 00a257b0 */
                    /* catch() { ... } // from try @ 00a25810 with catch @ 00a25a60 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a259b8 with catch @ 00a25a74
                       catch() { ... } // from try @ 00a25a58 with catch @ 00a25a74 */
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
LAB_00a2782c:
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
        puVar13 = (uint *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28b40 to 00b28c23 has its CatchHandler @ 00a28988 */
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
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
      uVar5 = 0;
      *(byte *)(param_1 + 0x3d0) = (byte)*puVar12 & 1;
      break;
    case 0xe8:
      uVar7 = thunk_FUN_00a4822c();
      if ((uVar7 & 1) == 0) {
LAB_00a26094:
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
      uVar7 = FUN_00a18e38();
      if ((uVar7 & 1) == 0) goto LAB_00a26094;
      iVar6 = (int)param_3[3];
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
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8e2) = *plVar8 != 0;
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
      goto switchD_00a24380_caseD_2800;
    case 0xf2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
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
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x8d0) = *plVar8 != 0;
      break;
    case 0xf5:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a25f74 to 00b25f9f has its CatchHandler @ 00a25fb8 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28a08 with catch @ 00a28bb4 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a289fc with catch @ 00a28bb8 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x619) = *plVar8 != 0;
      break;
    case 0xf8:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a289dc with catch @ 00a28bbc */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a25f74 with catch @ 00a25fb8
                        */
        *param_3 = (long)(plVar8 + 1);
      }
      uVar5 = 0;
      *(bool *)(param_1 + 0x500) = *plVar8 != 0;
      break;
    case 0xf9:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a25fe4 to 00b2600f has its CatchHandler @ 00a26020 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28a14 with catch @ 00a28bcc */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      if (*plVar8 == 1) goto LAB_00a26008;
      uVar5 = 0;
      *(bool *)(param_1 + 0x501) = *plVar8 != 0;
      break;
    case 0xfa:
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a25fe4 with catch @ 00a26020
                        */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
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
    goto switchD_00a24380_caseD_2713;
  }
  if (param_2 < 0x4e2c) {
    switch(param_2) {
    case 0x2711:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x240) = *puVar17;
      break;
    case 0x2712:
      if (*(char *)(param_1 + 0x910) != '\0') {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x908));
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x738));
      *(undefined8 *)(param_1 + 0x738) = 0;
      if (lVar9 == 0) {
                    /* catch() { ... } // from try @ 00a283a0 with catch @ 00a2846c */
        uVar5 = 0;
        *(undefined8 *)(param_1 + 0x908) = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          uVar5 = 0x1b;
          *(undefined8 *)(param_1 + 0x908) = *(undefined8 *)(param_1 + 0x738);
                    /* try { // try from 00a2854c to 00b28563 has its CatchHandler @ 00a28594 */
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
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x718));
      *(undefined8 *)(param_1 + 0x718) = 0;
      if (lVar9 == 0) {
LAB_00a28e48:
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
LAB_00a283ac:
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
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a29298(*puVar17,param_1 + 0x7b8,param_1 + 0x7c0);
      break;
    case 0x2716:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28c24 to 00b28c77 has its CatchHandler @ 00a28c24
                       catch() { ... } // from try @ 00a28c24 with catch @ 00a28c24
                       catch() { ... } // from try @ 00a28de8 with catch @ 00a28c24 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a29298(*puVar17,param_1 + 2000,param_1 + 0x7d8);
      break;
    case 0x2717:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x728));
      *(undefined8 *)(param_1 + 0x728) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x728) = lVar9;
      break;
    case 0x2719:
      iVar6 = (int)param_3[3];
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x850));
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x850) = 0;
      *(undefined4 *)(param_1 + 0x430) = 2;
      break;
    case 0x2720:
      if (*(char *)(param_1 + 0x920) != '\0') {
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x918));
        *(undefined8 *)(param_1 + 0x918) = 0;
        *(undefined1 *)(param_1 + 0x920) = 0;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x730));
      *(undefined8 *)(param_1 + 0x730) = 0;
      if (lVar9 == 0) {
        uVar5 = 0;
                    /* catch() { ... } // from try @ 00a283b8 with catch @ 00a28484 */
        *(undefined8 *)(param_1 + 0x918) = 0;
                    /* catch() { ... } // from try @ 00a28378 with catch @ 00a28488 */
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          uVar5 = 0x1b;
          *(undefined8 *)(param_1 + 0x918) = *(undefined8 *)(param_1 + 0x730);
        }
        else {
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6d0));
      *(undefined8 *)(param_1 + 0x6d0) = 0;
      if (lVar9 == 0) {
                    /* catch() { ... } // from try @ 00a283c0 with catch @ 00a2848c */
        lVar9 = 0;
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x6d0);
                    /* try { // try from 00a28564 to 00b285a7 has its CatchHandler @ 00a28508 */
          uVar5 = 0x1b;
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x6d0) = lVar9;
        }
      }
      *(bool *)(param_1 + 0x616) = lVar9 != 0;
      break;
    case 0x2722:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28c78 to 00b28c8f has its CatchHandler @ 00a28e64 */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x790));
      *(undefined8 *)(param_1 + 0x790) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x690));
      *(undefined8 *)(param_1 + 0x690) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x690) = lVar9;
      break;
    case 0x2727:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
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
                    /* try { // try from 00a28c98 to 00b28ca3 has its CatchHandler @ 00a28e60 */
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
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28ca4 to 00b28caf has its CatchHandler @ 00a28e5c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x670));
      *(undefined8 *)(param_1 + 0x670) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x670) = lVar9;
      break;
    case 0x272a:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28cb0 to 00b28de7 has its CatchHandler @ 00a28e74 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6e8));
      *(undefined8 *)(param_1 + 0x6e8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x6e8) = lVar9;
      break;
    case 0x272c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
                    /* try { // try from 00a266ac to 00b26777 has its CatchHandler @ 00a26788 */
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
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = FUN_00a16ac0(*(undefined8 *)(param_1 + 0x928));
      if (lVar9 == 0) {
        FUN_00a16c3c(*(undefined8 *)(param_1 + 0x928));
        *(undefined8 *)(param_1 + 0x928) = 0;
        return 0x1b;
      }
      uVar5 = 0;
      *(long *)(param_1 + 0x928) = lVar9;
      break;
    case 0x2734:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6a0));
      *(undefined8 *)(param_1 + 0x6a0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x6a0) = lVar9;
      break;
    case 0x2735:
      iVar6 = (int)param_3[3];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a266ac with catch @ 00a26788
                        */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      pcVar1 = __cxa_thread_atexit_impl;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6b0));
      *(undefined8 *)(param_1 + 0x6b0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x6b0) = lVar9;
      break;
    case 0x274f:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x708));
      *(undefined8 *)(param_1 + 0x708) = 0;
      if (lVar9 == 0) {
        lVar9 = 0;
                    /* catch() { ... } // from try @ 00a283a8 with catch @ 00a2849c */
        uVar5 = 0;
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x708);
          uVar5 = 0x1b;
        }
        else {
          uVar5 = 0;
          *(long *)(param_1 + 0x708) = lVar9;
        }
      }
                    /* catch() { ... } // from try @ 00a2854c with catch @ 00a28594 */
      *(bool *)(param_1 + 0x629) = lVar9 != 0;
      break;
    case 0x2751:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x750));
      *(undefined8 *)(param_1 + 0x750) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) {
LAB_00a28428:
        uVar5 = 0x1b;
      }
      else {
        uVar5 = 0;
        *(long *)(param_1 + 0x750) = lVar9;
      }
      break;
    case 0x2756:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x788));
      *(undefined8 *)(param_1 + 0x788) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x788) = lVar9;
      break;
    case 0x275d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x780));
      *(undefined8 *)(param_1 + 0x780) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x780) = lVar9;
                    /* try { // try from 00a26a70 to 00b26ae7 has its CatchHandler @ 00a26a70
                       catch() { ... } // from try @ 00a26a70 with catch @ 00a26a70
                       catch() { ... } // from try @ 00a26aec with catch @ 00a26a70
                       catch() { ... } // from try @ 00a26b70 with catch @ 00a26a70 */
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x698));
      *(undefined8 *)(param_1 + 0x698) = 0;
      uVar4 = 0;
      if (lVar9 != 0) {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          uVar4 = 0x1b;
        }
        else {
          uVar4 = 0;
          *(long *)(param_1 + 0x698) = lVar9;
        }
      }
                    /* catch() { ... } // from try @ 00a28604 with catch @ 00a285a8 */
      lVar9 = FUN_00a1b9e8(param_1,0,*(undefined8 *)(param_1 + 0x938),
                           *(undefined1 *)(param_1 + 0x3d1));
      uVar5 = 0x1b;
      if (lVar9 != 0) {
        uVar5 = uVar4;
      }
      *(long *)(param_1 + 0x938) = lVar9;
      break;
    case 0x2763:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a26ae8 to 00b26aeb has its CatchHandler @ 00a26d20 */
                    /* try { // try from 00a26aec to 00b26b6b has its CatchHandler @ 00a26a70 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x770));
      *(undefined8 *)(param_1 + 0x770) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
                    /* try { // try from 00a26b6c to 00b26b6f has its CatchHandler @ 00a26d14 */
      lVar9 = *plVar8;
                    /* try { // try from 00a26b70 to 00b26d33 has its CatchHandler @ 00a26a70 */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x680));
      *(undefined8 *)(param_1 + 0x680) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6d8));
      *(undefined8 *)(param_1 + 0x6d8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6f8));
      *(undefined8 *)(param_1 + 0x6f8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      if ((pcVar19 == (char *)0x0) || (*pcVar19 == '\0')) goto LAB_00a28e48;
      uVar5 = thunk_FUN_00a46258(param_1);
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
                    /* catch() { ... } // from try @ 00a26b6c with catch @ 00a26d14 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a26ae8 with catch @ 00a26d20 */
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x228) = *puVar17;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x740));
      *(undefined8 *)(param_1 + 0x740) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
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
        FUN_00a3557c(param_1,1,2);
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
        FUN_00a355d4(param_1,1);
        *(undefined8 *)(param_1 + 0x70) = 0;
      }
      *(long *)(param_1 + 0x70) = lVar9;
      if (lVar9 == 0) goto LAB_00a28420;
      FUN_00a3557c(param_1,1,2);
      pbVar15 = *(byte **)(param_1 + 0x70);
      *(int *)(pbVar15 + 4) = *(int *)(pbVar15 + 4) + 1;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a26e98 with catch @ 00a26e6c
                        */
      if ((*pbVar15 >> 3 & 1) != 0) {
        *(byte **)(param_1 + 0x50) = pbVar15 + 0x20;
        *(undefined4 *)(param_1 + 0x58) = 3;
      }
      if (*(long *)(pbVar15 + 0x50) != 0) {
        FUN_00a1cc80(*(undefined8 *)(param_1 + 0x938));
                    /* try { // try from 00a26e94 to 00b26e97 has its CatchHandler @ 00a26fa8 */
        pbVar15 = *(byte **)(param_1 + 0x70);
                    /* try { // try from 00a26e98 to 00b26fd3 has its CatchHandler @ 00a26e6c */
        *(undefined8 *)(param_1 + 0x938) = *(undefined8 *)(pbVar15 + 0x50);
      }
      lVar9 = *(long *)(pbVar15 + 0x58);
      if (lVar9 != 0) {
        *(undefined8 *)(param_1 + 0x5b8) = *(undefined8 *)(pbVar15 + 0x60);
        *(long *)(param_1 + 0x8b30) = lVar9;
      }
      FUN_00a355d4(param_1,1);
      uVar5 = 0;
      break;
    case 0x2776:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        pcVar19 = *(char **)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28de8 to 00b28ecb has its CatchHandler @ 00a28c24 */
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
        pcVar19 = (char *)*puVar17;
      }
      if ((pcVar19 != (char *)0x0) && (*pcVar19 == '\0')) {
        pcVar19 = "deflate, gzip";
      }
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6b8));
      *(undefined8 *)(param_1 + 0x6b8) = 0;
      if (pcVar19 == (char *)0x0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(pcVar19);
      if (lVar9 == 0) goto LAB_00a283ac;
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
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a26e94 with catch @ 00a26fa8
                        */
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x5e0) = *puVar17;
      break;
    case 0x277d:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x710));
      *(undefined8 *)(param_1 + 0x710) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6c0));
      *(undefined8 *)(param_1 + 0x6c0) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x6c0) = lVar9;
      break;
    case 0x2797:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        lVar9 = *(long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
        lVar9 = *plVar8;
      }
      if (lVar9 == 0) goto LAB_00a28e48;
      iVar6 = FUN_00a33710(lVar9,"ALL");
      if (iVar6 == 0) {
        iVar6 = FUN_00a33710(lVar9,&DAT_018928f6);
        if (iVar6 == 0) {
          iVar6 = FUN_00a33710(lVar9,"FLUSH");
          if (iVar6 == 0) {
            iVar6 = FUN_00a33710(lVar9,"RELOAD");
            if (iVar6 == 0) {
              if (*(long *)(param_1 + 0x938) == 0) {
                    /* try { // try from 00a291c8 to 00b291df has its CatchHandler @ 00a29350 */
                uVar16 = FUN_00a1b9e8(param_1,0,0,1);
                *(undefined8 *)(param_1 + 0x938) = uVar16;
              }
                    /* try { // try from 00a291e8 to 00b291f3 has its CatchHandler @ 00a2934c */
              lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
                    /* try { // try from 00a291f4 to 00b291ff has its CatchHandler @ 00a29348 */
              if ((lVar9 == 0) || (*(long *)(param_1 + 0x938) == 0)) {
                (*(code *)PTR_free_01d1b748)(lVar9);
                uVar5 = 0x1b;
              }
              else {
                    /* try { // try from 00a29200 to 00b292d3 has its CatchHandler @ 00a29360 */
                FUN_00a3557c(param_1,2,2);
                iVar6 = FUN_00a33994("Set-Cookie:",lVar9,0xb);
                lVar14 = lVar9;
                if (iVar6 != 0) {
                  lVar14 = lVar9 + 0xb;
                }
                FUN_00a1bcd8(param_1,*(undefined8 *)(param_1 + 0x938),iVar6 != 0,lVar14,0,0);
                FUN_00a355d4(param_1,2);
                (*(code *)PTR_free_01d1b748)(lVar9);
                uVar5 = 0;
              }
            }
            else {
              FUN_00a1b940(param_1);
              uVar5 = 0;
            }
          }
          else {
                    /* try { // try from 00a29174 to 00b291c7 has its CatchHandler @ 00a29174
                       catch() { ... } // from try @ 00a29174 with catch @ 00a29174
                       catch() { ... } // from try @ 00a292d4 with catch @ 00a29174 */
            FUN_00a1d7cc(param_1,0);
            uVar5 = 0;
          }
          break;
        }
                    /* try { // try from 00a285f0 to 00b28603 has its CatchHandler @ 00a286c4 */
        FUN_00a3557c(param_1,2,2);
        FUN_00a1d578(*(undefined8 *)(param_1 + 0x938));
      }
      else {
        FUN_00a3557c(param_1,2,2);
        FUN_00a1d4c0(*(undefined8 *)(param_1 + 0x938));
      }
                    /* try { // try from 00a28604 to 00b286df has its CatchHandler @ 00a285a8 */
      FUN_00a355d4(param_1,2);
      uVar5 = 0;
      break;
    case 0x27a3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28c78 with catch @ 00a28e64 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6c8));
      *(undefined8 *)(param_1 + 0x6c8) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x6c8) = lVar9;
      break;
    case 0x27a5:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28cb0 with catch @ 00a28e74 */
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
        __src = *(void **)(param_3[1] + (long)iVar6);
        if (__src == (void *)0x0) goto LAB_00a28e98;
LAB_00a27250:
        if (*(long *)(param_1 + 0x2a0) == -1) goto LAB_00a28e98;
        if (*(long *)(param_1 + 0x2a0) < 0) goto LAB_00a28ee0;
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x850));
        *(undefined8 *)(param_1 + 0x850) = 0;
        lVar9 = *(long *)(param_1 + 0x2a0);
        if (lVar9 == 0) {
          lVar9 = 1;
        }
        __dest = (void *)(*(code *)PTR_malloc_01d1b740)(lVar9);
        if (__dest == (void *)0x0) goto LAB_00a28ee0;
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
        if (__src != (void *)0x0) goto LAB_00a27250;
LAB_00a28e98:
        (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x850));
        *(undefined8 *)(param_1 + 0x850) = 0;
        if (__src == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          lVar9 = (*(code *)PTR_strdup_01d1b758)(__src);
                    /* try { // try from 00a28ecc to 00b28f1f has its CatchHandler @ 00a28ecc
                       catch() { ... } // from try @ 00a28ecc with catch @ 00a28ecc
                       catch() { ... } // from try @ 00a29090 with catch @ 00a28ecc */
          if (lVar9 == 0) {
LAB_00a28ee0:
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
      break;
    case 0x27b9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x798));
      *(undefined8 *)(param_1 + 0x798) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x798) = lVar9;
      break;
    case 0x27ba:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28f20 to 00b28f37 has its CatchHandler @ 00a2910c */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7a8));
      *(undefined8 *)(param_1 + 0x7a8) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x7a8) = lVar9;
      break;
    case 0x27bd:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7b8));
      *(undefined8 *)(param_1 + 0x7b8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x7b8) = lVar9;
      break;
    case 0x27be:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a2751c with catch @ 00a2744c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7c0));
      *(undefined8 *)(param_1 + 0x7c0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
                    /* try { // try from 00a27484 to 00b2748b has its CatchHandler @ 00a27568 */
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
                    /* try { // try from 00a27490 to 00b27493 has its CatchHandler @ 00a27558 */
                    /* try { // try from 00a27494 to 00b2749b has its CatchHandler @ 00a27548 */
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x7c0) = lVar9;
      break;
    case 0x27bf:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a274ac to 00b2751b has its CatchHandler @ 00a2751c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28f40 to 00b28f4b has its CatchHandler @ 00a29108 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 2000));
      *(undefined8 *)(param_1 + 2000) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 2000) = lVar9;
      break;
    case 0x27c0:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a274ac with catch @ 00a2751c
                       try { // try from 00a2751c to 00b27583 has its CatchHandler @ 00a2744c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28f4c to 00b28f57 has its CatchHandler @ 00a29104 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a27494 with catch @ 00a27548 */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7d8));
      *(undefined8 *)(param_1 + 0x7d8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
                    /* catch() { ... } // from try @ 00a27490 with catch @ 00a27558 */
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
                    /* catch() { ... } // from try @ 00a27484 with catch @ 00a27568 */
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x7d8) = lVar9;
      break;
    case 0x27c1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28f58 to 00b2908f has its CatchHandler @ 00a2911c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7e0));
      *(undefined8 *)(param_1 + 0x7e0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x808));
      *(undefined8 *)(param_1 + 0x808) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
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
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7e8));
      *(undefined8 *)(param_1 + 0x7e8) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7f0));
      *(undefined8 *)(param_1 + 0x7f0) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x7f0) = lVar9;
      break;
    case 0x27d0:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7f8));
      *(undefined8 *)(param_1 + 0x7f8) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x7f8) = lVar9;
      break;
    case 0x27d3:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
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
      goto LAB_00a2782c;
    case 0x27da:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
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
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x818));
      *(undefined8 *)(param_1 + 0x818) = 0;
      if (lVar9 != 0) {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x818);
joined_r0x00a2862c:
          uVar5 = 0x1b;
          goto joined_r0x00a2862c;
        }
        uVar5 = 0;
        *(long *)(param_1 + 0x818) = lVar9;
        iVar6 = *(int *)(param_1 + 0x4f0);
        goto joined_r0x00a28634;
      }
      goto LAB_00a28420;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x828));
      *(undefined8 *)(param_1 + 0x828) = 0;
      if (lVar9 == 0) {
        lVar9 = *(long *)(param_1 + 0x818);
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x818);
          goto joined_r0x00a2862c;
        }
        *(long *)(param_1 + 0x828) = lVar9;
        lVar9 = *(long *)(param_1 + 0x818);
      }
      uVar5 = 0;
joined_r0x00a2862c:
      if (lVar9 != 0) {
        iVar6 = *(int *)(param_1 + 0x4f0);
joined_r0x00a28634:
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x4f0) = 1;
        }
      }
      break;
    case 0x27de:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      iVar6 = FUN_00a33838(*puVar17,&DAT_018a40f9,3);
      uVar5 = 0;
      *(uint *)(param_1 + 0x4f0) = (uint)(iVar6 != 0);
      break;
    case 0x27e1:
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
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a35898(param_1,*puVar17);
      break;
    case 0x27e9:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x810));
      *(undefined8 *)(param_1 + 0x810) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x810) = lVar9;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x838));
      *(undefined8 *)(param_1 + 0x838) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      uVar5 = FUN_00a358a0(param_1,*puVar17);
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
      uVar5 = FUN_00a358a8(param_1,*puVar17);
      break;
    case 0x27ef:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = FUN_00a358b0(param_1,*puVar17);
      break;
    case 0x27f0:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a27be0 to 00b27c8f has its CatchHandler @ 00a27be0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a27be0 with catch @ 00a27be0
                       catch(type#1 @ 00000000) { ... } // from try @ 00a27d44 with catch @ 00a27be0
                        */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7c8));
      *(undefined8 *)(param_1 + 0x7c8) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x7c8) = lVar9;
      break;
    case 0x27f4:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3c0) = *puVar17;
      break;
    case 0x27f6:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* try { // try from 00a27c90 to 00b27c93 has its CatchHandler @ 00a27df8 */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x760));
      *(undefined8 *)(param_1 + 0x760) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x760) = lVar9;
      break;
    case 0x27f7:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a27cc8 to 00b27ccf has its CatchHandler @ 00a27df0 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x840));
      *(undefined8 *)(param_1 + 0x840) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x840) = lVar9;
      break;
    case 0x27fc:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a27d40 to 00b27d43 has its CatchHandler @ 00a27e10 */
                    /* try { // try from 00a27d44 to 00b27e13 has its CatchHandler @ 00a27be0 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x800));
      *(undefined8 *)(param_1 + 0x800) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6a8));
      *(undefined8 *)(param_1 + 0x6a8) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a27cc8 with catch @ 00a27df0
                        */
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a27c90 with catch @ 00a27df8
                        */
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x6a8) = lVar9;
      break;
    case 0x2800:
    case 0x2801:
      goto switchD_00a24380_caseD_2800;
    case 0x2803:
      iVar6 = (int)param_3[3];
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00a27d40 with catch @ 00a27e10
                        */
                    /* catch() { ... } // from try @ 00a27ffc with catch @ 00a27e14 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a29090 to 00b29173 has its CatchHandler @ 00a28ecc */
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x418) = *puVar17;
      break;
    case 0x2806:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a27e44 to 00b27e47 has its CatchHandler @ 00a28004 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* try { // try from 00a27e54 to 00b27e57 has its CatchHandler @ 00a28000 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x758));
      *(undefined8 *)(param_1 + 0x758) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x758) = lVar9;
      break;
    case 0x2807:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x748));
      *(undefined8 *)(param_1 + 0x748) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
                    /* try { // try from 00a27f00 to 00b27f07 has its CatchHandler @ 00a2801c */
      if (lVar9 == 0) goto LAB_00a28428;
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
                    /* try { // try from 00a27f38 to 00b27f7f has its CatchHandler @ 00a28010 */
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x820));
      *(undefined8 *)(param_1 + 0x820) = 0;
      if (lVar9 != 0) {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x820);
joined_r0x00a2865c:
          uVar5 = 0x1b;
          goto joined_r0x00a284bc;
        }
        uVar5 = 0;
        *(long *)(param_1 + 0x820) = lVar9;
        iVar6 = *(int *)(param_1 + 0x5a8);
        goto joined_r0x00a28664;
      }
LAB_00a28420:
      uVar5 = 0;
      break;
    case 0x280c:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x830));
      *(undefined8 *)(param_1 + 0x830) = 0;
      if (lVar9 == 0) {
                    /* catch() { ... } // from try @ 00a28364 with catch @ 00a284b4 */
                    /* catch() { ... } // from try @ 00a28338 with catch @ 00a284b8 */
        lVar9 = *(long *)(param_1 + 0x820);
      }
      else {
        lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
        if (lVar9 == 0) {
          lVar9 = *(long *)(param_1 + 0x820);
          goto joined_r0x00a2865c;
        }
        *(long *)(param_1 + 0x830) = lVar9;
        lVar9 = *(long *)(param_1 + 0x820);
      }
      uVar5 = 0;
joined_r0x00a284bc:
      if (lVar9 != 0) {
        iVar6 = *(int *)(param_1 + 0x5a8);
joined_r0x00a28664:
        if (iVar6 == 0) {
          *(undefined4 *)(param_1 + 0x5a8) = 1;
        }
      }
      break;
    case 0x280d:
                    /* try { // try from 00a27ffc to 00b2804b has its CatchHandler @ 00a27e14 */
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a27e54 with catch @ 00a28000
                       catch() { ... } // from try @ 00a27ff8 with catch @ 00a28000 */
                    /* catch() { ... } // from try @ 00a27e44 with catch @ 00a28004 */
                    /* catch() { ... } // from try @ 00a27f38 with catch @ 00a28010 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
                    /* catch() { ... } // from try @ 00a27f00 with catch @ 00a2801c */
        *param_3 = (long)(puVar17 + 1);
      }
      iVar6 = FUN_00a33838(*puVar17,&DAT_018a40f9,3);
      uVar5 = 0;
      *(uint *)(param_1 + 0x5a8) = (uint)(iVar6 != 0);
      break;
    case 0x280e:
                    /* try { // try from 00a2804c to 00b2809f has its CatchHandler @ 00a2804c
                       catch() { ... } // from try @ 00a2804c with catch @ 00a2804c
                       catch() { ... } // from try @ 00a28204 with catch @ 00a2804c */
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x678));
      *(undefined8 *)(param_1 + 0x678) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
                    /* try { // try from 00a280a0 to 00b280b7 has its CatchHandler @ 00a28280 */
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x678) = lVar9;
      break;
    case 0x280f:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a280c0 to 00b280cb has its CatchHandler @ 00a2827c */
                    /* try { // try from 00a280cc to 00b280d7 has its CatchHandler @ 00a28278 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
                    /* try { // try from 00a280d8 to 00b28203 has its CatchHandler @ 00a28290 */
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x688));
      *(undefined8 *)(param_1 + 0x688) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x688) = lVar9;
      break;
    case 0x2810:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6e0));
      *(undefined8 *)(param_1 + 0x6e0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
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
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x700));
      *(undefined8 *)(param_1 + 0x700) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x700) = lVar9;
      break;
    case 0x2812:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a28204 to 00b282e7 has its CatchHandler @ 00a2804c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28f4c with catch @ 00a29104 */
                    /* catch() { ... } // from try @ 00a28f40 with catch @ 00a29108 */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a28f20 with catch @ 00a2910c */
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x6f0));
      *(undefined8 *)(param_1 + 0x6f0) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x6f0) = lVar9;
      break;
    case 0x2813:
      iVar6 = (int)param_3[3];
                    /* catch() { ... } // from try @ 00a280cc with catch @ 00a28278 */
                    /* catch() { ... } // from try @ 00a280c0 with catch @ 00a2827c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
                    /* catch() { ... } // from try @ 00a280a0 with catch @ 00a28280 */
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
                    /* catch() { ... } // from try @ 00a280d8 with catch @ 00a28290 */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x778));
      *(undefined8 *)(param_1 + 0x778) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
      uVar5 = 0;
      *(long *)(param_1 + 0x778) = lVar9;
      break;
    case 0x2814:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a282e8 to 00b28337 has its CatchHandler @ 00a282e8
                       catch() { ... } // from try @ 00a282e8 with catch @ 00a282e8
                       catch() { ... } // from try @ 00a283f0 with catch @ 00a282e8 */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* catch() { ... } // from try @ 00a28f58 with catch @ 00a2911c */
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x7a0));
      *(undefined8 *)(param_1 + 0x7a0) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
                    /* try { // try from 00a28338 to 00b2834f has its CatchHandler @ 00a284b8 */
      *(long *)(param_1 + 0x7a0) = lVar9;
      break;
    case 0x2816:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
                    /* try { // try from 00a28364 to 00b28377 has its CatchHandler @ 00a284b4 */
      lVar9 = *plVar8;
                    /* try { // try from 00a28378 to 00b28387 has its CatchHandler @ 00a28488 */
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x720));
      *(undefined8 *)(param_1 + 0x720) = 0;
      if (lVar9 == 0) goto LAB_00a28e48;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a283ac;
                    /* try { // try from 00a283a0 to 00b283a7 has its CatchHandler @ 00a2846c */
      uVar5 = 0;
      *(long *)(param_1 + 0x720) = lVar9;
                    /* try { // try from 00a283a8 to 00b283b7 has its CatchHandler @ 00a2849c */
      break;
    case 0x2817:
      iVar6 = (int)param_3[3];
                    /* try { // try from 00a283b8 to 00b283bf has its CatchHandler @ 00a28484 */
                    /* try { // try from 00a283c0 to 00b283ef has its CatchHandler @ 00a2848c */
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        plVar8 = (long *)(param_3[1] + (long)iVar6);
      }
      else {
        plVar8 = (long *)*param_3;
        *param_3 = (long)(plVar8 + 1);
      }
      lVar9 = *plVar8;
      (*(code *)PTR_free_01d1b748)(*(undefined8 *)(param_1 + 0x768));
                    /* try { // try from 00a283f0 to 00b28507 has its CatchHandler @ 00a282e8 */
      *(undefined8 *)(param_1 + 0x768) = 0;
      if (lVar9 == 0) goto LAB_00a28420;
      lVar9 = (*(code *)PTR_strdup_01d1b758)(lVar9);
      if (lVar9 == 0) goto LAB_00a28428;
      uVar5 = 0;
      *(long *)(param_1 + 0x768) = lVar9;
      break;
    default:
      if (param_2 == 0x4e2b) {
        iVar6 = (int)param_3[3];
        if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
          *(code **)(param_1 + 0x2b0) = fwrite;
        }
        else {
          *(undefined4 *)(param_1 + 0x2d4) = 1;
        }
      }
    }
    goto switchD_00a24380_caseD_2713;
  }
  switch(param_2) {
  case 0x4e58:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      plVar8 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar8 = (long *)*param_3;
      *param_3 = (long)(plVar8 + 1);
    }
    lVar9 = *plVar8;
    *(long *)(param_1 + 0x2d8) = lVar9;
    goto LAB_00a249a0;
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
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x2e8) = *puVar17;
    break;
  case 0x4e8c:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
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
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x330) = *puVar17;
    break;
  case 0x4eaf:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* catch() { ... } // from try @ 00a285f0 with catch @ 00a286c4 */
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x338) = *puVar17;
    break;
  case 0x4eb0:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x340) = *puVar17;
    break;
  case 0x4eb4:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
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
                    /* try { // try from 00a286e0 to 00b28733 has its CatchHandler @ 00a286e0
                       catch() { ... } // from try @ 00a286e0 with catch @ 00a286e0
                       catch() { ... } // from try @ 00a288a4 with catch @ 00a286e0 */
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
      *param_3 = (long)(puVar17 + 1);
    }
    uVar5 = 0;
    *(undefined8 *)(param_1 + 0x308) = *puVar17;
    break;
  case 0x4ec7:
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
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
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
      puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
    }
    else {
      puVar17 = (undefined8 *)*param_3;
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
    *(undefined8 *)(param_1 + 0x898) = *puVar17;
    break;
  case 0x4ee8:
    iVar6 = (int)param_3[3];
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
    iVar6 = (int)param_3[3];
    if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
                    /* try { // try from 00a28734 to 00b2874b has its CatchHandler @ 00a28920 */
      plVar8 = (long *)(param_3[1] + (long)iVar6);
    }
    else {
      plVar8 = (long *)*param_3;
      *param_3 = (long)(plVar8 + 1);
    }
    lVar9 = *plVar8;
    *(long *)(param_1 + 0x2e0) = lVar9;
LAB_00a249a0:
    uVar5 = 0;
    *(bool *)(param_1 + 0x970) = lVar9 != 0;
    break;
  default:
    switch(param_2) {
    case 0x75a3:
      goto switchD_00a24480_caseD_75a3;
    case 0x75a4:
      goto switchD_00a24480_caseD_75a4;
    case 0x75a5:
      goto switchD_00a24480_caseD_75a5;
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
      goto switchD_00a24480_caseD_75a8;
    case 0x75c1:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
      }
      else {
        puVar17 = (undefined8 *)*param_3;
        *param_3 = (long)(puVar17 + 1);
      }
      uVar5 = 0;
      *(undefined8 *)(param_1 + 0x3a0) = *puVar17;
      break;
    case 0x75c2:
      iVar6 = (int)param_3[3];
      if ((iVar6 < 0) && (*(int *)(param_3 + 3) = iVar6 + 8, iVar6 + 8 < 1)) {
        puVar17 = (undefined8 *)(param_3[1] + (long)iVar6);
                    /* try { // try from 00a28754 to 00b2875f has its CatchHandler @ 00a2891c */
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
switchD_00a24380_caseD_2713:
  uVar4 = uVar5;
switchD_00a24380_caseD_2800:
                    /* catch() { ... } // from try @ 00a28ca4 with catch @ 00a28e5c */
                    /* catch() { ... } // from try @ 00a28c98 with catch @ 00a28e60 */
  return uVar4;
}

