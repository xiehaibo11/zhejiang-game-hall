
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* cocos2d::renderer::VertexFormat::VertexFormat(std::__ndk1::vector<cocos2d::renderer::VertexFormat::Info,
   std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Info> > const&) */

void __thiscall cocos2d::renderer::VertexFormat::VertexFormat(VertexFormat *this,vector *param_1)

{
  long *plVar1;
  byte *pbVar2;
  ulong *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  long lVar7;
  long lVar8;
  char *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined5 uVar12;
  long lVar13;
  int iVar14;
  ulong uVar15;
  uint uVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  void *__dest;
  undefined8 local_f8;
  Element *local_f0;
  long *local_e8;
  long *local_e0;
  long *plStack_d8;
  Element **local_c8;
  ulong local_c0;
  ulong uStack_b8;
  char *local_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  ushort uStack_90;
  undefined1 uStack_8e;
  long local_80;
  
                    /* try { // try from 009b9540 to 00ab96f7 has its CatchHandler @ 009b9790 */
  lVar8 = tpidr_el0;
  local_80 = *(long *)(lVar8 + 0x28);
  Ref::Ref((Ref *)this);
  uVar11 = uStack_98;
  uVar10 = uStack_a0;
  *(undefined8 *)(this + 0x28) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined ***)this = &PTR__VertexFormat_01c6af48;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x48) = 0x3f800000;
  *(undefined4 *)(this + 0x50) = 0;
  local_e0 = (long *)0x0;
  plStack_d8 = (long *)0x0;
  local_e8 = (long *)0x0;
  lVar13 = *(long *)param_1;
  lVar7 = *(long *)(param_1 + 8) - lVar13;
  uVar12 = uStack_a0._3_5_;
  iVar5 = uStack_98._4_4_;
  if (lVar7 != 0) {
    lVar20 = 0;
    uVar16 = 0;
    uVar18 = 1;
    pcVar17 = (char *)((ulong)&local_c0 | 1);
    do {
      uStack_a0 = 0xffffffff00000000;
      uStack_a0._3_5_ = 0xffffffff00;
      uStack_b8 = 0;
      local_c0 = 0;
      local_a8 = 0;
      local_b0 = (char *)0x0;
      uStack_8e = 0;
      uStack_90 = 0;
      uStack_98 = 0;
      uStack_98._4_4_ = 0;
      if ((long)&local_c0 - lVar13 != lVar20) {
        pbVar2 = (byte *)(lVar13 + lVar20);
        uVar15 = *(ulong *)(pbVar2 + 8);
        pbVar4 = *(byte **)(pbVar2 + 0x10);
        if ((*pbVar2 & 1) == 0) {
          pbVar4 = pbVar2 + 1;
          uVar15 = (ulong)(*pbVar2 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 &local_c0,(char *)pbVar4,uVar15);
      }
      local_a8 = (ulong)uVar16;
      uStack_a0 = 0xffffffff00000000;
      uStack_a0._3_5_ = 0xffffffff00;
      lVar13 = lVar13 + lVar20;
      uStack_90 = *(ushort *)(lVar13 + 0x1c);
      iVar5 = *(int *)(lVar13 + 0x18);
      uStack_98 = CONCAT44(uStack_98._4_4_,iVar5);
      uStack_8e = *(undefined1 *)(lVar13 + 0x1e);
      if (uStack_90 - 0x1400 < 7) {
        iVar14 = *(int *)(&DAT_0188b1d8 + (long)(short)(uStack_90 - 0x1400) * 4);
        uVar10 = uStack_a0;
      }
      else {
        __android_log_print(5,"renderer"," (47): Unknown ATTR_TYPE: %u\n");
        uVar10 = uStack_a0;
        iVar14 = 0;
      }
      uStack_a0 = uVar10;
      uVar12 = uStack_a0._3_5_;
      pcVar9 = local_b0;
      uVar15 = uStack_b8;
      iVar14 = iVar14 * iVar5;
      uStack_98 = CONCAT44(iVar14,(undefined4)uStack_98);
      puVar3 = *(ulong **)(this + 0x18);
      uStack_a0._3_5_ = uVar12;
      uStack_98._4_4_ = iVar14;
      if (puVar3 == *(ulong **)(this + 0x20)) {
                    /* try { // try from 009b96f8 to 00ab97e7 has its CatchHandler @ 009b94a8 */
        uVar10 = uStack_a0;
        uVar11 = uStack_98;
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)(this + 0x10),(basic_string *)&local_c0);
        uVar11 = uStack_98;
        uVar10 = uStack_a0;
      }
      else {
        puVar3[1] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        if ((local_c0 & 1) == 0) {
          puVar3[2] = (ulong)local_b0;
          puVar3[1] = uStack_b8;
          *puVar3 = local_c0;
        }
        else {
          if (0xffffffffffffffef < uStack_b8) {
            uVar10 = uStack_a0;
            uVar11 = uStack_98;
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          if (uStack_b8 < 0x17) {
            __dest = (void *)((long)puVar3 + 1);
            *(char *)puVar3 = (char)((int)uStack_b8 << 1);
            uVar10 = uStack_a0;
            uVar11 = uStack_98;
            if (uStack_b8 != 0) goto LAB_009b974c;
          }
          else {
            uVar19 = uStack_b8 + 0x10 & 0xfffffffffffffff0;
            uVar10 = uStack_a0;
            uVar11 = uStack_98;
            __dest = operator_new(uVar19);
            uVar11 = uStack_98;
            uVar10 = uStack_a0;
            puVar3[1] = uVar15;
            puVar3[2] = (ulong)__dest;
            *puVar3 = uVar19 | 1;
LAB_009b974c:
            uStack_98 = uVar11;
            uStack_a0 = uVar10;
            iVar5 = uStack_98._4_4_;
            uVar12 = uStack_a0._3_5_;
            uVar10 = uStack_a0;
            uStack_a0._3_5_ = uVar12;
            uVar11 = uStack_98;
            uStack_98._4_4_ = iVar5;
            memcpy(__dest,pcVar9,uVar15);
            uVar11 = uStack_98;
            uVar10 = uStack_a0;
          }
          uStack_98 = uVar11;
          uStack_a0 = uVar10;
          iVar14 = uStack_98._4_4_;
          uVar12 = uStack_a0._3_5_;
          *(undefined1 *)((long)__dest + uVar15) = 0;
        }
        uStack_98._4_4_ = iVar14;
        uStack_a0._3_5_ = uVar12;
        iVar5 = uStack_98._4_4_;
        uVar12 = uStack_a0._3_5_;
        *(long *)(this + 0x18) = *(long *)(this + 0x18) + 0x18;
        uVar10 = uStack_a0;
        uVar11 = uStack_98;
        uStack_a0._3_5_ = uVar12;
        uStack_98._4_4_ = iVar5;
      }
      uStack_98 = uVar11;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uVar12 = uStack_a0._3_5_;
                    /* catch() { ... } // from try @ 009b9534 with catch @ 009b9778 */
      uVar15 = local_c0 >> 1 & 0x7f;
      pcVar9 = pcVar17;
                    /* catch() { ... } // from try @ 009b9528 with catch @ 009b977c */
      if ((local_c0 & 1) != 0) {
        uVar15 = uStack_b8;
        pcVar9 = local_b0;
      }
                    /* catch() { ... } // from try @ 009b9508 with catch @ 009b9780 */
      uVar10 = uStack_a0;
      uStack_a0._3_5_ = uVar12;
      uVar11 = uStack_98;
      uStack_98._4_4_ = iVar5;
      local_f0 = (Element *)
                 std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                           ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_c8,pcVar9,uVar15);
      uVar11 = uStack_98;
      uVar10 = uStack_a0;
      local_c8 = &local_f0;
                    /* catch() { ... } // from try @ 009b9540 with catch @ 009b9790 */
      uVar12 = uStack_a0._3_5_;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uStack_98 = uVar11;
      uVar10 = uStack_a0;
      uStack_a0._3_5_ = uVar12;
      uVar11 = uStack_98;
      uStack_98._4_4_ = iVar5;
      lVar13 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
               ::
               __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long&&>,std::__ndk1::tuple<>>
                         ((ulong *)(this + 0x28),(piecewise_construct_t *)&local_f0,
                          (tuple *)&DAT_0188b1d6,(tuple *)&local_c8);
      uVar11 = uStack_98;
      uVar10 = uStack_a0;
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (lVar13 + 0x18) !=
          (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          &local_c0) {
        uVar15 = local_c0 >> 1 & 0x7f;
        pcVar9 = pcVar17;
        if ((local_c0 & 1) != 0) {
          uVar15 = uStack_b8;
          pcVar9 = local_b0;
        }
        uVar12 = uStack_a0._3_5_;
        uStack_a0 = uVar10;
        iVar5 = uStack_98._4_4_;
        uStack_98 = uVar11;
        uVar10 = uStack_a0;
        uStack_a0._3_5_ = uVar12;
        uVar11 = uStack_98;
        uStack_98._4_4_ = iVar5;
                    /* try { // try from 009b97e8 to 00ab9847 has its CatchHandler @ 009b97e8
                       catch() { ... } // from try @ 009b97e8 with catch @ 009b97e8
                       catch() { ... } // from try @ 009b9b80 with catch @ 009b97e8 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (lVar13 + 0x18),pcVar9,uVar15);
        uVar11 = uStack_98;
        uVar10 = uStack_a0;
      }
      uStack_98 = uVar11;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uVar12 = uStack_a0._3_5_;
      *(ulong *)(lVar13 + 0x43) =
           CONCAT17(uStack_8e,CONCAT25(uStack_90,CONCAT41(iVar5,uStack_98._3_1_)));
      *(ulong *)(lVar13 + 0x3b) = CONCAT35((undefined3)uStack_98,uVar12);
      *(ulong *)(lVar13 + 0x38) = CONCAT58(uVar12,uStack_a0);
      *(ulong *)(lVar13 + 0x30) = local_a8;
      uVar15 = local_c0 >> 1 & 0x7f;
      pcVar9 = pcVar17;
      if ((local_c0 & 1) != 0) {
        uVar15 = uStack_b8;
        pcVar9 = local_b0;
      }
      uVar10 = uStack_a0;
      uStack_a0._3_5_ = uVar12;
      uVar11 = uStack_98;
      uStack_98._4_4_ = iVar5;
      local_f8 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                           ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_c8,pcVar9,uVar15);
      uVar11 = uStack_98;
      uVar10 = uStack_a0;
      local_c8 = (Element **)&local_f8;
      uVar12 = uStack_a0._3_5_;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uStack_98 = uVar11;
      uVar10 = uStack_a0;
      uStack_a0._3_5_ = uVar12;
      uVar11 = uStack_98;
      uStack_98._4_4_ = iVar5;
      lVar13 = std::__ndk1::
               __hash_table<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::__unordered_map_hasher<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::hash<unsigned_long>,true>,std::__ndk1::__unordered_map_equal<unsigned_long,std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>,std::__ndk1::equal_to<unsigned_long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_long,cocos2d::renderer::VertexFormat::Element>>>
               ::
               __emplace_unique_key_args<unsigned_long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_long&&>,std::__ndk1::tuple<>>
                         ((ulong *)(this + 0x28),(piecewise_construct_t *)&local_f8,
                          (tuple *)&DAT_0188b1d6,(tuple *)&local_c8);
      uVar11 = uStack_98;
      uVar10 = uStack_a0;
                    /* try { // try from 009b9848 to 00ab985f has its CatchHandler @ 009b9c50 */
      local_f0 = (Element *)(lVar13 + 0x18);
      if (local_e0 < plStack_d8) {
        *local_e0 = (long)local_f0;
        local_e0 = local_e0 + 1;
                    /* try { // try from 009b9868 to 00ab9873 has its CatchHandler @ 009b9c4c */
      }
      else {
        uVar12 = uStack_a0._3_5_;
        uStack_a0 = uVar10;
        iVar5 = uStack_98._4_4_;
        uStack_98 = uVar11;
        uVar10 = uStack_a0;
        uStack_a0._3_5_ = uVar12;
        uVar11 = uStack_98;
        uStack_98._4_4_ = iVar5;
                    /* try { // try from 009b9874 to 00ab987f has its CatchHandler @ 009b9c48 */
        std::__ndk1::
        vector<cocos2d::renderer::VertexFormat::Element*,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Element*>>
        ::__push_back_slow_path<cocos2d::renderer::VertexFormat::Element*>
                  ((vector<cocos2d::renderer::VertexFormat::Element*,std::__ndk1::allocator<cocos2d::renderer::VertexFormat::Element*>>
                    *)&local_e8,&local_f0);
        uVar11 = uStack_98;
        uVar10 = uStack_a0;
      }
      uStack_98 = uVar11;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uVar12 = uStack_a0._3_5_;
      iVar14 = uStack_98._4_4_;
                    /* try { // try from 009b9880 to 00ab9943 has its CatchHandler @ 009b9c60 */
      *(int *)(this + 0x50) = *(int *)(this + 0x50) + uStack_98._4_4_;
      uVar10 = uStack_a0;
      uVar11 = uStack_98;
      if ((local_c0 & 1) != 0) {
        uStack_a0._3_5_ = uVar12;
        uStack_98._4_4_ = iVar5;
        operator_delete(local_b0);
        uVar11 = uStack_98;
        uVar10 = uStack_a0;
        uVar12 = uStack_a0._3_5_;
        iVar5 = uStack_98._4_4_;
      }
      uStack_98._4_4_ = iVar5;
      uStack_a0._3_5_ = uVar12;
      uStack_98 = uVar11;
      uStack_a0 = uVar10;
      iVar5 = uStack_98._4_4_;
      uVar12 = uStack_a0._3_5_;
      if ((ulong)(lVar7 >> 5) <= uVar18) goto code_r0x009b98a4;
      uVar16 = iVar14 + uVar16;
      uVar18 = uVar18 + 1;
      lVar20 = lVar20 + 0x20;
      lVar13 = *(long *)param_1;
    } while( true );
  }
