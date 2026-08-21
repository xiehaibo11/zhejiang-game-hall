
/* cocos2d::TileMapAtlas::updateAtlasValues() */

void __thiscall cocos2d::TileMapAtlas::updateAtlasValues(TileMapAtlas *this)

{
  ushort *puVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  char *pcVar5;
  ulong *puVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  ushort local_e8;
  undefined1 local_e6;
  byte local_e0 [8];
  ulong local_d8;
  char *local_d0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  undefined8 *local_b0;
  ulong uStack_a8;
  void *local_a0;
  undefined8 local_90;
  ulong uStack_88;
  void *local_80;
  long local_78;
  
                    /* try { // try from 00f5802c to 0105811f has its CatchHandler @ 00f5802c
                       catch() { ... } // from try @ 00f5802c with catch @ 00f5802c
                       catch() { ... } // from try @ 00f5812c with catch @ 00f5802c
                       catch() { ... } // from try @ 00f58244 with catch @ 00f5802c */
  lVar4 = tpidr_el0;
  local_78 = *(long *)(lVar4 + 0x28);
  lVar7 = *(long *)(this + 0x418);
  if (0 < *(short *)(lVar7 + 6)) {
    iVar8 = 0;
    iVar9 = 0;
    do {
      if (0 < *(short *)(lVar7 + 8)) {
        iVar10 = 0;
        do {
          if (iVar8 < *(int *)(this + 0x410)) {
            iVar3 = iVar9 + iVar10 * *(short *)(lVar7 + 6);
            puVar1 = (ushort *)(*(long *)(lVar7 + 0x10) + (long)iVar3 + (long)iVar3 * 2);
            local_e8 = *puVar1;
            local_e6 = (undefined1)puVar1[1];
            if ((local_e8 & 0xff) != 0) {
              local_90 = CONCAT44((float)iVar10,(float)iVar9);
              updateAtlasValueAt(this,(Vec2 *)&local_90,(Color3B *)&local_e8,iVar8);
              StringUtils::toString<int>(iVar9);
                    /* try { // try from 00f58120 to 0105812b has its CatchHandler @ 00f58298 */
              puVar6 = (ulong *)std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::append(local_c8,",",1);
              local_a0 = (void *)puVar6[2];
                    /* try { // try from 00f5812c to 0105823b has its CatchHandler @ 00f5802c */
              uStack_a8 = puVar6[1];
              local_b0 = (undefined8 *)*puVar6;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              StringUtils::toString<int>(iVar10);
              uVar2 = (ulong)(local_e0[0] >> 1);
              pcVar5 = (char *)((ulong)local_e0 | 1);
              if ((local_e0[0] & 1) != 0) {
                uVar2 = local_d8;
                pcVar5 = local_d0;
              }
              puVar6 = (ulong *)std::__ndk1::
                                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                ::append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                          *)&local_b0,pcVar5,uVar2);
              local_80 = (void *)puVar6[2];
              uStack_88 = puVar6[1];
              local_90 = *puVar6;
              puVar6[1] = 0;
              puVar6[2] = 0;
              *puVar6 = 0;
              if ((local_e0[0] & 1) != 0) {
                operator_delete(local_d0);
              }
              if (((ulong)local_b0 & 1) != 0) {
                operator_delete(local_a0);
              }
              if (((byte)local_c8[0] & 1) != 0) {
                operator_delete(local_b8);
              }
              local_b0 = &local_90;
              lVar7 = std::__ndk1::
                      __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
                      ::
                      __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                                ((basic_string *)(this + 1000),(piecewise_construct_t *)&local_90,
                                 (tuple *)&DAT_0143dca1,(tuple *)&local_b0);
              cocos2d::Value::operator=((Value *)(lVar7 + 0x28),iVar8);
              iVar8 = iVar8 + 1;
              if ((local_90 & 1) != 0) {
                operator_delete(local_80);
              }
              lVar7 = *(long *)(this + 0x418);
            }
          }
          iVar10 = iVar10 + 1;
        } while (iVar10 < *(short *)(lVar7 + 8));
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(short *)(lVar7 + 6));
  }
  if (*(long *)(lVar4 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00f5823c to 01058243 has its CatchHandler @ 00f582a0 */
  __stack_chk_fail();
}

