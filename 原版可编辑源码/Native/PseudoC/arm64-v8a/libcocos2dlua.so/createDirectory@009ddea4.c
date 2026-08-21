
/* universe::FileSystemAndroid::createDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 universe::FileSystemAndroid::createDirectory(basic_string *param_1)

{
  ulong uVar1;
  ulong __n;
  void *pvVar2;
  byte bVar3;
  long lVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong *puVar7;
  int iVar8;
  ulong uVar9;
  DIR *__dirp;
  int *piVar10;
  ulong uVar11;
  undefined4 uVar12;
  char *pcVar13;
  ulong *puVar14;
  ulong uVar15;
  byte *pbVar16;
  void *pvVar17;
  ulong local_d0;
  ulong uStack_c8;
  char *local_c0;
  ulong *local_b8;
  ulong *local_b0;
  ulong *local_a8;
  ulong local_a0;
  ulong uStack_98;
  char *local_90;
  byte local_80 [8];
  ulong local_78;
  void *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  TanGaoXiong::getAbsolutePath(param_1);
  uVar9 = TanGaoXiong::isDirectoryExist(param_1);
  if ((uVar9 & 1) != 0) {
    uVar12 = 1;
    goto joined_r0x009de34c;
  }
  pvVar17 = (void *)((ulong)local_80 | 1);
  pvVar2 = pvVar17;
  uVar9 = (ulong)(local_80[0] >> 1);
  if ((local_80[0] & 1) != 0) {
    pvVar2 = local_70;
    uVar9 = local_78;
  }
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
                    /* try { // try from 009ddf30 to 00addf7f has its CatchHandler @ 009ddf30
                       catch() { ... } // from try @ 009ddf30 with catch @ 009ddf30
                       catch() { ... } // from try @ 009ddfc8 with catch @ 009ddf30
                       catch() { ... } // from try @ 009de048 with catch @ 009ddf30 */
      if ((*(char *)((long)pvVar2 + uVar11) == '\\') || (*(char *)((long)pvVar2 + uVar11) == '/')) {
        if (uVar9 != uVar11) goto LAB_009ddf54;
        break;
      }
      uVar11 = uVar11 + 1;
    } while (uVar9 != uVar11);
  }
  uVar11 = 0xffffffffffffffff;
