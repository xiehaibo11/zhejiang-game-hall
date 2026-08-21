
/* cocos2d::PUParticleSystem3D::initWithFilePath(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall
cocos2d::PUParticleSystem3D::initWithFilePath(PUParticleSystem3D *this,basic_string *param_1)

{
  void *pvVar1;
  size_t sVar2;
  byte *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  long lVar5;
  size_t __n;
  long lVar6;
  ulong *puVar7;
  byte *pbVar8;
  ulong *puVar9;
  undefined7 uVar10;
  bool bVar11;
  int iVar12;
  long *plVar13;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *pbVar14;
  basic_string *pbVar15;
  PUScriptCompiler *this_00;
  list *plVar16;
  PUTranslateManager *this_01;
  byte bVar17;
  size_t sVar18;
  ulong uVar19;
  byte *pbVar20;
  undefined4 uVar21;
  ulong uVar22;
  void *pvVar23;
  ulong *puVar24;
  ulong *puVar25;
  ulong uVar26;
  ulong local_c8;
  ulong local_c0;
  void *local_b8;
  ulong local_b0;
  ulong local_a8;
  void *local_a0;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  byte *local_88;
  basic_string local_80 [8];
  ulong local_78;
  void *local_70;
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
                    /* try { // try from 00e1c740 to 00f1c74b has its CatchHandler @ 00e1cfd8 */
  plVar13 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar13 + 0x50))(local_80,plVar13,param_1);
  pvVar1 = (void *)((ulong)local_80 | 1);
  uVar22 = (ulong)((byte)local_80[0] >> 1);
  if (((byte)local_80[0] & 1) != 0) {
    pvVar1 = local_70;
    uVar22 = local_78;
  }
                    /* try { // try from 00e1c77c to 00f1c787 has its CatchHandler @ 00e1cfe8 */
  if (uVar22 == 0) {
LAB_00e1c79c:
    uVar22 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar22 == 0) goto LAB_00e1c79c;
      lVar6 = uVar22 - 1;
      uVar22 = uVar22 - 1;
    } while (*(char *)((long)pvVar1 + lVar6) != '/');
  }
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(&local_98,"materials");
  if (uVar22 != 0xffffffffffffffff) {
                    /* try { // try from 00e1c7c0 to 00f1c7c7 has its CatchHandler @ 00e1cf3c */
    local_a8 = 0;
    local_a0 = (void *)0x0;
    local_b0 = 0;
                    /* try { // try from 00e1c7c8 to 00f1c7f3 has its CatchHandler @ 00e1c684 */
    pvVar1 = (void *)((ulong)local_80 | 1);
    uVar26 = (ulong)((byte)local_80[0] >> 1);
    if (((byte)local_80[0] & 1) != 0) {
      pvVar1 = local_70;
      uVar26 = local_78;
    }
    if (uVar22 <= uVar26) {
      uVar26 = uVar22;
    }
    if (0xffffffffffffffef < uVar26) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar26 < 0x17) {
                    /* try { // try from 00e1c7f4 to 00f1c7ff has its CatchHandler @ 00e1cfe8 */
      pvVar23 = (void *)((ulong)&local_b0 | 1);
      local_b0 = (ulong)(byte)((int)uVar26 << 1);
      if (uVar26 != 0) goto LAB_00e1c828;
    }
    else {
      uVar22 = uVar26 + 0x10 & 0xfffffffffffffff0;
      pvVar23 = operator_new(uVar22);
      local_b0 = uVar22 | 1;
                    /* try { // try from 00e1c81c to 00f1c827 has its CatchHandler @ 00e1cf58 */
      local_a8 = uVar26;
      local_a0 = pvVar23;
LAB_00e1c828:
      memcpy(pvVar23,pvVar1,uVar26);
    }
    *(undefined1 *)((long)pvVar23 + uVar26) = 0;
    bVar17 = local_b0._0_1_ & 1;
    pvVar1 = (void *)((ulong)&local_b0 | 1);
    uVar22 = (ulong)(byte)(local_b0._0_1_ >> 1);
    if ((local_b0 & 1) != 0) {
      pvVar1 = local_a0;
      uVar22 = local_a8;
    }
                    /* try { // try from 00e1c860 to 00f1c86b has its CatchHandler @ 00e1cf64 */
    uVar26 = uVar22;
    if (uVar22 != 0) {
      do {
        uVar19 = uVar26;
        if (uVar19 == 0) goto LAB_00e1c9a0;
        uVar26 = uVar19 - 1;
      } while (*(char *)((long)pvVar1 + (uVar19 - 1)) != '/');
      if (uVar19 - 1 != 0xffffffffffffffff) {
        if (uVar19 <= uVar22) {
          uVar22 = uVar19;
        }
        local_c0 = 0;
        local_b8 = (void *)0x0;
        local_c8 = 0;
        if (0xffffffffffffffef < uVar22) {
                    /* WARNING: Subroutine does not return */
          std::__ndk1::__basic_string_common<true>::__throw_length_error();
        }
                    /* try { // try from 00e1c8a4 to 00f1c8ab has its CatchHandler @ 00e1cf2c */
        if (uVar22 < 0x17) {
          pvVar23 = (void *)((ulong)&local_c8 | 1);
          local_c8 = (ulong)(byte)((int)uVar22 << 1);
          if (uVar22 != 0) goto LAB_00e1c8e4;
        }
        else {
          uVar26 = uVar22 + 0x10 & 0xfffffffffffffff0;
          pvVar23 = operator_new(uVar26);
          local_c8 = uVar26 | 1;
                    /* try { // try from 00e1c8d8 to 00f1c8e3 has its CatchHandler @ 00e1cf28 */
          local_c0 = uVar22;
          local_b8 = pvVar23;
LAB_00e1c8e4:
          memcpy(pvVar23,pvVar1,uVar22);
        }
        bVar11 = ((byte)local_98 & 1) != 0;
        pbVar3 = (byte *)((ulong)&local_98 | 1);
        if (bVar11) {
          pbVar3 = local_88;
        }
        *(undefined1 *)((long)pvVar23 + uVar22) = 0;
        uVar22 = (ulong)((byte)local_98 >> 1);
        if (bVar11) {
          uVar22 = CONCAT71(uStack_8f,uStack_90);
        }
        pbVar14 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
                  std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                          *)&local_c8,(char *)pbVar3,uVar22);
        pbVar3 = *(byte **)(pbVar14 + 0x10);
                    /* try { // try from 00e1c928 to 00f1c933 has its CatchHandler @ 00e1cf2c */
        bVar4 = *pbVar14;
        uStack_60 = (undefined7)((ulong)*(undefined8 *)(pbVar14 + 8) >> 8);
        uStack_68 = (undefined7)*(undefined8 *)(pbVar14 + 1);
        local_61 = (undefined1)((ulong)*(undefined8 *)(pbVar14 + 1) >> 0x38);
        *(undefined8 *)pbVar14 = 0;
        *(undefined8 *)(pbVar14 + 8) = 0;
        *(undefined8 *)(pbVar14 + 0x10) = 0;
        if (((byte)local_98 & 1) != 0) {
          *local_88 = 0;
          uStack_90 = 0;
          uStack_8f = 0;
          if (((byte)local_98 & 1) != 0) {
            operator_delete(local_88);
          }
        }
        uVar10 = uStack_68;
        uStack_68 = 0;
        uStack_97 = (undefined1)uVar10;
        uStack_96 = (undefined6)((uint7)uVar10 >> 8);
        uStack_90 = local_61;
        uStack_8f = uStack_60;
        local_61 = 0;
        uStack_60 = 0;
        local_98 = bVar4;
        local_88 = pbVar3;
        if ((local_c8 & 1) != 0) {
          operator_delete(local_b8);
        }
        bVar17 = local_b0._0_1_ & 1;
      }
    }
