
/* WARNING: Type propagation algorithm not settling */
/* cocos2d::extension::AssetsManagerEx::updateSucceed() */

void __thiscall cocos2d::extension::AssetsManagerEx::updateSucceed(AssetsManagerEx *this)

{
  AssetsManagerEx *pAVar1;
  byte bVar2;
  basic_string *pbVar3;
  long lVar4;
  byte *pbVar5;
  byte *pbVar6;
  ulong uVar7;
  undefined1 *puVar8;
  long *plVar9;
  ulong uVar10;
  Ref *this_00;
  Manifest *this_01;
  undefined8 uVar11;
  basic_string *pbVar12;
  uint uVar13;
  byte *pbVar14;
  byte *pbVar15;
  ulong local_108;
  basic_string *pbStack_100;
  undefined1 *local_f8;
  ulong local_f0;
  basic_string *pbStack_e8;
  undefined1 *local_e0;
  ulong local_d0;
  basic_string *pbStack_c8;
  undefined1 *local_c0;
  byte *local_b8;
  byte *local_b0;
  void *local_a8;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_a0 [16];
  void *local_90;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [16];
  void *local_78;
  long local_70;
  
  lVar4 = tpidr_el0;
  local_70 = *(long *)(lVar4 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,"project.manifest.temp");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_a0,"project.manifest");
  pAVar1 = this + 0x88;
  (**(code **)(**(long **)(this + 0x48) + 0x188))(*(long **)(this + 0x48),pAVar1,local_88,local_a0);
  uVar7 = (**(code **)(**(long **)(this + 0x48) + 0x148))(*(long **)(this + 0x48),pAVar1);
  if ((uVar7 & 1) != 0) {
    local_b0 = (byte *)0x0;
    local_a8 = (void *)0x0;
    local_b8 = (byte *)0x0;
    pbVar12 = (basic_string *)&local_b8;
    (**(code **)(**(long **)(this + 0x48) + 0x1c8))(*(long **)(this + 0x48),pAVar1);
    if (((byte)*pAVar1 & 1) == 0) {
      uVar13 = (uint)((byte)*pAVar1 >> 1);
    }
    else {
      uVar13 = (uint)*(undefined8 *)(this + 0x90);
    }
    pbStack_c8 = (basic_string *)0x0;
    local_c0 = (undefined1 *)0x0;
    local_d0 = 0;
    pbStack_e8 = (basic_string *)0x0;
    local_e0 = (undefined1 *)0x0;
    local_f0 = 0;
    if (local_b8 != local_b0) {
      uVar7 = (ulong)(int)uVar13;
      pbVar15 = local_b8;
      do {
        pbStack_100 = (basic_string *)0x0;
        local_f8 = (undefined1 *)0x0;
        local_108 = 0;
        bVar2 = *pbVar15;
        uVar10 = (ulong)(bVar2 >> 1);
        if ((bVar2 & 1) != 0) {
          uVar10 = *(ulong *)(pbVar15 + 8);
        }
        pbVar3 = (basic_string *)(uVar10 - uVar7);
        if (uVar10 < uVar7) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
        }
        pbVar14 = *(byte **)(pbVar15 + 0x10);
        if ((bVar2 & 1) == 0) {
          pbVar14 = pbVar15 + 1;
        }
        if ((basic_string *)0xffffffffffffffef < pbVar3) {
                    /* try { // try from 00e04e40 to 00f04ec7 has its CatchHandler @ 00e04db0 */
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
        if (pbVar3 < (basic_string *)0x17) {
          local_108 = (ulong)(byte)((int)pbVar3 << 1);
          puVar8 = (undefined1 *)((ulong)&local_108 | 1);
          if (pbVar3 != (basic_string *)0x0) goto LAB_00e04b4c;
        }
        else {
          puVar8 = operator_new((ulong)(pbVar3 + 0x10) & 0xfffffffffffffff0);
          local_108 = (ulong)(pbVar3 + 0x10) & 0xfffffffffffffff0 | 1;
          pbStack_100 = pbVar3;
          local_f8 = puVar8;
LAB_00e04b4c:
          pbVar12 = pbVar3;
          memcpy(puVar8,pbVar14 + uVar7,(size_t)pbVar3);
        }
        puVar8[(long)pbVar3] = 0;
        if ((local_d0 & 1) != 0) {
          *local_c0 = 0;
          pbStack_c8 = (basic_string *)0x0;
          if ((local_d0 & 1) != 0) {
            operator_delete(local_c0);
          }
        }
        pbStack_c8 = pbStack_100;
        local_d0 = local_108;
        local_c0 = local_f8;
        std::__ndk1::operator+((__ndk1 *)(this + 0x70),(basic_string *)&local_d0,pbVar12);
        if ((local_f0 & 1) != 0) {
          *local_e0 = 0;
          pbStack_e8 = (basic_string *)0x0;
          if ((local_f0 & 1) != 0) {
            operator_delete(local_e0);
          }
        }
        pbStack_e8 = pbStack_100;
        local_f0 = local_108;
        local_e0 = local_f8;
        plVar9 = *(long **)(this + 0x48);
        pbVar3 = (basic_string *)(local_d0 >> 1 & 0x7f);
        puVar8 = (undefined1 *)((ulong)&local_d0 | 1);
        if ((local_d0 & 1) != 0) {
          pbVar3 = pbStack_c8;
          puVar8 = local_c0;
        }
                    /* try { // try from 00e04c1c to 00f04c4b has its CatchHandler @ 00e04c1c
                       catch() { ... } // from try @ 00e04c1c with catch @ 00e04c1c
                       catch() { ... } // from try @ 00e04c88 with catch @ 00e04c1c */
        if ((puVar8 + (long)pbVar3)[-1] == '/') {
          (**(code **)(*plVar9 + 0x158))(plVar9,&local_f0);
        }
        else {
          uVar10 = (**(code **)(*plVar9 + 0x128))(plVar9,&local_f0);
          if ((uVar10 & 1) != 0) {
            (**(code **)(**(long **)(this + 0x48) + 0x178))(*(long **)(this + 0x48),&local_f0);
          }
                    /* try { // try from 00e04c4c to 00f04c5b has its CatchHandler @ 00e04cc8 */
          pbVar12 = (basic_string *)&local_f0;
          (**(code **)(**(long **)(this + 0x48) + 0x198))(*(long **)(this + 0x48),pbVar15);
        }
        pbVar15 = pbVar15 + 0x18;
      } while (pbVar15 != local_b0);
    }
                    /* try { // try from 00e04c64 to 00f04c87 has its CatchHandler @ 00e04cd0 */
    (**(code **)(**(long **)(this + 0x48) + 0x168))(*(long **)(this + 0x48),pAVar1);
    if ((local_f0 & 1) != 0) {
                    /* catch() { ... } // from try @ 00e04c4c with catch @ 00e04cc8 */
      operator_delete(local_e0);
                    /* catch() { ... } // from try @ 00e04c64 with catch @ 00e04cd0 */
    }
    pbVar15 = local_b8;
    if ((local_d0 & 1) != 0) {
      operator_delete(local_c0);
      pbVar15 = local_b8;
    }
    local_b8 = pbVar15;
    if (pbVar15 != (byte *)0x0) {
      if (local_b0 != pbVar15) {
        bVar2 = local_b0[-0x18];
        pbVar6 = local_b0 + -0x18;
        pbVar14 = local_b0;
        while( true ) {
          pbVar5 = pbVar6;
          if ((bVar2 & 1) != 0) {
            operator_delete(*(void **)(pbVar14 + -8));
          }
          if (pbVar15 == pbVar5) break;
          bVar2 = pbVar5[-0x18];
          pbVar6 = pbVar5 + -0x18;
          pbVar14 = pbVar5;
        }
      }
      local_b0 = pbVar15;
      operator_delete(local_b8);
      this_00 = *(Ref **)(this + 0x100);
      goto joined_r0x00e04cec;
    }
  }
  this_00 = *(Ref **)(this + 0x100);
