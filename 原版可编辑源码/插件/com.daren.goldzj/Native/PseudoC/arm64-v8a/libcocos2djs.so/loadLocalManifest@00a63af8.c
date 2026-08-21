
/* cocos2d::extension::AssetsManagerEx::loadLocalManifest(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined8 __thiscall
cocos2d::extension::AssetsManagerEx::loadLocalManifest(AssetsManagerEx *this,basic_string *param_1)

{
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  size_t sVar1;
  basic_string bVar2;
  byte bVar3;
  long lVar4;
  size_t __n;
  ulong *puVar5;
  int iVar6;
  Manifest *pMVar7;
  ulong uVar8;
  vector *pvVar9;
  byte *pbVar10;
  basic_string *pbVar11;
  long lVar12;
  byte *pbVar13;
  undefined8 uVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  void *__src;
  byte *pbVar18;
  ulong uVar19;
  byte *pbVar20;
  ulong *puVar21;
  undefined8 uVar22;
  ulong local_d0;
  size_t sStack_c8;
  byte *local_c0;
  byte *local_b0;
  byte *local_a8;
  void *local_a0;
  ulong *local_98;
  ulong *local_90;
  void *local_88;
  byte *local_80;
  byte *local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00a63b00 to 00b63b07 has its CatchHandler @ 00a63d1c */
                    /* try { // try from 00a63b08 to 00b63b17 has its CatchHandler @ 00a63d14 */
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
                    /* try { // try from 00a63b20 to 00b63b5b has its CatchHandler @ 00a63d2c */
  bVar2 = *param_1;
  uVar8 = (ulong)((byte)bVar2 >> 1);
  if (((byte)bVar2 & 1) != 0) {
    uVar8 = *(ulong *)(param_1 + 8);
  }
  if ((uVar8 == 0) || (0 < *(int *)(this + 0x30))) {
    uVar14 = 0;
    goto LAB_00a63b50;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 200);
  if (this_00 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
    pbVar11 = *(basic_string **)(param_1 + 0x10);
    if (((byte)bVar2 & 1) == 0) {
      pbVar11 = param_1 + 1;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,(char *)pbVar11,uVar8);
  }
  pMVar7 = operator_new(400,(nothrow_t *)&std::nothrow);
  if (pMVar7 == (Manifest *)0x0) {
    *(undefined8 *)(this + 0xe0) = 0;
    uVar14 = 0;
    goto LAB_00a63b50;
  }
  local_80 = (byte *)0x0;
  local_78 = (byte *)0x0;
  local_70 = (void *)0x0;
  Manifest::Manifest(pMVar7,(basic_string *)&local_80);
  *(Manifest **)(this + 0xe0) = pMVar7;
  if (((ulong)local_80 & 1) != 0) {
    operator_delete(local_70);
    pMVar7 = *(Manifest **)(this + 0xe0);
  }
  uVar14 = 0;
  if (pMVar7 == (Manifest *)0x0) goto LAB_00a63b50;
  pbVar11 = (basic_string *)(this + 0x98);
  uVar8 = (**(code **)(**(long **)(this + 0x28) + 0xf8))(*(long **)(this + 0x28),pbVar11);
  if ((uVar8 & 1) == 0) {
LAB_00a63c78:
    pMVar7 = (Manifest *)0x0;
  }
  else {
    pMVar7 = operator_new(400,(nothrow_t *)&std::nothrow);
    if (pMVar7 != (Manifest *)0x0) {
      local_80 = (byte *)0x0;
      local_78 = (byte *)0x0;
      local_70 = (void *)0x0;
      Manifest::Manifest(pMVar7,(basic_string *)&local_80);
      if (((ulong)local_80 & 1) != 0) {
        operator_delete(local_70);
      }
      Manifest::parseFile(pMVar7,pbVar11);
      uVar8 = Manifest::isLoaded(pMVar7);
      if ((uVar8 & 1) == 0) {
        (**(code **)(**(long **)(this + 0x28) + 0x138))(*(long **)(this + 0x28),pbVar11);
        Ref::release((Ref *)pMVar7);
        goto LAB_00a63c78;
      }
    }
  }
  pvVar9 = (vector *)(**(code **)(**(long **)(this + 0x28) + 0x80))();
                    /* try { // try from 00a63c94 to 00b63d9b has its CatchHandler @ 00a63a9c */
  std::__ndk1::
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
            *)&local_80,pvVar9);
  if (pMVar7 != (Manifest *)0x0) {
    Manifest::getSearchPaths();
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
              *)&local_b0,(vector *)&local_80);
    puVar5 = local_90;
    if (local_98 != local_90) {
      pbVar15 = (byte *)((ulong)&local_d0 | 1);
      puVar21 = local_98;
      do {
        sStack_c8 = 0;
        local_c0 = (byte *)0x0;
        local_d0 = 0;
        if ((*puVar21 & 1) == 0) {
          local_c0 = (byte *)puVar21[2];
          sStack_c8 = puVar21[1];
          local_d0 = *puVar21;
        }
        else {
          uVar8 = puVar21[1];
          if (0xffffffffffffffef < uVar8) {
                    /* WARNING: Subroutine does not return */
            std::__ndk1::__basic_string_common<true>::__throw_length_error();
          }
          __src = (void *)puVar21[2];
          if (uVar8 < 0x17) {
                    /* catch() { ... } // from try @ 00a63b5c with catch @ 00a63d10 */
            local_d0 = (ulong)(byte)((int)uVar8 << 1);
                    /* catch() { ... } // from try @ 00a63b08 with catch @ 00a63d14 */
            pbVar17 = pbVar15;
            if (uVar8 != 0) goto LAB_00a63d3c;
          }
          else {
                    /* catch() { ... } // from try @ 00a63b00 with catch @ 00a63d1c */
            uVar19 = uVar8 + 0x10 & 0xfffffffffffffff0;
                    /* catch() { ... } // from try @ 00a63af4 with catch @ 00a63d24 */
            pbVar17 = operator_new(uVar19);
                    /* catch() { ... } // from try @ 00a63b20 with catch @ 00a63d2c */
            local_d0 = uVar19 | 1;
            sStack_c8 = uVar8;
            local_c0 = pbVar17;
LAB_00a63d3c:
                    /* catch() { ... } // from try @ 00a63b6c with catch @ 00a63d3c */
            memcpy(pbVar17,__src,uVar8);
          }
          pbVar17[uVar8] = 0;
        }
        pbVar20 = local_a8;
        pbVar17 = local_b0;
        if (local_b0 != local_a8) {
          pbVar18 = local_b0;
          __n = local_d0 >> 1 & 0x7f;
          pbVar16 = pbVar15;
          if ((local_d0 & 1) != 0) {
            __n = sStack_c8;
            pbVar16 = local_c0;
          }
          do {
            bVar3 = *pbVar18;
            sVar1 = (ulong)(bVar3 >> 1);
            if ((bVar3 & 1) != 0) {
              sVar1 = *(size_t *)(pbVar18 + 8);
            }
            if (sVar1 == __n) {
              pbVar13 = *(byte **)(pbVar18 + 0x10);
              if ((bVar3 & 1) == 0) {
                pbVar13 = pbVar18 + 1;
              }
                    /* try { // try from 00a63d9c to 00b63def has its CatchHandler @ 00a63d9c
                       catch() { ... } // from try @ 00a63d9c with catch @ 00a63d9c
                       catch() { ... } // from try @ 00a63ee4 with catch @ 00a63d9c */
              pbVar17 = pbVar18;
              if ((bVar3 & 1) == 0) {
                if (__n == 0) break;
                lVar12 = -(ulong)(bVar3 >> 1);
                pbVar13 = pbVar16;
                pbVar10 = pbVar18;
                while (pbVar10 = pbVar10 + 1, *pbVar10 == *pbVar13) {
                  lVar12 = lVar12 + 1;
                  pbVar13 = pbVar13 + 1;
                  if (lVar12 == 0) goto LAB_00a63df8;
                }
              }
              else if ((__n == 0) || (iVar6 = memcmp(pbVar13,pbVar16,__n), iVar6 == 0)) break;
            }
            pbVar18 = pbVar18 + 0x18;
            pbVar17 = pbVar20;
                    /* try { // try from 00a63df0 to 00b63dfb has its CatchHandler @ 00a63f20 */
          } while (pbVar18 != pbVar20);
        }
LAB_00a63df8:
        pbVar18 = local_a8;
                    /* try { // try from 00a63dfc to 00b63e03 has its CatchHandler @ 00a63f1c */
        if (pbVar17 != pbVar20) {
                    /* try { // try from 00a63e04 to 00b63ee3 has its CatchHandler @ 00a63f28 */
          if (pbVar17 + 0x18 != pbVar20) {
            pbVar18 = pbVar17;
            do {
              if ((*pbVar18 & 1) == 0) {
                pbVar18[0] = 0;
                pbVar18[1] = 0;
              }
              else {
                **(undefined1 **)(pbVar18 + 0x10) = 0;
                pbVar18[8] = 0;
                pbVar18[9] = 0;
                pbVar18[10] = 0;
                pbVar18[0xb] = 0;
                pbVar18[0xc] = 0;
                pbVar18[0xd] = 0;
                pbVar18[0xe] = 0;
                pbVar18[0xf] = 0;
                if ((*pbVar18 & 1) != 0) {
                  operator_delete(*(void **)(pbVar18 + 0x10));
                  pbVar18[0] = 0;
                  pbVar18[1] = 0;
                  pbVar18[2] = 0;
                  pbVar18[3] = 0;
                  pbVar18[4] = 0;
                  pbVar18[5] = 0;
                  pbVar18[6] = 0;
                  pbVar18[7] = 0;
                }
              }
              uVar22 = *(undefined8 *)(pbVar18 + 0x20);
              uVar14 = *(undefined8 *)(pbVar18 + 0x18);
              pbVar17 = pbVar18 + 0x18;
              pbVar18[0x18] = 0;
              pbVar18[0x19] = 0;
              pbVar18[0x1a] = 0;
              pbVar18[0x1b] = 0;
              pbVar18[0x1c] = 0;
              pbVar18[0x1d] = 0;
              pbVar18[0x1e] = 0;
              pbVar18[0x1f] = 0;
              pbVar18[0x20] = 0;
              pbVar18[0x21] = 0;
              pbVar18[0x22] = 0;
              pbVar18[0x23] = 0;
              pbVar18[0x24] = 0;
              pbVar18[0x25] = 0;
              pbVar18[0x26] = 0;
              pbVar18[0x27] = 0;
              *(undefined8 *)(pbVar18 + 0x10) = *(undefined8 *)(pbVar18 + 0x28);
              *(undefined8 *)(pbVar18 + 8) = uVar22;
              *(undefined8 *)pbVar18 = uVar14;
              pbVar18[0x28] = 0;
              pbVar18[0x29] = 0;
              pbVar18[0x2a] = 0;
              pbVar18[0x2b] = 0;
              pbVar18[0x2c] = 0;
              pbVar18[0x2d] = 0;
              pbVar18[0x2e] = 0;
              pbVar18[0x2f] = 0;
              pbVar18 = pbVar17;
            } while (pbVar20 + -0x18 != pbVar17);
            pbVar20 = local_a8;
            if (local_a8 == pbVar17) goto LAB_00a63e98;
          }
          do {
            pbVar16 = pbVar20 + -0x18;
            if ((*pbVar16 & 1) != 0) {
              operator_delete(*(void **)(pbVar20 + -8));
            }
            pbVar20 = pbVar16;
            pbVar18 = pbVar17;
          } while (pbVar17 != pbVar16);
        }
LAB_00a63e98:
        local_a8 = pbVar18;
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
        puVar21 = puVar21 + 3;
      } while (puVar21 != puVar5);
    }
    (**(code **)(**(long **)(this + 0x28) + 0x78))(*(long **)(this + 0x28),&local_b0);
    pbVar15 = local_b0;
    pbVar17 = local_a8;
    if (local_b0 != (byte *)0x0) {
      while (pbVar20 = pbVar17, pbVar20 != pbVar15) {
        pbVar17 = pbVar20 + -0x18;
                    /* try { // try from 00a63ee4 to 00b63f43 has its CatchHandler @ 00a63d9c */
        if ((*pbVar17 & 1) != 0) {
          operator_delete(*(void **)(pbVar20 + -8));
        }
      }
      local_a8 = pbVar15;
      operator_delete(local_b0);
    }
    puVar5 = local_98;
                    /* catch() { ... } // from try @ 00a63dfc with catch @ 00a63f1c */
    if (local_98 != (ulong *)0x0) {
                    /* catch() { ... } // from try @ 00a63e04 with catch @ 00a63f28 */
      while (puVar21 = local_90, puVar21 != puVar5) {
        local_90 = puVar21 + -3;
        if ((*local_90 & 1) != 0) {
          operator_delete((void *)puVar21[-1]);
        }
      }
      local_90 = puVar5;
      operator_delete(local_98);
    }
  }
  Manifest::parseFile(*(Manifest **)(this + 0xe0),(basic_string *)this_00);
  if (pMVar7 != (Manifest *)0x0) {
    (**(code **)(**(long **)(this + 0x28) + 0x78))(*(long **)(this + 0x28),&local_80);
  }
  uVar8 = Manifest::isLoaded(*(Manifest **)(this + 0xe0));
  if ((uVar8 & 1) != 0) {
    if (pMVar7 != (Manifest *)0x0) {
                    /* try { // try from 00a63f9c to 00b63fa3 has its CatchHandler @ 00a641cc */
      uVar8 = Manifest::versionGreater(*(Manifest **)(this + 0xe0),pMVar7,this + 0x1d0);
                    /* try { // try from 00a63fa8 to 00b63faf has its CatchHandler @ 00a641c4 */
      if ((uVar8 & 1) == 0) {
        if (*(Ref **)(this + 0xe0) != (Ref *)0x0) {
          Ref::release(*(Ref **)(this + 0xe0));
        }
        *(Manifest **)(this + 0xe0) = pMVar7;
      }
      else {
                    /* try { // try from 00a63fb0 to 00b63fbf has its CatchHandler @ 00a641bc */
        (**(code **)(**(long **)(this + 0x28) + 0x130))(*(long **)(this + 0x28),this + 0x50);
                    /* try { // try from 00a63fc8 to 00b64003 has its CatchHandler @ 00a641d4 */
        (**(code **)(**(long **)(this + 0x28) + 0x128))(*(long **)(this + 0x28),this + 0x50);
        Ref::release((Ref *)pMVar7);
      }
    }
    uVar14 = Manifest::getAssets(*(Manifest **)(this + 0xe0));
    *(undefined8 *)(this + 0x48) = uVar14;
                    /* try { // try from 00a64004 to 00b64013 has its CatchHandler @ 00a641b8 */
    Manifest::prependSearchPaths();
  }
  uVar8 = Manifest::isLoaded(*(Manifest **)(this + 0xe0));
                    /* try { // try from 00a64014 to 00b6413b has its CatchHandler @ 00a641e4 */
  if ((uVar8 & 1) == 0) {
    local_98 = (ulong *)0x0;
    local_90 = (ulong *)0x0;
    local_88 = (void *)0x0;
    local_b0 = (byte *)0x0;
    local_a8 = (byte *)0x0;
    local_a0 = (void *)0x0;
    dispatchUpdateEvent(this,0,&local_98,&local_b0,0,0);
    if (((ulong)local_b0 & 1) != 0) {
      operator_delete(local_a0);
    }
    if (((ulong)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
    uVar14 = 0;
    pbVar15 = local_80;
  }
  else {
    initManifests(this);
    uVar14 = 1;
    *(undefined4 *)(this + 0x30) = 1;
    pbVar15 = local_80;
  }
  local_80 = pbVar15;
  pbVar17 = local_78;
  if (pbVar15 != (byte *)0x0) {
    while (pbVar20 = pbVar17, pbVar20 != pbVar15) {
      pbVar17 = pbVar20 + -0x18;
      if ((*pbVar17 & 1) != 0) {
        operator_delete(*(void **)(pbVar20 + -8));
      }
    }
    local_78 = pbVar15;
    operator_delete(local_80);
  }
LAB_00a63b50:
                    /* try { // try from 00a63b5c to 00b63b6b has its CatchHandler @ 00a63d10 */
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* try { // try from 00a63b6c to 00b63c93 has its CatchHandler @ 00a63d3c */
  return uVar14;
}

