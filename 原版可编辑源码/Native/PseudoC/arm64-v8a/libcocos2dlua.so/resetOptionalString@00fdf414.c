
/* cocos2d::Material::resetOptionalString(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&) */

void __thiscall cocos2d::Material::resetOptionalString(Material *this,basic_string *param_1)

{
  basic_string *pbVar1;
  byte *pbVar2;
  char *pcVar3;
  basic_string bVar4;
  byte bVar5;
  long lVar6;
  size_t sVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar8;
  bool bVar9;
  int iVar10;
  basic_string *pbVar11;
  basic_string *pbVar12;
  int iVar13;
  basic_string *pbVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  byte bVar19;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_c8 [8];
  ulong local_c0;
  char *local_b8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [8];
  ulong local_a8;
  byte *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98 [8];
  ulong local_90;
  char *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80 [8];
  size_t local_78;
  byte *local_70;
  long local_68;
  
  lVar6 = tpidr_el0;
  local_68 = *(long *)(lVar6 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_80,"MAX_POINT_LIGHT_NUM");
  bVar4 = *param_1;
  pbVar14 = *(basic_string **)(param_1 + 0x10);
  if (((byte)bVar4 & 1) == 0) {
    pbVar14 = param_1 + 1;
  }
  pbVar2 = (byte *)((ulong)local_80 | 1);
  sVar7 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    pbVar2 = local_70;
    sVar7 = local_78;
  }
  if (sVar7 == 0) {
    lVar17 = 0;
    lVar18 = 0;
    iVar10 = 0;
LAB_00fdf4fc:
    if (this[0xa3] == (Material)0x0) {
      uVar15 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar15 = *(ulong *)(param_1 + 8);
      }
      if (uVar15 < lVar17 + sVar7) {
        iVar13 = -1;
      }
      else {
        pbVar11 = pbVar14 + lVar17 + sVar7;
        pbVar1 = pbVar14 + uVar15;
        while (((pbVar12 = pbVar1, 0 < (long)pbVar1 - (long)pbVar11 &&
                (pbVar11 = memchr(pbVar11,0x3b,(long)pbVar1 - (long)pbVar11),
                pbVar11 != (basic_string *)0x0)) &&
               (pbVar12 = pbVar11, *pbVar11 != (basic_string)0x3b))) {
          pbVar11 = pbVar11 + 1;
        }
        iVar13 = (int)pbVar12 - (int)pbVar14;
        if (pbVar12 == pbVar1) {
          iVar13 = -1;
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_98," 0");
      bVar9 = ((byte)local_98[0] & 1) != 0;
      uVar15 = (ulong)((byte)local_98[0] >> 1);
      if (bVar9) {
        uVar15 = local_90;
      }
      pcVar3 = (char *)((ulong)local_98 | 1);
      if (bVar9) {
        pcVar3 = local_88;
      }
      if (1 < uVar15) {
        uVar15 = 2;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1,lVar18 + 0x1300000000 >> 0x20,
              (long)(((ulong)(uint)(iVar13 - iVar10) << 0x20) + -0x1300000000) >> 0x20,pcVar3,uVar15
             );
      if (((byte)local_98[0] & 1) != 0) {
        operator_delete(local_88);
      }
    }
  }
  else {
    uVar15 = (ulong)((byte)bVar4 >> 1);
    if (((byte)bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar7 <= (long)uVar15) {
      bVar19 = *pbVar2;
      pbVar1 = pbVar14 + uVar15;
      pbVar11 = pbVar14;
      do {
        if ((0xfffffffffffffffe < uVar15 - sVar7) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar19,(uVar15 - sVar7) + 1),
           pbVar11 == (basic_string *)0x0)) break;
        iVar10 = memcmp(pbVar11,pbVar2,sVar7);
        if (iVar10 == 0) {
          lVar18 = (long)pbVar11 - (long)pbVar14;
          if (pbVar11 == pbVar1) {
            lVar18 = -1;
          }
          iVar10 = (int)lVar18;
          lVar18 = lVar18 << 0x20;
          if (lVar18 != -0x100000000) {
            lVar17 = (long)iVar10;
            goto LAB_00fdf4fc;
          }
          break;
        }
        pbVar11 = pbVar11 + 1;
        uVar15 = (long)pbVar1 - (long)pbVar11;
      } while ((long)sVar7 <= (long)uVar15);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_98,"MAX_DIRECTIONAL_LIGHT_NUM");
  pbVar14 = param_1 + 1;
  uVar15 = (ulong)((byte)*param_1 >> 1);
  if (((byte)*param_1 & 1) != 0) {
    pbVar14 = *(basic_string **)(param_1 + 0x10);
    uVar15 = *(ulong *)(param_1 + 8);
  }
  if (0x18 < (long)uVar15) {
    pbVar1 = pbVar14 + uVar15;
                    /* catch() { ... } // from try @ 00fdf6c0 with catch @ 00fdf648 */
    pbVar11 = pbVar14;
    uVar16 = uVar15;
    do {
      if ((uVar16 - 0x18 == 0) ||
         (pbVar11 = memchr(pbVar11,0x4d,uVar16 - 0x18), pbVar11 == (basic_string *)0x0)) break;
      iVar10 = memcmp(pbVar11,"MAX_DIRECTIONAL_LIGHT_NUM",0x19);
      bVar8 = local_98[0];
      if (iVar10 == 0) {
        uVar16 = (long)pbVar11 - (long)pbVar14;
        if (pbVar11 == pbVar1) {
          uVar16 = 0xffffffffffffffff;
        }
                    /* try { // try from 00fdf6a8 to 010df6bf has its CatchHandler @ 00fdf724 */
        if (((uVar16 & 0xffffffff) != 0xffffffff) && (this[0xa1] == (Material)0x0)) {
          iVar10 = (int)uVar16;
          bVar19 = (byte)local_98[0] >> 1;
                    /* try { // try from 00fdf6c0 to 010df747 has its CatchHandler @ 00fdf648 */
          uVar16 = (ulong)bVar19;
          if (((byte)local_98[0] & 1) != 0) {
            uVar16 = local_90;
          }
          uVar16 = uVar16 + (long)iVar10;
          if (uVar15 < uVar16) {
            iVar13 = -1;
          }
          else {
            pbVar11 = pbVar14 + uVar16;
            while (((pbVar12 = pbVar1, 0 < (long)pbVar1 - (long)pbVar11 &&
                    (pbVar11 = memchr(pbVar11,0x3b,(long)pbVar1 - (long)pbVar11),
                    pbVar11 != (basic_string *)0x0)) &&
                   (pbVar12 = pbVar11, *pbVar11 != (basic_string)0x3b))) {
              pbVar11 = pbVar11 + 1;
                    /* catch() { ... } // from try @ 00fdf67c with catch @ 00fdf71c */
                    /* catch() { ... } // from try @ 00fdf6a8 with catch @ 00fdf724 */
            }
            iVar13 = (int)pbVar12 - (int)pbVar14;
            if (pbVar12 == pbVar1) {
              iVar13 = -1;
            }
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
          basic_string<decltype(nullptr)>(local_b0," 0");
          uVar15 = (ulong)bVar19;
          if (((byte)bVar8 & 1) != 0) {
            uVar15 = local_90;
          }
          bVar9 = ((byte)local_b0[0] & 1) != 0;
          uVar16 = (ulong)((byte)local_b0[0] >> 1);
          if (bVar9) {
            uVar16 = local_a8;
          }
          pbVar2 = (byte *)((ulong)local_b0 | 1);
          if (bVar9) {
            pbVar2 = local_a0;
          }
          if (1 < uVar16) {
            uVar16 = 2;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::replace
                    ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                      *)param_1,uVar15 + (long)iVar10,(long)(iVar13 - iVar10) - uVar15,
                     (char *)pbVar2,uVar16);
          if (((byte)local_b0[0] & 1) != 0) {
            operator_delete(local_a0);
          }
        }
        break;
      }
                    /* try { // try from 00fdf67c to 010df683 has its CatchHandler @ 00fdf71c */
      pbVar11 = pbVar11 + 1;
      uVar16 = (long)pbVar1 - (long)pbVar11;
    } while (0x18 < (long)uVar16);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_b0,"MAX_SPOT_LIGHT_NUM");
  bVar4 = *param_1;
  pbVar14 = param_1 + 1;
  if (((byte)bVar4 & 1) != 0) {
    pbVar14 = *(basic_string **)(param_1 + 0x10);
  }
  bVar19 = (byte)local_b0[0] & 1;
  pbVar2 = (byte *)((ulong)local_b0 | 1);
  sVar7 = (ulong)((byte)local_b0[0] >> 1);
  if (((byte)local_b0[0] & 1) != 0) {
    pbVar2 = local_a0;
    sVar7 = local_a8;
  }
  if (sVar7 == 0) {
    lVar18 = 0;
    iVar10 = 0;
LAB_00fdf868:
    if (this[0xa2] == (Material)0x0) {
      uVar15 = lVar18 + sVar7;
      uVar16 = (ulong)((byte)bVar4 >> 1);
      if (((byte)bVar4 & 1) != 0) {
        uVar16 = *(ulong *)(param_1 + 8);
      }
      if (uVar16 < uVar15) {
        iVar13 = -1;
      }
      else {
        pbVar11 = pbVar14 + uVar15;
        pbVar1 = pbVar14 + uVar16;
        while (((pbVar12 = pbVar1, 0 < (long)pbVar1 - (long)pbVar11 &&
                (pbVar11 = memchr(pbVar11,0x3b,(long)pbVar1 - (long)pbVar11),
                pbVar11 != (basic_string *)0x0)) &&
               (pbVar12 = pbVar11, *pbVar11 != (basic_string)0x3b))) {
          pbVar11 = pbVar11 + 1;
        }
        iVar13 = (int)pbVar12 - (int)pbVar14;
        if (pbVar12 == pbVar1) {
          iVar13 = -1;
        }
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_c8," 0");
      pcVar3 = (char *)((ulong)local_c8 | 1);
      uVar16 = (ulong)((byte)local_c8[0] >> 1);
      if (((byte)local_c8[0] & 1) != 0) {
        pcVar3 = local_b8;
        uVar16 = local_c0;
      }
      if (1 < uVar16) {
        uVar16 = 2;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      replace((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
              param_1,uVar15,(long)(iVar13 - iVar10) - sVar7,pcVar3,uVar16);
      if (((byte)local_c8[0] & 1) != 0) {
        operator_delete(local_b8);
      }
      bVar19 = (byte)local_b0[0] & 1;
    }
  }
  else {
    uVar15 = (ulong)((byte)bVar4 >> 1);
    if (((byte)bVar4 & 1) != 0) {
      uVar15 = *(ulong *)(param_1 + 8);
    }
    if ((long)sVar7 <= (long)uVar15) {
      bVar5 = *pbVar2;
      pbVar1 = pbVar14 + uVar15;
      pbVar11 = pbVar14;
      do {
        if ((0xfffffffffffffffe < uVar15 - sVar7) ||
           (pbVar11 = memchr(pbVar11,(uint)bVar5,(uVar15 - sVar7) + 1),
           pbVar11 == (basic_string *)0x0)) break;
        iVar10 = memcmp(pbVar11,pbVar2,sVar7);
        if (iVar10 == 0) {
          uVar15 = (long)pbVar11 - (long)pbVar14;
          if (pbVar11 == pbVar1) {
            uVar15 = 0xffffffffffffffff;
          }
          iVar10 = (int)uVar15;
          if ((uVar15 & 0xffffffff) != 0xffffffff) {
            lVar18 = (long)iVar10;
            goto LAB_00fdf868;
          }
          break;
        }
        pbVar11 = pbVar11 + 1;
        uVar15 = (long)pbVar1 - (long)pbVar11;
      } while ((long)sVar7 <= (long)uVar15);
    }
  }
  if (bVar19 != 0) {
    operator_delete(local_a0);
  }
  if (((byte)local_98[0] & 1) != 0) {
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar6 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

