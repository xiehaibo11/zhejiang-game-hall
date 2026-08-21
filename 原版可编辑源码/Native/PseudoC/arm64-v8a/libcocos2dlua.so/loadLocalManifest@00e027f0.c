
/* cocos2d::extension::AssetsManagerEx::loadLocalManifest(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void cocos2d::extension::AssetsManagerEx::loadLocalManifest(basic_string *param_1)

{
  basic_string *pbVar1;
  size_t sVar2;
  size_t __n;
  byte bVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  int iVar8;
  ulong uVar9;
  Manifest *this;
  byte *pbVar10;
  byte *pbVar11;
  size_t sVar12;
  undefined8 uVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte *pbVar17;
  undefined8 uVar18;
  vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
  local_b0;
  undefined7 uStack_af;
  byte *local_a8;
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined7 uStack_97;
  byte *local_90;
  void *local_88;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_80;
  undefined7 uStack_7f;
  byte *local_78;
  void *local_70;
  long local_68;
  
                    /* try { // try from 00e027fc to 00f02813 has its CatchHandler @ 00e02aec */
  lVar4 = tpidr_el0;
                    /* try { // try from 00e02814 to 00f0283b has its CatchHandler @ 00e02790 */
  local_68 = *(long *)(lVar4 + 0x28);
  pbVar1 = param_1 + 0xb8;
  uVar9 = (**(code **)(**(long **)(param_1 + 0x48) + 0x128))(*(long **)(param_1 + 0x48),pbVar1);
  if ((uVar9 & 1) != 0) {
                    /* try { // try from 00e0283c to 00f02847 has its CatchHandler @ 00e02ae8 */
    this = operator_new(0x1a8,(nothrow_t *)&std::nothrow);
                    /* try { // try from 00e0284c to 00f02853 has its CatchHandler @ 00e02ae4 */
    if (this == (Manifest *)0x0) goto LAB_00e028b8;
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_80,"");
    Manifest::Manifest(this,(basic_string *)&local_80);
    if (((byte)local_80 & 1) != 0) {
                    /* try { // try from 00e02878 to 00f02883 has its CatchHandler @ 00e02a9c */
      operator_delete(local_70);
    }
    Manifest::parse(this,pbVar1);
                    /* try { // try from 00e02890 to 00f0289b has its CatchHandler @ 00e02a4c */
    uVar9 = Manifest::isLoaded(this);
    if ((uVar9 & 1) != 0) goto LAB_00e028b8;
                    /* try { // try from 00e028a8 to 00f028b3 has its CatchHandler @ 00e02a40 */
    (**(code **)(**(long **)(param_1 + 0x48) + 0x178))(*(long **)(param_1 + 0x48),pbVar1);
    Ref::release((Ref *)this);
  }
  this = (Manifest *)0x0;
