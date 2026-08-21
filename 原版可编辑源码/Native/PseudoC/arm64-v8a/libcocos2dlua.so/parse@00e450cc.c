
/* cocos2d::PUScriptParser::parse(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> >&, std::__ndk1::vector<cocos2d::PUScriptToken*,
   std::__ndk1::allocator<cocos2d::PUScriptToken*> > const&) */

void __thiscall cocos2d::PUScriptParser::parse(PUScriptParser *this,list *param_1,vector *param_2)

{
  long *plVar1;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  bool bVar5;
  int iVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar7;
  void *pvVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  void *pvVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar20;
  long *plVar21;
  ulong uVar22;
  ulong uVar23;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar24;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  plVar21 = *(long **)param_2;
  plVar1 = *(long **)(param_2 + 8);
  if (plVar21 != plVar1) {
    bVar5 = false;
    pvVar15 = (void *)((ulong)&local_80 | 1);
    pbVar7 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0;
    do {
      pbVar24 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                *plVar21;
      plVar9 = plVar21;
      if (!bVar5) {
        if (*(int *)(pbVar24 + 0x30) == 1) {
          if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) {
                    /* try { // try from 00e4548c to 00f4549f has its CatchHandler @ 00e45554 */
            lVar12 = 0;
          }
          else {
            lVar12 = *(long *)(pbVar7 + 0x50);
          }
          pbVar7 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e454a0 to 00f455cf has its CatchHandler @ 00e452b8 */
          if (pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) {
            *(undefined8 *)(pbVar7 + 0x28) = 0;
            *(undefined8 *)(pbVar7 + 0x20) = 0;
            *(undefined8 *)(pbVar7 + 0x38) = 0;
            *(undefined8 *)(pbVar7 + 0x30) = 0;
            *(undefined8 *)(pbVar7 + 0x48) = 0;
            *(undefined8 *)(pbVar7 + 0x40) = 0;
            *(undefined8 *)(pbVar7 + 0x48) = 0;
            *(undefined8 *)(pbVar7 + 0x50) = 0;
            *(undefined8 *)(pbVar7 + 8) = 0;
            *(undefined8 *)pbVar7 = 0;
            *(undefined8 *)(pbVar7 + 0x18) = 0;
            *(undefined8 *)(pbVar7 + 0x10) = 0;
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar7 + 0x38) = pbVar7 + 0x38;
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar7 + 0x40) = pbVar7 + 0x38;
          }
          if (pbVar7 != pbVar24) {
            uVar22 = *(ulong *)(pbVar24 + 8);
            pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(pbVar24 + 0x10);
                    /* catch() { ... } // from try @ 00e45444 with catch @ 00e454d4 */
            if (((byte)*pbVar24 & 1) == 0) {
              pbVar16 = pbVar24 + 1;
              uVar22 = (ulong)((byte)*pbVar24 >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (pbVar7,(char *)pbVar16,uVar22);
          }
          if (pbVar7 != pbVar24) {
            uVar22 = *(ulong *)(pbVar24 + 0x20);
            pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(pbVar24 + 0x28);
            if (((byte)pbVar24[0x18] & 1) == 0) {
              pbVar16 = pbVar24 + 0x19;
              uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (pbVar7 + 0x18,(char *)pbVar16,uVar22);
          }
                    /* catch() { ... } // from try @ 00e45420 with catch @ 00e45518 */
                    /* catch() { ... } // from try @ 00e453f4 with catch @ 00e4551c */
          *(undefined4 *)(pbVar7 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
                    /* catch() { ... } // from try @ 00e4531c with catch @ 00e45524 */
          *(undefined4 *)(pbVar7 + 0x34) = 6;
                    /* catch() { ... } // from try @ 00e45310 with catch @ 00e4552c */
          if (plVar21 != plVar1) {
            iVar6 = *(int *)(*plVar21 + 0x30);
                    /* catch() { ... } // from try @ 00e453d0 with catch @ 00e4553c */
            while ((plVar9 = plVar21, iVar6 == 6 &&
                   (plVar21 = plVar21 + 1, plVar9 = plVar1, plVar1 != plVar21))) {
                    /* catch() { ... } // from try @ 00e45390 with catch @ 00e4554c */
              iVar6 = *(int *)(*plVar21 + 0x30);
                    /* catch() { ... } // from try @ 00e45400 with catch @ 00e45554
                       catch() { ... } // from try @ 00e4548c with catch @ 00e45554 */
            }
          }
          goto joined_r0x00e45a00;
        }
        if (*(int *)(pbVar24 + 0x30) != 4) goto LAB_00e4512c;
        bVar3 = *pbVar24;
        uVar22 = (ulong)((byte)bVar3 >> 1);
        if (((byte)bVar3 & 1) != 0) {
          uVar22 = *(ulong *)(pbVar24 + 8);
        }
        if (uVar22 == 3) {
                    /* try { // try from 00e457b0 to 00f457bb has its CatchHandler @ 00e45d3c */
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)bVar3 & 1) == 0) {
            pbVar16 = pbVar24 + 1;
          }
          iVar6 = memcmp(pbVar16,"set",3);
                    /* try { // try from 00e457cc to 00f457db has its CatchHandler @ 00e45d2c */
                    /* try { // try from 00e457dc to 00f457e3 has its CatchHandler @ 00e45d1c */
          pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e457e4 to 00f457f3 has its CatchHandler @ 00e45d0c */
          if (iVar6 == 0) {
            if (pbVar16 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
              *(undefined8 *)(pbVar16 + 0x18) = 0;
              *(undefined8 *)(pbVar16 + 0x10) = 0;
              *(undefined8 *)(pbVar16 + 0x28) = 0;
              *(undefined8 *)(pbVar16 + 0x20) = 0;
              *(undefined8 *)(pbVar16 + 8) = 0;
              *(undefined8 *)pbVar16 = 0;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar16 + 0x38) = pbVar16 + 0x38;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar16 + 0x40) = pbVar16 + 0x38;
              *(undefined8 *)(pbVar16 + 0x48) = 0;
            }
            if (pbVar16 != pbVar24) {
              uVar22 = (ulong)((byte)*pbVar24 >> 1);
              pbVar20 = pbVar24 + 1;
              if (((byte)*pbVar24 & 1) != 0) {
                uVar22 = *(ulong *)(pbVar24 + 8);
                pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar24 + 0x10);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar16,(char *)pbVar20,uVar22);
            }
            if (pbVar16 != pbVar24) {
              uVar22 = *(ulong *)(pbVar24 + 0x20);
              pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar24 + 0x28);
              if (((byte)pbVar24[0x18] & 1) == 0) {
                pbVar20 = pbVar24 + 0x19;
                uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar16 + 0x18,(char *)pbVar20,uVar22);
            }
                    /* catch() { ... } // from try @ 00e4596c with catch @ 00e45cf8 */
                    /* catch() { ... } // from try @ 00e45914 with catch @ 00e45cfc */
            plVar9 = plVar21 + 1;
                    /* catch() { ... } // from try @ 00e458c4 with catch @ 00e45d00 */
                    /* catch() { ... } // from try @ 00e459b0 with catch @ 00e45d04 */
            *(undefined4 *)(pbVar16 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
                    /* catch() { ... } // from try @ 00e45adc with catch @ 00e45d08 */
                    /* catch() { ... } // from try @ 00e457e4 with catch @ 00e45d0c */
            *(undefined4 *)(pbVar16 + 0x34) = 1;
                    /* catch() { ... } // from try @ 00e457dc with catch @ 00e45d1c */
            if ((plVar9 == plVar1) || (*(int *)(*plVar9 + 0x30) != 3)) {
                    /* catch() { ... } // from try @ 00e457cc with catch @ 00e45d2c */
              printf("Exception");
            }
                    /* catch() { ... } // from try @ 00e457b0 with catch @ 00e45d3c */
            pbVar24 = operator_new(0x58,(nothrow_t *)&std::nothrow);
            if (pbVar24 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
                    /* catch() { ... } // from try @ 00e45778 with catch @ 00e45d50 */
              *(undefined8 *)(pbVar24 + 0x18) = 0;
              *(undefined8 *)(pbVar24 + 0x10) = 0;
              *(undefined8 *)(pbVar24 + 0x28) = 0;
              *(undefined8 *)(pbVar24 + 0x20) = 0;
              *(undefined8 *)(pbVar24 + 8) = 0;
              *(undefined8 *)pbVar24 = 0;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x38) = pbVar24 + 0x38;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x40) = pbVar24 + 0x38;
              *(undefined8 *)(pbVar24 + 0x48) = 0;
            }
                    /* catch() { ... } // from try @ 00e45770 with catch @ 00e45d60 */
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar24 + 0x50) = pbVar16;
            pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)*plVar9;
            if (pbVar24 != pbVar20) {
                    /* catch() { ... } // from try @ 00e45754 with catch @ 00e45d70 */
              uVar22 = *(ulong *)(pbVar20 + 0x20);
              pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar20 + 0x28);
              if (((byte)pbVar20[0x18] & 1) == 0) {
                pbVar14 = pbVar20 + 0x19;
                uVar22 = (ulong)((byte)pbVar20[0x18] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar24 + 0x18,(char *)pbVar14,uVar22);
              pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar9;
            }
            *(undefined4 *)(pbVar24 + 0x30) = *(undefined4 *)(pbVar20 + 0x34);
            *(undefined4 *)(pbVar24 + 0x34) = 0;
            if (pbVar24 != pbVar20) {
              uVar22 = *(ulong *)(pbVar20 + 8);
              pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar20 + 0x10);
              if (((byte)*pbVar20 & 1) == 0) {
                pbVar14 = pbVar20 + 1;
                uVar22 = (ulong)((byte)*pbVar20 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar24,(char *)pbVar14,uVar22);
            }
            plVar10 = operator_new(0x18);
            plVar10[1] = (long)(pbVar16 + 0x38);
            plVar10[2] = (long)pbVar24;
            lVar12 = *(long *)(pbVar16 + 0x38);
            plVar9 = plVar21 + 2;
            *plVar10 = lVar12;
            *(long **)(lVar12 + 8) = plVar10;
            *(long **)(pbVar16 + 0x38) = plVar10;
            *(long *)(pbVar16 + 0x48) = *(long *)(pbVar16 + 0x48) + 1;
            if ((plVar9 == plVar1) || ((*(uint *)(*plVar9 + 0x30) & 0xfffffffe) != 4)) {
              printf("expected variable value at line %d ScriptParser::parse\n",
                     (ulong)*(uint *)(pbVar16 + 0x30));
            }
            pbVar24 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e45e38 to 00f45e6b has its CatchHandler @ 00e46048 */
            if (pbVar24 ==
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
              pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0;
            }
            else {
              *(ulong *)(pbVar24 + 0x18) = 0;
              *(ulong *)(pbVar24 + 0x10) = 0;
              *(ulong *)(pbVar24 + 0x28) = 0;
              *(ulong *)(pbVar24 + 0x20) = 0;
              *(ulong *)(pbVar24 + 8) = 0;
              *(ulong *)pbVar24 = 0;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x38) = pbVar24 + 0x38;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x40) = pbVar24 + 0x38;
              *(ulong *)(pbVar24 + 0x48) = 0;
              pbVar20 = pbVar24;
            }
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar20 + 0x50) = pbVar16;
            pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)*plVar9;
            if (pbVar20 != pbVar14) {
              uVar22 = *(ulong *)(pbVar14 + 0x20);
              pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar14 + 0x28);
              if (((byte)pbVar14[0x18] & 1) == 0) {
                pbVar13 = pbVar14 + 0x19;
                uVar22 = (ulong)((byte)pbVar14[0x18] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar20 + 0x18,(char *)pbVar13,uVar22);
              pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar9;
            }
            *(undefined4 *)(pbVar20 + 0x30) = *(undefined4 *)(pbVar14 + 0x34);
            iVar6 = *(int *)(pbVar14 + 0x30);
            uVar11 = 2;
            if (iVar6 != 4) {
              uVar11 = 4;
            }
            *(undefined4 *)(pbVar20 + 0x34) = uVar11;
            if (iVar6 != 4) {
              bVar3 = *pbVar14;
              if (((byte)bVar3 & 1) == 0) {
                uVar17 = *(ulong *)(pbVar14 + 8);
                uVar22 = (ulong)((byte)bVar3 >> 1);
                uVar23 = uVar22;
              }
              else {
                uVar17 = *(ulong *)(pbVar14 + 8);
                uVar22 = (ulong)((byte)bVar3 >> 1);
                uVar23 = uVar17;
              }
              if (((byte)bVar3 & 1) != 0) {
                uVar22 = uVar17;
              }
              uStack_78 = 0;
              local_70 = (void *)0x0;
              local_80 = 0;
              if (uVar22 == 0) goto LAB_00e466d8;
              pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar14 + 0x10);
              if (((byte)bVar3 & 1) == 0) {
                pbVar13 = pbVar14 + 1;
              }
              uVar17 = uVar22 - 1;
              if (uVar23 - 2 <= uVar22 - 1) {
                uVar17 = uVar23 - 2;
              }
              if (0xffffffffffffffef < uVar17) goto LAB_00e466e0;
              if (uVar17 < 0x17) {
                local_80 = (ulong)(byte)((int)uVar17 << 1);
                pvVar8 = pvVar15;
                if (uVar17 != 0) goto LAB_00e46280;
              }
              else {
                uVar22 = uVar17 + 0x10 & 0xfffffffffffffff0;
                pvVar8 = operator_new(uVar22);
                local_80 = uVar22 | 1;
                uStack_78 = uVar17;
                local_70 = pvVar8;
LAB_00e46280:
                memcpy(pvVar8,pbVar13 + 1,uVar17);
              }
              bVar3 = *pbVar24;
              *(undefined1 *)((long)pvVar8 + uVar17) = 0;
              if (((byte)bVar3 & 1) == 0) {
                pbVar20[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              )0x0;
                *pbVar24 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            )0x0;
              }
              else {
                **(undefined1 **)(pbVar20 + 0x10) = 0;
                    /* try { // try from 00e46490 to 00f4649b has its CatchHandler @ 00e46840 */
                *(undefined8 *)(pbVar20 + 8) = 0;
                if (((byte)*pbVar24 & 1) != 0) {
                  operator_delete(*(void **)(pbVar20 + 0x10));
                  *(undefined8 *)pbVar20 = 0;
                }
              }
              *(void **)(pbVar24 + 0x10) = local_70;
              *(ulong *)(pbVar24 + 8) = uStack_78;
              *(ulong *)pbVar24 = local_80;
            }
            else if (pbVar20 != pbVar14) {
              uVar22 = *(ulong *)(pbVar14 + 8);
              pbVar24 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar14 + 0x10);
              if (((byte)*pbVar14 & 1) == 0) {
                pbVar24 = pbVar14 + 1;
                uVar22 = (ulong)((byte)*pbVar14 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar20,(char *)pbVar24,uVar22);
            }
                    /* try { // try from 00e464b8 to 00f464bf has its CatchHandler @ 00e4683c */
            plVar10 = operator_new(0x18);
            plVar10[1] = (long)(pbVar16 + 0x38);
            plVar10[2] = (long)pbVar20;
            lVar12 = *(long *)(pbVar16 + 0x38);
            *plVar10 = lVar12;
            *(long **)(lVar12 + 8) = plVar10;
            *(long **)(pbVar16 + 0x38) = plVar10;
                    /* try { // try from 00e464e0 to 00f464e7 has its CatchHandler @ 00e46838 */
            *(long *)(pbVar16 + 0x48) = *(long *)(pbVar16 + 0x48) + 1;
            if ((plVar9 != plVar1) && (*(int *)(*plVar9 + 0x30) == 6)) {
              plVar21 = plVar21 + 3;
              do {
                plVar10 = plVar21;
                plVar9 = plVar1;
                if (plVar1 == plVar10) break;
                plVar21 = plVar10 + 1;
                plVar9 = plVar10;
              } while (*(int *)(*plVar10 + 0x30) == 6);
            }
