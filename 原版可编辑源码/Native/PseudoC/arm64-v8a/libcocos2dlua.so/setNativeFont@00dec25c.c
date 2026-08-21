
/* cocos2d::ui::EditBoxImplAndroid::setNativeFont(char const*, int) */

void __thiscall
cocos2d::ui::EditBoxImplAndroid::setNativeFont(EditBoxImplAndroid *this,char *param_1,int param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  ulong __n;
  long lVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  undefined1 *puVar9;
  ulong uVar10;
  GLView *this_00;
  ulong uVar11;
  float fVar12;
  ulong local_d0;
  ulong uStack_c8;
  undefined1 *local_c0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_b0 [16];
  void *local_a0;
  ulong local_98;
  ulong uStack_90;
  undefined1 *local_88;
  ulong local_80;
  ulong uStack_78;
  undefined1 *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  lVar6 = Director::getInstance();
  this_00 = *(GLView **)(lVar6 + 0x108);
  plVar7 = (long *)FileUtils::getInstance();
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,param_1);
  uVar8 = (**(code **)(*plVar7 + 0x128))(plVar7,&local_80);
                    /* try { // try from 00dec2cc to 00eec2d3 has its CatchHandler @ 00dec960 */
  if ((local_80 & 1) != 0) {
                    /* try { // try from 00dec2d4 to 00eec3d3 has its CatchHandler @ 00dec10c */
    operator_delete(local_70);
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_80,param_1);
  if ((uVar8 & 1) != 0) {
    plVar7 = (long *)FileUtils::getInstance();
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_b0,param_1);
    (**(code **)(*plVar7 + 0x50))(&local_98,plVar7,local_b0);
    if (((byte)local_80._0_1_ & 1) != 0) {
      *local_70 = 0;
      uStack_78 = 0;
      if (((byte)local_80._0_1_ & 1) != 0) {
        operator_delete(local_70);
      }
    }
    uStack_78 = uStack_90;
    local_80 = local_98;
    local_98 = 0;
    uStack_90 = 0;
    local_70 = local_88;
    local_88 = (undefined1 *)0x0;
    if (((byte)local_b0[0] & 1) != 0) {
      operator_delete(local_a0);
    }
    puVar2 = (undefined1 *)((ulong)&local_80 | 1);
    uVar8 = local_80 >> 1 & 0x7f;
    if ((local_80 & 1) != 0) {
      puVar2 = local_70;
      uVar8 = uStack_78;
    }
    if (6 < (long)uVar8) {
      puVar1 = puVar2 + uVar8;
      puVar9 = puVar2;
      do {
        if ((uVar8 - 6 == 0) ||
           (puVar9 = memchr(puVar9,0x61,uVar8 - 6), puVar9 == (undefined1 *)0x0)) break;
        iVar5 = memcmp(puVar9,"assets/",7);
        if (iVar5 == 0) {
                    /* try { // try from 00dec3e4 to 00eec3e7 has its CatchHandler @ 00dec998 */
          if ((puVar9 != puVar1) && (puVar9 == puVar2)) {
                    /* try { // try from 00dec3f4 to 00eec3f7 has its CatchHandler @ 00dec92c */
            uVar10 = __strlen_chk("assets/",8);
            uVar11 = local_80;
                    /* try { // try from 00dec400 to 00eec40f has its CatchHandler @ 00dec998 */
            uStack_90 = 0;
            local_88 = (undefined1 *)0x0;
                    /* try { // try from 00dec410 to 00eec4ff has its CatchHandler @ 00dec10c */
            uVar8 = local_80 >> 1 & 0x7f;
            if ((local_80 & 1) != 0) {
              uVar8 = uStack_78;
            }
            __n = uVar8 - uVar10;
            local_98 = 0;
            if (uVar8 < uVar10) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00dec614 to 00eec637 has its CatchHandler @ 00deca10 */
              std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
            }
            puVar2 = (undefined1 *)((ulong)&local_80 | 1);
            if ((local_80 & 1) != 0) {
              puVar2 = local_70;
            }
            if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (__n < 0x17) {
              puVar9 = (undefined1 *)((ulong)&local_98 | 1);
              local_98 = (ulong)(byte)((int)__n << 1);
              if (__n != 0) goto LAB_00dec47c;
            }
            else {
              uVar8 = __n + 0x10 & 0xfffffffffffffff0;
              puVar9 = operator_new(uVar8);
              local_98 = uVar8 | 1;
              uStack_90 = __n;
              local_88 = puVar9;
LAB_00dec47c:
              memcpy(puVar9,puVar2 + uVar10,__n);
            }
            puVar9[__n] = 0;
            if ((uVar11 & 1) != 0) {
              *local_70 = 0;
              uStack_78 = 0;
              if ((local_80 & 1) != 0) {
                operator_delete(local_70);
              }
            }
            uStack_78 = uStack_90;
            local_80 = local_98;
            local_70 = local_88;
          }
          break;
        }
        puVar9 = puVar9 + 1;
        uVar8 = (long)puVar1 - (long)puVar9;
                    /* try { // try from 00dec3d4 to 00eec3d7 has its CatchHandler @ 00dec95c */
      } while (6 < (long)uVar8);
    }
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>
            ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_98,"setFont");
  puVar2 = local_70;
  uVar8 = uStack_78;
  uVar3 = *(undefined4 *)(this + 0xb8);
  uStack_c8 = 0;
  local_c0 = (undefined1 *)0x0;
  local_d0 = 0;
  if ((local_80 & 1) == 0) {
    uStack_c8 = uStack_78;
    local_d0 = local_80;
    local_c0 = local_70;
                    /* try { // try from 00dec500 to 00eec503 has its CatchHandler @ 00dec958 */
    goto LAB_00dec568;
  }
  if (0xffffffffffffffef < uStack_78) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
                    /* try { // try from 00dec510 to 00eec513 has its CatchHandler @ 00dec93c */
  if (uStack_78 < 0x17) {
                    /* try { // try from 00dec520 to 00eec53b has its CatchHandler @ 00dec9c8 */
    puVar9 = (undefined1 *)((ulong)&local_d0 | 1);
    local_d0 = (ulong)(byte)((int)uStack_78 << 1);
    if (uStack_78 != 0) goto LAB_00dec554;
  }
  else {
    uVar11 = uStack_78 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 00dec53c to 00eec5fb has its CatchHandler @ 00dec10c */
    puVar9 = operator_new(uVar11);
    local_d0 = uVar11 | 1;
    uStack_c8 = uVar8;
    local_c0 = puVar9;
LAB_00dec554:
    memcpy(puVar9,puVar2,uVar8);
  }
  puVar9[uVar8] = 0;
LAB_00dec568:
  fVar12 = (float)GLView::getScaleX(this_00);
  JniHelper::
  callStaticVoidMethod<int,std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,float>
            (fVar12 * (float)param_2,&DAT_01788ac8,&local_98,uVar3,&local_d0);
  if ((local_d0 & 1) != 0) {
    operator_delete(local_c0);
  }
  if ((local_98 & 1) != 0) {
    operator_delete(local_88);
  }
                    /* try { // try from 00dec5fc to 00eec60f has its CatchHandler @ 00dec988 */
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

