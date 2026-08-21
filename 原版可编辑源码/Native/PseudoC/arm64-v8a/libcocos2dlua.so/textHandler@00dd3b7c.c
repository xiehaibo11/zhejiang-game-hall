
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* MyXMLVisitor::textHandler(void*, char const*, unsigned long) */

void __thiscall
MyXMLVisitor::textHandler(MyXMLVisitor *this,void *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  long lVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  basic_string *pbVar14;
  basic_string *pbVar15;
  uint uVar16;
  void *__dest;
  ulong uVar17;
  long lVar18;
  float fVar19;
  uint local_f4;
  ulong local_f0;
  undefined2 local_e8;
  basic_string local_e6;
  char local_e0;
  undefined2 local_df;
  undefined1 local_dd;
  int local_d4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_d0 [8];
  ulong local_c8;
  void *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b8 [16];
  void *local_a8;
  ulong local_a0;
  ulong local_98;
  void *local_90;
  RichElementText *local_88;
  long local_80;
  
  lVar5 = tpidr_el0;
  local_80 = *(long *)(lVar5 + 0x28);
  local_98 = 0;
  local_90 = (void *)0x0;
  local_a0 = 0;
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    __dest = (void *)((ulong)&local_a0 | 1);
    local_a0 = (ulong)(byte)((int)param_3 << 1);
    if (param_3 == 0) goto LAB_00dd3c18;
  }
  else {
                    /* try { // try from 00dd3bec to 00ed3bf7 has its CatchHandler @ 00dd4750 */
    uVar17 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar17);
    local_a0 = uVar17 | 1;
    local_98 = param_3;
    local_90 = __dest;
  }
  memcpy(__dest,param_2,param_3);
LAB_00dd3c18:
  *(undefined1 *)((long)__dest + param_3) = 0;
  pbVar3 = *(basic_string **)(this + 8);
  pbVar4 = *(basic_string **)(this + 0x10);
  pbVar15 = (basic_string *)&cocos2d::Color3B::WHITE;
  if (pbVar4 != pbVar3) {
    pbVar15 = (basic_string *)&cocos2d::Color3B::WHITE;
    pbVar14 = pbVar4;
    do {
      if (pbVar14[-0x29] != (basic_string)0x0) {
        pbVar15 = pbVar14 + -0x2c;
        break;
      }
      pbVar14 = pbVar14 + -0x60;
    } while (pbVar3 != pbVar14);
  }
  local_e6 = pbVar15[2];
  local_e8 = *(undefined2 *)pbVar15;
  do {
    while( true ) {
      if (pbVar3 == pbVar4) {
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string<decltype(nullptr)>(local_b8,"fonts/Marker Felt.ttf");
        goto LAB_00dd3cc4;
      }
      pbVar15 = pbVar4 + -0x60;
      if (((byte)*pbVar15 & 1) == 0) break;
      pbVar14 = pbVar4 + -0x58;
      pbVar4 = pbVar15;
      if (*(long *)pbVar14 != 0) goto LAB_00dd3ca8;
    }
                    /* try { // try from 00dd3c80 to 00ed3c8f has its CatchHandler @ 00dd47e4 */
    pbVar4 = pbVar15;
  } while ((byte)*pbVar15 >> 1 == 0);