joined_r0x00e4651c:
            plVar21 = plVar9;
            if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)0x0) {
              *(undefined8 *)(pbVar16 + 0x50) = 0;
              this = operator_new(0x18);
              *(list **)(this + 8) = param_1;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (this + 0x10) = pbVar16;
              lVar12 = *(long *)param_1;
              pbVar16 = pbVar7;
              goto LAB_00e4667c;
            }
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar16 + 0x50) = pbVar7;
            this = operator_new(0x18);
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 8) = pbVar7 + 0x38;
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (this + 0x10) = pbVar16;
            lVar12 = *(long *)(pbVar7 + 0x38);
            bVar5 = false;
            *(long *)this = lVar12;
            *(PUScriptParser **)(lVar12 + 8) = this;
            *(PUScriptParser **)(pbVar7 + 0x38) = this;
            *(long *)(pbVar7 + 0x48) = *(long *)(pbVar7 + 0x48) + 1;
            pbVar16 = pbVar7;
            goto LAB_00e45130;
          }
        }
        else {
          if (uVar22 == 6) {
            pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(pbVar24 + 0x10);
            if (((byte)bVar3 & 1) == 0) {
              pbVar16 = pbVar24 + 1;
            }
            iVar6 = memcmp(pbVar16,"import",6);
            if (iVar6 == 0) {
              pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
              if (pbVar16 !=
                  (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
                *(undefined8 *)(pbVar16 + 0x18) = 0;
                *(undefined8 *)(pbVar16 + 0x10) = 0;
                *(undefined8 *)(pbVar16 + 0x28) = 0;
                *(undefined8 *)(pbVar16 + 0x20) = 0;
                *(undefined8 *)(pbVar16 + 8) = 0;
                *(undefined8 *)pbVar16 = 0;
                    /* try { // try from 00e45bb4 to 00f45d83 has its CatchHandler @ 00e456c4 */
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar16 + 0x38) = pbVar16 + 0x38;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar16 + 0x40) = pbVar16 + 0x38;
                *(undefined8 *)(pbVar16 + 0x48) = 0;
              }
              if (pbVar16 != pbVar24) {
                uVar22 = (ulong)((byte)*pbVar24 >> 1);
                pbVar20 = pbVar24 + 1;
                if (((byte)*pbVar24 & 1) != 0) {
                  uVar22 = *(ulong *)(pbVar24 + 8);
                  pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              **)(pbVar24 + 0x10);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(pbVar16,(char *)pbVar20,uVar22);
              }
              if (pbVar16 != pbVar24) {
                uVar22 = *(ulong *)(pbVar24 + 0x20);
                pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar24 + 0x28);
                if (((byte)pbVar24[0x18] & 1) == 0) {
                  pbVar20 = pbVar24 + 0x19;
                  uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(pbVar16 + 0x18,(char *)pbVar20,uVar22);
              }
              plVar9 = plVar21 + 1;
              *(undefined4 *)(pbVar16 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
              *(undefined4 *)(pbVar16 + 0x34) = 3;
              if ((plVar9 == plVar1) || ((*(uint *)(*plVar9 + 0x30) & 0xfffffffe) != 4)) {
                printf("Except,expected import target at line :%d,ScriptParser::parse");
              }
              pbVar20 = operator_new(0x58,(nothrow_t *)&std::nothrow);
              if (pbVar20 ==
                  (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
                pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)0x0;
              }
              else {
                *(ulong *)(pbVar20 + 0x18) = 0;
                *(ulong *)(pbVar20 + 0x10) = 0;
                *(ulong *)(pbVar20 + 0x28) = 0;
                *(ulong *)(pbVar20 + 0x20) = 0;
                *(ulong *)(pbVar20 + 8) = 0;
                *(ulong *)pbVar20 = 0;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar20 + 0x38) = pbVar20 + 0x38;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar20 + 0x40) = pbVar20 + 0x38;
                *(ulong *)(pbVar20 + 0x48) = 0;
                pbVar14 = pbVar20;
              }
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar14 + 0x50) = pbVar16;
              pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar9;
              if (pbVar14 != pbVar13) {
                uVar22 = *(ulong *)(pbVar13 + 0x20);
                pbVar2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           **)(pbVar13 + 0x28);
                if (((byte)pbVar13[0x18] & 1) == 0) {
                  pbVar2 = pbVar13 + 0x19;
                  uVar22 = (ulong)((byte)pbVar13[0x18] >> 1);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(pbVar14 + 0x18,(char *)pbVar2,uVar22);
                pbVar13 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)*plVar9;
              }
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e45e8c with catch @ 00e46044
                        */
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e45e38 with catch @ 00e46048
                       catch(type#1 @ 00000000) { ... } // from try @ 00e45fa4 with catch @ 00e46048
                        */
              *(undefined4 *)(pbVar14 + 0x30) = *(undefined4 *)(pbVar13 + 0x34);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e45f84 with catch @ 00e4604c
                        */
              iVar6 = *(int *)(pbVar13 + 0x30);
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00e45f38 with catch @ 00e46050
                        */
              uVar11 = 2;
              if (iVar6 != 4) {
                uVar11 = 4;
              }
              *(undefined4 *)(pbVar14 + 0x34) = uVar11;
              if (iVar6 != 4) {
                if (((byte)*pbVar24 & 1) == 0) {
                  uVar22 = (ulong)((byte)*pbVar24 >> 1);
                }
                else {
                  uVar22 = *(ulong *)(pbVar24 + 8);
                }
                uStack_78 = 0;
                local_70 = (void *)0x0;
                local_80 = 0;
                bVar3 = *pbVar13;
                uVar23 = (ulong)((byte)bVar3 >> 1);
                if (((byte)bVar3 & 1) != 0) {
                  uVar23 = *(ulong *)(pbVar13 + 8);
                }
                if (uVar23 == 0) goto LAB_00e466d8;
                pbVar24 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar13 + 0x10);
                if (((byte)bVar3 & 1) == 0) {
                  pbVar24 = pbVar13 + 1;
                }
                uVar17 = uVar23 - 1;
                if (uVar22 - 2 <= uVar23 - 1) {
                  uVar17 = uVar22 - 2;
                }
                if (0xffffffffffffffef < uVar17) goto LAB_00e466e0;
                if (uVar17 < 0x17) {
                  local_80 = (ulong)(byte)((int)uVar17 << 1);
                  pvVar8 = pvVar15;
                  if (uVar17 != 0) goto LAB_00e4622c;
                }
                else {
                  uVar22 = uVar17 + 0x10 & 0xfffffffffffffff0;
                  pvVar8 = operator_new(uVar22);
                  local_80 = uVar22 | 1;
                  uStack_78 = uVar17;
                  local_70 = pvVar8;
LAB_00e4622c:
                  memcpy(pvVar8,pbVar24 + 1,uVar17);
                }
                bVar3 = *pbVar20;
                *(undefined1 *)((long)pvVar8 + uVar17) = 0;
                if (((byte)bVar3 & 1) == 0) {
                  pbVar14[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                )0x0;
                  *pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              )0x0;
                }
                else {
                  **(undefined1 **)(pbVar14 + 0x10) = 0;
                  *(undefined8 *)(pbVar14 + 8) = 0;
                  if (((byte)*pbVar20 & 1) != 0) {
                    operator_delete(*(void **)(pbVar14 + 0x10));
                    *(undefined8 *)pbVar14 = 0;
                  }
                }
                *(void **)(pbVar20 + 0x10) = local_70;
                *(ulong *)(pbVar20 + 8) = uStack_78;
                *(ulong *)pbVar20 = local_80;
              }
              else if (pbVar14 != pbVar13) {
                uVar22 = *(ulong *)(pbVar13 + 8);
                pbVar24 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar13 + 0x10);
                if (((byte)*pbVar13 & 1) == 0) {
                  pbVar24 = pbVar13 + 1;
                  uVar22 = (ulong)((byte)*pbVar13 >> 1);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(pbVar14,(char *)pbVar24,uVar22);
              }
              plVar10 = operator_new(0x18);
              plVar10[1] = (long)(pbVar16 + 0x38);
              plVar10[2] = (long)pbVar14;
              lVar12 = *(long *)(pbVar16 + 0x38);
              plVar9 = plVar21 + 3;
              *plVar10 = lVar12;
              *(long **)(lVar12 + 8) = plVar10;
              *(long **)(pbVar16 + 0x38) = plVar10;
              *(long *)(pbVar16 + 0x48) = *(long *)(pbVar16 + 0x48) + 1;
              if ((plVar9 == plVar1) || ((*(uint *)(*plVar9 + 0x30) & 0xfffffffe) != 4)) {
                printf("expected import source at line :%d,ScriptParser::parse",
                       (ulong)*(uint *)(pbVar16 + 0x30));
              }
              pbVar24 = operator_new(0x58,(nothrow_t *)&std::nothrow);
              if (pbVar24 ==
                  (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  0x0) {
                pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)0x0;
              }
              else {
                *(ulong *)(pbVar24 + 0x18) = 0;
                *(ulong *)(pbVar24 + 0x10) = 0;
                *(ulong *)(pbVar24 + 0x28) = 0;
                *(ulong *)(pbVar24 + 0x20) = 0;
                *(ulong *)(pbVar24 + 8) = 0;
                *(ulong *)pbVar24 = 0;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar24 + 0x38) = pbVar24 + 0x38;
                *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
                 (pbVar24 + 0x40) = pbVar24 + 0x38;
                *(ulong *)(pbVar24 + 0x48) = 0;
                pbVar20 = pbVar24;
              }
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar20 + 0x50) = pbVar16;
              pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar9;
              if (pbVar20 != pbVar14) {
                uVar22 = *(ulong *)(pbVar14 + 0x20);
                pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar14 + 0x28);
                if (((byte)pbVar14[0x18] & 1) == 0) {
                  pbVar13 = pbVar14 + 0x19;
                  uVar22 = (ulong)((byte)pbVar14[0x18] >> 1);
                }
                std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                assign(pbVar20 + 0x18,(char *)pbVar13,uVar22);
                pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           *)*plVar9;
              }
              *(undefined4 *)(pbVar20 + 0x30) = *(undefined4 *)(pbVar14 + 0x34);
              iVar6 = *(int *)(pbVar14 + 0x30);
              uVar11 = 2;
              if (iVar6 != 4) {
                uVar11 = 4;
              }
              *(undefined4 *)(pbVar20 + 0x34) = uVar11;
              if (iVar6 != 4) {
                bVar3 = *pbVar14;
                if (((byte)bVar3 & 1) == 0) {
                  uVar17 = *(ulong *)(pbVar14 + 8);
                  uVar22 = (ulong)((byte)bVar3 >> 1);
                  uVar23 = uVar22;
                }
                else {
                  uVar17 = *(ulong *)(pbVar14 + 8);
                  uVar22 = (ulong)((byte)bVar3 >> 1);
                  uVar23 = uVar17;
                }
                if (((byte)bVar3 & 1) != 0) {
                  uVar22 = uVar17;
                }
                uStack_78 = 0;
                local_70 = (void *)0x0;
                    /* try { // try from 00e46434 to 00f4643f has its CatchHandler @ 00e46854 */
                local_80 = 0;
                if (uVar22 == 0) goto LAB_00e466d8;
                pbVar13 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                            **)(pbVar14 + 0x10);
                    /* try { // try from 00e4644c to 00f4645f has its CatchHandler @ 00e46844 */
                if (((byte)bVar3 & 1) == 0) {
                  pbVar13 = pbVar14 + 1;
                }
                uVar17 = uVar22 - 1;
                if (uVar23 - 2 <= uVar22 - 1) {
                  uVar17 = uVar23 - 2;
                }
                if (0xffffffffffffffef < uVar17) goto LAB_00e466e0;
                if (uVar17 < 0x17) {
                  local_80 = (ulong)(byte)((int)uVar17 << 1);
                  pvVar8 = pvVar15;
                  if (uVar17 != 0) goto LAB_00e46584;
                }
                else {
                  uVar22 = uVar17 + 0x10 & 0xfffffffffffffff0;
                  pvVar8 = operator_new(uVar22);
                  local_80 = uVar22 | 1;
                  uStack_78 = uVar17;
                  local_70 = pvVar8;
LAB_00e46584:
                  memcpy(pvVar8,pbVar13 + 1,uVar17);
                }
                bVar3 = *pbVar24;
                *(undefined1 *)((long)pvVar8 + uVar17) = 0;
                if (((byte)bVar3 & 1) == 0) {
                  pbVar20[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                )0x0;
                  *pbVar24 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              )0x0;
                }
                else {
                  **(undefined1 **)(pbVar20 + 0x10) = 0;
                  *(undefined8 *)(pbVar20 + 8) = 0;
                  if (((byte)*pbVar24 & 1) != 0) {
                    operator_delete(*(void **)(pbVar20 + 0x10));
                    *(undefined8 *)pbVar20 = 0;
                  }
                }
                *(void **)(pbVar24 + 0x10) = local_70;
                *(ulong *)(pbVar24 + 8) = uStack_78;
                *(ulong *)pbVar24 = local_80;
              }
              else {
                    /* try { // try from 00e463dc to 00f46433 has its CatchHandler @ 00e463dc
                       catch() { ... } // from try @ 00e463dc with catch @ 00e463dc
                       catch() { ... } // from try @ 00e46734 with catch @ 00e463dc */
                if (pbVar20 != pbVar14) {
                  uVar22 = *(ulong *)(pbVar14 + 8);
                  pbVar24 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                              **)(pbVar14 + 0x10);
                  if (((byte)*pbVar14 & 1) == 0) {
                    pbVar24 = pbVar14 + 1;
                    uVar22 = (ulong)((byte)*pbVar14 >> 1);
                  }
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  assign(pbVar20,(char *)pbVar24,uVar22);
                }
              }
                    /* try { // try from 00e465ec to 00f465f7 has its CatchHandler @ 00e4685c */
              plVar10 = operator_new(0x18);
              plVar10[1] = (long)(pbVar16 + 0x38);
              plVar10[2] = (long)pbVar20;
              lVar12 = *(long *)(pbVar16 + 0x38);
              *plVar10 = lVar12;
              *(long **)(lVar12 + 8) = plVar10;
              *(long **)(pbVar16 + 0x38) = plVar10;
              *(long *)(pbVar16 + 0x48) = *(long *)(pbVar16 + 0x48) + 1;
              if ((plVar9 != plVar1) && (*(int *)(*plVar9 + 0x30) == 6)) {
                plVar21 = plVar21 + 4;
                do {
                  plVar10 = plVar21;
                  plVar9 = plVar1;
                  if (plVar1 == plVar10) break;
                    /* try { // try from 00e4663c to 00f46663 has its CatchHandler @ 00e46860 */
                  plVar21 = plVar10 + 1;
                  plVar9 = plVar10;
                } while (*(int *)(*plVar10 + 0x30) == 6);
              }
              goto joined_r0x00e4651c;
            }
          }
          pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        }
        if (pbVar16 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(pbVar16 + 0x28) = 0;
          *(undefined8 *)(pbVar16 + 0x20) = 0;
          *(undefined8 *)(pbVar16 + 0x38) = 0;
          *(undefined8 *)(pbVar16 + 0x30) = 0;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
          *(undefined8 *)(pbVar16 + 0x40) = 0;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
          *(undefined8 *)(pbVar16 + 0x50) = 0;
          *(undefined8 *)(pbVar16 + 8) = 0;
          *(undefined8 *)pbVar16 = 0;
          *(undefined8 *)(pbVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar16 + 0x10) = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x38) = pbVar16 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x40) = pbVar16 + 0x38;
        }
        if (pbVar16 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar20 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16 + 0x18,(char *)pbVar20,uVar22);
        }
        *(undefined4 *)(pbVar16 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
        iVar6 = *(int *)(pbVar24 + 0x30);
        uVar11 = 2;
        if (iVar6 != 4) {
          uVar11 = 4;
        }
        *(undefined4 *)(pbVar16 + 0x34) = uVar11;
        if (iVar6 != 4) {
          bVar3 = *pbVar24;
          if (((byte)bVar3 & 1) == 0) {
            uVar17 = *(ulong *)(pbVar24 + 8);
            uVar22 = (ulong)((byte)bVar3 >> 1);
            uVar23 = uVar22;
          }
          else {
            uVar17 = *(ulong *)(pbVar24 + 8);
            uVar22 = (ulong)((byte)bVar3 >> 1);
            uVar23 = uVar17;
          }
          if (((byte)bVar3 & 1) != 0) {
            uVar22 = uVar17;
          }
          uStack_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
          if (uVar22 == 0) goto LAB_00e466d8;
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)bVar3 & 1) == 0) {
            pbVar20 = pbVar24 + 1;
          }
          uVar17 = uVar22 - 1;
          if (uVar23 - 2 <= uVar22 - 1) {
            uVar17 = uVar23 - 2;
          }
          if (0xffffffffffffffef < uVar17) goto LAB_00e466e0;
          if (uVar17 < 0x17) {
            local_80 = (ulong)(byte)((int)uVar17 << 1);
            pvVar8 = pvVar15;
            if (uVar17 != 0) goto LAB_00e45870;
          }
          else {
            uVar22 = uVar17 + 0x10 & 0xfffffffffffffff0;
            pvVar8 = operator_new(uVar22);
            local_80 = uVar22 | 1;
            uStack_78 = uVar17;
            local_70 = pvVar8;
LAB_00e45870:
            memcpy(pvVar8,pbVar20 + 1,uVar17);
          }
          *(undefined1 *)((long)pvVar8 + uVar17) = 0;
          if (((byte)*pbVar16 & 1) == 0) {
            *(undefined2 *)pbVar16 = 0;
          }
          else {
            **(undefined1 **)(pbVar16 + 0x10) = 0;
            *(undefined8 *)(pbVar16 + 8) = 0;
            if (((byte)*pbVar16 & 1) != 0) {
              operator_delete(*(void **)(pbVar16 + 0x10));
              *(undefined8 *)pbVar16 = 0;
            }
          }
                    /* try { // try from 00e458c4 to 00f458cb has its CatchHandler @ 00e45d00 */
          *(void **)(pbVar16 + 0x10) = local_70;
          *(ulong *)(pbVar16 + 8) = uStack_78;
          *(ulong *)pbVar16 = local_80;
          if (pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) goto LAB_00e45254;
