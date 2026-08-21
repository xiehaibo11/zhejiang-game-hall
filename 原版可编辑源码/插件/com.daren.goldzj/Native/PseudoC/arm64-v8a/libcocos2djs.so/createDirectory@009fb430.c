
/* universe::FileSystemAndroid::createDirectory(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) const */

undefined4 universe::FileSystemAndroid::createDirectory(basic_string *param_1)

{
  ulong uVar1;
  ulong __n;
  void *pvVar2;
  long lVar3;
  ulong *puVar4;
  ulong *puVar5;
  int iVar6;
  ulong uVar7;
  DIR *__dirp;
  int *piVar8;
  undefined4 uVar9;
  byte *pbVar10;
  char *pcVar11;
  ulong *puVar12;
  ulong uVar13;
  void *pvVar14;
  ulong uVar15;
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
  
                    /* try { // try from 009fb444 to 00afb457 has its CatchHandler @ 009fbc48 */
  lVar3 = tpidr_el0;
  local_68 = *(long *)(lVar3 + 0x28);
                    /* try { // try from 009fb458 to 00afb467 has its CatchHandler @ 009fbc38 */
  CustomFileManager::getAbsolutePath(param_1);
                    /* try { // try from 009fb468 to 00afb46f has its CatchHandler @ 009fbc5c */
  uVar7 = CustomFileManager::isDirectoryExist(param_1);
                    /* try { // try from 009fb474 to 00afb477 has its CatchHandler @ 009fbc28 */
  if ((uVar7 & 1) != 0) {
                    /* try { // try from 009fb478 to 00afb49f has its CatchHandler @ 009fbc5c */
    uVar9 = 1;
    goto joined_r0x009fb8c8;
  }
  pvVar14 = (void *)((ulong)local_80 | 1);
  pvVar2 = pvVar14;
  uVar7 = (ulong)(local_80[0] >> 1);
                    /* try { // try from 009fb4a0 to 00afb4ab has its CatchHandler @ 009fbc20 */
  if ((local_80[0] & 1) != 0) {
    pvVar2 = local_70;
    uVar7 = local_78;
  }
  if (uVar7 != 0) {
    uVar15 = 0;
    do {
                    /* try { // try from 009fb4b8 to 00afb4c3 has its CatchHandler @ 009fbc18 */
      if ((*(char *)((long)pvVar2 + uVar15) == '\\') || (*(char *)((long)pvVar2 + uVar15) == '/')) {
        if (uVar7 != uVar15) goto LAB_009fb4e0;
        break;
      }
      uVar15 = uVar15 + 1;
                    /* try { // try from 009fb4c8 to 00afb4d3 has its CatchHandler @ 009fbc10 */
    } while (uVar7 != uVar15);
  }
  uVar15 = 0xffffffffffffffff;
LAB_009fb4e0:
                    /* try { // try from 009fb4e4 to 00afb4ef has its CatchHandler @ 009fbb88 */
  local_a0 = 0;
  uStack_98 = 0;
  local_90 = (char *)0x0;
  local_b8 = (ulong *)0x0;
  local_b0 = (ulong *)0x0;
  local_a8 = (ulong *)0x0;
                    /* try { // try from 009fb4f4 to 00afb4ff has its CatchHandler @ 009fbb78 */
  if (uVar15 != 0xffffffffffffffff) {
    uVar7 = 0;
    do {
                    /* try { // try from 009fb504 to 00afb50b has its CatchHandler @ 009fbb68 */
      uVar13 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        uVar13 = local_78;
      }
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = (char *)0x0;
      if (uVar13 < uVar7) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
                    /* try { // try from 009fb524 to 00afb52f has its CatchHandler @ 009fbb58 */
      uVar1 = (uVar15 - uVar7) + 1;
      pvVar2 = pvVar14;
      if ((local_80[0] & 1) != 0) {
        pvVar2 = local_70;
      }
      __n = uVar13 - uVar7;
                    /* try { // try from 009fb534 to 00afb53b has its CatchHandler @ 009fbb48 */
      if (uVar1 <= uVar13 - uVar7) {
        __n = uVar1;
      }
                    /* try { // try from 009fb53c to 00afb5a3 has its CatchHandler @ 009fb3bc */
      if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (__n < 0x17) {
        local_d0 = (ulong)(byte)((int)__n << 1);
        pcVar11 = (char *)((ulong)&local_d0 | 1);
        if (__n != 0) goto LAB_009fb57c;
      }
      else {
        uVar13 = __n + 0x10 & 0xfffffffffffffff0;
        pcVar11 = operator_new(uVar13);
        local_d0 = uVar13 | 1;
        uStack_c8 = __n;
        local_c0 = pcVar11;
LAB_009fb57c:
        memcpy(pcVar11,(void *)((long)pvVar2 + uVar7),__n);
      }
      pcVar11[__n] = '\0';
      if ((local_a0 & 1) != 0) {
                    /* try { // try from 009fb5a4 to 00afb5af has its CatchHandler @ 009fbb40 */
        *local_90 = '\0';
        uStack_98 = 0;
        if ((local_a0 & 1) != 0) {
          operator_delete(local_90);
        }
      }
                    /* try { // try from 009fb5c0 to 00afb5cb has its CatchHandler @ 009fbb34 */
      puVar5 = local_b0;
      pcVar11 = local_c0;
      uVar13 = uStack_c8;
      uStack_98 = uStack_c8;
      local_a0 = local_d0;
                    /* try { // try from 009fb5d0 to 00afb5d7 has its CatchHandler @ 009fbb24 */
      local_90 = local_c0;
      uVar7 = local_d0 >> 1 & 0x7f;
      if ((local_d0 & 1) != 0) {
        uVar7 = uStack_c8;
      }
      if (uVar7 != 0) {
                    /* try { // try from 009fb5ec to 00afb5f3 has its CatchHandler @ 009fbb14 */
        if (local_b0 == local_a8) {
          std::__ndk1::
          vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
          ::
          __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>const&>
                    ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                      *)&local_b8,(basic_string *)&local_a0);
        }
        else {
                    /* try { // try from 009fb5f4 to 00afb64b has its CatchHandler @ 009fb3bc */
          local_b0[1] = 0;
          local_b0[2] = 0;
          *local_b0 = 0;
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
              pbVar10 = (byte *)((long)local_b0 + 1);
              *(byte *)local_b0 = (byte)((int)uStack_c8 << 1);
              if (uStack_c8 != 0) goto LAB_009fb670;
            }
            else {
              uVar7 = uStack_c8 + 0x10 & 0xfffffffffffffff0;
                    /* try { // try from 009fb65c to 00afb667 has its CatchHandler @ 009fbb04 */
              pbVar10 = operator_new(uVar7);
              puVar5[1] = uVar13;
              puVar5[2] = (ulong)pbVar10;
              *puVar5 = uVar7 | 1;
LAB_009fb670:
                    /* try { // try from 009fb678 to 00afb683 has its CatchHandler @ 009fbb00 */
              memcpy(pbVar10,pcVar11,uVar13);
            }
            pbVar10[uVar13] = 0;
          }
                    /* try { // try from 009fb688 to 00afb693 has its CatchHandler @ 009fbafc */
          local_b0 = local_b0 + 3;
        }
      }
                    /* try { // try from 009fb698 to 00afb69f has its CatchHandler @ 009fbaf8 */
      uVar7 = uVar15 + 1;
      pvVar2 = pvVar14;
      uVar13 = (ulong)(local_80[0] >> 1);
      if ((local_80[0] & 1) != 0) {
        pvVar2 = local_70;
        uVar13 = local_78;
      }
      uVar15 = uVar7;
      if (uVar13 <= uVar7) goto LAB_009fb7a8;
                    /* try { // try from 009fb6b8 to 00afb6c3 has its CatchHandler @ 009fbaf4 */
                    /* try { // try from 009fb6c8 to 00afb6cf has its CatchHandler @ 009fbaf0 */
      while ((*(char *)((long)pvVar2 + uVar15) != '\\' && (*(char *)((long)pvVar2 + uVar15) != '/'))
            ) {
        uVar15 = uVar15 + 1;
                    /* try { // try from 009fb6d0 to 00afb737 has its CatchHandler @ 009fb3bc */
        if (uVar13 == uVar15) goto LAB_009fb6ec;
      }
    } while ((uVar13 != uVar15) && (uVar15 != 0xffffffffffffffff));
