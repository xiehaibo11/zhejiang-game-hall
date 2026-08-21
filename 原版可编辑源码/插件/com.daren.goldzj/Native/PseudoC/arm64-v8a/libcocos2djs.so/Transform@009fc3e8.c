
/* universe::utils::CMD5Checksum::Transform(unsigned char*) */

void __thiscall universe::utils::CMD5Checksum::Transform(CMD5Checksum *this,uchar *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  uint3 uVar9;
  uint3 uVar10;
  uint3 uVar11;
  long lVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iStack_ac;
  int iStack_a4;
  int iStack_9c;
  int iStack_94;
  int iStack_8c;
  int iStack_84;
  int iStack_7c;
  int iStack_74;
  
                    /* try { // try from 009fc3f4 to 00afc427 has its CatchHandler @ 009fc48c */
  lVar8 = tpidr_el0;
  lVar12 = *(long *)(lVar8 + 0x28);
  uVar18 = *(undefined8 *)param_1;
  uVar6 = *(uint *)(this + 0x54);
  uVar5 = *(uint *)(this + 0x58);
  uVar7 = *(uint *)(this + 0x5c);
                    /* try { // try from 009fc434 to 00afc483 has its CatchHandler @ 009fc4b8 */
                    /* try { // try from 009fc484 to 00afc50f has its CatchHandler @ 009fc148 */
                    /* catch() { ... } // from try @ 009fc3f4 with catch @ 009fc48c */
                    /* catch() { ... } // from try @ 009fc2a0 with catch @ 009fc490 */
                    /* catch() { ... } // from try @ 009fc1cc with catch @ 009fc4a0 */
                    /* catch() { ... } // from try @ 009fc1c0 with catch @ 009fc4a4 */
                    /* catch() { ... } // from try @ 009fc1a0 with catch @ 009fc4a8 */
  uVar9 = CONCAT12((char)((ulong)uVar18 >> 0x20),(short)uVar18) & 0xff00ff;
                    /* catch() { ... } // from try @ 009fc1d8 with catch @ 009fc4b8
                       catch() { ... } // from try @ 009fc2fc with catch @ 009fc4b8
                       catch() { ... } // from try @ 009fc434 with catch @ 009fc4b8 */
  iVar15 = CONCAT13((char)((ulong)uVar18 >> 0x18),
                    CONCAT12((char)((ulong)uVar18 >> 0x10),
                             CONCAT11((char)((ulong)uVar18 >> 8),(char)uVar9)));
  iVar22 = (int)*(undefined8 *)(param_1 + 8);
  uVar19 = *(undefined8 *)(param_1 + 0x10);
                    /* try { // try from 009fc510 to 00afc563 has its CatchHandler @ 009fc510
                       catch() { ... } // from try @ 009fc510 with catch @ 009fc510
                       catch() { ... } // from try @ 009fc740 with catch @ 009fc510 */
                    /* try { // try from 009fc564 to 00afc57b has its CatchHandler @ 009fc7f4 */
  uVar10 = CONCAT12((char)((ulong)uVar19 >> 0x20),(short)uVar19) & 0xff00ff;
                    /* try { // try from 009fc584 to 00afc58f has its CatchHandler @ 009fc7f0 */
                    /* try { // try from 009fc590 to 00afc59b has its CatchHandler @ 009fc7ec */
                    /* try { // try from 009fc59c to 00afc5c3 has its CatchHandler @ 009fc804 */
  iVar16 = CONCAT13((char)((ulong)uVar19 >> 0x18),
                    CONCAT12((char)((ulong)uVar19 >> 0x10),
                             CONCAT11((char)((ulong)uVar19 >> 8),(char)uVar10)));
  iVar23 = (int)*(undefined8 *)(param_1 + 0x18);
  uVar20 = *(undefined8 *)(param_1 + 0x20);
                    /* try { // try from 009fc5d4 to 00afc5db has its CatchHandler @ 009fc7d4 */
                    /* try { // try from 009fc5f0 to 00afc60b has its CatchHandler @ 009fc7b4 */
                    /* try { // try from 009fc620 to 00afc637 has its CatchHandler @ 009fc804 */
                    /* try { // try from 009fc63c to 00afc67f has its CatchHandler @ 009fc7d4 */
  uVar11 = CONCAT12((char)((ulong)uVar20 >> 0x20),(short)uVar20) & 0xff00ff;
  iVar17 = CONCAT13((char)((ulong)uVar20 >> 0x18),
                    CONCAT12((char)((ulong)uVar20 >> 0x10),
                             CONCAT11((char)((ulong)uVar20 >> 8),(char)uVar11)));
  iVar24 = (int)*(undefined8 *)(param_1 + 0x28);
  uVar21 = *(undefined8 *)(param_1 + 0x30);
                    /* try { // try from 009fc690 to 00afc6d3 has its CatchHandler @ 009fc7b4 */
  iStack_ac = (int)(CONCAT17((char)((ulong)uVar18 >> 0x38),
                             CONCAT16((char)((ulong)uVar18 >> 0x30),
                                      CONCAT15((char)((ulong)uVar18 >> 0x28),
                                               CONCAT14((char)(uVar9 >> 0x10),iVar15)))) >> 0x20);
  uVar1 = *(int *)(this + 0x50) + (uVar7 & (uVar6 ^ 0xffffffff) | uVar5 & uVar6) + iVar15 +
          0xd76aa478;
                    /* try { // try from 009fc704 to 00afc73f has its CatchHandler @ 009fc804 */
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar6;
  iStack_a4 = (int)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar2 = uVar7 + iStack_ac + (uVar5 & (uVar1 ^ 0xffffffff) | uVar1 & uVar6) + 0xe8c7b756;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
                    /* try { // try from 009fc740 to 00afc85b has its CatchHandler @ 009fc510 */
  uVar3 = uVar5 + iVar22 + (uVar6 & (uVar2 ^ 0xffffffff) | uVar2 & uVar1) + 0x242070db;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = uVar6 + iStack_a4 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar2) + 0xc1bdceee;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iStack_9c = (int)(CONCAT17((char)((ulong)uVar19 >> 0x38),
                             CONCAT16((char)((ulong)uVar19 >> 0x30),
                                      CONCAT15((char)((ulong)uVar19 >> 0x28),
                                               CONCAT14((char)(uVar10 >> 0x10),iVar16)))) >> 0x20);
  uVar1 = iVar16 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar3) + 0xf57c0faf;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
                    /* catch() { ... } // from try @ 009fc5f0 with catch @ 009fc7b4
                       catch() { ... } // from try @ 009fc690 with catch @ 009fc7b4 */
                    /* catch() { ... } // from try @ 009fc5d4 with catch @ 009fc7d4
                       catch() { ... } // from try @ 009fc63c with catch @ 009fc7d4 */
  uVar2 = iStack_9c + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar4) + 0x4787c62a;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
                    /* catch() { ... } // from try @ 009fc590 with catch @ 009fc7ec */
                    /* catch() { ... } // from try @ 009fc584 with catch @ 009fc7f0 */
                    /* catch() { ... } // from try @ 009fc564 with catch @ 009fc7f4 */
  iStack_94 = (int)((ulong)*(undefined8 *)(param_1 + 0x18) >> 0x20);
  uVar3 = iVar23 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar1) + 0xa8304613;
                    /* catch() { ... } // from try @ 009fc59c with catch @ 009fc804
                       catch() { ... } // from try @ 009fc620 with catch @ 009fc804
                       catch() { ... } // from try @ 009fc704 with catch @ 009fc804 */
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
  uVar4 = iStack_94 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar2) + 0xfd469501;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
  iStack_8c = (int)(CONCAT17((char)((ulong)uVar20 >> 0x38),
                             CONCAT16((char)((ulong)uVar20 >> 0x30),
                                      CONCAT15((char)((ulong)uVar20 >> 0x28),
                                               CONCAT14((char)(uVar11 >> 0x10),iVar17)))) >> 0x20);
  uVar1 = iVar17 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar3) + 0x698098d8;
                    /* try { // try from 009fc85c to 00afc8af has its CatchHandler @ 009fc85c
                       catch() { ... } // from try @ 009fc85c with catch @ 009fc85c
                       catch() { ... } // from try @ 009fc928 with catch @ 009fc85c */
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar9 = CONCAT12((char)((ulong)uVar21 >> 0x20),(short)uVar21) & 0xff00ff;
  uVar2 = iStack_8c + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar4) + 0x8b44f7af;
                    /* try { // try from 009fc8b0 to 00afc8c7 has its CatchHandler @ 009fc9bc */
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iVar13 = CONCAT13((char)((ulong)uVar21 >> 0x18),
                    CONCAT12((char)((ulong)uVar21 >> 0x10),
                             CONCAT11((char)((ulong)uVar21 >> 8),(char)uVar9)));
  iVar14 = (int)*(undefined8 *)(param_1 + 0x38);
                    /* try { // try from 009fc8d0 to 00afc8db has its CatchHandler @ 009fc9a0 */
                    /* try { // try from 009fc8dc to 00afc8e7 has its CatchHandler @ 009fc99c */
  iStack_84 = (int)((ulong)*(undefined8 *)(param_1 + 0x28) >> 0x20);
  uVar3 = (iVar24 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar1)) - 0xa44f;
                    /* try { // try from 009fc8e8 to 00afc8f7 has its CatchHandler @ 009fc9cc */
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
                    /* try { // try from 009fc8f8 to 00afc907 has its CatchHandler @ 009fc9a4 */
  uVar4 = iStack_84 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar2) + 0x895cd7be;
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
                    /* try { // try from 009fc918 to 00afc927 has its CatchHandler @ 009fc9cc */
                    /* try { // try from 009fc928 to 00afca23 has its CatchHandler @ 009fc85c */
  iStack_7c = (int)(CONCAT17((char)((ulong)uVar21 >> 0x38),
                             CONCAT16((char)((ulong)uVar21 >> 0x30),
                                      CONCAT15((char)((ulong)uVar21 >> 0x28),
                                               CONCAT14((char)(uVar9 >> 0x10),iVar13)))) >> 0x20);
  uVar1 = iVar13 + uVar1 + (uVar2 & (uVar4 ^ 0xffffffff) | uVar4 & uVar3) + 0x6b901122;
  uVar1 = (uVar1 >> 0x19 | uVar1 * 0x80) + uVar4;
  uVar2 = iStack_7c + uVar2 + (uVar3 & (uVar1 ^ 0xffffffff) | uVar1 & uVar4) + 0xfd987193;
  uVar2 = (uVar2 >> 0x14 | uVar2 * 0x1000) + uVar1;
  iStack_74 = (int)((ulong)*(undefined8 *)(param_1 + 0x38) >> 0x20);
  uVar3 = iVar14 + uVar3 + (uVar4 & (uVar2 ^ 0xffffffff) | uVar2 & uVar1) + 0xa679438e;
  uVar3 = (uVar3 >> 0xf | uVar3 * 0x20000) + uVar2;
                    /* catch() { ... } // from try @ 009fc8dc with catch @ 009fc99c */
                    /* catch() { ... } // from try @ 009fc8d0 with catch @ 009fc9a0 */
                    /* catch() { ... } // from try @ 009fc8f8 with catch @ 009fc9a4 */
  uVar4 = iStack_74 + uVar4 + (uVar1 & (uVar3 ^ 0xffffffff) | uVar3 & uVar2) + 0x49b40821;
                    /* catch() { ... } // from try @ 009fc8b0 with catch @ 009fc9bc */
  uVar4 = (uVar4 >> 10 | uVar4 * 0x400000) + uVar3;
                    /* catch() { ... } // from try @ 009fc8e8 with catch @ 009fc9cc
                       catch() { ... } // from try @ 009fc918 with catch @ 009fc9cc */
  uVar1 = iStack_ac + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xf61e2562;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar23 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc040b340;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
                    /* try { // try from 009fca24 to 00afca77 has its CatchHandler @ 009fca24
                       catch() { ... } // from try @ 009fca24 with catch @ 009fca24
                       catch() { ... } // from try @ 009fcbe4 with catch @ 009fca24 */
  uVar3 = iStack_84 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x265e5a51;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar15 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe9b6c7aa;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
                    /* try { // try from 009fca78 to 00afca8f has its CatchHandler @ 009fcc9c */
  uVar1 = iStack_9c + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xd62f105d;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
                    /* try { // try from 009fca98 to 00afcaa3 has its CatchHandler @ 009fcc98 */
                    /* try { // try from 009fcaa4 to 00afcaaf has its CatchHandler @ 009fcc94 */
  uVar2 = iVar24 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0x2441453;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
                    /* try { // try from 009fcab0 to 00afcaef has its CatchHandler @ 009fccac */
  uVar3 = iStack_74 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xd8a1e681;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar16 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0xe7d3fbc8;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
                    /* try { // try from 009fcb00 to 00afcb07 has its CatchHandler @ 009fcc7c */
                    /* try { // try from 009fcb0c to 00afcb1b has its CatchHandler @ 009fcc58 */
                    /* try { // try from 009fcb1c to 00afcb2b has its CatchHandler @ 009fcc5c */
  uVar1 = iStack_8c + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0x21e1cde6;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
  uVar2 = iVar14 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xc33707d6;
                    /* try { // try from 009fcb4c to 00afcb8f has its CatchHandler @ 009fcc7c */
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iStack_a4 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0xf4d50d87;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar17 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x455a14ed;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
                    /* try { // try from 009fcba8 to 00afcbe3 has its CatchHandler @ 009fccac */
  uVar1 = iStack_7c + uVar1 + (uVar4 & uVar2 | uVar3 & (uVar2 ^ 0xffffffff)) + 0xa9e3e905;
  uVar1 = (uVar1 >> 0x1b | uVar1 * 0x20) + uVar4;
                    /* try { // try from 009fcbe4 to 00afcd03 has its CatchHandler @ 009fca24 */
  uVar2 = iVar22 + uVar2 + (uVar1 & uVar3 | uVar4 & (uVar3 ^ 0xffffffff)) + 0xfcefa3f8;
  uVar2 = (uVar2 >> 0x17 | uVar2 * 0x200) + uVar1;
  uVar3 = iStack_94 + uVar3 + (uVar2 & uVar4 | uVar1 & (uVar4 ^ 0xffffffff)) + 0x676f02d9;
  uVar3 = (uVar3 >> 0x12 | uVar3 * 0x4000) + uVar2;
  uVar4 = iVar13 + uVar4 + (uVar3 & uVar1 | uVar2 & (uVar1 ^ 0xffffffff)) + 0x8d2a4c8a;
  uVar4 = (uVar4 >> 0xc | uVar4 * 0x100000) + uVar3;
                    /* catch() { ... } // from try @ 009fcb0c with catch @ 009fcc58 */
  uVar1 = (iStack_9c + uVar1 + (uVar4 ^ uVar3 ^ uVar2)) - 0x5c6be;
                    /* catch() { ... } // from try @ 009fcb1c with catch @ 009fcc5c */
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
  uVar2 = iVar17 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x8771f681;
                    /* catch() { ... } // from try @ 009fcb00 with catch @ 009fcc7c
                       catch() { ... } // from try @ 009fcb4c with catch @ 009fcc7c */
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
                    /* catch() { ... } // from try @ 009fcaa4 with catch @ 009fcc94 */
                    /* catch() { ... } // from try @ 009fca98 with catch @ 009fcc98 */
                    /* catch() { ... } // from try @ 009fca78 with catch @ 009fcc9c */
  uVar3 = iStack_84 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x6d9d6122;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
                    /* catch() { ... } // from try @ 009fcab0 with catch @ 009fccac
                       catch() { ... } // from try @ 009fcba8 with catch @ 009fccac */
  uVar4 = iVar14 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xfde5380c;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iStack_ac + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xa4beea44;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
                    /* try { // try from 009fcd04 to 00afcd57 has its CatchHandler @ 009fcd04
                       catch() { ... } // from try @ 009fcd04 with catch @ 009fcd04
                       catch() { ... } // from try @ 009fce24 with catch @ 009fcd04 */
  uVar2 = iVar16 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0x4bdecfa9;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iStack_94 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xf6bb4b60;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar24 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xbebfbc70;
                    /* try { // try from 009fcd58 to 00afcd6f has its CatchHandler @ 009fcebc */
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iStack_7c + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0x289b7ec6;
                    /* try { // try from 009fcd78 to 00afcd83 has its CatchHandler @ 009fceb8 */
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
                    /* try { // try from 009fcd84 to 00afcd8f has its CatchHandler @ 009fceb4 */
                    /* try { // try from 009fcd90 to 00afcd97 has its CatchHandler @ 009fcecc */
  uVar2 = iVar15 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xeaa127fa;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iStack_a4 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0xd4ef3085;
                    /* try { // try from 009fcdc4 to 00afcdcb has its CatchHandler @ 009fce98 */
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
                    /* try { // try from 009fcdcc to 00afce03 has its CatchHandler @ 009fce9c */
  uVar4 = iVar23 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0x4881d05;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
  uVar1 = iStack_8c + uVar1 + (uVar3 ^ uVar2 ^ uVar4) + 0xd9d4d039;
  uVar1 = (uVar1 >> 0x1c | uVar1 * 0x10) + uVar4;
                    /* try { // try from 009fce14 to 00afce23 has its CatchHandler @ 009fcecc */
                    /* try { // try from 009fce24 to 00afcf23 has its CatchHandler @ 009fcd04 */
  uVar2 = iVar13 + uVar2 + (uVar4 ^ uVar3 ^ uVar1) + 0xe6db99e5;
  uVar2 = (uVar2 >> 0x15 | uVar2 * 0x800) + uVar1;
  uVar3 = iStack_74 + uVar3 + (uVar1 ^ uVar4 ^ uVar2) + 0x1fa27cf8;
  uVar3 = (uVar3 >> 0x10 | uVar3 * 0x10000) + uVar2;
  uVar4 = iVar22 + uVar4 + (uVar2 ^ uVar1 ^ uVar3) + 0xc4ac5665;
  uVar4 = (uVar4 >> 9 | uVar4 * 0x800000) + uVar3;
                    /* catch() { ... } // from try @ 009fcdc4 with catch @ 009fce98 */
  uVar1 = iVar15 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf4292244;
                    /* catch() { ... } // from try @ 009fcdcc with catch @ 009fce9c */
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
                    /* catch() { ... } // from try @ 009fcd84 with catch @ 009fceb4 */
                    /* catch() { ... } // from try @ 009fcd78 with catch @ 009fceb8 */
                    /* catch() { ... } // from try @ 009fcd58 with catch @ 009fcebc */
  uVar2 = iStack_94 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x432aff97;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
                    /* catch() { ... } // from try @ 009fcd90 with catch @ 009fcecc
                       catch() { ... } // from try @ 009fce14 with catch @ 009fcecc */
  uVar3 = iVar14 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xab9423a7;
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
  uVar4 = iStack_9c + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xfc93a039;
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
                    /* try { // try from 009fcf24 to 00afcf77 has its CatchHandler @ 009fcf24
                       catch() { ... } // from try @ 009fcf24 with catch @ 009fcf24
                       catch() { ... } // from try @ 009fcfcc with catch @ 009fcf24 */
  uVar1 = iVar13 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x655b59c3;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iStack_a4 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0x8f0ccc92;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = (iVar24 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1)) - 0x100b83;
                    /* try { // try from 009fcf78 to 00afcf83 has its CatchHandler @ 009fd008 */
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
                    /* try { // try from 009fcf84 to 00afcf8b has its CatchHandler @ 009fd004 */
                    /* try { // try from 009fcf8c to 00afcf9b has its CatchHandler @ 009fd028 */
  uVar4 = iStack_ac + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x85845dd1;
                    /* try { // try from 009fcf9c to 00afcfab has its CatchHandler @ 009fd010 */
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
  uVar1 = iVar17 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0x6fa87e4f;
                    /* try { // try from 009fcfbc to 00afcfcb has its CatchHandler @ 009fd028 */
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
                    /* try { // try from 009fcfcc to 00afd043 has its CatchHandler @ 009fcf24 */
  uVar2 = iStack_74 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xfe2ce6e0;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar23 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0xa3014314;
                    /* catch() { ... } // from try @ 009fcf84 with catch @ 009fd004 */
                    /* catch() { ... } // from try @ 009fcf78 with catch @ 009fd008 */
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
                    /* catch() { ... } // from try @ 009fcf9c with catch @ 009fd010 */
  uVar4 = iStack_7c + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0x4e0811a1;
                    /* catch() { ... } // from try @ 009fcf8c with catch @ 009fd028
                       catch() { ... } // from try @ 009fcfbc with catch @ 009fd028 */
  uVar4 = (uVar4 >> 0xb | uVar4 * 0x200000) + uVar3;
                    /* try { // try from 009fd044 to 00afd097 has its CatchHandler @ 009fd044
                       catch() { ... } // from try @ 009fd044 with catch @ 009fd044
                       catch() { ... } // from try @ 009fd0d8 with catch @ 009fd044 */
  uVar1 = iVar16 + uVar1 + ((uVar4 | uVar2 ^ 0xffffffff) ^ uVar3) + 0xf7537e82;
  uVar1 = (uVar1 >> 0x1a | uVar1 * 0x40) + uVar4;
  uVar2 = iStack_84 + uVar2 + ((uVar1 | uVar3 ^ 0xffffffff) ^ uVar4) + 0xbd3af235;
  uVar2 = (uVar2 >> 0x16 | uVar2 * 0x400) + uVar1;
  uVar3 = iVar22 + uVar3 + ((uVar2 | uVar4 ^ 0xffffffff) ^ uVar1) + 0x2ad7d2bb;
                    /* try { // try from 009fd098 to 00afd0a3 has its CatchHandler @ 009fd114 */
  uVar3 = (uVar3 >> 0x11 | uVar3 * 0x8000) + uVar2;
                    /* try { // try from 009fd0a4 to 00afd0ab has its CatchHandler @ 009fd110 */
                    /* try { // try from 009fd0ac to 00afd0d7 has its CatchHandler @ 009fd11c */
  *(uint *)(this + 0x58) = uVar3 + uVar5;
  *(uint *)(this + 0x5c) = uVar2 + uVar7;
  uVar2 = iStack_8c + uVar4 + ((uVar3 | uVar1 ^ 0xffffffff) ^ uVar2) + 0xeb86d391;
  *(uint *)(this + 0x50) = uVar1 + *(int *)(this + 0x50);
  *(uint *)(this + 0x54) = uVar3 + uVar6 + (uVar2 >> 0xb | uVar2 * 0x200000);
                    /* try { // try from 009fd0d8 to 00afd137 has its CatchHandler @ 009fd044 */
  if (*(long *)(lVar8 + 0x28) == lVar12) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