LAB_00e458d0:
          *(undefined8 *)(pbVar16 + 0x50) = 0;
          this = operator_new(0x18);
          *(list **)(this + 8) = param_1;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar16;
          lVar12 = *(long *)param_1;
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)param_1 = this;
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        }
        else {
          if (pbVar16 != pbVar24) {
            uVar22 = *(ulong *)(pbVar24 + 8);
            pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        **)(pbVar24 + 0x10);
            if (((byte)*pbVar24 & 1) == 0) {
              pbVar20 = pbVar24 + 1;
              uVar22 = (ulong)((byte)*pbVar24 >> 1);
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (pbVar16,(char *)pbVar20,uVar22);
          }
          if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) goto LAB_00e458d0;
LAB_00e45254:
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x50) = pbVar7;
          this = operator_new(0x18);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 8) = pbVar7 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar16;
          lVar12 = *(long *)(pbVar7 + 0x38);
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)(pbVar7 + 0x38) = this;
          *(long *)(pbVar7 + 0x48) = *(long *)(pbVar7 + 0x48) + 1;
        }
        bVar5 = true;
        goto LAB_00e45130;
      }
      switch(*(undefined4 *)(pbVar24 + 0x30)) {
      case 0:
                    /* try { // try from 00e452b8 to 00f4530f has its CatchHandler @ 00e452b8
                       catch() { ... } // from try @ 00e452b8 with catch @ 00e452b8
                       catch() { ... } // from try @ 00e45450 with catch @ 00e452b8
                       catch() { ... } // from try @ 00e454a0 with catch @ 00e452b8 */
        pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar16 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(pbVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar16 + 0x10) = 0;
          *(undefined8 *)(pbVar16 + 0x28) = 0;
          *(undefined8 *)(pbVar16 + 0x20) = 0;
          *(undefined8 *)(pbVar16 + 8) = 0;
          *(undefined8 *)pbVar16 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x38) = pbVar16 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x40) = pbVar16 + 0x38;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
        }
        if (pbVar16 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 8);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)*pbVar24 & 1) == 0) {
            pbVar20 = pbVar24 + 1;
            uVar22 = (ulong)((byte)*pbVar24 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16,(char *)pbVar20,uVar22);
        }
        if (pbVar16 != pbVar24) {
                    /* try { // try from 00e45310 to 00f45317 has its CatchHandler @ 00e4552c */
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
                    /* try { // try from 00e4531c to 00f45323 has its CatchHandler @ 00e45524 */
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar20 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16 + 0x18,(char *)pbVar20,uVar22);
        }
        *(undefined4 *)(pbVar16 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
        *(undefined4 *)(pbVar16 + 0x34) = 5;
        if (plVar21 != plVar1) {
          iVar6 = *(int *)(*plVar21 + 0x30);
          while ((iVar6 == 6 && (plVar9 = plVar21 + 1, plVar21 = plVar1, plVar1 != plVar9))) {
            iVar6 = *(int *)(*plVar9 + 0x30);
            plVar21 = plVar9;
          }
        }
        if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) {
          *(undefined8 *)(pbVar16 + 0x50) = 0;
          this = operator_new(0x18);
          *(list **)(this + 8) = param_1;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar16;
          lVar12 = *(long *)param_1;
LAB_00e4667c:
          bVar5 = false;
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)param_1 = this;
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        }
        else {
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x50) = pbVar7;
          this = operator_new(0x18);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 8) = pbVar7 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar16;
                    /* try { // try from 00e45390 to 00f453ab has its CatchHandler @ 00e4554c */
          lVar12 = *(long *)(pbVar7 + 0x38);
          bVar5 = false;
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)(pbVar7 + 0x38) = this;
          *(long *)(pbVar7 + 0x48) = *(long *)(pbVar7 + 0x48) + 1;
        }
        goto LAB_00e45130;
      case 1:
        if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) {
          lVar12 = 0;
        }
        else {
          lVar12 = *(long *)(pbVar7 + 0x50);
          if (((lVar12 != 0) && (*(int *)(lVar12 + 0x34) == 5)) && (*(long *)(lVar12 + 0x50) != 0))
          {
            lVar12 = *(long *)(lVar12 + 0x50);
          }
        }
                    /* try { // try from 00e45914 to 00f4591b has its CatchHandler @ 00e45cfc */
        pbVar7 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) {
          *(undefined8 *)(pbVar7 + 0x18) = 0;
          *(undefined8 *)(pbVar7 + 0x10) = 0;
          *(undefined8 *)(pbVar7 + 0x28) = 0;
          *(undefined8 *)(pbVar7 + 0x20) = 0;
          *(undefined8 *)(pbVar7 + 8) = 0;
          *(undefined8 *)pbVar7 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar7 + 0x38) = pbVar7 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar7 + 0x40) = pbVar7 + 0x38;
          *(undefined8 *)(pbVar7 + 0x48) = 0;
        }
        if (pbVar7 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 8);
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)*pbVar24 & 1) == 0) {
            pbVar16 = pbVar24 + 1;
            uVar22 = (ulong)((byte)*pbVar24 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar7,(char *)pbVar16,uVar22);
        }
        if (pbVar7 != pbVar24) {
                    /* try { // try from 00e4596c to 00f45973 has its CatchHandler @ 00e45cf8 */
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar16 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar7 + 0x18,(char *)pbVar16,uVar22);
        }
        *(undefined4 *)(pbVar7 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
        *(undefined4 *)(pbVar7 + 0x34) = 6;
        if (plVar21 != plVar1) {
          iVar6 = *(int *)(*plVar21 + 0x30);
                    /* try { // try from 00e459b0 to 00f45a97 has its CatchHandler @ 00e45d04 */
          while ((plVar9 = plVar21, iVar6 == 6 &&
                 (plVar21 = plVar21 + 1, plVar9 = plVar1, plVar1 != plVar21))) {
            iVar6 = *(int *)(*plVar21 + 0x30);
          }
        }
joined_r0x00e45a00:
        plVar21 = plVar9;
        if (lVar12 == 0) {
          *(undefined8 *)(pbVar7 + 0x50) = 0;
          this = operator_new(0x18);
          *(list **)(this + 8) = param_1;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar7;
          lVar12 = *(long *)param_1;
          pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)0x0;
          goto LAB_00e4667c;
        }
        *(long *)(pbVar7 + 0x50) = lVar12;
        this = operator_new(0x18);
        *(long *)(this + 8) = lVar12 + 0x38;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = pbVar7;
        lVar18 = *(long *)(lVar12 + 0x38);
        bVar5 = false;
        *(long *)this = lVar18;
        *(PUScriptParser **)(lVar18 + 8) = this;
        *(PUScriptParser **)(lVar12 + 0x38) = this;
        *(long *)(lVar12 + 0x48) = *(long *)(lVar12 + 0x48) + 1;
        pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(lVar12 + 0x50);
        goto LAB_00e45130;
      case 2:
        pbVar20 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar20 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(pbVar20 + 0x28) = 0;
          *(undefined8 *)(pbVar20 + 0x20) = 0;
          *(undefined8 *)(pbVar20 + 0x38) = 0;
          *(undefined8 *)(pbVar20 + 0x30) = 0;
          *(undefined8 *)(pbVar20 + 0x48) = 0;
          *(undefined8 *)(pbVar20 + 0x40) = 0;
          *(undefined8 *)(pbVar20 + 0x48) = 0;
          *(undefined8 *)(pbVar20 + 0x50) = 0;
          *(undefined8 *)(pbVar20 + 8) = 0;
          *(undefined8 *)pbVar20 = 0;
          *(undefined8 *)(pbVar20 + 0x18) = 0;
          *(undefined8 *)(pbVar20 + 0x10) = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar20 + 0x38) = pbVar20 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar20 + 0x40) = pbVar20 + 0x38;
        }
        if (pbVar20 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 8);
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)*pbVar24 & 1) == 0) {
            pbVar16 = pbVar24 + 1;
            uVar22 = (ulong)((byte)*pbVar24 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar20,(char *)pbVar16,uVar22);
        }
        if (pbVar20 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar16 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar20 + 0x18,(char *)pbVar16,uVar22);
        }
        *(undefined4 *)(pbVar20 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
        *(undefined4 *)(pbVar20 + 0x34) = 7;
        do {
          plVar21 = plVar21 + 1;
          if (plVar21 == plVar1) goto LAB_00e45f8c;
        } while (*(int *)(*plVar21 + 0x30) == 6);
        if (plVar1 == plVar21) {
LAB_00e45f8c:
          printf("expected object identifier at line %d ScriptParser::parse\n");
          plVar9 = plVar1;
        }
        else {
          if ((*(uint *)(*plVar21 + 0x30) & 0xfffffffe) != 4) {
            printf("expected object identifier at line %d ScriptParser::parse\n");
          }
          do {
            plVar9 = plVar21;
            if ((*(uint *)(*plVar21 + 0x30) & 0xfffffffe) != 4) break;
            pbVar24 = operator_new(0x58,(nothrow_t *)&std::nothrow);
            if (pbVar24 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) {
              *(undefined8 *)(pbVar24 + 0x18) = 0;
              *(undefined8 *)(pbVar24 + 0x10) = 0;
              *(undefined8 *)(pbVar24 + 0x28) = 0;
              *(undefined8 *)(pbVar24 + 0x20) = 0;
              *(undefined8 *)(pbVar24 + 8) = 0;
              *(undefined8 *)pbVar24 = 0;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x38) = pbVar24 + 0x38;
              *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
               (pbVar24 + 0x40) = pbVar24 + 0x38;
              *(undefined8 *)(pbVar24 + 0x48) = 0;
            }
            pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)*plVar21;
            if (pbVar24 != pbVar16) {
                    /* try { // try from 00e45f38 to 00f45f3f has its CatchHandler @ 00e46050 */
              uVar22 = *(ulong *)(pbVar16 + 8);
              pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar16 + 0x10);
              if (((byte)*pbVar16 & 1) == 0) {
                pbVar14 = pbVar16 + 1;
                uVar22 = (ulong)((byte)*pbVar16 >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar24,(char *)pbVar14,uVar22);
              pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar21;
            }
            if (pbVar24 != pbVar16) {
              uVar22 = *(ulong *)(pbVar16 + 0x20);
              pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          **)(pbVar16 + 0x28);
              if (((byte)pbVar16[0x18] & 1) == 0) {
                pbVar14 = pbVar16 + 0x19;
                uVar22 = (ulong)((byte)pbVar16[0x18] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (pbVar24 + 0x18,(char *)pbVar14,uVar22);
                    /* try { // try from 00e45f84 to 00f45f8b has its CatchHandler @ 00e4604c */
              pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)*plVar21;
            }
                    /* try { // try from 00e45e8c to 00f45eb3 has its CatchHandler @ 00e46044 */
            *(undefined4 *)(pbVar24 + 0x30) = *(undefined4 *)(pbVar16 + 0x34);
            iVar6 = *(int *)(pbVar16 + 0x30);
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar24 + 0x50) = pbVar20;
            uVar11 = 2;
            if (iVar6 != 4) {
              uVar11 = 4;
            }
            *(undefined4 *)(pbVar24 + 0x34) = uVar11;
            plVar9 = operator_new(0x18);
            plVar9[1] = (long)(pbVar20 + 0x38);
            plVar9[2] = (long)pbVar24;
            lVar12 = *(long *)(pbVar20 + 0x38);
            plVar21 = plVar21 + 1;
            *plVar9 = lVar12;
            *(long **)(lVar12 + 8) = plVar9;
            *(long **)(pbVar20 + 0x38) = plVar9;
            *(long *)(pbVar20 + 0x48) = *(long *)(pbVar20 + 0x48) + 1;
            plVar9 = plVar1;
          } while (plVar1 != plVar21);
        }
        plVar21 = plVar9 + -1;
        goto joined_r0x00e45b34;
      case 3:
        pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar16 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(pbVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar16 + 0x10) = 0;
          *(undefined8 *)(pbVar16 + 0x28) = 0;
          *(undefined8 *)(pbVar16 + 0x20) = 0;
          *(undefined8 *)(pbVar16 + 8) = 0;
          *(undefined8 *)pbVar16 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x38) = pbVar16 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x40) = pbVar16 + 0x38;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
        }
        if (pbVar16 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 8);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)*pbVar24 & 1) == 0) {
            pbVar20 = pbVar24 + 1;
            uVar22 = (ulong)((byte)*pbVar24 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16,(char *)pbVar20,uVar22);
        }
        if (pbVar16 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
                    /* try { // try from 00e456c4 to 00f45753 has its CatchHandler @ 00e456c4
                       catch() { ... } // from try @ 00e456c4 with catch @ 00e456c4
                       catch() { ... } // from try @ 00e45bb4 with catch @ 00e456c4 */
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar20 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16 + 0x18,(char *)pbVar20,uVar22);
        }
        uVar11 = *(undefined4 *)(pbVar24 + 0x34);
        *(undefined4 *)(pbVar16 + 0x34) = 0;
        *(undefined4 *)(pbVar16 + 0x30) = uVar11;
        if (pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) goto LAB_00e4545c;
