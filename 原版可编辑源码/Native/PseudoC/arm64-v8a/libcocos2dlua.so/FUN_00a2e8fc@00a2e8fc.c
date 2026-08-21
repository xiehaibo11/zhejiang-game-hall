
undefined4 FUN_00a2e8fc(char *param_1,undefined8 *param_2,long *param_3)

{
  char cVar1;
  undefined1 uVar2;
  size_t sVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  size_t sVar6;
  long lVar7;
  char *pcVar8;
  size_t sVar9;
  char *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  undefined1 *puVar17;
  
  *param_2 = 0;
  *param_3 = 0;
  sVar3 = strlen(param_1);
  uVar5 = 0x3d;
  if ((sVar3 != 0) && ((sVar3 & 3) == 0)) {
    cVar1 = *param_1;
    sVar6 = sVar3;
    pcVar8 = param_1;
    while (cVar1 != '\0') {
      pcVar8 = pcVar8 + 1;
      if (cVar1 == '=') {
        sVar9 = 1;
        if (*pcVar8 == '=') {
          sVar9 = 2;
        }
        if (sVar9 == sVar6) goto LAB_00a2e994;
        goto LAB_00a2f778;
      }
      sVar6 = sVar6 - 1;
                    /* try { // try from 00a2e960 to 00b2e9b7 has its CatchHandler @ 00a2e960
                       catch() { ... } // from try @ 00a2e960 with catch @ 00a2e960
                       catch() { ... } // from try @ 00a2e9bc with catch @ 00a2e960 */
      cVar1 = *pcVar8;
    }
    sVar9 = 0;
    if (sVar6 == 0) {
LAB_00a2e994:
      uVar14 = sVar3 >> 2;
      lVar12 = uVar14 * 3 - sVar9;
      puVar4 = (undefined1 *)(*(code *)PTR_malloc_017699f8)(lVar12 + 1);
                    /* try { // try from 00a2e9b8 to 00b2e9bb has its CatchHandler @ 00a2e9fc */
      if (puVar4 == (undefined1 *)0x0) {
                    /* catch() { ... } // from try @ 00a2f6c4 with catch @ 00a2f75c */
        uVar5 = 0x1b;
                    /* catch() { ... } // from try @ 00a2f6dc with catch @ 00a2f760 */
      }
      else {
                    /* try { // try from 00a2e9bc to 00b2ea17 has its CatchHandler @ 00a2e960 */
        puVar17 = puVar4;
        if (uVar14 != 0) {
          uVar15 = 0;
          pcVar8 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
          do {
            cVar1 = *param_1;
            lVar7 = 0;
            lVar13 = 1;
            pcVar10 = pcVar8;
                    /* catch() { ... } // from try @ 00a2e9b8 with catch @ 00a2e9fc */
            switch(cVar1) {
            case '+':
              pcVar10 = "+/";
              lVar7 = 0x3e;
              break;
            default:
                    /* try { // try from 00a2ea18 to 00b2ea63 has its CatchHandler @ 00a2ea18
                       catch() { ... } // from try @ 00a2ea18 with catch @ 00a2ea18
                       catch() { ... } // from try @ 00a2ea68 with catch @ 00a2ea18 */
              pcVar10 = "/";
              if (cVar1 != '/') {
                pcVar10 = "";
              }
              lVar7 = 0x3f;
              if (cVar1 != '/') {
                lVar7 = 0x40;
              }
              break;
            case '0':
              pcVar10 = "0123456789+/";
              lVar7 = 0x34;
              break;
            case '1':
              pcVar10 = "123456789+/";
              lVar7 = 0x35;
              break;
            case '2':
              pcVar10 = "23456789+/";
              lVar7 = 0x36;
              break;
            case '3':
              pcVar10 = "3456789+/";
              lVar7 = 0x37;
              break;
            case '4':
              pcVar10 = "456789+/";
                    /* try { // try from 00a2ea64 to 00b2ea67 has its CatchHandler @ 00a2ea9c */
              lVar7 = 0x38;
                    /* try { // try from 00a2ea68 to 00b2eaaf has its CatchHandler @ 00a2ea18 */
              break;
            case '5':
              pcVar10 = "56789+/";
              lVar7 = 0x39;
              break;
            case '6':
              pcVar10 = "6789+/";
              lVar7 = 0x3a;
              break;
            case '7':
              pcVar10 = "789+/";
              lVar7 = 0x3b;
              break;
            case '8':
              pcVar10 = "89+/";
              lVar7 = 0x3c;
              break;
            case '9':
                    /* catch() { ... } // from try @ 00a2ea64 with catch @ 00a2ea9c */
              pcVar10 = "9+/";
              lVar7 = 0x3d;
              break;
            case '=':
              goto switchD_00a2ea04_caseD_3d;
            case 'A':
              break;
            case 'B':
              pcVar10 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 1;
                    /* try { // try from 00a2eab0 to 00b2eb97 has its CatchHandler @ 00a2eab0
                       catch() { ... } // from try @ 00a2eab0 with catch @ 00a2eab0
                       catch() { ... } // from try @ 00a2ec18 with catch @ 00a2eab0 */
              break;
            case 'C':
              pcVar10 = "CDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 2;
              break;
            case 'D':
              pcVar10 = "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 3;
              break;
            case 'E':
              pcVar10 = "EFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 4;
              break;
            case 'F':
              pcVar10 = "FGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 5;
              break;
            case 'G':
              pcVar10 = "GHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 6;
              break;
            case 'H':
              pcVar10 = "HIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 7;
              break;
            case 'I':
              pcVar10 = "IJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 8;
              break;
            case 'J':
              pcVar10 = "JKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 9;
              break;
            case 'K':
              pcVar10 = "KLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 10;
              break;
            case 'L':
              pcVar10 = "LMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xb;
              break;
            case 'M':
              pcVar10 = "MNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xc;
              break;
            case 'N':
              pcVar10 = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xd;
              break;
            case 'O':
              pcVar10 = "OPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xe;
              break;
            case 'P':
              pcVar10 = "PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xf;
              break;
            case 'Q':
              pcVar10 = "QRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x10;
              break;
            case 'R':
              pcVar10 = "RSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x11;
              break;
            case 'S':
              pcVar10 = "STUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x12;
              break;
            case 'T':
              pcVar10 = "TUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x13;
              break;
            case 'U':
              pcVar10 = "UVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x14;
              break;
            case 'V':
                    /* try { // try from 00a2eb98 to 00b2ebcb has its CatchHandler @ 00a2ec98 */
              pcVar10 = "VWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x15;
              break;
            case 'W':
              pcVar10 = "WXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x16;
              break;
            case 'X':
              pcVar10 = "XYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x17;
              break;
            case 'Y':
              pcVar10 = "YZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x18;
              break;
            case 'Z':
              pcVar10 = "Zabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2ebcc to 00b2ebdf has its CatchHandler @ 00a2ec64 */
              lVar7 = 0x19;
              break;
            case 'a':
              pcVar10 = "abcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1a;
              break;
            case 'b':
              pcVar10 = "bcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2ebe4 to 00b2ec17 has its CatchHandler @ 00a2ec68 */
              lVar7 = 0x1b;
              break;
            case 'c':
              pcVar10 = "cdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1c;
              break;
            case 'd':
              pcVar10 = "defghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1d;
              break;
            case 'e':
              pcVar10 = "efghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1e;
              break;
            case 'f':
              pcVar10 = "fghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1f;
                    /* try { // try from 00a2ec18 to 00b2ecb3 has its CatchHandler @ 00a2eab0 */
              break;
            case 'g':
              pcVar10 = "ghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x20;
              break;
            case 'h':
              pcVar10 = "hijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x21;
              break;
            case 'i':
              pcVar10 = "ijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x22;
              break;
            case 'j':
              pcVar10 = "jklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x23;
              break;
            case 'k':
              pcVar10 = "klmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x24;
              break;
            case 'l':
              pcVar10 = "lmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x25;
              break;
            case 'm':
                    /* catch() { ... } // from try @ 00a2ebcc with catch @ 00a2ec64 */
              pcVar10 = "mnopqrstuvwxyz0123456789+/";
                    /* catch() { ... } // from try @ 00a2ebe4 with catch @ 00a2ec68 */
              lVar7 = 0x26;
              break;
            case 'n':
              pcVar10 = "nopqrstuvwxyz0123456789+/";
              lVar7 = 0x27;
              break;
            case 'o':
              pcVar10 = "opqrstuvwxyz0123456789+/";
              lVar7 = 0x28;
              break;
            case 'p':
              pcVar10 = "pqrstuvwxyz0123456789+/";
              lVar7 = 0x29;
              break;
            case 'q':
              pcVar10 = "qrstuvwxyz0123456789+/";
                    /* catch() { ... } // from try @ 00a2eb98 with catch @ 00a2ec98 */
              lVar7 = 0x2a;
              break;
            case 'r':
              pcVar10 = "rstuvwxyz0123456789+/";
              lVar7 = 0x2b;
              break;
            case 's':
              pcVar10 = "stuvwxyz0123456789+/";
              lVar7 = 0x2c;
                    /* try { // try from 00a2ecb4 to 00b2ed03 has its CatchHandler @ 00a2ecb4
                       catch() { ... } // from try @ 00a2ecb4 with catch @ 00a2ecb4
                       catch() { ... } // from try @ 00a2ed4c with catch @ 00a2ecb4
                       catch() { ... } // from try @ 00a2edcc with catch @ 00a2ecb4 */
              break;
            case 't':
              pcVar10 = "tuvwxyz0123456789+/";
              lVar7 = 0x2d;
              break;
            case 'u':
              pcVar10 = "uvwxyz0123456789+/";
              lVar7 = 0x2e;
              break;
            case 'v':
              pcVar10 = "vwxyz0123456789+/";
              lVar7 = 0x2f;
              break;
            case 'w':
              pcVar10 = "wxyz0123456789+/";
              lVar7 = 0x30;
              break;
            case 'x':
              pcVar10 = "xyz0123456789+/";
              lVar7 = 0x31;
              break;
            case 'y':
              pcVar10 = "yz0123456789+/";
              lVar7 = 0x32;
              break;
            case 'z':
              pcVar10 = "z0123456789+/";
                    /* try { // try from 00a2ed04 to 00b2ed1b has its CatchHandler @ 00a2ede4 */
              lVar7 = 0x33;
            }
            if (*pcVar10 != cVar1) {
LAB_00a2f764:
              (*(code *)PTR_free_01769a00)(puVar4);
              goto LAB_00a2f778;
            }
            lVar13 = 0;
switchD_00a2ea04_caseD_3d:
            cVar1 = param_1[1];
                    /* try { // try from 00a2ed20 to 00b2ed4b has its CatchHandler @ 00a2ede0 */
            lVar11 = 0;
            pcVar10 = pcVar8;
            switch(cVar1) {
            case '+':
              pcVar10 = "+/";
              lVar11 = 0x3e;
                    /* try { // try from 00a2ed4c to 00b2ed73 has its CatchHandler @ 00a2ecb4 */
              break;
            default:
              pcVar10 = "/";
              if (cVar1 != '/') {
                pcVar10 = "";
              }
              lVar11 = 0x3f;
              if (cVar1 != '/') {
                lVar11 = 0x40;
              }
              break;
            case '0':
              pcVar10 = "0123456789+/";
              lVar11 = 0x34;
                    /* try { // try from 00a2ed74 to 00b2ed87 has its CatchHandler @ 00a2ede4 */
              break;
            case '1':
              pcVar10 = "123456789+/";
              lVar11 = 0x35;
              break;
            case '2':
              pcVar10 = "23456789+/";
              lVar11 = 0x36;
              break;
            case '3':
              pcVar10 = "3456789+/";
              lVar11 = 0x37;
              break;
            case '4':
              pcVar10 = "456789+/";
              lVar11 = 0x38;
              break;
            case '5':
              pcVar10 = "56789+/";
              lVar11 = 0x39;
              break;
            case '6':
              pcVar10 = "6789+/";
              lVar11 = 0x3a;
              break;
            case '7':
              pcVar10 = "789+/";
                    /* try { // try from 00a2edc4 to 00b2edcb has its CatchHandler @ 00a2ede0 */
              lVar11 = 0x3b;
              break;
            case '8':
                    /* try { // try from 00a2edcc to 00b2edff has its CatchHandler @ 00a2ecb4 */
              pcVar10 = "89+/";
              lVar11 = 0x3c;
              break;
            case '9':
              pcVar10 = "9+/";
              lVar11 = 0x3d;
                    /* catch() { ... } // from try @ 00a2ed20 with catch @ 00a2ede0
                       catch() { ... } // from try @ 00a2edc4 with catch @ 00a2ede0 */
              break;
            case '=':
                    /* catch() { ... } // from try @ 00a2ed04 with catch @ 00a2ede4
                       catch() { ... } // from try @ 00a2ed74 with catch @ 00a2ede4 */
              lVar11 = lVar7 << 6;
              lVar13 = lVar13 + 1;
              goto LAB_00a2f060;
            case 'A':
              break;
            case 'B':
              pcVar10 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 1;
              break;
            case 'C':
              pcVar10 = "CDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 2;
              break;
            case 'D':
              pcVar10 = "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 3;
              break;
            case 'E':
              pcVar10 = "EFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 4;
              break;
            case 'F':
              pcVar10 = "FGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 5;
              break;
            case 'G':
              pcVar10 = "GHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 6;
              break;
            case 'H':
              pcVar10 = "HIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 7;
              break;
            case 'I':
              pcVar10 = "IJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 8;
              break;
            case 'J':
              pcVar10 = "JKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 9;
              break;
            case 'K':
              pcVar10 = "KLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 10;
              break;
            case 'L':
              pcVar10 = "LMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xb;
              break;
            case 'M':
              pcVar10 = "MNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xc;
              break;
            case 'N':
              pcVar10 = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xd;
              break;
            case 'O':
              pcVar10 = "OPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xe;
              break;
            case 'P':
              pcVar10 = "PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xf;
              break;
            case 'Q':
              pcVar10 = "QRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x10;
              break;
            case 'R':
              pcVar10 = "RSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x11;
              break;
            case 'S':
              pcVar10 = "STUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x12;
              break;
            case 'T':
              pcVar10 = "TUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x13;
              break;
            case 'U':
              pcVar10 = "UVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x14;
              break;
            case 'V':
              pcVar10 = "VWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x15;
              break;
            case 'W':
              pcVar10 = "WXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x16;
              break;
            case 'X':
              pcVar10 = "XYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x17;
              break;
            case 'Y':
              pcVar10 = "YZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x18;
              break;
            case 'Z':
              pcVar10 = "Zabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x19;
              break;
            case 'a':
              pcVar10 = "abcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1a;
              break;
            case 'b':
              pcVar10 = "bcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1b;
              break;
            case 'c':
              pcVar10 = "cdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1c;
              break;
            case 'd':
              pcVar10 = "defghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1d;
              break;
            case 'e':
              pcVar10 = "efghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1e;
                    /* try { // try from 00a2ef54 to 00b2efab has its CatchHandler @ 00a2ef54
                       catch() { ... } // from try @ 00a2ef54 with catch @ 00a2ef54
                       catch() { ... } // from try @ 00a2efb0 with catch @ 00a2ef54 */
              break;
            case 'f':
              pcVar10 = "fghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1f;
              break;
            case 'g':
              pcVar10 = "ghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x20;
              break;
            case 'h':
              pcVar10 = "hijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x21;
              break;
            case 'i':
              pcVar10 = "ijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x22;
              break;
            case 'j':
              pcVar10 = "jklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x23;
              break;
            case 'k':
              pcVar10 = "klmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x24;
              break;
            case 'l':
              pcVar10 = "lmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x25;
              break;
            case 'm':
                    /* try { // try from 00a2efac to 00b2efaf has its CatchHandler @ 00a2eff0 */
              pcVar10 = "mnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2efb0 to 00b2f00b has its CatchHandler @ 00a2ef54 */
              lVar11 = 0x26;
              break;
            case 'n':
              pcVar10 = "nopqrstuvwxyz0123456789+/";
              lVar11 = 0x27;
              break;
            case 'o':
              pcVar10 = "opqrstuvwxyz0123456789+/";
              lVar11 = 0x28;
              break;
            case 'p':
              pcVar10 = "pqrstuvwxyz0123456789+/";
              lVar11 = 0x29;
              break;
            case 'q':
              pcVar10 = "qrstuvwxyz0123456789+/";
              lVar11 = 0x2a;
              break;
            case 'r':
              pcVar10 = "rstuvwxyz0123456789+/";
              lVar11 = 0x2b;
                    /* catch() { ... } // from try @ 00a2efac with catch @ 00a2eff0 */
              break;
            case 's':
              pcVar10 = "stuvwxyz0123456789+/";
              lVar11 = 0x2c;
              break;
            case 't':
              pcVar10 = "tuvwxyz0123456789+/";
              lVar11 = 0x2d;
              break;
            case 'u':
                    /* try { // try from 00a2f00c to 00b2f057 has its CatchHandler @ 00a2f00c
                       catch() { ... } // from try @ 00a2f00c with catch @ 00a2f00c
                       catch() { ... } // from try @ 00a2f05c with catch @ 00a2f00c */
              pcVar10 = "uvwxyz0123456789+/";
              lVar11 = 0x2e;
              break;
            case 'v':
              pcVar10 = "vwxyz0123456789+/";
              lVar11 = 0x2f;
              break;
            case 'w':
              pcVar10 = "wxyz0123456789+/";
              lVar11 = 0x30;
              break;
            case 'x':
              pcVar10 = "xyz0123456789+/";
              lVar11 = 0x31;
              break;
            case 'y':
              pcVar10 = "yz0123456789+/";
              lVar11 = 0x32;
              break;
            case 'z':
              pcVar10 = "z0123456789+/";
              lVar11 = 0x33;
            }
                    /* try { // try from 00a2f058 to 00b2f05b has its CatchHandler @ 00a2f090 */
            if (*pcVar10 != cVar1) goto LAB_00a2f764;
                    /* try { // try from 00a2f05c to 00b2f0a3 has its CatchHandler @ 00a2f00c */
            lVar11 = lVar11 + lVar7 * 0x40;
LAB_00a2f060:
            cVar1 = param_1[2];
            lVar7 = 0;
            pcVar10 = pcVar8;
            switch(cVar1) {
            case '+':
              pcVar10 = "+/";
                    /* catch() { ... } // from try @ 00a2f058 with catch @ 00a2f090 */
              lVar7 = 0x3e;
              break;
            default:
              pcVar10 = "/";
                    /* try { // try from 00a2f0a4 to 00b2f1a3 has its CatchHandler @ 00a2f0a4
                       catch() { ... } // from try @ 00a2f0a4 with catch @ 00a2f0a4
                       catch() { ... } // from try @ 00a2f224 with catch @ 00a2f0a4 */
              if (cVar1 != '/') {
                pcVar10 = "";
              }
              lVar7 = 0x3f;
              if (cVar1 != '/') {
                lVar7 = 0x40;
              }
              break;
            case '0':
              pcVar10 = "0123456789+/";
              lVar7 = 0x34;
              break;
            case '1':
              pcVar10 = "123456789+/";
              lVar7 = 0x35;
              break;
            case '2':
              pcVar10 = "23456789+/";
              lVar7 = 0x36;
              break;
            case '3':
              pcVar10 = "3456789+/";
              lVar7 = 0x37;
              break;
            case '4':
              pcVar10 = "456789+/";
              lVar7 = 0x38;
              break;
            case '5':
              pcVar10 = "56789+/";
              lVar7 = 0x39;
              break;
            case '6':
              pcVar10 = "6789+/";
              lVar7 = 0x3a;
              break;
            case '7':
              pcVar10 = "789+/";
              lVar7 = 0x3b;
              break;
            case '8':
              pcVar10 = "89+/";
              lVar7 = 0x3c;
              break;
            case '9':
              pcVar10 = "9+/";
              lVar7 = 0x3d;
              break;
            case '=':
              lVar7 = lVar11 << 6;
              lVar13 = lVar13 + 1;
              goto LAB_00a2f3a8;
            case 'A':
              break;
            case 'B':
              pcVar10 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 1;
              break;
            case 'C':
              pcVar10 = "CDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 2;
              break;
            case 'D':
              pcVar10 = "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 3;
              break;
            case 'E':
              pcVar10 = "EFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 4;
              break;
            case 'F':
              pcVar10 = "FGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 5;
              break;
            case 'G':
              pcVar10 = "GHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 6;
              break;
            case 'H':
              pcVar10 = "HIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 7;
              break;
            case 'I':
              pcVar10 = "IJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 8;
              break;
            case 'J':
              pcVar10 = "JKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 9;
              break;
            case 'K':
                    /* try { // try from 00a2f1a4 to 00b2f1d7 has its CatchHandler @ 00a2f2a4 */
              pcVar10 = "KLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 10;
              break;
            case 'L':
              pcVar10 = "LMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xb;
              break;
            case 'M':
              pcVar10 = "MNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xc;
              break;
            case 'N':
              pcVar10 = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xd;
              break;
            case 'O':
              pcVar10 = "OPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2f1d8 to 00b2f1eb has its CatchHandler @ 00a2f270 */
              lVar7 = 0xe;
              break;
            case 'P':
              pcVar10 = "PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0xf;
              break;
            case 'Q':
              pcVar10 = "QRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2f1f0 to 00b2f223 has its CatchHandler @ 00a2f274 */
              lVar7 = 0x10;
              break;
            case 'R':
              pcVar10 = "RSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x11;
              break;
            case 'S':
              pcVar10 = "STUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x12;
              break;
            case 'T':
              pcVar10 = "TUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x13;
              break;
            case 'U':
              pcVar10 = "UVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x14;
                    /* try { // try from 00a2f224 to 00b2f2bf has its CatchHandler @ 00a2f0a4 */
              break;
            case 'V':
              pcVar10 = "VWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x15;
              break;
            case 'W':
              pcVar10 = "WXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x16;
              break;
            case 'X':
              pcVar10 = "XYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x17;
              break;
            case 'Y':
              pcVar10 = "YZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x18;
              break;
            case 'Z':
              pcVar10 = "Zabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x19;
              break;
            case 'a':
              pcVar10 = "abcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1a;
              break;
            case 'b':
                    /* catch() { ... } // from try @ 00a2f1d8 with catch @ 00a2f270 */
              pcVar10 = "bcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* catch() { ... } // from try @ 00a2f1f0 with catch @ 00a2f274 */
              lVar7 = 0x1b;
              break;
            case 'c':
              pcVar10 = "cdefghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1c;
              break;
            case 'd':
              pcVar10 = "defghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1d;
              break;
            case 'e':
              pcVar10 = "efghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x1e;
              break;
            case 'f':
              pcVar10 = "fghijklmnopqrstuvwxyz0123456789+/";
                    /* catch() { ... } // from try @ 00a2f1a4 with catch @ 00a2f2a4 */
              lVar7 = 0x1f;
              break;
            case 'g':
              pcVar10 = "ghijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x20;
              break;
            case 'h':
              pcVar10 = "hijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x21;
              break;
            case 'i':
              pcVar10 = "ijklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x22;
              break;
            case 'j':
              pcVar10 = "jklmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x23;
              break;
            case 'k':
              pcVar10 = "klmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x24;
              break;
            case 'l':
              pcVar10 = "lmnopqrstuvwxyz0123456789+/";
              lVar7 = 0x25;
              break;
            case 'm':
              pcVar10 = "mnopqrstuvwxyz0123456789+/";
              lVar7 = 0x26;
              break;
            case 'n':
              pcVar10 = "nopqrstuvwxyz0123456789+/";
              lVar7 = 0x27;
              break;
            case 'o':
              pcVar10 = "opqrstuvwxyz0123456789+/";
              lVar7 = 0x28;
              break;
            case 'p':
              pcVar10 = "pqrstuvwxyz0123456789+/";
              lVar7 = 0x29;
              break;
            case 'q':
              pcVar10 = "qrstuvwxyz0123456789+/";
              lVar7 = 0x2a;
              break;
            case 'r':
              pcVar10 = "rstuvwxyz0123456789+/";
              lVar7 = 0x2b;
              break;
            case 's':
              pcVar10 = "stuvwxyz0123456789+/";
              lVar7 = 0x2c;
              break;
            case 't':
              pcVar10 = "tuvwxyz0123456789+/";
              lVar7 = 0x2d;
              break;
            case 'u':
              pcVar10 = "uvwxyz0123456789+/";
              lVar7 = 0x2e;
              break;
            case 'v':
              pcVar10 = "vwxyz0123456789+/";
              lVar7 = 0x2f;
              break;
            case 'w':
              pcVar10 = "wxyz0123456789+/";
              lVar7 = 0x30;
              break;
            case 'x':
              pcVar10 = "xyz0123456789+/";
              lVar7 = 0x31;
              break;
            case 'y':
              pcVar10 = "yz0123456789+/";
              lVar7 = 0x32;
              break;
            case 'z':
              pcVar10 = "z0123456789+/";
              lVar7 = 0x33;
            }
            if (*pcVar10 != cVar1) goto LAB_00a2f764;
            lVar7 = lVar7 + lVar11 * 0x40;
LAB_00a2f3a8:
            cVar1 = param_1[3];
            lVar11 = 0;
            pcVar10 = pcVar8;
            switch(cVar1) {
            case '+':
              pcVar10 = "+/";
              lVar11 = 0x3e;
              break;
            default:
              pcVar10 = "/";
              if (cVar1 != '/') {
                pcVar10 = "";
              }
              lVar11 = 0x3f;
              if (cVar1 != '/') {
                lVar11 = 0x40;
              }
              break;
            case '0':
              pcVar10 = "0123456789+/";
              lVar11 = 0x34;
              break;
            case '1':
              pcVar10 = "123456789+/";
              lVar11 = 0x35;
              break;
            case '2':
              pcVar10 = "23456789+/";
              lVar11 = 0x36;
              break;
            case '3':
              pcVar10 = "3456789+/";
              lVar11 = 0x37;
              break;
            case '4':
              pcVar10 = "456789+/";
              lVar11 = 0x38;
                    /* try { // try from 00a2f434 to 00b2f48b has its CatchHandler @ 00a2f434
                       catch() { ... } // from try @ 00a2f434 with catch @ 00a2f434
                       catch() { ... } // from try @ 00a2f490 with catch @ 00a2f434 */
              break;
            case '5':
              pcVar10 = "56789+/";
              lVar11 = 0x39;
              break;
            case '6':
              pcVar10 = "6789+/";
              lVar11 = 0x3a;
              break;
            case '7':
              pcVar10 = "789+/";
              lVar11 = 0x3b;
              break;
            case '8':
              pcVar10 = "89+/";
              lVar11 = 0x3c;
              break;
            case '9':
              pcVar10 = "9+/";
              lVar11 = 0x3d;
              break;
            case '=':
              uVar16 = lVar7 << 6;
              lVar13 = lVar13 + 1;
              goto joined_r0x00a2f47c;
            case 'A':
              break;
            case 'B':
                    /* try { // try from 00a2f490 to 00b2f50f has its CatchHandler @ 00a2f434 */
              pcVar10 = "BCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 1;
              break;
            case 'C':
              pcVar10 = "CDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 2;
              break;
            case 'D':
              pcVar10 = "DEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 3;
              break;
            case 'E':
              pcVar10 = "EFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 4;
              break;
            case 'F':
              pcVar10 = "FGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 5;
              break;
            case 'G':
              pcVar10 = "GHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 6;
              break;
            case 'H':
              pcVar10 = "HIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 7;
              break;
            case 'I':
              pcVar10 = "IJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 8;
              break;
            case 'J':
              pcVar10 = "JKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* catch() { ... } // from try @ 00a2f48c with catch @ 00a2f4f4 */
              lVar11 = 9;
              break;
            case 'K':
              pcVar10 = "KLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 10;
              break;
            case 'L':
              pcVar10 = "LMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xb;
                    /* try { // try from 00a2f510 to 00b2f55b has its CatchHandler @ 00a2f510
                       catch() { ... } // from try @ 00a2f510 with catch @ 00a2f510
                       catch() { ... } // from try @ 00a2f560 with catch @ 00a2f510 */
              break;
            case 'M':
              pcVar10 = "MNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xc;
              break;
            case 'N':
              pcVar10 = "NOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xd;
              break;
            case 'O':
              pcVar10 = "OPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xe;
              break;
            case 'P':
              pcVar10 = "PQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0xf;
              break;
            case 'Q':
              pcVar10 = "QRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x10;
              break;
            case 'R':
              pcVar10 = "RSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x11;
              break;
            case 'S':
                    /* try { // try from 00a2f55c to 00b2f55f has its CatchHandler @ 00a2f594 */
              pcVar10 = "STUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2f560 to 00b2f5a7 has its CatchHandler @ 00a2f510 */
              lVar11 = 0x12;
              break;
            case 'T':
              pcVar10 = "TUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x13;
              break;
            case 'U':
              pcVar10 = "UVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x14;
              break;
            case 'V':
              pcVar10 = "VWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x15;
              break;
            case 'W':
              pcVar10 = "WXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x16;
                    /* catch() { ... } // from try @ 00a2f55c with catch @ 00a2f594 */
              break;
            case 'X':
              pcVar10 = "XYZabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x17;
              break;
            case 'Y':
              pcVar10 = "YZabcdefghijklmnopqrstuvwxyz0123456789+/";
                    /* try { // try from 00a2f5a8 to 00b2f68f has its CatchHandler @ 00a2f5a8
                       catch() { ... } // from try @ 00a2f5a8 with catch @ 00a2f5a8
                       catch() { ... } // from try @ 00a2f710 with catch @ 00a2f5a8 */
              lVar11 = 0x18;
              break;
            case 'Z':
              pcVar10 = "Zabcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x19;
              break;
            case 'a':
              pcVar10 = "abcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1a;
              break;
            case 'b':
              pcVar10 = "bcdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1b;
              break;
            case 'c':
              pcVar10 = "cdefghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1c;
              break;
            case 'd':
              pcVar10 = "defghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1d;
              break;
            case 'e':
              pcVar10 = "efghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1e;
              break;
            case 'f':
              pcVar10 = "fghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x1f;
              break;
            case 'g':
              pcVar10 = "ghijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x20;
              break;
            case 'h':
              pcVar10 = "hijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x21;
              break;
            case 'i':
              pcVar10 = "ijklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x22;
              break;
            case 'j':
              pcVar10 = "jklmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x23;
              break;
            case 'k':
              pcVar10 = "klmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x24;
              break;
            case 'l':
              pcVar10 = "lmnopqrstuvwxyz0123456789+/";
              lVar11 = 0x25;
              break;
            case 'm':
              pcVar10 = "mnopqrstuvwxyz0123456789+/";
              lVar11 = 0x26;
              break;
            case 'n':
              pcVar10 = "nopqrstuvwxyz0123456789+/";
              lVar11 = 0x27;
              break;
            case 'o':
              pcVar10 = "opqrstuvwxyz0123456789+/";
              lVar11 = 0x28;
              break;
            case 'p':
              pcVar10 = "pqrstuvwxyz0123456789+/";
              lVar11 = 0x29;
              break;
            case 'q':
              pcVar10 = "qrstuvwxyz0123456789+/";
              lVar11 = 0x2a;
              break;
            case 'r':
              pcVar10 = "rstuvwxyz0123456789+/";
              lVar11 = 0x2b;
                    /* try { // try from 00a2f690 to 00b2f6c3 has its CatchHandler @ 00a2f790 */
              break;
            case 's':
              pcVar10 = "stuvwxyz0123456789+/";
              lVar11 = 0x2c;
              break;
            case 't':
              pcVar10 = "tuvwxyz0123456789+/";
              lVar11 = 0x2d;
              break;
            case 'u':
              pcVar10 = "uvwxyz0123456789+/";
              lVar11 = 0x2e;
              break;
            case 'v':
              pcVar10 = "vwxyz0123456789+/";
              lVar11 = 0x2f;
              break;
            case 'w':
                    /* try { // try from 00a2f6c4 to 00b2f6d7 has its CatchHandler @ 00a2f75c */
              pcVar10 = "wxyz0123456789+/";
              lVar11 = 0x30;
              break;
            case 'x':
              pcVar10 = "xyz0123456789+/";
              lVar11 = 0x31;
              break;
            case 'y':
                    /* try { // try from 00a2f6dc to 00b2f70f has its CatchHandler @ 00a2f760 */
              pcVar10 = "yz0123456789+/";
              lVar11 = 0x32;
              break;
            case 'z':
              pcVar10 = "z0123456789+/";
              lVar11 = 0x33;
            }
            if (*pcVar10 != cVar1) goto LAB_00a2f764;
            uVar16 = lVar11 + lVar7 * 0x40;
joined_r0x00a2f47c:
            if (lVar13 == 0) {
              uVar2 = FUN_00a2c6c0(uVar16 & 0xff);
              puVar17[2] = uVar2;
                    /* try { // try from 00a2f48c to 00b2f48f has its CatchHandler @ 00a2f4f4 */
LAB_00a2f70c:
                    /* try { // try from 00a2f710 to 00b2f7ab has its CatchHandler @ 00a2f5a8 */
              uVar2 = FUN_00a2c6c0(uVar16 >> 8 & 0xff);
              puVar17[1] = uVar2;
            }
            else if (lVar13 == 1) goto LAB_00a2f70c;
            uVar2 = FUN_00a2c6c0(uVar16 >> 0x10 & 0xff);
            *puVar17 = uVar2;
            if (3 - lVar13 == 0) goto LAB_00a2f764;
            uVar15 = uVar15 + 1;
            puVar17 = puVar17 + (3 - lVar13);
            param_1 = param_1 + 4;
          } while (uVar15 < uVar14);
        }
        *puVar17 = 0;
        *param_2 = puVar4;
        uVar5 = 0;
        *param_3 = lVar12;
      }
    }
    else {
LAB_00a2f778:
      uVar5 = 0x3d;
    }
  }
                    /* catch() { ... } // from try @ 00a2f690 with catch @ 00a2f790 */
  return uVar5;
}