joined_r0x00e04cec:
  if (this_00 != (Ref *)0x0) {
    Ref::release(this_00);
  }
  this_01 = *(Manifest **)(this + 0x110);
  *(Manifest **)(this + 0x100) = this_01;
  if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this_01 + 0x30) !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (this + 0x70)) {
    uVar7 = *(ulong *)(this + 0x78);
    pAVar1 = *(AssetsManagerEx **)(this + 0x80);
    if (((byte)this[0x70] & 1) == 0) {
      pAVar1 = this + 0x71;
      uVar7 = (ulong)((byte)this[0x70] >> 1);
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (this_01 + 0x30),(char *)pAVar1,uVar7);
    this_01 = *(Manifest **)(this + 0x100);
  }
  *(undefined8 *)(this + 0x110) = 0;
  uVar11 = Manifest::getAssets(this_01);
  *(undefined8 *)(this + 0x68) = uVar11;
  Manifest::prependSearchPaths();
  *(undefined4 *)(this + 0x50) = 10;
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_b8,"");
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_d0,"");
  dispatchUpdateEvent(this,8,&local_b8,&local_d0,0,0);
                    /* try { // try from 00e04db0 to 00f04e03 has its CatchHandler @ 00e04db0
                       catch() { ... } // from try @ 00e04db0 with catch @ 00e04db0
                       catch() { ... } // from try @ 00e04e40 with catch @ 00e04db0 */
  if ((local_d0 & 1) != 0) {
                    /* try { // try from 00e04e04 to 00f04e13 has its CatchHandler @ 00e04e9c */
    operator_delete(local_c0);
  }
  if (((ulong)local_b8 & 1) != 0) {
    operator_delete(local_a8);
                    /* try { // try from 00e04e1c to 00f04e3f has its CatchHandler @ 00e04ea4 */
  }
  if (((byte)local_a0[0] & 1) != 0) {
    operator_delete(local_90);
  }
  if (((byte)local_88[0] & 1) != 0) {
    operator_delete(local_78);
  }
  if (*(long *)(lVar4 + 0x28) == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

