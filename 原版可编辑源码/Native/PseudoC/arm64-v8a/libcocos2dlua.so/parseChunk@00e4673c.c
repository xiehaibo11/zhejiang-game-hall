
/* cocos2d::PUScriptParser::parseChunk(std::__ndk1::list<cocos2d::PUConcreteNode*,
   std::__ndk1::allocator<cocos2d::PUConcreteNode*> >&, std::__ndk1::vector<cocos2d::PUScriptToken*,
   std::__ndk1::allocator<cocos2d::PUScriptToken*> > const&) */

void __thiscall
cocos2d::PUScriptParser::parseChunk(PUScriptParser *this,list *param_1,vector *param_2)

{
  int iVar1;
  undefined4 uVar2;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar3;
  long lVar4;
  uint uVar5;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar6;
  void *__dest;
  long lVar7;
  ulong uVar8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar9;
  ulong uVar10;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ulong uVar12;
  undefined8 *puVar13;
  ulong local_80;
  ulong uStack_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  puVar13 = *(undefined8 **)param_2;
  if (puVar13 != *(undefined8 **)(param_2 + 8)) {
    do {
      pbVar11 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                *puVar13;
      iVar1 = *(int *)(pbVar11 + 0x30);
      if (iVar1 == 3) {
        this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
        if (this_00 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
                    /* try { // try from 00e46900 to 00f46917 has its CatchHandler @ 00e46a90 */
          *(undefined8 *)(this_00 + 0x18) = 0;
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(undefined8 *)(this_00 + 0x28) = 0;
          *(undefined8 *)(this_00 + 0x20) = 0;
          *(undefined8 *)(this_00 + 8) = 0;
          *(undefined8 *)this_00 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this_00 + 0x38) = this_00 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this_00 + 0x40) = this_00 + 0x38;
          *(undefined8 *)(this_00 + 0x48) = 0;
        }
                    /* try { // try from 00e46918 to 00f4691f has its CatchHandler @ 00e46a80 */
        this = (PUScriptParser *)this_00;
        if (this_00 != pbVar11) {
                    /* try { // try from 00e46920 to 00f4692f has its CatchHandler @ 00e46a70 */
          uVar12 = *(ulong *)(pbVar11 + 0x20);
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x28);
          if (((byte)pbVar11[0x18] & 1) == 0) {
            pbVar6 = pbVar11 + 0x19;
            uVar12 = (ulong)((byte)pbVar11[0x18] >> 1);
          }
          this = (PUScriptParser *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 assign(this_00 + 0x18,(char *)pbVar6,uVar12);
        }
        uVar2 = *(undefined4 *)(pbVar11 + 0x34);
        *(undefined8 *)(this_00 + 0x50) = 0;
        *(undefined4 *)(this_00 + 0x30) = uVar2;
        if (this_00 != pbVar11) {
                    /* try { // try from 00e46958 to 00f46963 has its CatchHandler @ 00e46a5c */
          uVar12 = *(ulong *)(pbVar11 + 8);
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x10);
          if (((byte)*pbVar11 & 1) == 0) {
            pbVar6 = pbVar11 + 1;
            uVar12 = (ulong)((byte)*pbVar11 >> 1);
          }
                    /* try { // try from 00e46974 to 00f46983 has its CatchHandler @ 00e46a4c */
          this = (PUScriptParser *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 assign(this_00,(char *)pbVar6,uVar12);
        }
        *(undefined4 *)(this_00 + 0x34) = 0;
      }
      else if (iVar1 == 4) {
                    /* catch() { ... } // from try @ 00e46434 with catch @ 00e46854 */
        this_00 = operator_new(0x58,(nothrow_t *)&std::nothrow);
                    /* catch() { ... } // from try @ 00e465ec with catch @ 00e4685c
                       catch() { ... } // from try @ 00e46728 with catch @ 00e4685c */
                    /* catch() { ... } // from try @ 00e4663c with catch @ 00e46860 */
        if (this_00 !=
            (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
          *(undefined8 *)(this_00 + 0x18) = 0;
          *(undefined8 *)(this_00 + 0x10) = 0;
          *(undefined8 *)(this_00 + 0x28) = 0;
          *(undefined8 *)(this_00 + 0x20) = 0;
          *(undefined8 *)(this_00 + 8) = 0;
          *(undefined8 *)this_00 = 0;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this_00 + 0x38) = this_00 + 0x38;
          *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
           (this_00 + 0x40) = this_00 + 0x38;
          *(undefined8 *)(this_00 + 0x48) = 0;
        }
        this = (PUScriptParser *)this_00;
                    /* try { // try from 00e46880 to 00f468ff has its CatchHandler @ 00e46880
                       catch() { ... } // from try @ 00e46880 with catch @ 00e46880
                       catch() { ... } // from try @ 00e4699c with catch @ 00e46880 */
        if (this_00 != pbVar11) {
          uVar12 = *(ulong *)(pbVar11 + 0x20);
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x28);
          if (((byte)pbVar11[0x18] & 1) == 0) {
            pbVar6 = pbVar11 + 0x19;
            uVar12 = (ulong)((byte)pbVar11[0x18] >> 1);
          }
          this = (PUScriptParser *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 assign(this_00 + 0x18,(char *)pbVar6,uVar12);
        }
        uVar2 = *(undefined4 *)(pbVar11 + 0x34);
        *(undefined8 *)(this_00 + 0x50) = 0;
        *(undefined4 *)(this_00 + 0x30) = uVar2;
        if (this_00 != pbVar11) {
          uVar12 = *(ulong *)(pbVar11 + 8);
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x10);
          if (((byte)*pbVar11 & 1) == 0) {
            pbVar6 = pbVar11 + 1;
            uVar12 = (ulong)((byte)*pbVar11 >> 1);
          }
          this = (PUScriptParser *)
                 std::__ndk1::
                 basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                 assign(this_00,(char *)pbVar6,uVar12);
        }
        *(undefined4 *)(this_00 + 0x34) = 2;
      }
      else {
        if (iVar1 == 5) {
          pbVar6 = operator_new(0x58,(nothrow_t *)&std::nothrow);
          if (pbVar6 == (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)0x0) {
            this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)0x0;
            if (pbVar11 !=
                (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                0x0) goto LAB_00e46808;
          }
          else {
            *(undefined8 *)(pbVar6 + 0x18) = 0;
            *(undefined8 *)(pbVar6 + 0x10) = 0;
            *(undefined8 *)(pbVar6 + 0x28) = 0;
            *(undefined8 *)(pbVar6 + 0x20) = 0;
            *(undefined8 *)(pbVar6 + 8) = 0;
            *(undefined8 *)pbVar6 = 0;
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar6 + 0x38) = pbVar6 + 0x38;
            *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (pbVar6 + 0x40) = pbVar6 + 0x38;
            *(undefined8 *)(pbVar6 + 0x48) = 0;
            this_00 = pbVar6;
            if (pbVar6 != pbVar11) {
LAB_00e46808:
              uVar12 = *(ulong *)(pbVar11 + 0x20);
              pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         **)(pbVar11 + 0x28);
              if (((byte)pbVar11[0x18] & 1) == 0) {
                pbVar9 = pbVar11 + 0x19;
                uVar12 = (ulong)((byte)pbVar11[0x18] >> 1);
              }
              std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                        (this_00 + 0x18,(char *)pbVar9,uVar12);
            }
          }
          uVar2 = *(undefined4 *)(pbVar11 + 0x34);
          *(undefined8 *)(this_00 + 0x50) = 0;
          *(undefined4 *)(this_00 + 0x30) = uVar2;
                    /* catch() { ... } // from try @ 00e464e0 with catch @ 00e46838 */
          bVar3 = *pbVar11;
                    /* catch() { ... } // from try @ 00e464b8 with catch @ 00e4683c */
          if (((byte)bVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e46490 with catch @ 00e46840 */
            uVar8 = *(ulong *)(pbVar11 + 8);
                    /* catch() { ... } // from try @ 00e4644c with catch @ 00e46844 */
            uVar12 = (ulong)((byte)bVar3 >> 1);
            uVar10 = uVar12;
          }
          else {
            uVar8 = *(ulong *)(pbVar11 + 8);
                    /* try { // try from 00e4699c to 00f46aa3 has its CatchHandler @ 00e46880 */
            uVar12 = (ulong)((byte)bVar3 >> 1);
            uVar10 = uVar8;
          }
          if (((byte)bVar3 & 1) != 0) {
            uVar12 = uVar8;
          }
          uStack_78 = 0;
          local_70 = (void *)0x0;
          local_80 = 0;
          if (uVar12 == 0) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
          }
          pbVar9 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x10);
          if (((byte)bVar3 & 1) == 0) {
            pbVar9 = pbVar11 + 1;
          }
          uVar8 = uVar12 - 1;
          if (uVar10 - 2 <= uVar12 - 1) {
            uVar8 = uVar10 - 2;
          }
          if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uVar8 < 0x17) {
            local_80 = (ulong)(byte)((int)uVar8 << 1);
            __dest = (void *)((ulong)&local_80 | 1);
            if (uVar8 != 0) goto LAB_00e46a2c;
          }
          else {
            uVar12 = uVar8 + 0x10 & 0xfffffffffffffff0;
            __dest = operator_new(uVar12);
            local_80 = uVar12 | 1;
            uStack_78 = uVar8;
            local_70 = __dest;
LAB_00e46a2c:
                    /* catch() { ... } // from try @ 00e4698c with catch @ 00e46a2c */
            memcpy(__dest,pbVar9 + 1,uVar8);
          }
                    /* catch() { ... } // from try @ 00e46984 with catch @ 00e46a3c */
          bVar3 = *pbVar6;
          *(undefined1 *)((long)__dest + uVar8) = 0;
          if (((byte)bVar3 & 1) == 0) {
                    /* catch() { ... } // from try @ 00e46974 with catch @ 00e46a4c */
            this_00[1] = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          )0x0;
            *pbVar6 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       )0x0;
          }
          else {
                    /* catch() { ... } // from try @ 00e46958 with catch @ 00e46a5c */
            **(undefined1 **)(this_00 + 0x10) = 0;
            *(undefined8 *)(this_00 + 8) = 0;
                    /* catch() { ... } // from try @ 00e46920 with catch @ 00e46a70 */
            if (((byte)*pbVar6 & 1) != 0) {
              operator_delete(*(void **)(this_00 + 0x10));
                    /* catch() { ... } // from try @ 00e46918 with catch @ 00e46a80 */
              *(undefined8 *)this_00 = 0;
            }
          }
          *(void **)(pbVar6 + 0x10) = local_70;
                    /* catch() { ... } // from try @ 00e46900 with catch @ 00e46a90 */
          *(ulong *)(pbVar6 + 8) = uStack_78;
          *(ulong *)pbVar6 = local_80;
          *(undefined4 *)(this_00 + 0x34) = 4;
          if (((byte)*pbVar11 & 1) == 0) goto LAB_00e46990;
LAB_00e46aa4:
          pbVar6 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     **)(pbVar11 + 0x10);
        }
        else {
                    /* try { // try from 00e46984 to 00f4698b has its CatchHandler @ 00e46a3c */
          this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     *)0x0;
                    /* try { // try from 00e4698c to 00f4699b has its CatchHandler @ 00e46a2c */
          if (((byte)*pbVar11 & 1) != 0) goto LAB_00e46aa4;
LAB_00e46990:
          pbVar6 = pbVar11 + 1;
        }
        uVar5 = printf("unexpected token,%s,%d\n",pbVar6,(ulong)*(uint *)(pbVar11 + 0x34));
        this = (PUScriptParser *)(ulong)uVar5;
      }
      if (this_00 !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)0x0) {
        this = operator_new(0x18);
        *(list **)(this + 8) = param_1;
        *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
         (this + 0x10) = this_00;
        lVar7 = *(long *)param_1;
        *(long *)this = lVar7;
        *(PUScriptParser **)(lVar7 + 8) = this;
        *(PUScriptParser **)param_1 = this;
        *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + 1;
      }
      puVar13 = puVar13 + 1;
    } while (puVar13 != *(undefined8 **)(param_2 + 8));
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(this);
  }
  return;
}