LAB_009ddf54:
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_a8 = (ulong *)0x0;
  local_a0 = 0;
  local_b8 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  if (uVar11 != 0xffffffffffffffff) {
    uVar9 = 0;
    do {
      uVar15 = uVar11;
      uVar11 = (ulong)(local_80[0] >> 1);
                    /* try { // try from 009ddf80 to 00addf97 has its CatchHandler @ 009de060 */
      if ((local_80[0] & 1) != 0) {
        uVar11 = local_78;
      }
      uStack_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      if (uVar11 < uVar9) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
                    /* try { // try from 009ddf9c to 00addfc7 has its CatchHandler @ 009de05c */
      uVar1 = (uVar15 - uVar9) + 1;
      pvVar2 = pvVar17;
      if ((local_80[0] & 1) != 0) {
        pvVar2 = local_70;
      }
      __n = uVar11 - uVar9;
      if (uVar1 <= uVar11 - uVar9) {
        __n = uVar1;
      }
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_d0 = (ulong)(byte)((int)__n << 1);
                    /* try { // try from 009ddfc8 to 00addfef has its CatchHandler @ 009ddf30 */
        pcVar13 = (char *)((ulong)&local_d0 | 1);
        if (__n != 0) goto LAB_009ddff0;
      }
      else {
        uVar11 = __n + 0x10 & 0xfffffffffffffff0;
        pcVar13 = operator_new(uVar11);
        local_d0 = uVar11 | 1;
        uStack_c8 = __n;
        local_c0 = pcVar13;
LAB_009ddff0:
                    /* try { // try from 009ddff0 to 00ade003 has its CatchHandler @ 009de060 */
        memcpy(pcVar13,(void *)((long)pvVar2 + uVar9),__n);
      }
      pcVar13[__n] = '\0';
      if ((local_a0 & 1) != 0) {
        *local_90 = '\0';
        uStack_98 = 0;
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
      puVar6 = local_b0;
      pcVar13 = local_c0;
      uVar11 = uStack_c8;
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
                    /* try { // try from 009de040 to 00ade047 has its CatchHandler @ 009de05c */
                    /* try { // try from 009de048 to 00ade07b has its CatchHandler @ 009ddf30 */
      local_90 = local_c0;
      uVar9 = local_d0 >> 1 & 0x7f;
      if ((local_d0 & 1) != 0) {
        uVar9 = uStack_c8;
      }
      if (uVar9 != 0) {
                    /* catch() { ... } // from try @ 009ddf9c with catch @ 009de05c
                       catch() { ... } // from try @ 009de040 with catch @ 009de05c */
                    /* catch() { ... } // from try @ 009ddf80 with catch @ 009de060
                       catch() { ... } // from try @ 009ddff0 with catch @ 009de060 */
        if (local_b0 == local_a8) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_b8,(basic_string *)&local_a0);
        }
        else {
          *local_b0 = 0;
          local_b0[1] = 0;
          local_b0[2] = 0;
          if ((local_d0 & 1) == 0) {
            local_b0[2] = (ulong)local_c0;
            local_b0[1] = uStack_c8;
            *local_b0 = local_d0;
          }
          else {
            if (0xffffffffffffffef < uStack_c8) {
                    /* WARNING: Subroutine does not return */
              std::__ndk1::__basic_string_common<true>::__throw_length_error();
            }
            if (uStack_c8 < 0x17) {
              pbVar16 = (byte *)((long)local_b0 + 1);
              *(byte *)local_b0 = (byte)((int)uStack_c8 << 1);
              if (uStack_c8 != 0) goto LAB_009de0e8;
            }
            else {
              uVar9 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
              pbVar16 = operator_new(uVar9);
              puVar6[1] = uVar11;
              puVar6[2] = (ulong)pbVar16;
              *puVar6 = uVar9 | 1;
LAB_009de0e8:
              memcpy(pbVar16,pcVar13,uVar11);
            }
            pbVar16[uVar11] = 0;
          }
          local_b0 = puVar6 + 3;
        }
      }
      uVar9 = uVar15 + 1;
      pvVar2 = pvVar17;
      uVar1 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        pvVar2 = local_70;
        uVar1 = local_78;
      }
      uVar11 = uVar9;
      if (uVar1 <= uVar9) goto LAB_009de220;
      while ((*(char *)((long)pvVar2 + uVar11) != '\\' && (*(char *)((long)pvVar2 + uVar11) != '/'))
            ) {
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar11) goto LAB_009de160;
      }
                    /* try { // try from 009de150 to 00ade19f has its CatchHandler @ 009de150
                       catch() { ... } // from try @ 009de150 with catch @ 009de150
                       catch() { ... } // from try @ 009de1e8 with catch @ 009de150
                       catch() { ... } // from try @ 009de268 with catch @ 009de150 */
    } while ((uVar1 != uVar11) && (uVar11 != 0xffffffffffffffff));