LAB_009b98f4:
  uStack_98._4_4_ = iVar5;
  uStack_a0._3_5_ = uVar12;
  uStack_98 = uVar11;
  uStack_a0 = uVar10;
  iVar5 = uStack_98._4_4_;
  uVar12 = uStack_a0._3_5_;
  uVar10 = uStack_a0;
  uVar11 = uStack_98;
  if (local_e8 != (long *)0x0) {
    local_e0 = local_e8;
    uStack_a0._3_5_ = uVar12;
    uStack_98._4_4_ = iVar5;
    operator_delete(local_e8);
    uVar11 = uStack_98;
    uVar10 = uStack_a0;
    uVar12 = uStack_a0._3_5_;
    iVar5 = uStack_98._4_4_;
  }
  uStack_98._4_4_ = iVar5;
  uStack_a0._3_5_ = uVar12;
  uStack_98 = uVar11;
  uStack_a0 = uVar10;
  iVar5 = uStack_98._4_4_;
  uVar12 = uStack_a0._3_5_;
  if (*(long *)(lVar8 + 0x28) != local_80) {
    uVar10 = uStack_a0;
    uStack_a0._3_5_ = uVar12;
    uVar11 = uStack_98;
    uStack_98._4_4_ = iVar5;
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
code_r0x009b98a4:
  uVar10 = uStack_a0;
  uVar11 = uStack_98;
  if ((long)local_e0 - (long)local_e8 != 0) {
    uVar6 = *(undefined4 *)(this + 0x50);
    uVar18 = (long)local_e0 - (long)local_e8 >> 3;
    *(undefined4 *)(*local_e8 + 0x20) = uVar6;
    uVar12 = uStack_a0._3_5_;
    iVar5 = uStack_98._4_4_;
    if (1 < uVar18) {
      uVar15 = 1;
      do {
        plVar1 = local_e8 + uVar15;
        uVar15 = uVar15 + 1;
        *(undefined4 *)(*plVar1 + 0x20) = uVar6;
      } while (uVar15 < uVar18);
    }
  }
  goto LAB_009b98f4;
}