LAB_009fb6ec:
    uVar15 = uVar13 - uVar7;
    if (uVar7 <= uVar13 && uVar15 != 0) {
      local_d0 = 0;
      uStack_c8 = 0;
      local_c0 = (char *)0x0;
      if (0xffffffffffffffef < uVar15) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_length_error();
      }
      if (uVar15 < 0x17) {
        pcVar11 = (char *)((ulong)&local_d0 | 1);
        local_d0 = (ulong)(byte)((int)uVar15 << 1);
        if (uVar15 != 0) goto LAB_009fb744;
      }
      else {
        uVar13 = uVar15 + 0x10 & 0xfffffffffffffff0;
        pcVar11 = operator_new(uVar13);
        local_d0 = uVar13 | 1;
                    /* try { // try from 009fb738 to 00afb743 has its CatchHandler @ 009fbae8 */
        uStack_c8 = uVar15;
        local_c0 = pcVar11;
LAB_009fb744:
        memcpy(pcVar11,(void *)((long)pvVar2 + uVar7),uVar15);
      }
                    /* try { // try from 009fb754 to 00afb75f has its CatchHandler @ 009fbae4 */
      pcVar11[uVar15] = '\0';
      if (local_b0 < local_a8) {
                    /* try { // try from 009fb764 to 00afb76b has its CatchHandler @ 009fbae0 */
        local_b0[2] = (ulong)local_c0;
        local_b0[1] = uStack_c8;
        *local_b0 = local_d0;
        uStack_c8 = 0;
        local_c0 = (char *)0x0;
        local_d0 = 0;
                    /* try { // try from 009fb780 to 00afb787 has its CatchHandler @ 009fbadc */
        local_b0 = local_b0 + 3;
                    /* try { // try from 009fb788 to 00afb7df has its CatchHandler @ 009fb3bc */
      }
      else {
        std::__ndk1::
        vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
        ::
        __push_back_slow_path<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                  ((vector<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::allocator<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>>
                    *)&local_b8,(basic_string *)&local_d0);
        if ((local_d0 & 1) != 0) {
          operator_delete(local_c0);
        }
      }
    }
  }