LAB_009de160:
    uVar11 = uVar1 - uVar9;
    if (uVar9 <= uVar1 && uVar11 != 0) {
      uStack_c8 = 0;
      local_c0 = (char *)0x0;
      local_d0 = 0;
      if (uVar1 <= uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      if (0xffffffffffffffef < uVar11) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar11 < 0x17) {
        pcVar13 = (char *)((ulong)&local_d0 | 1);
        local_d0 = (ulong)(byte)((int)uVar11 << 1);
        if (uVar11 != 0) goto LAB_009de1c0;
      }
      else {
                    /* try { // try from 009de1a0 to 00ade1b7 has its CatchHandler @ 009de280 */
        uVar15 = uVar11 + 0x10 & 0xfffffffffffffff0;
        pcVar13 = operator_new(uVar15);
        local_d0 = uVar15 | 1;
                    /* try { // try from 009de1bc to 00ade1e7 has its CatchHandler @ 009de27c */
        uStack_c8 = uVar11;
        local_c0 = pcVar13;
LAB_009de1c0:
        memcpy(pcVar13,(void *)((long)pvVar2 + uVar9),uVar11);
      }
      pcVar13[uVar11] = '\0';
      if (local_b0 < local_a8) {
                    /* try { // try from 009de1e8 to 00ade20f has its CatchHandler @ 009de150 */
        local_b0[2] = (ulong)local_c0;
        local_b0[1] = uStack_c8;
        *local_b0 = local_d0;
        uStack_c8 = 0;
        local_c0 = (char *)0x0;
        local_d0 = 0;
        local_b0 = local_b0 + 3;
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_b8,(basic_string *)&local_d0);
                    /* try { // try from 009de210 to 00ade223 has its CatchHandler @ 009de280 */
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
      }
    }
  }
LAB_009de220:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_a0
         ,"",0);
  puVar6 = local_b0;
  if (local_b8 != local_b0) {
    puVar14 = local_b8;
    do {
                    /* try { // try from 009de260 to 00ade267 has its CatchHandler @ 009de27c */
      uVar9 = puVar14[1];
      pbVar16 = (byte *)puVar14[2];
                    /* try { // try from 009de268 to 00ade29b has its CatchHandler @ 009de150 */
      if (((byte)*puVar14 & 1) == 0) {
        pbVar16 = (byte *)((long)puVar14 + 1);
        uVar9 = (ulong)(byte)((byte)*puVar14 >> 1);
      }
                    /* catch() { ... } // from try @ 009de1bc with catch @ 009de27c
                       catch() { ... } // from try @ 009de260 with catch @ 009de27c */
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,(char *)pbVar16,uVar9);
                    /* catch() { ... } // from try @ 009de1a0 with catch @ 009de280
                       catch() { ... } // from try @ 009de210 with catch @ 009de280 */
      pcVar13 = (char *)((ulong)&local_a0 | 1);
      if ((local_a0 & 1) != 0) {
        pcVar13 = local_90;
      }
      __dirp = opendir(pcVar13);
      if (__dirp == (DIR *)0x0) {
        pcVar13 = (char *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          pcVar13 = local_90;
        }
        iVar8 = mkdir(pcVar13,0x1ff);
        if ((iVar8 != 0) && (piVar10 = (int *)__errno(), *piVar10 != 0x11)) {
          uVar12 = 0;
          puVar6 = local_b8;
          goto joined_r0x009de2cc;
        }
      }
      else {
        closedir(__dirp);
      }
      puVar14 = puVar14 + 3;
    } while (puVar14 != puVar6);
  }
  uVar12 = 1;
  puVar6 = local_b8;
joined_r0x009de2cc:
  local_b8 = puVar6;
  if (puVar6 != (ulong *)0x0) {
    if (local_b0 != puVar6) {
      bVar3 = (byte)local_b0[-3];
      puVar7 = local_b0 + -3;
      puVar14 = local_b0;
      while( true ) {
        puVar5 = puVar7;
        if ((bVar3 & 1) != 0) {
          operator_delete((void *)puVar14[-1]);
        }
        if (puVar6 == puVar5) break;
        bVar3 = (byte)puVar5[-3];
        puVar7 = puVar5 + -3;
        puVar14 = puVar5;
      }
    }
    local_b0 = puVar6;
    operator_delete(local_b8);
  }
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
joined_r0x009de34c:
  if ((local_80[0] & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar4 + 0x28) == local_68) {
    return uVar12;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

