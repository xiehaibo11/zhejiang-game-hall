
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::TMXMapInfo::endElement(void*, char const*) */

void __thiscall cocos2d::TMXMapInfo::endElement(TMXMapInfo *this,void *param_1,char *param_2)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  basic_string *this_01;
  int *piVar1;
  undefined **ppuVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  ulong *puVar6;
  ulong *puVar7;
  void *__src;
  ulong *puVar8;
  bool bVar9;
  int iVar10;
  basic_istream *pbVar11;
  undefined4 *puVar12;
  ulong uVar13;
  undefined **ppuVar14;
  ulong uVar15;
  ulong *puVar16;
  undefined4 *puVar17;
  undefined4 *puVar18;
  long lVar19;
  byte *pbVar20;
  ulong local_318;
  ulong uStack_310;
  void *local_308;
  ulong local_300;
  undefined8 local_2f8;
  void *local_2f0;
  undefined8 local_2e8;
  ulong *local_2e0;
  ulong *puStack_2d8;
  undefined **local_2d0 [2];
  undefined **local_2c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_2b8 [8];
  ulong local_2b0;
  int *local_2a8;
  undefined **local_2a0;
  ulong uStack_298;
  undefined **local_290;
  locale alStack_288 [8];
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  ulong local_250;
  undefined8 uStack_248;
  void *local_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined **local_228 [17];
  undefined8 local_1a0;
  undefined4 local_198;
  undefined **local_190;
  undefined8 uStack_188;
  undefined **local_180;
  locale alStack_178 [8];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  void *local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined **local_118 [17];
  undefined8 local_90;
  undefined4 local_88;
  long local_78;
  
  lVar5 = tpidr_el0;
  local_78 = *(long *)(lVar5 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_2b8,param_2);
  uVar13 = (ulong)((byte)local_2b8[0] >> 1);
  if (((byte)local_2b8[0] & 1) != 0) {
    uVar13 = local_2b0;
  }
  switch(uVar13) {
  case 3:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    iVar10 = memcmp(piVar1,"map",3);
    break;
  case 4:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    if (*piVar1 == 0x61746164) {
      uVar3 = *(uint *)(this + 0xa0);
      if ((uVar3 >> 1 & 1) == 0) {
        if ((uVar3 >> 4 & 1) == 0) {
          if ((uVar3 & 1) != 0) {
            *(undefined4 *)(this + 0xd0) = 0;
            goto joined_r0x00f540c4;
          }
          goto switchD_00f53f88_caseD_8;
        }
        this_01 = (basic_string *)(this + 0x108);
        lVar19 = *(long *)(*(long *)(this + 0x58) + -8);
        this[0xa4] = (TMXMapInfo)0x0;
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)local_2d0,this_01);
        local_2e0 = (ulong *)0x0;
        puStack_2d8 = (ulong *)0x0;
        local_2e8 = (ulong *)0x0;
        local_118[0] = (undefined **)0x169c448;
        local_190 = (undefined **)0x169c420;
        uStack_188 = 0;
        std::__ndk1::ios_base::init
                  ((ios_base *)local_118,
                   (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&local_180);
        local_88 = 0xffffffff;
        local_190 = &PTR__basic_istringstream_0169c3d0;
        local_118[0] = &PTR__basic_istringstream_0169c3f8;
        local_180 = &PTR__basic_streambuf_01698a08;
        local_90 = 0;
        std::__ndk1::locale::locale(alStack_178);
        uStack_158 = 0;
        local_160 = 0;
        uStack_148 = 0;
        uStack_150 = 0;
        uStack_168 = 0;
        local_170 = 0;
        local_180 = &PTR__basic_stringbuf_01698960;
        uStack_138 = 0;
        local_140 = 0;
        uStack_128 = 0;
        local_130 = (void *)0x0;
        local_120 = 8;
        std::__ndk1::
        basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                  ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                    *)&local_180,(basic_string *)local_2d0);
        local_2f8 = 0;
        local_2f0 = (void *)0x0;
        local_300 = 0;
        while (pbVar11 = std::__ndk1::
                         getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                   ((basic_istream *)&local_190,(basic_string *)&local_300,'\n'),
              puVar7 = local_2e0, puVar16 = local_2e8,
              ((byte)pbVar11[*(long *)(*(long *)pbVar11 + -0x18) + 0x20] & 5) == 0) {
          uStack_310 = 0;
          local_308 = (void *)0x0;
          local_318 = 0;
          local_2a0 = (undefined **)
                      (std::__ndk1::basic_istream<char,std::__ndk1::char_traits<char>>-in-std::
                       __ndk1::
                       basic_istringstream<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                       ::construction_vtable + 0x18);
          local_228[0] = (undefined **)0x169c448;
          uStack_298 = 0;
          std::__ndk1::ios_base::init
                    ((ios_base *)local_228,
                     (basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_290);
          local_198 = 0xffffffff;
          local_1a0 = 0;
          local_2a0 = &PTR__basic_istringstream_0169c3d0;
          local_228[0] = &PTR__basic_istringstream_0169c3f8;
          local_290 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::locale(alStack_288);
          uStack_268 = 0;
          local_270 = 0;
          uStack_258 = 0;
          uStack_260 = 0;
          uStack_278 = 0;
          local_280 = 0;
          local_290 = &PTR__basic_stringbuf_01698960;
          uStack_248 = 0;
          local_250 = 0;
          uStack_238 = 0;
          local_240 = (void *)0x0;
          local_230 = 8;
          std::__ndk1::
          basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::str
                    ((basic_stringbuf<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_290,(basic_string *)&local_300);
          while (pbVar11 = std::__ndk1::
                           getline<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                                     ((basic_istream *)&local_2a0,(basic_string *)&local_318,','),
                puVar16 = local_2e0, __src = local_308, uVar13 = uStack_310,
                ((byte)pbVar11[*(long *)(*(long *)pbVar11 + -0x18) + 0x20] & 5) == 0) {
            if (local_2e0 == puStack_2d8) {
              std::__ndk1::
              vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              ::
              __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                        ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                          *)&local_2e8,(basic_string *)&local_318);
            }
            else {
              *local_2e0 = 0;
              local_2e0[1] = 0;
              local_2e0[2] = 0;
              if ((local_318 & 1) == 0) {
                local_2e0[2] = (ulong)local_308;
                local_2e0[1] = uStack_310;
                *local_2e0 = local_318;
              }
              else {
                if (0xffffffffffffffef < uStack_310) {
                    /* WARNING: Subroutine does not return */
                  std::__ndk1::__basic_string_common<true>::__throw_length_error();
                }
                if (uStack_310 < 0x17) {
                  pbVar20 = (byte *)((long)local_2e0 + 1);
                  *(byte *)local_2e0 = (byte)((int)uStack_310 << 1);
                  if (uStack_310 != 0) goto LAB_00f54488;
                }
                else {
                  uVar15 = uStack_310 + 0x10 & 0xfffffffffffffff0;
                  pbVar20 = operator_new(uVar15);
                  puVar16[1] = uVar13;
                  puVar16[2] = (ulong)pbVar20;
                  *puVar16 = uVar15 | 1;
LAB_00f54488:
                  memcpy(pbVar20,__src,uVar13);
                }
                pbVar20[uVar13] = 0;
              }
              local_2e0 = puVar16 + 3;
            }
          }
          local_2a0 = &PTR__basic_istringstream_0169c3d0;
          local_228[0] = &PTR__basic_istringstream_0169c3f8;
          local_290 = &PTR__basic_stringbuf_01698960;
          if ((local_250 & 1) != 0) {
            operator_delete(local_240);
          }
          local_290 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::~locale(alStack_288);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_228);
          if ((local_318 & 1) != 0) {
            operator_delete(local_308);
          }
        }
        puVar12 = malloc(((long)local_2e0 - (long)local_2e8 >> 3) * -0x5555555555555554);
        if (puVar12 == (undefined4 *)0x0) {
          if ((local_300 & 1) != 0) {
            operator_delete(local_2f0);
          }
                    /* try { // try from 00f54698 to 01054c8f has its CatchHandler @ 00f53e88 */
          local_190 = &PTR__basic_istringstream_0169c3d0;
          local_118[0] = &PTR__basic_istringstream_0169c3f8;
          local_180 = &PTR__basic_stringbuf_01698960;
          if ((local_140 & 1) != 0) {
            operator_delete(local_130);
          }
          local_180 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::~locale(alStack_178);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
          puVar16 = local_2e8;
          ppuVar2 = local_2d0[0];
          if (local_2e8 != (ulong *)0x0) {
            if (local_2e0 != local_2e8) {
              bVar4 = (byte)local_2e0[-3];
              puVar8 = local_2e0 + -3;
              puVar7 = local_2e0;
              while( true ) {
                puVar6 = puVar8;
                if ((bVar4 & 1) != 0) {
                  operator_delete((void *)puVar7[-1]);
                }
                if (puVar16 == puVar6) break;
                bVar4 = (byte)puVar6[-3];
                puVar8 = puVar6 + -3;
                puVar7 = puVar6;
              }
            }
            goto LAB_00f54740;
          }
        }
        else {
          if (puVar16 != puVar7) {
            puVar17 = puVar12;
            if ((*puVar16 & 1) != 0) goto LAB_00f5457c;
            do {
              pbVar20 = (byte *)((long)puVar16 + 1);
              puVar18 = puVar17;
              while( true ) {
                uVar13 = strtoul((char *)pbVar20,(char **)0x0,10);
                puVar16 = puVar16 + 3;
                puVar17 = puVar18 + 1;
                *puVar18 = (int)uVar13;
                if (puVar7 == puVar16) goto LAB_00f54584;
                if ((*puVar16 & 1) == 0) break;
LAB_00f5457c:
                pbVar20 = (byte *)puVar16[2];
                puVar18 = puVar17;
              }
            } while( true );
          }
LAB_00f54584:
          *(undefined4 **)(lVar19 + 0x70) = puVar12;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2a0,"");
          if (this_01 != (basic_string *)&local_2a0) {
            uVar13 = (ulong)local_2a0 >> 1 & 0x7f;
            ppuVar2 = (undefined **)((ulong)&local_2a0 | 1);
            if (((ulong)local_2a0 & 1) != 0) {
              uVar13 = uStack_298;
              ppuVar2 = local_290;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)this_01,(char *)ppuVar2,uVar13);
          }
          if (((ulong)local_2a0 & 1) != 0) {
            operator_delete(local_290);
          }
          if ((local_300 & 1) != 0) {
            operator_delete(local_2f0);
          }
          local_190 = &PTR__basic_istringstream_0169c3d0;
          local_118[0] = &PTR__basic_istringstream_0169c3f8;
          local_180 = &PTR__basic_stringbuf_01698960;
          if ((local_140 & 1) != 0) {
            operator_delete(local_130);
          }
                    /* try { // try from 00f54630 to 0105466f has its CatchHandler @ 00f54c74 */
          local_180 = &PTR__basic_streambuf_01698a08;
          std::__ndk1::locale::~locale(alStack_178);
          std::__ndk1::ios_base::~ios_base((ios_base *)local_118);
          puVar16 = local_2e8;
          ppuVar2 = local_2d0[0];
          if (local_2e8 != (ulong *)0x0) {
            if (local_2e0 != local_2e8) {
              bVar4 = (byte)local_2e0[-3];
              puVar8 = local_2e0 + -3;
              puVar7 = local_2e0;
              while( true ) {
                puVar6 = puVar8;
                if ((bVar4 & 1) != 0) {
                  operator_delete((void *)puVar7[-1]);
                }
                    /* try { // try from 00f54670 to 01054697 has its CatchHandler @ 00f54c70 */
                if (puVar16 == puVar6) break;
                bVar4 = (byte)puVar6[-3];
                puVar8 = puVar6 + -3;
                puVar7 = puVar6;
              }
            }
LAB_00f54740:
            local_2e0 = puVar16;
            operator_delete(local_2e8);
            ppuVar2 = local_2d0[0];
          }
        }
      }
      else {
        this[0xa4] = (TMXMapInfo)0x0;
        this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  (this + 0x108);
        lVar19 = *(long *)(*(long *)(this + 0x58) + -8);
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        *)&local_190,(basic_string *)this_00);
        bVar9 = ((ulong)local_190 & 1) != 0;
        ppuVar2 = (undefined **)((ulong)&local_190 | 1);
        if (bVar9) {
          ppuVar2 = local_180;
        }
        uVar3 = (uint)((byte)local_190._0_1_ >> 1);
        if (bVar9) {
          uVar3 = (uint)uStack_188;
        }
        iVar10 = base64Decode(ppuVar2,uVar3,local_2d0);
        local_2c0 = local_180;
        ppuVar2 = local_190;
        if (local_2d0[0] != (undefined **)0x0) {
          ppuVar14 = local_2d0[0];
          if (((byte)this[0xa0] & 0xc) != 0) {
            local_2a0 = (undefined **)0x0;
            Size::Size((Size *)&local_2e8,(Size *)(lVar19 + 0x68));
            ZipUtils::inflateMemoryWithHint
                      ((uchar *)local_2d0[0],(long)iVar10,(uchar **)&local_2a0,
                       (long)((float)local_2e8 * local_2e8._4_4_ * 4.0));
            free(local_2d0[0]);
            local_2d0[0] = (undefined **)0x0;
            ppuVar14 = local_2a0;
            local_2c0 = local_180;
            ppuVar2 = local_190;
            if (local_2a0 == (undefined **)0x0) goto joined_r0x00f541fc;
          }
          *(undefined ***)(lVar19 + 0x70) = ppuVar14;
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)&local_2a0,"");
          if (this_00 !=
              (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              &local_2a0) {
            uVar13 = (ulong)local_2a0 >> 1 & 0x7f;
            ppuVar2 = (undefined **)((ulong)&local_2a0 | 1);
            if (((ulong)local_2a0 & 1) != 0) {
              uVar13 = uStack_298;
              ppuVar2 = local_290;
            }
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      (this_00,(char *)ppuVar2,uVar13);
          }
          local_2c0 = local_180;
          ppuVar2 = local_190;
          if (((ulong)local_2a0 & 1) != 0) {
            operator_delete(local_290);
            local_2c0 = local_180;
            ppuVar2 = local_190;
          }
        }
      }
joined_r0x00f541fc:
      if (((ulong)ppuVar2 & 1) != 0) {
        operator_delete(local_2c0);
        goto joined_r0x00f540c4;
      }
    }
    goto switchD_00f53f88_caseD_8;
  case 5:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    iVar10 = memcmp(piVar1,"layer",5);
    break;
  case 6:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    iVar10 = memcmp(piVar1,"object",6);
    break;
  case 7:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    iVar10 = memcmp(piVar1,"tileset",7);
    if (iVar10 == 0) {
      this[0x14c] = (TMXMapInfo)0x1;
    }
  default:
    goto switchD_00f53f88_caseD_8;
  case 0xb:
    piVar1 = (int *)((ulong)local_2b8 | 1);
    if (((byte)local_2b8[0] & 1) != 0) {
      piVar1 = local_2a8;
    }
    iVar10 = memcmp(piVar1,"objectgroup",0xb);
  }
  if (iVar10 == 0) {
    *(undefined4 *)(this + 0x98) = 0;
  }
  else {
switchD_00f53f88_caseD_8:
  }
joined_r0x00f540c4:
  if (((byte)local_2b8[0] & 1) != 0) {
    operator_delete(local_2a8);
  }
  if (*(long *)(lVar5 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