LAB_00e1c9a0:
    if (bVar17 != 0) {
      operator_delete(local_a0);
    }
  }
  if (((DAT_01788c08 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_01788c08), iVar12 != 0)) {
    DAT_01788bf0 = (ulong *)0x0;
    DAT_01788bf8 = (ulong *)0x0;
    DAT_01788c00 = (ulong *)0x0;
    __cxa_atexit(FUN_009127f4,&DAT_01788bf0,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01788c08);
  }
  puVar9 = DAT_01788bf8;
  puVar25 = DAT_01788bf0;
  if (DAT_01788bf0 != DAT_01788bf8) {
                    /* try { // try from 00e1c9e4 to 00f1c9ef has its CatchHandler @ 00e1cefc */
    puVar24 = DAT_01788bf0;
    __n = (ulong)((byte)local_98 >> 1);
    pbVar3 = (byte *)((ulong)&local_98 | 1);
    if (((byte)local_98 & 1) != 0) {
      __n = CONCAT71(uStack_8f,uStack_90);
      pbVar3 = local_88;
    }
    do {
      bVar17 = (byte)*puVar24;
      sVar18 = (size_t)(bVar17 >> 1);
      sVar2 = sVar18;
      if ((bVar17 & 1) != 0) {
        sVar2 = puVar24[1];
      }
                    /* try { // try from 00e1ca18 to 00f1ca23 has its CatchHandler @ 00e1cef8 */
      if (sVar2 == __n) {
        pbVar20 = (byte *)puVar24[2];
        if ((bVar17 & 1) == 0) {
          pbVar20 = (byte *)((long)puVar24 + 1);
        }
        puVar7 = puVar24;
        pbVar8 = pbVar3;
        sVar2 = __n;
        puVar25 = puVar24;
        if ((bVar17 & 1) == 0) {
          while( true ) {
            if (sVar2 == 0) goto LAB_00e1ca78;
            if (*(byte *)((long)puVar7 + 1) != *pbVar8) break;
            sVar18 = sVar18 - 1;
                    /* try { // try from 00e1ca4c to 00f1ca57 has its CatchHandler @ 00e1ced8 */
            puVar7 = (ulong *)((long)puVar7 + 1);
            pbVar8 = pbVar8 + 1;
            sVar2 = sVar18;
          }
        }
        else if ((__n == 0) || (iVar12 = memcmp(pbVar20,pbVar3,__n), iVar12 == 0)) break;
      }
      puVar24 = puVar24 + 3;
      puVar25 = puVar9;
    } while (puVar24 != puVar9);
  }
