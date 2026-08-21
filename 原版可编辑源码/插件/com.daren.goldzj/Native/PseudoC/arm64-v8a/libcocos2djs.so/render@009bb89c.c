
/* cocos2d::renderer::BaseRenderer::render(cocos2d::renderer::View const&, cocos2d::renderer::Scene
   const*) */

void __thiscall
cocos2d::renderer::BaseRenderer::render(BaseRenderer *this,View *param_1,Scene *param_2)

{
  uint uVar1;
  uint uVar2;
  size_t sVar3;
  long *plVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar5;
  undefined8 *puVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar8;
  long lVar9;
  long lVar10;
  int iVar11;
  Model *this_00;
  void *pvVar12;
  long *plVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s2;
  ulong uVar16;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *__s1;
  ulong uVar17;
  ulong uVar18;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar19;
  ulong uVar20;
  vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>
  *this_01;
  ulong *puVar21;
  long lVar22;
  undefined8 *puVar23;
  size_t sVar24;
  undefined8 *puVar25;
  undefined8 local_c0;
  undefined8 uStack_b8;
  Pass *local_a8;
  DrawItem *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  undefined8 *local_80;
  undefined8 *puStack_78;
  undefined4 local_70;
  long local_68;
  
                    /* try { // try from 009bb8a0 to 00abb8ab has its CatchHandler @ 009bba24 */
                    /* try { // try from 009bb8ac to 00abb9af has its CatchHandler @ 009bba3c */
  lVar9 = tpidr_el0;
  local_68 = *(long *)(lVar9 + 0x28);
  DeviceGraphics::setFrameBuffer
            (*(DeviceGraphics **)(this + 0x10),*(FrameBuffer **)(param_1 + 0x1a0));
  DeviceGraphics::setViewport
            (*(DeviceGraphics **)(this + 0x10),(int)*(float *)(param_1 + 0x10),
             (int)*(float *)(param_1 + 0x14),(int)*(float *)(param_1 + 0x18),
             (int)*(float *)(param_1 + 0x1c));
  Color4F::Color4F((Color4F *)&local_c0);
  if (((byte)param_1[0x3c] & 1) != 0) {
    uStack_b8 = *(undefined8 *)(param_1 + 0x28);
    local_c0 = *(undefined8 *)(param_1 + 0x20);
  }
  DeviceGraphics::clear
            (*(DeviceGraphics **)(this + 0x10),(uchar)param_1[0x3c],(Color4F *)&local_c0,
             (double)(long)*(int *)(param_1 + 0x30),*(int *)(param_1 + 0x34));
  **(undefined8 **)(this + 0x58) = 0;
  plVar4 = *(long **)(param_2 + 0x38);
  for (plVar13 = *(long **)(param_2 + 0x30); plVar13 != plVar4; plVar13 = plVar13 + 1) {
    this_00 = (Model *)*plVar13;
    if ((*(uint *)(param_1 + 0x38) & *(uint *)(this_00 + 0x74)) != 0) {
      puVar21 = *(ulong **)(this + 0x58);
      uVar16 = puVar21[8];
      uVar17 = *puVar21;
      uVar18 = puVar21[9] - uVar16;
      uVar20 = uVar18 >> 3;
                    /* try { // try from 009bb9b0 to 00abba93 has its CatchHandler @ 009bb820 */
      if ((((ulong)(long)(int)uVar20 <= uVar17) &&
          (uVar2 = (uint)(uVar18 >> 2) & 0xfffffffe,
          (ulong)((long)uVar18 >> 3) < (ulong)(long)(int)uVar2)) && ((int)uVar20 < (int)uVar2)) {
        do {
          if ((long *)puVar21[6] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          local_a0 = (DrawItem *)(**(code **)(*(long *)puVar21[6] + 0x30))();
          if ((undefined8 *)puVar21[9] == (undefined8 *)puVar21[10]) {
            std::__ndk1::
            vector<cocos2d::renderer::DrawItem*,std::__ndk1::allocator<cocos2d::renderer::DrawItem*>>
            ::__push_back_slow_path<cocos2d::renderer::DrawItem*const&>
                      ((vector<cocos2d::renderer::DrawItem*,std::__ndk1::allocator<cocos2d::renderer::DrawItem*>>
                        *)(puVar21 + 8),&local_a0);
          }
          else {
            *(undefined8 *)puVar21[9] = local_a0;
            puVar21[9] = puVar21[9] + 8;
          }
          uVar1 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar1;
        } while ((int)uVar1 < (int)uVar2);
        uVar17 = *puVar21;
        uVar16 = puVar21[8];
        this_00 = (Model *)*plVar13;
      }
      *puVar21 = uVar17 + 1;
                    /* catch() { ... } // from try @ 009bb8a0 with catch @ 009bba24 */
      Model::extractDrawItem(this_00,*(DrawItem **)(uVar16 + uVar17 * 8));
                    /* catch() { ... } // from try @ 009bb894 with catch @ 009bba28 */
    }
  }
                    /* catch() { ... } // from try @ 009bb874 with catch @ 009bba2c */
  puVar21 = *(ulong **)(this + 0x60);
                    /* catch() { ... } // from try @ 009bb8ac with catch @ 009bba3c */
  *puVar21 = 0;
  puStack_88 = (undefined8 *)0x0;
  local_90 = 0;
  puStack_78 = (undefined8 *)0x0;
  local_80 = (undefined8 *)0x0;
  uStack_98 = 0;
  local_a0 = (DrawItem *)0x0;
  local_70 = 0xffffffff;
  pbVar19 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
             (param_1 + 0x180);
  pbVar5 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> **)
            (param_1 + 0x188);
  if (pbVar19 != pbVar5) {
    do {
      uVar16 = puVar21[8];
      uVar17 = *puVar21;
      uVar18 = puVar21[9] - uVar16;
      uVar20 = uVar18 >> 3;
                    /* try { // try from 009bba94 to 00abbae7 has its CatchHandler @ 009bba94
                       catch() { ... } // from try @ 009bba94 with catch @ 009bba94
                       catch() { ... } // from try @ 009bbc24 with catch @ 009bba94 */
      if ((((ulong)(long)(int)uVar20 <= uVar17) &&
          (uVar2 = (uint)(uVar18 >> 2) & 0xfffffffe,
          (ulong)((long)uVar18 >> 3) < (ulong)(long)(int)uVar2)) && ((int)uVar20 < (int)uVar2)) {
        do {
          if ((long *)puVar21[6] == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          local_a8 = (Pass *)(**(code **)(*(long *)puVar21[6] + 0x30))();
          if ((undefined8 *)puVar21[9] == (undefined8 *)puVar21[10]) {
            std::__ndk1::
            vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
            ::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageInfo*const&>
                      ((vector<cocos2d::renderer::BaseRenderer::StageInfo*,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageInfo*>>
                        *)(puVar21 + 8),(StageInfo **)&local_a8);
          }
          else {
            *(undefined8 *)puVar21[9] = local_a8;
            puVar21[9] = puVar21[9] + 8;
          }
                    /* try { // try from 009bbae8 to 00abbaff has its CatchHandler @ 009bbca0 */
          uVar1 = (int)uVar20 + 1;
          uVar20 = (ulong)uVar1;
        } while ((int)uVar1 < (int)uVar2);
        uVar17 = *puVar21;
        uVar16 = puVar21[8];
      }
      *puVar21 = uVar17 + 1;
      this_01 = *(vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>
                  **)(uVar16 + uVar17 * 8);
                    /* try { // try from 009bbb08 to 00abbb13 has its CatchHandler @ 009bbc9c */
      if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
          (this_01 + 0x18) != pbVar19) {
                    /* try { // try from 009bbb14 to 00abbb1f has its CatchHandler @ 009bbc98 */
        uVar16 = *(ulong *)(pbVar19 + 8);
        pbVar14 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    **)(pbVar19 + 0x10);
                    /* try { // try from 009bbb20 to 00abbc23 has its CatchHandler @ 009bbcb0 */
        if (((byte)*pbVar19 & 1) == 0) {
          pbVar14 = pbVar19 + 1;
          uVar16 = (ulong)((byte)*pbVar19 >> 1);
        }
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                 (this_01 + 0x18),(char *)pbVar14,uVar16);
      }
      lVar22 = *(long *)this_01;
      lVar15 = *(long *)(this_01 + 8);
      while (lVar10 = lVar15, lVar10 != lVar22) {
        pvVar12 = *(void **)(lVar10 + -0x20);
        lVar15 = lVar10 + -0x38;
        if (pvVar12 != (void *)0x0) {
          *(void **)(lVar10 + -0x18) = pvVar12;
          operator_delete(pvVar12);
        }
      }
      *(long *)(this_01 + 8) = lVar22;
      puVar21 = *(ulong **)(this + 0x58);
      uVar16 = *puVar21;
      if (uVar16 != 0) {
        uVar17 = 0;
        if (uVar16 != 0) goto LAB_009bbb98;
LAB_009bbba4:
        __android_log_print(5,"renderer"," (66): Failed to get data %zu, index not found.\n",uVar17)
        ;
        puVar23 = (undefined8 *)0x0;
        do {
          local_80 = puStack_88;
          plVar13 = (long *)(**(code **)(*(long *)puVar23[2] + 0x10))();
          puVar25 = (undefined8 *)*plVar13;
          puVar6 = (undefined8 *)plVar13[1];
joined_r0x009bbbe4:
          if (puVar25 != puVar6) {
            do {
              local_a8 = (Pass *)*puVar25;
              pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         *)Pass::getStage(local_a8);
              bVar7 = *pbVar14;
              bVar8 = *pbVar19;
              sVar24 = (ulong)((byte)bVar7 >> 1);
              if (((byte)bVar7 & 1) != 0) {
                sVar24 = *(size_t *)(pbVar14 + 8);
              }
                    /* try { // try from 009bbc24 to 00abbd07 has its CatchHandler @ 009bba94 */
              sVar3 = (ulong)((byte)bVar8 >> 1);
              if (((byte)bVar8 & 1) != 0) {
                sVar3 = *(size_t *)(pbVar19 + 8);
              }
              if (sVar24 == sVar3) {
                __s1 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                         **)(pbVar14 + 0x10);
                if (((byte)bVar7 & 1) == 0) {
                  __s1 = pbVar14 + 1;
                }
                __s2 = pbVar19 + 1;
                if (((byte)bVar8 & 1) != 0) {
                  __s2 = *(basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                           **)(pbVar19 + 0x10);
                }
                if (((byte)bVar7 & 1) == 0) {
                  if (sVar24 != 0) {
                    lVar22 = -(ulong)((byte)bVar7 >> 1);
                    do {
                      pbVar14 = pbVar14 + 1;
                      if (*pbVar14 != *__s2) goto LAB_009bbbec;
                      lVar22 = lVar22 + 1;
                      __s2 = __s2 + 1;
                    } while (lVar22 != 0);
                  }
                }
                else if ((sVar24 != 0) && (iVar11 = memcmp(__s1,__s2,sVar24), iVar11 != 0))
                goto LAB_009bbbec;
                    /* catch() { ... } // from try @ 009bbb14 with catch @ 009bbc98 */
                if (local_80 != puStack_78) goto LAB_009bbc9c;
                std::__ndk1::
                vector<cocos2d::renderer::Pass_const*,std::__ndk1::allocator<cocos2d::renderer::Pass_const*>>
                ::__push_back_slow_path<cocos2d::renderer::Pass_const*const&>
                          ((vector<cocos2d::renderer::Pass_const*,std::__ndk1::allocator<cocos2d::renderer::Pass_const*>>
                            *)&puStack_88,&local_a8);
              }
LAB_009bbbec:
              puVar25 = puVar25 + 1;
              if (puVar25 == puVar6) break;
            } while( true );
          }
          if (local_80 != puStack_88) {
            local_a0 = (DrawItem *)*puVar23;
            local_90 = puVar23[2];
            uStack_98 = puVar23[1];
            local_70 = 0xffffffff;
            puVar23 = *(undefined8 **)(this_01 + 8);
            if (puVar23 == *(undefined8 **)(this_01 + 0x10)) {
                    /* try { // try from 009bbd8c to 00abbd97 has its CatchHandler @ 009bc04c */
              std::__ndk1::
              vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>
              ::__push_back_slow_path<cocos2d::renderer::BaseRenderer::StageItem_const&>
                        (this_01,(StageItem *)&local_a0);
            }
            else {
                    /* try { // try from 009bbd08 to 00abbd5f has its CatchHandler @ 009bbd08
                       catch() { ... } // from try @ 009bbd08 with catch @ 009bbd08
                       catch() { ... } // from try @ 009bc044 with catch @ 009bbd08 */
              puVar23[4] = 0;
              puVar23[5] = 0;
              puVar23[2] = local_90;
              puVar23[1] = uStack_98;
              *puVar23 = local_a0;
              puVar23[3] = 0;
              uVar18 = (long)local_80 - (long)puStack_88;
              if (uVar18 != 0) {
                if ((ulong)((long)uVar18 >> 3) >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__vector_base_common<true>::__throw_length_error();
                }
                pvVar12 = operator_new(uVar18);
                puVar23[3] = pvVar12;
                puVar23[4] = pvVar12;
                puVar23[5] = (void *)((long)pvVar12 + ((long)uVar18 >> 3) * 8);
                sVar24 = (long)local_80 - (long)puStack_88;
                if (0 < (long)sVar24) {
                    /* try { // try from 009bbd60 to 00abbd77 has its CatchHandler @ 009bc054 */
                  memcpy(pvVar12,puStack_88,sVar24);
                  puVar23[4] = (long)pvVar12 + sVar24;
                }
              }
              *(undefined4 *)(puVar23 + 6) = local_70;
                    /* try { // try from 009bbd80 to 00abbd8b has its CatchHandler @ 009bc050 */
              *(long *)(this_01 + 8) = *(long *)(this_01 + 8) + 0x38;
            }
          }
          uVar17 = uVar17 + 1;
                    /* try { // try from 009bbd98 to 00abc043 has its CatchHandler @ 009bc064 */
          if (uVar16 <= uVar17) break;
          puVar21 = *(ulong **)(this + 0x58);
          if (*puVar21 <= uVar17) goto LAB_009bbba4;
LAB_009bbb98:
          puVar23 = *(undefined8 **)(puVar21[8] + uVar17 * 8);
        } while( true );
      }
      puVar21 = *(ulong **)(this + 0x60);
      pbVar19 = pbVar19 + 0x18;
    } while (pbVar19 != pbVar5);
  }
  uVar16 = *puVar21;
  if (uVar16 != 0) {
    uVar17 = 0;
    if (uVar16 != 0) goto LAB_009bbdfc;
    do {
      __android_log_print(5,"renderer"," (66): Failed to get data %zu, index not found.\n",uVar17);
      lVar22 = 0;
      while( true ) {
        lVar15 = std::__ndk1::
                 __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
                 ::
                 find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                           ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::function<void(cocos2d::renderer::View_const&,std::__ndk1::vector<cocos2d::renderer::BaseRenderer::StageItem,std::__ndk1::allocator<cocos2d::renderer::BaseRenderer::StageItem>>&)>const>>>
                             *)(this + 0x30),(basic_string *)(lVar22 + 0x18));
        if (lVar15 != 0) {
          plVar13 = *(long **)(lVar15 + 0x50);
          if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_008589d0();
          }
          (**(code **)(*plVar13 + 0x30))(plVar13,param_1,lVar22);
        }
        uVar17 = uVar17 + 1;
        if (uVar16 <= uVar17) goto LAB_009bbe58;
        puVar21 = *(ulong **)(this + 0x60);
        if (*puVar21 <= uVar17) break;
LAB_009bbdfc:
        lVar22 = *(long *)(puVar21[8] + uVar17 * 8);
      }
    } while( true );
  }
LAB_009bbe58:
  if (puStack_88 != (undefined8 *)0x0) {
    local_80 = puStack_88;
    operator_delete(puStack_88);
  }
  if (*(long *)(lVar9 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
LAB_009bbc9c:
                    /* catch() { ... } // from try @ 009bbb08 with catch @ 009bbc9c */
                    /* catch() { ... } // from try @ 009bbae8 with catch @ 009bbca0 */
  puVar25 = puVar25 + 1;
  *local_80 = local_a8;
  local_80 = local_80 + 1;
                    /* catch() { ... } // from try @ 009bbb20 with catch @ 009bbcb0 */
  goto joined_r0x009bbbe4;
}