LAB_00dd3ca8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_b8,pbVar15);
LAB_00dd3cc4:
  lVar18 = *(long *)(this + 8);
  lVar11 = *(long *)(this + 0x10);
  lVar12 = lVar11;
  if (lVar11 == lVar18) {
    bVar8 = false;
    uVar16 = 0;
    bVar7 = false;
    fVar19 = 12.0;
  }
  else {
    do {
      fVar19 = *(float *)(lVar12 + -0x30);
      lVar13 = lVar11;
      if (fVar19 != -1.0) goto LAB_00dd3cfc;
      lVar12 = lVar12 + -0x60;
    } while (lVar18 != lVar12);
                    /* try { // try from 00dd3cf4 to 00ed3d0f has its CatchHandler @ 00dd4824 */
    fVar19 = 12.0;
LAB_00dd3cfc:
    do {
      lVar12 = lVar11;
      if (*(char *)(lVar13 + -0x27) != '\0') {
        uVar16 = 1;
        goto LAB_00dd3d40;
      }
      lVar13 = lVar13 + -0x60;
    } while (lVar18 != lVar13);
    uVar16 = 0;
                    /* try { // try from 00dd3d14 to 00ed3d23 has its CatchHandler @ 00dd481c */
LAB_00dd3d40:
    do {
      lVar13 = lVar11;
      if (*(int *)(lVar12 + -0x24) == 1) {
        bVar7 = true;
        goto LAB_00dd3d68;
      }
      lVar12 = lVar12 + -0x60;
    } while (lVar18 != lVar12);
    bVar7 = false;
LAB_00dd3d68:
    do {
      lVar12 = lVar11;
      if (*(int *)(lVar13 + -0x24) == 2) {
        bVar8 = true;
        goto LAB_00dd3d90;
      }
      lVar13 = lVar13 + -0x60;
    } while (lVar18 != lVar13);
    bVar8 = false;
LAB_00dd3d90:
    do {
      if (*(char *)(lVar12 + -0x28) != '\0') {
        bVar6 = true;
        goto joined_r0x00dd3dbc;
      }
      lVar12 = lVar12 + -0x60;
    } while (lVar18 != lVar12);
  }
  bVar6 = false;
joined_r0x00dd3dbc:
  do {
    lVar12 = lVar11;
    if (lVar18 == lVar12) {
                    /* try { // try from 00dd3e00 to 00ed3e0f has its CatchHandler @ 00dd480c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      basic_string<decltype(nullptr)>(local_d0,"");
      goto LAB_00dd3e10;
    }
                    /* try { // try from 00dd3de0 to 00ed3dfb has its CatchHandler @ 00dd4814 */
    lVar11 = lVar12 + -0x60;
    if ((*(byte *)(lVar12 + -0x48) & 1) != 0) {
      if (*(long *)(lVar12 + -0x40) != 0) break;
      goto joined_r0x00dd3dbc;
    }
  } while (*(byte *)(lVar12 + -0x48) >> 1 == 0);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_d0,(basic_string *)(lVar12 + -0x48));
LAB_00dd3e10:
  lVar18 = *(long *)(this + 0x10);
  for (lVar11 = lVar18; lVar11 != *(long *)(this + 8); lVar11 = lVar11 + -0x60) {
    if (*(int *)(lVar11 + -0x20) == 1) {
      uVar17 = (ulong)*(uint *)(lVar11 + -0x18) << 0x20 | (ulong)*(uint3 *)(lVar11 + -0x1c) << 8 | 1
      ;
      goto joined_r0x00dd3e74;
    }
  }
  uVar17 = (ulong)_WHITE << 8 | 0xffffffff00000000;
joined_r0x00dd3e74:
  do {
    local_f0 = uVar17;
    if (lVar18 == *(long *)(this + 8)) break;
    if (*(int *)(lVar18 + -0x20) == 2) {
      local_e0 = '\x01';
      local_dd = *(undefined1 *)(lVar18 + -0x12);
      local_df = *(undefined2 *)(lVar18 + -0x14);
      cocos2d::Size::Size((Size *)((ulong)&local_e0 | 4),(Size *)(lVar18 + -0x10));
      local_d4 = *(int *)(lVar18 + -8);
      goto LAB_00dd3f08;
    }
    lVar18 = lVar18 + -0x60;
  } while( true );
  cocos2d::Size::Size((Size *)&local_88,2.0,-2.0);
  local_e0 = '\0';
  local_df = cocos2d::Color3B::BLACK;
  local_dd = DAT_01792444;
  cocos2d::Size::Size((Size *)((ulong)&local_e0 | 4),(Size *)&local_88);
  local_d4 = 0;