LAB_00e456f0:
        *(undefined8 *)(pbVar16 + 0x50) = 0;
        this = operator_new(0x18);
        *(list **)(this + 8) = param_1;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = pbVar16;
        goto LAB_00e45b48;
      case 4:
                    /* try { // try from 00e453d0 to 00f453e7 has its CatchHandler @ 00e4553c */
        pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar16 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(pbVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar16 + 0x10) = 0;
          *(undefined8 *)(pbVar16 + 0x28) = 0;
          *(undefined8 *)(pbVar16 + 0x20) = 0;
          *(undefined8 *)(pbVar16 + 8) = 0;
          *(undefined8 *)pbVar16 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x38) = pbVar16 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x40) = pbVar16 + 0x38;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
        }
                    /* try { // try from 00e453f4 to 00f453fb has its CatchHandler @ 00e4551c */
        if (pbVar16 != pbVar24) {
                    /* try { // try from 00e45400 to 00f45413 has its CatchHandler @ 00e45554 */
          uVar22 = *(ulong *)(pbVar24 + 8);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x10);
          if (((byte)*pbVar24 & 1) == 0) {
            pbVar20 = pbVar24 + 1;
            uVar22 = (ulong)((byte)*pbVar24 >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16,(char *)pbVar20,uVar22);
        }
                    /* try { // try from 00e45420 to 00f4542f has its CatchHandler @ 00e45518 */
        if (pbVar16 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar20 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar20 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
                    /* try { // try from 00e45444 to 00f4544f has its CatchHandler @ 00e454d4 */
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar16 + 0x18,(char *)pbVar20,uVar22);
        }
        uVar11 = *(undefined4 *)(pbVar24 + 0x34);
                    /* try { // try from 00e45450 to 00f4548b has its CatchHandler @ 00e452b8 */
        *(undefined4 *)(pbVar16 + 0x34) = 2;
        *(undefined4 *)(pbVar16 + 0x30) = uVar11;
        if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) goto LAB_00e456f0;
