
/* cocos2d::extension::AssetsManagerEx::onProgress(double, double, std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >
   const&) */

void __thiscall
cocos2d::extension::AssetsManagerEx::onProgress
          (AssetsManagerEx *this,double param_1,double param_2,basic_string *param_3,
          basic_string *param_4)

{
  double *pdVar1;
  size_t sVar2;
  byte bVar3;
  basic_string bVar4;
  size_t sVar5;
  long lVar6;
  bool bVar7;
  basic_string *pbVar8;
  size_t sVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  basic_string *pbVar13;
  basic_string *pbVar14;
  void *__s1;
  size_t sVar15;
  size_t sVar16;
  long *plVar17;
  double dVar18;
  basic_string *local_a0 [2];
  void *local_90;
  double local_88 [2];
  long local_78;
  
  lVar6 = tpidr_el0;
  local_78 = *(long *)(lVar6 + 0x28);
  bVar4 = *param_4;
  sVar15 = *(size_t *)(param_4 + 8);
  sVar16 = (size_t)((byte)bVar4 >> 1);
  sVar2 = sVar16;
  if (((byte)bVar4 & 1) != 0) {
    sVar2 = sVar15;
  }
  sVar5 = (ulong)(VERSION_ID >> 1);
  if ((VERSION_ID & 1) != 0) {
    sVar5 = DAT_01788b50;
  }
  local_88[0] = param_2;
  if (sVar2 == sVar5) {
    pbVar14 = *(basic_string **)(param_4 + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      pbVar14 = param_4 + 1;
    }
    pbVar13 = DAT_01788b58;
    if ((VERSION_ID & 1) == 0) {
      pbVar13 = (basic_string *)&DAT_01788b49;
    }
    sVar5 = sVar16;
    pbVar8 = param_4;
    sVar9 = sVar2;
    if (((byte)bVar4 & 1) == 0) {
      while (sVar9 != 0) {
        if (pbVar8[1] != *pbVar13) goto LAB_00e05f88;
        pbVar13 = pbVar13 + 1;
        sVar5 = sVar5 - 1;
        pbVar8 = pbVar8 + 1;
        sVar9 = sVar5;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar14,pbVar13,sVar2), iVar10 != 0))
    goto LAB_00e05f88;
  }
  else {
LAB_00e05f88:
    sVar5 = (ulong)(MANIFEST_ID >> 1);
    if ((MANIFEST_ID & 1) != 0) {
      sVar5 = DAT_01788b68;
    }
    if (sVar2 != sVar5) {
LAB_00e06004:
      plVar17 = *(long **)(this + 0x1b8);
      if (plVar17 != (long *)0x0) {
        bVar7 = false;
        dVar18 = 0.0;
        do {
          bVar3 = *(byte *)(plVar17 + 2);
          uVar12 = (ulong)(bVar3 >> 1);
          sVar2 = uVar12;
          if ((bVar3 & 1) != 0) {
            sVar2 = plVar17[3];
          }
          sVar16 = (ulong)((byte)bVar4 >> 1);
          if (((byte)bVar4 & 1) != 0) {
            sVar16 = sVar15;
          }
          if (sVar2 == sVar16) {
            __s1 = (void *)plVar17[4];
            if ((bVar3 & 1) == 0) {
              __s1 = (void *)((long)plVar17 + 0x11);
            }
            pbVar14 = param_4 + 1;
            if (((byte)bVar4 & 1) != 0) {
              pbVar14 = *(basic_string **)(param_4 + 0x10);
            }
            if ((bVar3 & 1) == 0) {
              if (sVar2 != 0) {
                pbVar13 = (basic_string *)((long)plVar17 + 0x11);
                do {
                  if (*pbVar13 != *pbVar14) goto LAB_00e060a0;
                  uVar12 = uVar12 - 1;
                  pbVar13 = pbVar13 + 1;
                  pbVar14 = pbVar14 + 1;
                } while (uVar12 != 0);
              }
            }
            else if ((sVar2 != 0) && (iVar10 = memcmp(__s1,pbVar14,sVar2), iVar10 != 0))
            goto LAB_00e060a0;
            bVar7 = true;
            plVar17[5] = (long)param_2;
          }
LAB_00e060a0:
          pdVar1 = (double *)(plVar17 + 5);
          plVar17 = (long *)*plVar17;
          dVar18 = dVar18 + *pdVar1;
          if (plVar17 == (long *)0x0) goto LAB_00e06114;
          bVar4 = *param_4;
          sVar15 = *(size_t *)(param_4 + 8);
        } while( true );
      }
      dVar18 = 0.0;
      goto LAB_00e0612c;
    }
    pbVar14 = *(basic_string **)(param_4 + 0x10);
    if (((byte)bVar4 & 1) == 0) {
      pbVar14 = param_4 + 1;
    }
    pbVar13 = DAT_01788b70;
    if ((MANIFEST_ID & 1) == 0) {
      pbVar13 = (basic_string *)&DAT_01788b61;
    }
    pbVar8 = param_4;
    if (((byte)bVar4 & 1) == 0) {
      while (sVar2 != 0) {
        if (pbVar8[1] != *pbVar13) goto LAB_00e06004;
        pbVar13 = pbVar13 + 1;
        sVar16 = sVar16 - 1;
        pbVar8 = pbVar8 + 1;
        sVar2 = sVar16;
      }
    }
    else if ((sVar2 != 0) && (iVar10 = memcmp(pbVar14,pbVar13,sVar2), iVar10 != 0))
    goto LAB_00e06004;
  }
  *(float *)(this + 400) = (float)((param_2 * 100.0) / param_1);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_a0,"");
  dispatchUpdateEvent(this,5,param_4,local_a0,0,0);
