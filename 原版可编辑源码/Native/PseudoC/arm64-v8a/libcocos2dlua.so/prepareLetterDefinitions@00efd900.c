
/* cocos2d::FontAtlas::prepareLetterDefinitions(std::__ndk1::basic_string<char32_t,
   std::__ndk1::char_traits<char32_t>, std::__ndk1::allocator<char32_t> > const&) */

undefined4 __thiscall
cocos2d::FontAtlas::prepareLetterDefinitions(FontAtlas *this,basic_string *param_1)

{
  int iVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  long lVar5;
  FontFreeType *this_00;
  uchar *puVar6;
  Texture2D *this_01;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined8 *puVar11;
  void *pvVar12;
  long lVar13;
  undefined8 uVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined4 local_114;
  int local_110 [2];
  float local_108;
  float local_104;
  undefined8 local_100;
  long local_f8;
  long local_f0;
  long local_e8 [2];
  long *local_d8;
  void *local_d0;
  undefined8 uStack_c8;
  undefined8 *local_c0;
  long local_b8;
  undefined4 local_b0;
  long local_a0;
  
  lVar2 = tpidr_el0;
  local_a0 = *(long *)(lVar2 + 0x28);
  if (*(long *)(this + 0x88) == 0) {
    uVar9 = 0;
  }
  else {
    if (*(long *)(this + 0xa0) == 0) {
      reinit(this);
    }
    uStack_c8 = 0;
    local_d0 = (void *)0x0;
    local_b8 = 0;
    local_c0 = (undefined8 *)0x0;
    local_b0 = 0x3f800000;
    findNewCharacters(this,param_1,(unordered_map *)&local_d0);
    if (local_b8 == 0) {
      uVar9 = 0;
      pvVar3 = local_d0;
      puVar11 = local_c0;
    }
    else {
      iVar1 = *(int *)(this + 0xb4);
      iVar10 = *(int *)(this + 0xb8);
      if (iVar1 < 0) {
        iVar1 = iVar1 + 1;
      }
      if (iVar10 < 0) {
        iVar10 = iVar10 + 1;
      }
      Rect::Rect((Rect *)&local_108);
      lVar5 = Director::getInstance();
      this_00 = *(FontFreeType **)(this + 0x88);
      fVar23 = *(float *)(this + 0xb0);
      fVar21 = *(float *)(this_00 + 0x5c);
      uVar9 = 7;
      if (fVar21 <= 0.0) {
        uVar9 = 5;
      }
      if (local_c0 != (undefined8 *)0x0) {
        fVar15 = *(float *)(lVar5 + 0x1a0);
                    /* try { // try from 00efd9f0 to 00ffdf87 has its CatchHandler @ 00efd5bc */
        fVar22 = (float)(iVar10 >> 1);
        uVar8 = 10;
        if (fVar21 <= 0.0) {
          uVar8 = 9;
        }
        puVar11 = local_c0;
        while( true ) {
          puVar6 = (uchar *)FontFreeType::getGlyphBitmap
                                      (this_00,(ulong)*(uint *)((long)puVar11 + 0x14),&local_f0,
                                       &local_f8,(Rect *)&local_108,local_110);
          if (((puVar6 == (uchar *)0x0) || (local_f0 < 1)) || (local_f8 < 1)) {
            if (puVar6 != (uchar *)0x0) {
              operator_delete__(puVar6);
            }
            local_130 = 0;
            uStack_128 = 0;
            local_120 = 0;
            local_118 = 0;
            local_114 = CONCAT31(local_114._1_3_,local_110[0] != 0);
            *(float *)(this + 0xac) = *(float *)(this + 0xac) + 1.0;
          }
          else {
            local_114 = CONCAT31(local_114._1_3_,1);
            iVar7 = *(int *)(this + 0xb4);
            iVar10 = *(int *)(this + 0xb8);
            fVar16 = (float)iVar7;
            fVar17 = (float)iVar10;
            uVar4 = (ulong)local_100 >> 0x20;
            fVar18 = (float)local_100 + fVar16 + fVar17;
            local_120 = CONCAT44(((local_104 + (float)*(int *)(this + 0xbc)) - (float)(iVar1 >> 1))
                                 - fVar22,(local_108 - (float)(iVar1 >> 1)) - fVar22);
            if (512.0 < fVar18 + *(float *)(this + 0xac)) {
              iVar19 = *(int *)(this + 0xcc);
              fVar20 = *(float *)(this + 0xb0);
              *(undefined4 *)(this + 0xcc) = 0;
              *(float *)(this + 0xb0) = fVar20 + (float)iVar19;
              *(undefined4 *)(this + 0xac) = 0;
              if (512.0 <= fVar20 + (float)iVar19 + *(float *)(this + 0x78) + fVar16 + fVar17) {
                local_e8[0] = (long)*(int *)(this + 0x98);
                lVar13 = *(long *)(this + 0xa0);
                local_d8 = local_e8;
                lVar5 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
                        ::
                        __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                                  ((long *)(this + 0x28),(piecewise_construct_t *)local_e8,
                                   (tuple *)&DAT_0143a342,(tuple *)&local_d8);
                Texture2D::updateWithData
                          (*(Texture2D **)(lVar5 + 0x18),
                           (void *)(lVar13 + ((int)fVar23 << (ulong)uVar8)),0,(int)fVar23,0x200,
                           (int)(512.0 - fVar23));
                *(undefined4 *)(this + 0xb0) = 0;
                memset(*(void **)(this + 0xa0),0,(long)*(int *)(this + 0xa8));
                *(int *)(this + 0x98) = *(int *)(this + 0x98) + 1;
                this_01 = operator_new(0x88,(nothrow_t *)&std::nothrow);
                if (this_01 != (Texture2D *)0x0) {
                  Texture2D::Texture2D(this_01);
                }
                if (this[200] == (FontAtlas)0x0) {
                  Texture2D::setAliasTexParameters(this_01);
                }
                else {
                  Texture2D::setAntiAliasTexParameters(this_01);
                }
                uVar14 = *(undefined8 *)(this + 0xa0);
                iVar10 = *(int *)(this + 0xa8);
                Size::Size((Size *)&local_d8,512.0,512.0);
                Texture2D::initWithData(this_01,uVar14,(long)iVar10,uVar9,0x200,0x200,&local_d8);
                iVar10 = *(int *)(this + 0x98);
                Ref::retain((Ref *)this_01);
                local_d8 = local_e8;
                local_e8[0] = (long)iVar10;
                lVar5 = std::__ndk1::
                        __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
                        ::
                        __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                                  ((long *)(this + 0x28),(piecewise_construct_t *)local_e8,
                                   (tuple *)&DAT_0143a342,(tuple *)&local_d8);
                *(Texture2D **)(lVar5 + 0x18) = this_01;
                Ref::release((Ref *)this_01);
                iVar7 = *(int *)(this + 0xb4);
                iVar10 = *(int *)(this + 0xb8);
                fVar23 = 0.0;
              }
            }
            iVar10 = iVar7 + (int)local_f8 + iVar10;
            if (*(int *)(this + 0xcc) < iVar10) {
              *(int *)(this + 0xcc) = iVar10;
            }
            FontFreeType::renderCharAt
                      (*(FontFreeType **)(this + 0x88),*(uchar **)(this + 0xa0),
                       (int)(*(float *)(this + 0xac) + fVar22),
                       (int)(*(float *)(this + 0xb0) + fVar22),puVar6,local_f0,local_f8);
            uVar14 = *(undefined8 *)(this + 0xac);
            local_118 = *(undefined4 *)(this + 0x98);
            uStack_128 = CONCAT44(((float)uVar4 + fVar16 + fVar17) / fVar15,fVar18 / fVar15);
            fVar16 = (float)uVar14;
            *(float *)(this + 0xac) = fVar18 + 1.0 + fVar16;
            local_130 = CONCAT44((float)((ulong)uVar14 >> 0x20) / fVar15,fVar16 / fVar15);
          }
          local_d8 = local_e8;
          local_e8[0] = CONCAT44(local_e8[0]._4_4_,*(undefined4 *)(puVar11 + 2));
          lVar5 = std::__ndk1::
                  __hash_table<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::__unordered_map_hasher<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::hash<char32_t>,true>,std::__ndk1::__unordered_map_equal<char32_t,std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>,std::__ndk1::equal_to<char32_t>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<char32_t,cocos2d::FontLetterDefinition>>>
                  ::
                  __emplace_unique_key_args<char32_t,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<char32_t&&>,std::__ndk1::tuple<>>
                            ((wchar32 *)(this + 0x50),(piecewise_construct_t *)local_e8,
                             (tuple *)&DAT_0143a342,(tuple *)&local_d8);
          *(int *)(lVar5 + 0x34) = local_110[0];
          *(ulong *)(lVar5 + 0x2c) = CONCAT44(local_114,local_118);
          *(undefined8 *)(lVar5 + 0x24) = local_120;
          *(undefined8 *)(lVar5 + 0x1c) = uStack_128;
          *(undefined8 *)(lVar5 + 0x14) = local_130;
          puVar11 = (undefined8 *)*puVar11;
          if (puVar11 == (undefined8 *)0x0) break;
          this_00 = *(FontFreeType **)(this + 0x88);
        }
      }
      local_e8[0] = (long)*(int *)(this + 0x98);
      lVar13 = *(long *)(this + 0xa0);
      local_d8 = local_e8;
      lVar5 = std::__ndk1::
              __hash_table<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::__unordered_map_hasher<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::hash<long>,true>,std::__ndk1::__unordered_map_equal<long,std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>,std::__ndk1::equal_to<long>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<long,cocos2d::Texture2D*>>>
              ::
              __emplace_unique_key_args<long,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<long&&>,std::__ndk1::tuple<>>
                        ((long *)(this + 0x28),(piecewise_construct_t *)local_e8,
                         (tuple *)&DAT_0143a342,(tuple *)&local_d8);
      uVar8 = 10;
      if (fVar21 <= 0.0) {
        uVar8 = 9;
      }
      Texture2D::updateWithData
                (*(Texture2D **)(lVar5 + 0x18),(void *)(lVar13 + ((int)fVar23 << (ulong)uVar8)),0,
                 (int)fVar23,0x200,
                 (int)((*(float *)(this + 0xb0) - fVar23) + (float)*(int *)(this + 0xcc)));
      uVar9 = 1;
      pvVar3 = local_d0;
      puVar11 = local_c0;
    }
    while (puVar11 != (void *)0x0) {
      pvVar12 = (void *)*puVar11;
      local_d0 = pvVar3;
      operator_delete(puVar11);
      pvVar3 = local_d0;
      puVar11 = pvVar12;
    }
    local_d0 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete(pvVar3);
    }
  }
  if (*(long *)(lVar2 + 0x28) == local_a0) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