LAB_00e4545c:
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (pbVar16 + 0x50) = pbVar7;
        this = operator_new(0x18);
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 8) = pbVar7 + 0x38;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = pbVar16;
        goto LAB_00e45fb8;
      case 5:
        pbVar16 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (pbVar16 ==
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          pbVar20 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)0x0;
          uVar22 = (ulong)(byte)*pbVar24;
          if (((byte)*pbVar24 & 1) == 0) goto LAB_00e45768;
LAB_00e45a14:
          uVar19 = *(ulong *)(pbVar24 + 8);
          uVar23 = uVar22 >> 1;
          uVar17 = uVar19;
        }
        else {
          *(undefined8 *)(pbVar16 + 0x18) = 0;
          *(undefined8 *)(pbVar16 + 0x10) = 0;
          *(undefined8 *)(pbVar16 + 0x28) = 0;
          *(undefined8 *)(pbVar16 + 0x20) = 0;
                    /* try { // try from 00e45754 to 00f4576f has its CatchHandler @ 00e45d70 */
          *(undefined8 *)(pbVar16 + 8) = 0;
          *(undefined8 *)pbVar16 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x38) = pbVar16 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar16 + 0x40) = pbVar16 + 0x38;
          *(undefined8 *)(pbVar16 + 0x48) = 0;
          uVar22 = (ulong)(byte)*pbVar24;
          pbVar20 = pbVar16;
          if (((byte)*pbVar24 & 1) != 0) goto LAB_00e45a14;