LAB_00e06100:
  if (((ulong)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
LAB_00e061e4:
  if (*(long *)(lVar6 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
LAB_00e06114:
  dVar18 = dVar18 * 100.0;
  if (!bVar7) {
LAB_00e0612c:
    local_a0[0] = (basic_string *)CONCAT44(local_a0[0]._4_4_,1);
    Manifest::setAssetDownloadState(*(Manifest **)(this + 0x108),param_4,(DownloadState *)local_a0);
    std::__ndk1::
    __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>>
    ::
    __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&,double&>
              ((__hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,double>>>
                *)(this + 0x1a8),param_4,param_4,local_88);
    local_a0[0] = param_4;
    lVar11 = std::__ndk1::
             __hash_table<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::__unordered_map_hasher<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::hash<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::__unordered_map_equal<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>,std::__ndk1::equal_to<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,cocos2d::extension::DownloadUnit>>>
             ::
             __emplace_unique_key_args<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>,std::__ndk1::tuple<>>
                       ((basic_string *)(this + 0x120),(piecewise_construct_t *)param_4,
                        (tuple *)&DAT_014214f6,(tuple *)local_a0);
    if (*(float *)(lVar11 + 0x70) == 0.0) {
      iVar10 = *(int *)(this + 0x19c);
      *(double *)(this + 0x1a0) = *(double *)(this + 0x1a0) + param_1;
      *(int *)(this + 0x19c) = iVar10 + 1;
      if (iVar10 + 1 == *(int *)(this + 0x1d0)) {
        *(undefined4 *)(this + 0x198) = 1;
      }
    }
  }
  if (((*(int *)(this + 0x198) == 0) || (*(int *)(this + 0x50) != 8)) ||
     ((int)(dVar18 / *(double *)(this + 0x1a0)) == (int)*(float *)(this + 400))) goto LAB_00e061e4;
  *(float *)(this + 400) = (float)(dVar18 / *(double *)(this + 0x1a0));
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             local_a0,"");
  dispatchUpdateEvent(this,5,param_4,local_a0,0,0);
  goto LAB_00e06100;
}