LAB_00e028b8:
                    /* try { // try from 00e028bc to 00f028c7 has its CatchHandler @ 00e02a98 */
  (**(code **)(**(long **)(param_1 + 0x48) + 0x90))(&local_80);
  if (this != (Manifest *)0x0) {
                    /* try { // try from 00e028d4 to 00f028df has its CatchHandler @ 00e02a3c */
    Manifest::getSearchPaths();
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::vector(&local_b0,(vector *)&local_80);
    pbVar7 = local_90;
    pbVar10 = local_a8;
                    /* try { // try from 00e028ec to 00f028f7 has its CatchHandler @ 00e02a38 */
    for (pbVar11 = (byte *)CONCAT71(uStack_97,local_98); pbVar11 != pbVar7; pbVar11 = pbVar11 + 0x18
        ) {
      pbVar15 = (byte *)CONCAT71(uStack_af,local_b0);
      pbVar16 = pbVar15;
                    /* try { // try from 00e02918 to 00f02923 has its CatchHandler @ 00e02a34 */
      if (pbVar15 != pbVar10) {
        __n = *(size_t *)(pbVar11 + 8);
        pbVar17 = *(byte **)(pbVar11 + 0x10);
        if ((*pbVar11 & 1) == 0) {
                    /* try { // try from 00e02930 to 00f0293b has its CatchHandler @ 00e02a30 */
          pbVar17 = pbVar11 + 1;
          __n = (ulong)(*pbVar11 >> 1);
        }
        do {
                    /* try { // try from 00e02944 to 00f0294b has its CatchHandler @ 00e02a90 */
          bVar3 = *pbVar15;
          sVar12 = (size_t)(bVar3 >> 1);
                    /* try { // try from 00e02950 to 00f0295b has its CatchHandler @ 00e02a8c */
          sVar2 = sVar12;
          if ((bVar3 & 1) != 0) {
            sVar2 = *(size_t *)(pbVar15 + 8);
          }
                    /* try { // try from 00e0295c to 00f02967 has its CatchHandler @ 00e02a74 */
          if (sVar2 == __n) {
            pbVar14 = *(byte **)(pbVar15 + 0x10);
                    /* try { // try from 00e02968 to 00f0297b has its CatchHandler @ 00e02a5c */
            if ((bVar3 & 1) == 0) {
              pbVar14 = pbVar15 + 1;
            }
            pbVar5 = pbVar15;
            pbVar6 = pbVar17;
            sVar2 = __n;
            pbVar16 = pbVar15;
            if ((bVar3 & 1) == 0) {
              while( true ) {
                if (sVar2 == 0) goto LAB_00e029bc;
                    /* try { // try from 00e0297c to 00f02aff has its CatchHandler @ 00e02790 */
                if (pbVar5[1] != *pbVar6) break;
                sVar12 = sVar12 - 1;
                pbVar5 = pbVar5 + 1;
                pbVar6 = pbVar6 + 1;
                sVar2 = sVar12;
              }
            }
            else if ((__n == 0) || (iVar8 = memcmp(pbVar14,pbVar17,__n), iVar8 == 0)) break;
          }
          pbVar15 = pbVar15 + 0x18;
          pbVar16 = pbVar10;
        } while (pbVar15 != pbVar10);
      }
LAB_00e029bc:
      pbVar15 = local_a8;
      if (pbVar16 != pbVar10) {
        pbVar17 = pbVar10;
        if (pbVar16 + 0x18 != pbVar10) {
          pbVar15 = pbVar16;
          do {
            if ((*pbVar15 & 1) == 0) {
              pbVar15[0] = 0;
              pbVar15[1] = 0;
            }
            else {
              **(undefined1 **)(pbVar15 + 0x10) = 0;
              pbVar15[8] = 0;
              pbVar15[9] = 0;
              pbVar15[10] = 0;
              pbVar15[0xb] = 0;
              pbVar15[0xc] = 0;
              pbVar15[0xd] = 0;
              pbVar15[0xe] = 0;
              pbVar15[0xf] = 0;
              if ((*pbVar15 & 1) != 0) {
                operator_delete(*(void **)(pbVar15 + 0x10));
                pbVar15[0] = 0;
                pbVar15[1] = 0;
                pbVar15[2] = 0;
                pbVar15[3] = 0;
                pbVar15[4] = 0;
                pbVar15[5] = 0;
                pbVar15[6] = 0;
                pbVar15[7] = 0;
              }
            }
            uVar18 = *(undefined8 *)(pbVar15 + 0x20);
            uVar13 = *(undefined8 *)(pbVar15 + 0x28);
            pbVar16 = pbVar15 + 0x18;
            pbVar15[0x20] = 0;
            pbVar15[0x21] = 0;
            pbVar15[0x22] = 0;
            pbVar15[0x23] = 0;
            pbVar15[0x24] = 0;
            pbVar15[0x25] = 0;
            pbVar15[0x26] = 0;
            pbVar15[0x27] = 0;
            pbVar15[0x28] = 0;
            pbVar15[0x29] = 0;
            pbVar15[0x2a] = 0;
            pbVar15[0x2b] = 0;
            pbVar15[0x2c] = 0;
            pbVar15[0x2d] = 0;
            pbVar15[0x2e] = 0;
            pbVar15[0x2f] = 0;
            *(undefined8 *)(pbVar15 + 8) = uVar18;
            *(undefined8 *)pbVar15 = *(undefined8 *)(pbVar15 + 0x18);
            *(undefined8 *)(pbVar15 + 0x10) = uVar13;
            pbVar15[0x18] = 0;
            pbVar15[0x19] = 0;
            pbVar15[0x1a] = 0;
            pbVar15[0x1b] = 0;
            pbVar15[0x1c] = 0;
            pbVar15[0x1d] = 0;
            pbVar15[0x1e] = 0;
            pbVar15[0x1f] = 0;
            pbVar15 = pbVar16;
          } while (pbVar10 + -0x18 != pbVar16);
                    /* catch() { ... } // from try @ 00e02930 with catch @ 00e02a30 */
          pbVar17 = local_a8;
          pbVar10 = pbVar16;
                    /* catch() { ... } // from try @ 00e02918 with catch @ 00e02a34 */
          if (local_a8 == pbVar16) goto LAB_00e02904;
        }
                    /* catch() { ... } // from try @ 00e028ec with catch @ 00e02a38 */
                    /* catch() { ... } // from try @ 00e028d4 with catch @ 00e02a3c */
        bVar3 = pbVar17[-0x18];
        pbVar10 = pbVar17 + -0x18;
        while( true ) {
          pbVar14 = pbVar10;
                    /* catch() { ... } // from try @ 00e028a8 with catch @ 00e02a40 */
          if ((bVar3 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e02968 with catch @ 00e02a5c */
            operator_delete(*(void **)(pbVar17 + -8));
          }
          pbVar10 = pbVar16;
          pbVar15 = pbVar16;
                    /* catch() { ... } // from try @ 00e02890 with catch @ 00e02a4c */
          if (pbVar16 == pbVar14) break;
          bVar3 = pbVar14[-0x18];
          pbVar10 = pbVar14 + -0x18;
          pbVar17 = pbVar14;
        }
      }
LAB_00e02904:
      local_a8 = pbVar15;
    }
                    /* catch() { ... } // from try @ 00e0295c with catch @ 00e02a74 */
    (**(code **)(**(long **)(param_1 + 0x48) + 0x88))(*(long **)(param_1 + 0x48),&local_b0);
    pbVar11 = (byte *)CONCAT71(uStack_af,local_b0);
    if (pbVar11 != (byte *)0x0) {
      pbVar10 = pbVar11;
      if (local_a8 != pbVar11) {
                    /* catch() { ... } // from try @ 00e02950 with catch @ 00e02a8c */
                    /* catch() { ... } // from try @ 00e02944 with catch @ 00e02a90 */
        bVar3 = local_a8[-0x18];
        pbVar7 = local_a8 + -0x18;
        pbVar10 = local_a8;
        while( true ) {
          pbVar15 = pbVar7;
                    /* catch() { ... } // from try @ 00e02900 with catch @ 00e02a94 */
          if ((bVar3 & 1) != 0) {
            operator_delete(*(void **)(pbVar10 + -8));
          }
                    /* catch() { ... } // from try @ 00e028bc with catch @ 00e02a98 */
                    /* catch() { ... } // from try @ 00e02878 with catch @ 00e02a9c */
          if (pbVar11 == pbVar15) break;
          bVar3 = pbVar15[-0x18];
          pbVar7 = pbVar15 + -0x18;
          pbVar10 = pbVar15;
        }
        pbVar10 = (byte *)CONCAT71(uStack_af,local_b0);
      }
      local_a8 = pbVar11;
      operator_delete(pbVar10);
    }
    pbVar11 = (byte *)CONCAT71(uStack_97,local_98);
    if (pbVar11 != (byte *)0x0) {
      if (local_90 != pbVar11) {
                    /* catch() { ... } // from try @ 00e0284c with catch @ 00e02ae4 */
        bVar3 = local_90[-0x18];
        pbVar10 = local_90 + -0x18;
        while( true ) {
          pbVar7 = pbVar10;
                    /* catch() { ... } // from try @ 00e0283c with catch @ 00e02ae8 */
          if ((bVar3 & 1) != 0) {
            operator_delete(*(void **)(local_90 + -8));
                    /* try { // try from 00e02b08 to 00f02b5f has its CatchHandler @ 00e02b08
                       catch() { ... } // from try @ 00e02b08 with catch @ 00e02b08
                       catch() { ... } // from try @ 00e02b78 with catch @ 00e02b08
                       catch() { ... } // from try @ 00e02bcc with catch @ 00e02b08 */
          }
                    /* catch() { ... } // from try @ 00e027fc with catch @ 00e02aec */
          if (pbVar11 == pbVar7) break;
          bVar3 = pbVar7[-0x18];
          pbVar10 = pbVar7 + -0x18;
          local_90 = pbVar7;
        }
        pbVar11 = (byte *)CONCAT71(uStack_97,local_98);
      }
      operator_delete(pbVar11);
    }
  }
  Manifest::parse(*(Manifest **)(param_1 + 0x100),param_1 + 0xe8);
  if (this != (Manifest *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x48) + 0x88))(*(long **)(param_1 + 0x48),&local_80);
  }
  uVar9 = Manifest::isLoaded(*(Manifest **)(param_1 + 0x100));
  if ((uVar9 & 1) != 0) {
    if (this != (Manifest *)0x0) {
                    /* try { // try from 00e02b60 to 00f02b6b has its CatchHandler @ 00e02c48 */
      uVar9 = Manifest::versionGreater(*(Manifest **)(param_1 + 0x100),this,param_1 + 0x1e0);
      if ((uVar9 & 1) == 0) {
        if (*(Ref **)(param_1 + 0x100) != (Ref *)0x0) {
          Ref::release(*(Ref **)(param_1 + 0x100));
        }
                    /* try { // try from 00e02bac to 00f02bb7 has its CatchHandler @ 00e02c30 */
        *(Manifest **)(param_1 + 0x100) = this;
      }
      else {
                    /* try { // try from 00e02b70 to 00f02b77 has its CatchHandler @ 00e02c44 */
                    /* try { // try from 00e02b78 to 00f02bab has its CatchHandler @ 00e02b08 */
        (**(code **)(**(long **)(param_1 + 0x48) + 0x168))
                  (*(long **)(param_1 + 0x48),param_1 + 0x70);
        (**(code **)(**(long **)(param_1 + 0x48) + 0x158))
                  (*(long **)(param_1 + 0x48),param_1 + 0x70);
        Ref::release((Ref *)this);
      }
    }
    uVar13 = Manifest::getAssets(*(Manifest **)(param_1 + 0x100));
                    /* try { // try from 00e02bb8 to 00f02bcb has its CatchHandler @ 00e02c18 */
    *(undefined8 *)(param_1 + 0x68) = uVar13;
    Manifest::prependSearchPaths();
  }
                    /* try { // try from 00e02bcc to 00f02c6b has its CatchHandler @ 00e02b08 */
  uVar9 = Manifest::isLoaded(*(Manifest **)(param_1 + 0x100));
  if ((uVar9 & 1) == 0) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(&local_98,"");
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>
              ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
               &local_b0,"");
    dispatchUpdateEvent((AssetsManagerEx *)param_1,0,&local_98,&local_b0,0,0);
    if (((byte)local_b0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e02bb8 with catch @ 00e02c18 */
      operator_delete(local_a0);
    }
    if (((byte)local_98 & 1) != 0) {
      operator_delete(local_88);
    }
  }
                    /* catch() { ... } // from try @ 00e02bac with catch @ 00e02c30 */
  pbVar11 = (byte *)CONCAT71(uStack_7f,local_80);
  if (pbVar11 != (byte *)0x0) {
    if (local_78 != pbVar11) {
                    /* catch() { ... } // from try @ 00e02b70 with catch @ 00e02c44 */
                    /* catch() { ... } // from try @ 00e02b60 with catch @ 00e02c48 */
      bVar3 = local_78[-0x18];
      pbVar10 = local_78 + -0x18;
      while( true ) {
        pbVar7 = pbVar10;
        if ((bVar3 & 1) != 0) {
          operator_delete(*(void **)(local_78 + -8));
        }
        if (pbVar11 == pbVar7) break;
        bVar3 = pbVar7[-0x18];
        pbVar10 = pbVar7 + -0x18;
        local_78 = pbVar7;
      }
      pbVar11 = (byte *)CONCAT71(uStack_7f,local_80);
    }
    operator_delete(pbVar11);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