LAB_00e45768:
          uVar19 = *(ulong *)(pbVar24 + 8);
          uVar23 = uVar22 >> 1;
          uVar17 = uVar23;
                    /* try { // try from 00e45770 to 00f45777 has its CatchHandler @ 00e45d60 */
        }
        if ((uVar22 & 1) != 0) {
          uVar23 = uVar19;
        }
        uStack_78 = 0;
        local_70 = (void *)0x0;
        local_80 = 0;
        if (uVar23 == 0) {
LAB_00e466d8:
          local_70 = (void *)0x0;
          uStack_78 = 0;
          local_80 = 0;
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(pbVar24 + 0x10);
        if ((uVar22 & 1) == 0) {
          pbVar14 = pbVar24 + 1;
        }
        uVar22 = uVar23 - 1;
        if (uVar17 - 2 <= uVar23 - 1) {
          uVar22 = uVar17 - 2;
        }
        if (0xffffffffffffffef < uVar22) {
LAB_00e466e0:
          local_70 = (void *)0x0;
          uStack_78 = 0;
          local_80 = 0;
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (uVar22 < 0x17) {
          local_80 = (ulong)(byte)((int)uVar22 << 1);
          pvVar8 = pvVar15;
          if (uVar22 != 0) goto LAB_00e45a94;
        }
        else {
          uVar23 = uVar22 + 0x10 & 0xfffffffffffffff0;
          pvVar8 = operator_new(uVar23);
          local_80 = uVar23 | 1;
          uStack_78 = uVar22;
          local_70 = pvVar8;
LAB_00e45a94:
          memcpy(pvVar8,pbVar14 + 1,uVar22);
        }
        bVar3 = *pbVar16;
        *(undefined1 *)((long)pvVar8 + uVar22) = 0;
        if (((byte)bVar3 & 1) == 0) {
          pbVar20[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        )0x0;
          *pbVar16 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     )0x0;
        }
        else {
          **(undefined1 **)(pbVar20 + 0x10) = 0;
          *(undefined8 *)(pbVar20 + 8) = 0;
                    /* try { // try from 00e45adc to 00f45bb3 has its CatchHandler @ 00e45d08 */
          if (((byte)*pbVar16 & 1) != 0) {
            operator_delete(*(void **)(pbVar20 + 0x10));
            *(undefined8 *)pbVar20 = 0;
          }
        }
        *(void **)(pbVar16 + 0x10) = local_70;
        *(ulong *)(pbVar16 + 8) = uStack_78;
        *(ulong *)pbVar16 = local_80;
        if (pbVar20 != pbVar24) {
          uVar22 = *(ulong *)(pbVar24 + 0x20);
          pbVar16 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      **)(pbVar24 + 0x28);
          if (((byte)pbVar24[0x18] & 1) == 0) {
            pbVar16 = pbVar24 + 0x19;
            uVar22 = (ulong)((byte)pbVar24[0x18] >> 1);
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                    (pbVar20 + 0x18,(char *)pbVar16,uVar22);
        }
        *(undefined4 *)(pbVar20 + 0x30) = *(undefined4 *)(pbVar24 + 0x34);
        *(undefined4 *)(pbVar20 + 0x34) = 4;
joined_r0x00e45b34:
        if (pbVar7 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0) {
          *(undefined8 *)(pbVar20 + 0x50) = 0;
          this = operator_new(0x18);
          *(list **)(this + 8) = param_1;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar20;
LAB_00e45b48:
          lVar12 = *(long *)param_1;
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)param_1 = this;
          *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
        }
        else {
                    /* try { // try from 00e45fa4 to 00f45fb3 has its CatchHandler @ 00e46048 */
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (pbVar20 + 0x50) = pbVar7;
          this = operator_new(0x18);
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 8) = pbVar7 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this + 0x10) = pbVar20;
LAB_00e45fb8:
          lVar12 = *(long *)(pbVar7 + 0x38);
          *(long *)this = lVar12;
          *(PUScriptParser **)(lVar12 + 8) = this;
          *(PUScriptParser **)(pbVar7 + 0x38) = this;
          *(long *)(pbVar7 + 0x48) = *(long *)(pbVar7 + 0x48) + 1;
        }
        break;
      case 6:
                    /* try { // try from 00e45778 to 00f45787 has its CatchHandler @ 00e45d50 */
        if (plVar21 != plVar1) {
          do {
            if (plVar1 + -1 == plVar9) goto LAB_00e45b80;
            plVar10 = plVar9 + 1;
            plVar9 = plVar9 + 1;
          } while (*(int *)(*plVar10 + 0x30) == 6);
        }
        if ((plVar9 == plVar1) || (*(int *)(*plVar9 + 0x30) != 0)) {
LAB_00e45b80:
          if (pbVar7 != (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) {
            pbVar7 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       **)(pbVar7 + 0x50);
          }
LAB_00e4512c:
          bVar5 = false;
          pbVar16 = pbVar7;
          goto LAB_00e45130;
        }
      }
      bVar5 = true;
      pbVar16 = pbVar7;
LAB_00e45130:
      plVar21 = plVar21 + 1;
      pbVar7 = pbVar16;
    } while (plVar21 != plVar1);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