LAB_009fb7a8:
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)&local_a0
         ,"",0);
  puVar5 = local_b0;
  if (local_b8 != local_b0) {
    puVar12 = local_b8;
    do {
      uVar7 = puVar12[1];
      pbVar10 = (byte *)puVar12[2];
                    /* try { // try from 009fb7e0 to 00afb7eb has its CatchHandler @ 009fbad4 */
      if (((byte)*puVar12 & 1) == 0) {
        pbVar10 = (byte *)((long)puVar12 + 1);
        uVar7 = (ulong)(byte)((byte)*puVar12 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_a0,(char *)pbVar10,uVar7);
      pcVar11 = (char *)((ulong)&local_a0 | 1);
                    /* try { // try from 009fb7fc to 00afb807 has its CatchHandler @ 009fbad0 */
      if ((local_a0 & 1) != 0) {
        pcVar11 = local_90;
      }
      __dirp = opendir(pcVar11);
      if (__dirp == (DIR *)0x0) {
        pcVar11 = (char *)((ulong)&local_a0 | 1);
        if ((local_a0 & 1) != 0) {
          pcVar11 = local_90;
        }
        iVar6 = mkdir(pcVar11,0x1ff);
                    /* try { // try from 009fb828 to 00afb82f has its CatchHandler @ 009fbac8 */
                    /* try { // try from 009fb830 to 00afb887 has its CatchHandler @ 009fb3bc */
        if ((iVar6 != 0) && (piVar8 = (int *)__errno(), *piVar8 != 0x11)) {
          uVar9 = 0;
          puVar5 = local_b8;
          goto joined_r0x009fb870;
        }
      }
      else {
        closedir(__dirp);
                    /* try { // try from 009fb80c to 00afb813 has its CatchHandler @ 009fbacc */
      }
      puVar12 = puVar12 + 3;
    } while (puVar12 != puVar5);
  }
  uVar9 = 1;
  puVar5 = local_b8;
joined_r0x009fb870:
  local_b8 = puVar5;
  puVar12 = local_b0;
  if (puVar5 != (ulong *)0x0) {
    while (puVar4 = puVar12, puVar4 != puVar5) {
      puVar12 = puVar4 + -3;
                    /* try { // try from 009fb888 to 00afb893 has its CatchHandler @ 009fbac0 */
      if ((*puVar12 & 1) != 0) {
        operator_delete((void *)puVar4[-1]);
      }
    }
    local_b0 = puVar5;
    operator_delete(local_b8);
  }
                    /* try { // try from 009fb8b4 to 00afb8bb has its CatchHandler @ 009fbab8 */
  if ((local_a0 & 1) != 0) {
    operator_delete(local_90);
  }
joined_r0x009fb8c8:
  if ((local_80[0] & 1) != 0) {
                    /* try { // try from 009fb8d0 to 00afb8d7 has its CatchHandler @ 009fbab4 */
    operator_delete(local_70);
  }
                    /* try { // try from 009fb8d8 to 00afb92f has its CatchHandler @ 009fb3bc */
  if (*(long *)(lVar3 + 0x28) == local_68) {
    return uVar9;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