LAB_00dd3f08:
  iVar9 = local_d4;
  lVar18 = *(long *)(this + 0x10);
  do {
    if (lVar18 == *(long *)(this + 8)) {
                    /* try { // try from 00dd3f2c to 00ed3f47 has its CatchHandler @ 00dd47dc */
      local_f4 = (uint)_WHITE << 8;
LAB_00dd3f54:
      uVar1 = uVar16 | 2;
      if (!bVar6) {
        uVar1 = uVar16;
      }
      uVar16 = uVar1 | 4;
      if (!bVar7) {
        uVar16 = uVar1;
      }
      uVar1 = uVar16 | 8;
      if (!bVar8) {
        uVar1 = uVar16;
      }
      uVar2 = (ulong)((byte)local_d0[0] >> 1);
      if (((byte)local_d0[0] & 1) != 0) {
        uVar2 = local_c8;
      }
      if (uVar2 != 0) {
        uVar1 = uVar1 | 0x10;
      }
      if ((uVar17 & 0xff) != 0) {
        uVar1 = uVar1 | 0x20;
      }
      if (local_e0 != '\0') {
        uVar1 = uVar1 | 0x40;
      }
      if ((local_f4 & 0xff) != 0) {
        uVar1 = uVar1 | 0x80;
      }
      local_88 = operator_new(0xa0,(nothrow_t *)&std::nothrow);
      if (local_88 != (RichElementText *)0x0) {
        cocos2d::ui::RichElementText::RichElementText(local_88);
                    /* try { // try from 00dd4020 to 00ed403b has its CatchHandler @ 00dd4804 */
        cocos2d::ui::RichElementText::init
                  (local_88,0,(Color3B *)&local_e8,0xff,(basic_string *)&local_a0,
                   (basic_string *)local_b8,fVar19,uVar1,(basic_string *)local_d0,
                   (Color3B *)((ulong)&local_f0 | 1),(int)(uVar17 >> 0x20),
                   (Color3B *)((ulong)&local_e0 | 1),(Size *)((ulong)&local_e0 | 4),iVar9,
                   (Color3B *)((ulong)&local_f4 | 1));
                    /* try { // try from 00dd4040 to 00ed404f has its CatchHandler @ 00dd47fc */
        cocos2d::Ref::autorelease((Ref *)local_88);
      }
      lVar18 = *(long *)(this + 0x20);
      puVar10 = *(undefined8 **)(lVar18 + 0x500);
      if (puVar10 == *(undefined8 **)(lVar18 + 0x508)) {
        std::__ndk1::
        vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>::
        __push_back_slow_path<cocos2d::ui::RichElement*const&>
                  ((vector<cocos2d::ui::RichElement*,std::__ndk1::allocator<cocos2d::ui::RichElement*>>
                    *)(lVar18 + 0x4f8),(RichElement **)&local_88);
      }
      else {
        *puVar10 = local_88;
        *(undefined8 **)(lVar18 + 0x500) = puVar10 + 1;
      }
      cocos2d::Ref::retain((Ref *)local_88);
      *(undefined1 *)(lVar18 + 0x4f0) = 1;
      if (((byte)local_d0[0] & 1) != 0) {
        operator_delete(local_c0);
      }
      if (((byte)local_b8[0] & 1) != 0) {
        operator_delete(local_a8);
      }
      if ((local_a0 & 1) != 0) {
        operator_delete(local_90);
      }
      if (*(long *)(lVar5 + 0x28) == local_80) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      __stack_chk_fail();
    }
    if (*(int *)(lVar18 + -0x20) == 3) {
                    /* try { // try from 00dd3f4c to 00ed3f5b has its CatchHandler @ 00dd47e0 */
      local_f4 = (uint)*(uint3 *)(lVar18 + -4) << 8 | 1;
      goto LAB_00dd3f54;
    }
    lVar18 = lVar18 + -0x60;
  } while( true );
}

