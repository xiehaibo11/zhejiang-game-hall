
/* cocos2d::renderer::ForwardRenderer::updateDefines() */

void __thiscall cocos2d::renderer::ForwardRenderer::updateDefines(ForwardRenderer *this)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  ForwardRenderer *pFVar1;
  long lVar2;
  char *pcVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  int extraout_w1;
  int extraout_w1_00;
  int extraout_w1_01;
  int extraout_w1_02;
  int extraout_w1_03;
  int extraout_w1_04;
  ulong extraout_x1;
  ulong extraout_x1_00;
  ulong extraout_x1_01;
  ulong extraout_x1_02;
  ulong extraout_x1_03;
  ulong extraout_x1_04;
  ulong extraout_x1_05;
  ulong uVar9;
  long extraout_x1_06;
  long extraout_x1_07;
  long extraout_x1_08;
  long extraout_x1_09;
  int iVar10;
  __ndk1 *this_01;
  char *pcVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [16];
  void *local_b8;
  piecewise_construct_t *local_b0;
  ulong uStack_a8;
  void *local_a0;
  piecewise_construct_t local_90;
  undefined5 uStack_8f;
  undefined2 uStack_8a;
  undefined1 uStack_88;
  undefined5 uStack_87;
  undefined1 uStack_82;
  undefined1 uStack_81;
  undefined1 uStack_80;
  undefined4 uStack_7f;
  undefined1 uStack_7b;
  undefined2 uStack_7a;
  piecewise_construct_t *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x98);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign(this_00,"",0);
  lVar6 = *(long *)(this + 0xb0);
  if (*(long *)(this + 0xb8) == lVar6) {
    iVar10 = 0;
                    /* try { // try from 009cae14 to 00acae1b has its CatchHandler @ 009caff4 */
  }
  else {
    this_01 = (__ndk1 *)0x0;
    pcVar11 = (char *)((ulong)&local_90 | 1);
    uVar9 = extraout_x1;
    do {
                    /* try { // try from 009cae8c to 00acae97 has its CatchHandler @ 009cafe4 */
      lVar12 = *(long *)(lVar6 + (long)this_01 * 8);
      iVar10 = *(int *)(lVar12 + 0xc);
      std::__ndk1::to_string(this_01,uVar9);
      puVar4 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert(local_c8,0,"CC_LIGHT_",9);
      local_a0 = (void *)puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = (piecewise_construct_t *)*puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_b0,"_TYPE",5);
      uVar8 = puVar5[2];
      uVar14 = puVar5[1];
      uVar13 = *puVar5;
      uStack_80 = (undefined1)uVar8;
      uStack_7f = (undefined4)((ulong)uVar8 >> 8);
      uStack_7b = (undefined1)((ulong)uVar8 >> 0x28);
      uStack_7a = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_88 = (undefined1)uVar14;
      uStack_87 = (undefined5)((ulong)uVar14 >> 8);
      uStack_82 = (undefined1)((ulong)uVar14 >> 0x30);
      uStack_81 = (undefined1)((ulong)uVar14 >> 0x38);
      local_90 = SUB81(uVar13,0);
      uStack_8f = (undefined5)((ulong)uVar13 >> 8);
      uStack_8a = (undefined2)((ulong)uVar13 >> 0x30);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      local_70 = &local_90;
      lVar6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x78),&local_90,(tuple *)&DAT_0188bcff,
                         (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar6 + 0x38),iVar10);
      uVar9 = extraout_x1_02;
      if (((byte)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))
                                        ));
        uVar9 = extraout_x1_00;
      }
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
        uVar9 = extraout_x1_01;
      }
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
        uVar9 = extraout_x1_03;
      }
      iVar10 = *(int *)(lVar12 + 0x58);
                    /* try { // try from 009caf48 to 00acaf63 has its CatchHandler @ 009cb044 */
      std::__ndk1::to_string(this_01,uVar9);
                    /* try { // try from 009caf64 to 00acb09b has its CatchHandler @ 009cabc8 */
      puVar4 = (ulong *)std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::insert(local_c8,0,"CC_SHADOW_",10);
      local_a0 = (void *)puVar4[2];
      uStack_a8 = puVar4[1];
      local_b0 = (piecewise_construct_t *)*puVar4;
      puVar4[1] = 0;
      puVar4[2] = 0;
      *puVar4 = 0;
      puVar5 = (undefined8 *)
               std::__ndk1::
               basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
               append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       *)&local_b0,"_TYPE",5);
      uVar8 = puVar5[2];
      uVar14 = puVar5[1];
      uVar13 = *puVar5;
      uStack_80 = (undefined1)uVar8;
      uStack_7f = (undefined4)((ulong)uVar8 >> 8);
      uStack_7b = (undefined1)((ulong)uVar8 >> 0x28);
      uStack_7a = (undefined2)((ulong)uVar8 >> 0x30);
      uStack_88 = (undefined1)uVar14;
      uStack_87 = (undefined5)((ulong)uVar14 >> 8);
      uStack_82 = (undefined1)((ulong)uVar14 >> 0x30);
      uStack_81 = (undefined1)((ulong)uVar14 >> 0x38);
      local_90 = SUB81(uVar13,0);
      uStack_8f = (undefined5)((ulong)uVar13 >> 8);
      uStack_8a = (undefined2)((ulong)uVar13 >> 0x30);
      puVar5[1] = 0;
      puVar5[2] = 0;
      *puVar5 = 0;
      local_70 = &local_90;
      lVar6 = std::__ndk1::
              __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
              ::
              __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                        ((basic_string *)(this + 0x78),&local_90,(tuple *)&DAT_0188bcff,
                         (tuple *)&local_70);
      cocos2d::Value::operator=((Value *)(lVar6 + 0x38),iVar10);
      iVar10 = extraout_w1_01;
      if (((byte)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))
                                        ));
        iVar10 = extraout_w1;
      }
      if (((ulong)local_b0 & 1) != 0) {
        operator_delete(local_a0);
        iVar10 = extraout_w1_00;
      }
                    /* catch() { ... } // from try @ 009cae8c with catch @ 009cafe4 */
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
        iVar10 = extraout_w1_02;
      }
                    /* catch() { ... } // from try @ 009cae14 with catch @ 009caff4 */
      std::__ndk1::to_string((__ndk1 *)(ulong)*(uint *)(lVar12 + 0xc),iVar10);
                    /* catch() { ... } // from try @ 009cad60 with catch @ 009cb004 */
      uVar9 = (ulong)((byte)local_90 >> 1);
      pcVar3 = pcVar11;
      if (((byte)local_90 & 1) != 0) {
        uVar9 = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT51(uStack_87,uStack_88)));
        pcVar3 = (char *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80)));
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(this_00,pcVar3,uVar9);
                    /* catch() { ... } // from try @ 009cad28 with catch @ 009cb01c */
      iVar10 = extraout_w1_03;
      if (((byte)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))
                                        ));
        iVar10 = extraout_w1_04;
      }
                    /* catch() { ... } // from try @ 009cac54 with catch @ 009cb02c */
                    /* catch() { ... } // from try @ 009cac48 with catch @ 009cb030 */
                    /* catch() { ... } // from try @ 009cac28 with catch @ 009cb034 */
      std::__ndk1::to_string((__ndk1 *)(ulong)*(uint *)(lVar12 + 0x58),iVar10);
                    /* catch() { ... } // from try @ 009cac60 with catch @ 009cb044
                       catch() { ... } // from try @ 009caf48 with catch @ 009cb044 */
      uVar9 = (ulong)((byte)local_90 >> 1);
      pcVar3 = pcVar11;
      if (((byte)local_90 & 1) != 0) {
        uVar9 = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT51(uStack_87,uStack_88)));
        pcVar3 = (char *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80)));
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append(this_00,pcVar3,uVar9);
      uVar9 = extraout_x1_04;
      if (((byte)local_90 & 1) != 0) {
        operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))
                                        ));
        uVar9 = extraout_x1_05;
      }
      lVar6 = *(long *)(this + 0xb0);
      this_01 = this_01 + 1;
    } while (this_01 < (__ndk1 *)(*(long *)(this + 0xb8) - lVar6 >> 3));
    iVar10 = (int)((ulong)(*(long *)(this + 0xb8) - lVar6) >> 3);
  }
  local_b0 = &local_90;
                    /* try { // try from 009cb09c to 00acb0df has its CatchHandler @ 009cb09c
                       catch() { ... } // from try @ 009cb09c with catch @ 009cb09c
                       catch() { ... } // from try @ 009cb118 with catch @ 009cb09c */
  uStack_81 = 0;
  uStack_80 = 0;
  uStack_7f = 0;
  uStack_7b = 0;
  uStack_7a = 0;
  local_90 = (piecewise_construct_t)0x1a;
  uStack_87 = 0x5354484749;
  uStack_8f = 0x554e5f4343;
  uStack_8a = 0x5f4d;
  uStack_88 = 0x4c;
  uStack_82 = 0;
  lVar6 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x78),&local_90,(tuple *)&DAT_0188bcff,
                     (tuple *)&local_b0);
  if (3 < iVar10) {
    iVar10 = 4;
  }
                    /* try { // try from 009cb0e0 to 00acb117 has its CatchHandler @ 009cb148 */
  cocos2d::Value::operator=((Value *)(lVar6 + 0x38),iVar10);
  if (((byte)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))));
  }
  lVar6 = *(long *)(this + 200);
  lVar12 = *(long *)(this + 0xd0);
  local_90 = (piecewise_construct_t)0x28;
                    /* try { // try from 009cb118 to 00acb15b has its CatchHandler @ 009cb09c */
  uStack_7a = 0;
  uStack_7f = 0x53544847;
  local_b0 = &local_90;
  uStack_87 = 0x574f444148;
  uStack_82 = 0x5f;
  uStack_81 = 0x4c;
  uStack_80 = 0x49;
  uStack_8f = 0x554e5f4343;
  uStack_8a = 0x5f4d;
  uStack_88 = 0x53;
  uStack_7b = 0;
                    /* catch() { ... } // from try @ 009cb0e0 with catch @ 009cb148 */
  lVar7 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::Value>>>
          ::
          __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>&&>,std::__ndk1::tuple<>>
                    ((basic_string *)(this + 0x78),&local_90,(tuple *)&DAT_0188bcff,
                     (tuple *)&local_b0);
                    /* try { // try from 009cb15c to 00acb1bb has its CatchHandler @ 009cb15c
                       catch() { ... } // from try @ 009cb15c with catch @ 009cb15c
                       catch() { ... } // from try @ 009cb4f8 with catch @ 009cb15c */
  iVar10 = (int)((ulong)(lVar12 - lVar6) >> 3);
  if (3 < iVar10) {
    iVar10 = 4;
  }
  cocos2d::Value::operator=((Value *)(lVar7 + 0x38),iVar10);
  lVar6 = extraout_x1_06;
  if (((byte)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))));
    lVar6 = extraout_x1_07;
  }
  std::__ndk1::to_string((__ndk1 *)(*(long *)(this + 0xb8) - *(long *)(this + 0xb0) >> 3),lVar6);
  uVar9 = (ulong)((byte)local_90 >> 1);
  pcVar11 = (char *)((ulong)&local_90 | 1);
  if (((byte)local_90 & 1) != 0) {
    uVar9 = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT51(uStack_87,uStack_88)));
    pcVar11 = (char *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80)));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(this_00,pcVar11,uVar9);
                    /* try { // try from 009cb1bc to 00acb1d3 has its CatchHandler @ 009cb5c8 */
  lVar6 = extraout_x1_08;
  if (((byte)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))));
    lVar6 = extraout_x1_09;
  }
                    /* try { // try from 009cb1dc to 00acb1e7 has its CatchHandler @ 009cb5c4 */
  std::__ndk1::to_string((__ndk1 *)(*(long *)(this + 0xd0) - *(long *)(this + 200) >> 3),lVar6);
                    /* try { // try from 009cb1e8 to 00acb1f3 has its CatchHandler @ 009cb5c0 */
  uVar9 = (ulong)((byte)local_90 >> 1);
  pcVar11 = (char *)((ulong)&local_90 | 1);
                    /* try { // try from 009cb1f4 to 00acb2bb has its CatchHandler @ 009cb5d8 */
  if (((byte)local_90 & 1) != 0) {
    uVar9 = CONCAT17(uStack_81,CONCAT16(uStack_82,CONCAT51(uStack_87,uStack_88)));
    pcVar11 = (char *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80)));
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  append(this_00,pcVar11,uVar9);
  if (((byte)local_90 & 1) != 0) {
    operator_delete((void *)CONCAT26(uStack_7a,CONCAT15(uStack_7b,CONCAT41(uStack_7f,uStack_80))));
  }
  uVar9 = *(ulong *)(this + 0xa0);
  pFVar1 = *(ForwardRenderer **)(this + 0xa8);
  if (((byte)this[0x98] & 1) == 0) {
    pFVar1 = this + 0x99;
    uVar9 = (ulong)((byte)this[0x98] >> 1);
  }
  uVar8 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    ((__murmur2_or_cityhash<unsigned_long,64ul> *)&local_90,pFVar1,uVar9);
  *(undefined8 *)(this + 0x90) = uVar8;
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

