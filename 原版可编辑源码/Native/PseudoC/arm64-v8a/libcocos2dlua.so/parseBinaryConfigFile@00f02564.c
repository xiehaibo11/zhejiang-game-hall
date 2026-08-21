
/* cocos2d::BMFontConfiguration::parseBinaryConfigFile(unsigned char*, unsigned long,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

long * __thiscall
cocos2d::BMFontConfiguration::parseBinaryConfigFile
          (BMFontConfiguration *this,uchar *param_1,ulong param_2,basic_string *param_3)

{
  long *plVar1;
  BMFontConfiguration *pBVar2;
  ushort *puVar3;
  uint uVar4;
  short sVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  __tree_node_base *p_Var10;
  uchar *puVar11;
  ulong uVar12;
  ulong uVar13;
  short *psVar14;
  uint *puVar15;
  long *plVar16;
  long *plVar17;
  long lVar18;
  undefined4 uVar19;
  ulong local_a0 [2];
  void *local_90;
  ulong *local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  plVar7 = operator_new(0x18,(nothrow_t *)&std::nothrow);
  if (plVar7 != (long *)0x0) {
    plVar7[1] = 0;
    plVar7[2] = 0;
    *plVar7 = (long)(plVar7 + 1);
  }
  lVar18 = param_2 - 4;
  if (lVar18 != 0) {
    puVar11 = param_1 + 4;
    plVar1 = plVar7 + 1;
    pBVar2 = this + 0x68;
    do {
      uVar4 = *(uint *)(puVar11 + 1);
      uVar12 = (ulong)uVar4;
      puVar3 = (ushort *)(puVar11 + 5);
      switch(*puVar11) {
      case '\x01':
        *(ushort *)(this + 0xb0) = *puVar3;
        *(uint *)(this + 0x58) = (uint)puVar11[0xc];
        *(uint *)(this + 0x5c) = (uint)puVar11[0xd];
        *(uint *)(this + 0x60) = (uint)puVar11[0xe];
        *(uint *)(this + 0x54) = (uint)puVar11[0xf];
        break;
      case '\x02':
        *(uint *)(this + 0x50) = (uint)*puVar3;
        break;
      case '\x03':
        plVar9 = (long *)FileUtils::getInstance();
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>
                  ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *
                   )local_a0,(char *)puVar3);
        (**(code **)(*plVar9 + 0x68))(&local_88,plVar9,local_a0,param_3);
        if (((byte)*pBVar2 & 1) == 0) {
          *(undefined2 *)pBVar2 = 0;
        }
        else {
          **(undefined1 **)(this + 0x78) = 0;
          *(undefined8 *)(this + 0x70) = 0;
          if (((byte)this[0x68] & 1) != 0) {
            operator_delete(*(void **)(this + 0x78));
            *(undefined8 *)(this + 0x68) = 0;
          }
        }
                    /* try { // try from 00f028d0 to 010028db has its CatchHandler @ 00f02dec */
        *(undefined8 *)(this + 0x78) = local_78;
                    /* try { // try from 00f028dc to 010028e7 has its CatchHandler @ 00f02d88 */
        *(undefined8 *)(this + 0x70) = uStack_80;
        *(ulong **)pBVar2 = local_88;
        uStack_80 = 0;
        local_78 = 0;
        local_88 = (ulong *)0x0;
        if ((local_a0[0] & 1) != 0) {
          operator_delete(local_90);
        }
        break;
      case '\x04':
        if (0x13 < uVar4) {
          uVar13 = 0;
          do {
            local_88 = local_a0;
            puVar15 = (uint *)(puVar3 + uVar13 * 10);
            uVar4 = *puVar15;
                    /* try { // try from 00f027a8 to 010027b7 has its CatchHandler @ 00f027d4 */
                    /* try { // try from 00f027b8 to 010027ef has its CatchHandler @ 00f02778 */
            local_a0[0] = CONCAT44(local_a0[0]._4_4_,uVar4);
            lVar8 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::__unordered_map_hasher<int,std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::hash<int>,true>,std::__ndk1::__unordered_map_equal<int,std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>,std::__ndk1::equal_to<int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<int,cocos2d::_BMFontDef>>>
                    ::
                    __emplace_unique_key_args<int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<int&&>,std::__ndk1::tuple<>>
                              ((int *)(this + 0x28),(piecewise_construct_t *)local_a0,
                               (tuple *)&DAT_0143a5ce,(tuple *)&local_88);
            *(uint *)(lVar8 + 0x14) = uVar4;
            uVar19 = NEON_ucvtf((uint)(ushort)puVar15[1]);
            *(undefined4 *)(lVar8 + 0x18) = uVar19;
                    /* catch() { ... } // from try @ 00f027a8 with catch @ 00f027d4 */
            uVar19 = NEON_ucvtf((uint)*(ushort *)((long)puVar15 + 6));
            *(undefined4 *)(lVar8 + 0x1c) = uVar19;
            uVar19 = NEON_ucvtf((uint)(ushort)puVar15[2]);
            *(undefined4 *)(lVar8 + 0x20) = uVar19;
                    /* try { // try from 00f027f0 to 01002853 has its CatchHandler @ 00f027f0
                       catch() { ... } // from try @ 00f027f0 with catch @ 00f027f0
                       catch() { ... } // from try @ 00f02870 with catch @ 00f027f0
                       catch() { ... } // from try @ 00f02c10 with catch @ 00f027f0 */
            uVar19 = NEON_ucvtf((uint)*(ushort *)((long)puVar15 + 10));
            *(undefined4 *)(lVar8 + 0x24) = uVar19;
            *(short *)(lVar8 + 0x28) = (short)puVar15[3];
            *(undefined2 *)(lVar8 + 0x2a) = *(undefined2 *)((long)puVar15 + 0xe);
            *(short *)(lVar8 + 0x2c) = (short)puVar15[4];
            plVar16 = (long *)*plVar1;
            plVar9 = plVar1;
            plVar17 = plVar1;
            while (plVar16 != (long *)0x0) {
              while (plVar17 = plVar16, uVar4 < *(uint *)((long)plVar17 + 0x1c)) {
                plVar16 = (long *)*plVar17;
                plVar9 = plVar17;
                if ((long *)*plVar17 == (long *)0x0) {
                  if (*plVar17 != 0) goto LAB_00f02780;
                  goto LAB_00f02868;
                }
              }
              if (uVar4 <= *(uint *)((long)plVar17 + 0x1c)) break;
              plVar9 = plVar17 + 1;
              plVar16 = (long *)*plVar9;
            }
                    /* try { // try from 00f02864 to 0100286f has its CatchHandler @ 00f02cb8 */
            if (*plVar9 == 0) {
LAB_00f02868:
              p_Var10 = operator_new(0x20);
                    /* try { // try from 00f02870 to 010028cf has its CatchHandler @ 00f027f0 */
              uVar19 = *(undefined4 *)(lVar8 + 0x14);
              *(undefined8 *)p_Var10 = 0;
              *(undefined8 *)(p_Var10 + 8) = 0;
              *(long **)(p_Var10 + 0x10) = plVar17;
              *(undefined4 *)(p_Var10 + 0x1c) = uVar19;
              *plVar9 = (long)p_Var10;
              if (*(long *)*plVar7 != 0) {
                *plVar7 = *(long *)*plVar7;
                p_Var10 = (__tree_node_base *)*plVar9;
              }
              std::__ndk1::__tree_balance_after_insert<std::__ndk1::__tree_node_base<void*>*>
                        ((__tree_node_base *)plVar7[1],p_Var10);
                    /* catch() { ... } // from try @ 00f027b8 with catch @ 00f02778 */
              plVar7[2] = plVar7[2] + 1;
            }
LAB_00f02780:
            uVar13 = uVar13 + 1;
          } while (uVar13 < uVar12 / 0x14);
        }
        break;
      case '\x05':
        if (0x13 < uVar4) {
          uVar13 = 0;
          psVar14 = (short *)(puVar11 + 0xd);
          do {
            sVar5 = *psVar14;
            local_a0[0] = CONCAT44(*(undefined4 *)(psVar14 + -4),*(undefined4 *)(psVar14 + -2));
            local_88 = local_a0;
                    /* catch(type#1 @ 00000000) { ... } // from try @ 00f02470 with catch @ 00f026d0
                        */
            lVar8 = std::__ndk1::
                    __hash_table<std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,int>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,int>>>
                    ::
                    __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long_const&>,std::__ndk1::tuple<>>
                              ((ulong *)(this + 0x80),(piecewise_construct_t *)local_a0,
                               (tuple *)&DAT_0143a5ce,(tuple *)&local_88);
            uVar13 = uVar13 + 1;
            psVar14 = psVar14 + 5;
            *(int *)(lVar8 + 0x18) = (int)sVar5;
          } while (uVar13 < uVar12 / 0x14);
        }
      }
      lVar18 = (lVar18 + -5) - uVar12;
      puVar11 = (uchar *)((long)puVar3 + uVar12);
    } while (lVar18 != 0);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return plVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