LAB_00e1ca78:
  if (puVar25 != puVar9) goto LAB_00e1cb44;
  pbVar15 = (basic_string *)PUMaterialCache::Instance();
                    /* try { // try from 00e1ca84 to 00f1ca97 has its CatchHandler @ 00e1cf24 */
  PUMaterialCache::loadMaterialsFromSearchPaths(pbVar15);
  pbVar3 = local_88;
  puVar9 = DAT_01788bf8;
  if (DAT_01788bf8 == DAT_01788c00) {
                    /* try { // try from 00e1cac8 to 00f1cad3 has its CatchHandler @ 00e1cf8c */
    std::__ndk1::
    vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
    ::
    __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
              ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                *)&DAT_01788bf0,(basic_string *)&local_98);
    goto LAB_00e1cb44;
  }
  *DAT_01788bf8 = 0;
  puVar9[1] = 0;
  puVar9[2] = 0;
  if (((byte)local_98 & 1) == 0) {
    puVar9[2] = (ulong)local_88;
    puVar9[1] = CONCAT71(uStack_8f,uStack_90);
    *puVar9 = CONCAT62(uStack_96,CONCAT11(uStack_97,local_98));
  }
  else {
    uVar22 = CONCAT71(uStack_8f,uStack_90);
    if (0xffffffffffffffef < uVar22) {
                    /* try { // try from 00e1cc34 to 00f1cc3f has its CatchHandler @ 00e1cf90 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_length_error();
    }
    if (uVar22 < 0x17) {
      pbVar20 = (byte *)((long)puVar9 + 1);
      *(byte *)puVar9 = (byte)((int)uVar22 << 1);
      if (uVar22 != 0) goto LAB_00e1cb24;
    }
    else {
      uVar26 = uVar22 + 0x10 & 0xfffffffffffffff0;
      pbVar20 = operator_new(uVar26);
      puVar9[1] = uVar22;
      puVar9[2] = (ulong)pbVar20;
      *puVar9 = uVar26 | 1;
LAB_00e1cb24:
      memcpy(pbVar20,pbVar3,uVar22);
    }
    pbVar20[uVar22] = 0;
  }
  DAT_01788bf8 = puVar9 + 3;
LAB_00e1cb44:
  local_b0 = CONCAT71(local_b0._1_7_,1);
  this_00 = (PUScriptCompiler *)PUScriptCompiler::Instance();
  plVar16 = (list *)PUScriptCompiler::compile(this_00,local_80,(bool *)&local_b0);
  if ((plVar16 == (list *)0x0) || (*(long *)(plVar16 + 0x10) == 0)) {
                    /* try { // try from 00e1cb8c to 00f1cb97 has its CatchHandler @ 00e1cf7c */
    uVar21 = 0;
  }
  else {
    this_01 = (PUTranslateManager *)PUTranslateManager::Instance();
    PUTranslateManager::translateParticleSystem(this_01,this,plVar16);
    uVar21 = 1;
  }
  if (((byte)local_98 & 1) != 0) {
                    /* try { // try from 00e1cb98 to 00f1cba3 has its CatchHandler @ 00e1cf90 */
    operator_delete(local_88);
  }
  if (((byte)local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
                    /* try { // try from 00e1cbb0 to 00f1cbbb has its CatchHandler @ 00e1cf34 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return uVar21;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

