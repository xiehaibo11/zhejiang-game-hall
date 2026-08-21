
undefined8 FUN_0091329c(undefined8 param_1)

{
  ulong uVar1;
  size_t sVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  byte bVar6;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar7;
  bool bVar8;
  int iVar9;
  long lVar10;
  char *pcVar11;
  undefined4 uVar12;
  ulong uVar13;
  byte bVar14;
  long lVar15;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_88 [8];
  ulong local_80;
  char *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  char *local_60;
  long local_58;
  
  lVar5 = tpidr_el0;
  local_58 = *(long *)(lVar5 + 0x28);
  lVar10 = tolua_tousertype(param_1,1,0);
                    /* catch() { ... } // from try @ 009131cc with catch @ 009132d4
                       catch() { ... } // from try @ 0091323c with catch @ 009132d4 */
  iVar9 = lua_gettop(param_1);
  iVar9 = iVar9 + -1;
  if (iVar9 < 2) {
    luaL_error(param_1,
               "\'open\' function of XMLHttpRequest wrong number of arguments: %d, was expecting %d\n"
               ,iVar9,2);
    goto LAB_00913750;
  }
  pcVar11 = (char *)tolua_tostring(param_1,2,&DAT_013c996e);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,pcVar11);
  pcVar11 = (char *)tolua_tostring(param_1,3,&DAT_013c996e);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_88,pcVar11);
  if (iVar9 < 3) {
    bVar8 = true;
  }
  else {
                    /* try { // try from 00913334 to 00a13387 has its CatchHandler @ 00913334
                       catch() { ... } // from try @ 00913334 with catch @ 00913334
                       catch() { ... } // from try @ 0091343c with catch @ 00913334
                       catch() { ... } // from try @ 0091349c with catch @ 00913334 */
    iVar9 = tolua_toboolean(param_1,4,0);
    bVar8 = iVar9 != 0;
  }
  if (local_88 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar10 + 0x28)) {
                    /* try { // try from 00913388 to 00a133cb has its CatchHandler @ 009134dc */
    uVar1 = (ulong)((byte)local_88[0] >> 1);
    pcVar11 = (char *)((ulong)local_88 | 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar1 = local_80;
      pcVar11 = local_78;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar10 + 0x28),pcVar11,uVar1);
  }
  if (local_70 !=
      (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
      (lVar10 + 0x40)) {
    uVar1 = (ulong)((byte)local_70[0] >> 1);
    pcVar11 = (char *)((ulong)local_70 | 1);
    if (((byte)local_70[0] & 1) != 0) {
      uVar1 = local_68;
      pcVar11 = local_60;
    }
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
           (lVar10 + 0x40),pcVar11,uVar1);
  }
  *(bool *)(lVar10 + 0xb8) = bVar8;
                    /* try { // try from 009133d8 to 00a1343b has its CatchHandler @ 009134e0 */
  *(undefined4 *)(lVar10 + 0x90) = 1;
  uVar1 = (ulong)((byte)local_88[0] >> 1);
  if (((byte)local_88[0] & 1) != 0) {
    uVar1 = local_80;
  }
  bVar6 = (byte)local_88[0] & 1;
  bVar14 = (byte)local_88[0] & 1;
  if (5 < uVar1) {
    uVar3 = (ulong)((byte)local_88[0] >> 1);
    if (((byte)local_88[0] & 1) != 0) {
      uVar3 = local_80;
    }
    uVar13 = uVar3 - 5;
    uVar4 = uVar3 - uVar13;
    if (uVar3 < uVar13) {
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
    }
    sVar2 = uVar4;
    if (4 < uVar4) {
      sVar2 = 5;
    }
    if (sVar2 == 0) {
      if (4 < uVar4) goto LAB_00913450;
    }
    else {
      pcVar11 = (char *)((ulong)local_88 | 1);
      if (((byte)local_88[0] & 1) != 0) {
        pcVar11 = local_78;
      }
                    /* try { // try from 0091343c to 00a1346f has its CatchHandler @ 00913334 */
      iVar9 = memcmp(pcVar11 + uVar13,".json",sVar2);
      if ((4 < uVar4) && (iVar9 == 0)) {
LAB_00913450:
        *(undefined4 *)(lVar10 + 0xb0) = 4;
      }
    }
  }
  bVar7 = local_70[0];
  lVar15 = *(long *)(lVar10 + 0xc0);
  if (lVar15 != 0) {
    uVar3 = (ulong)((byte)local_70[0] >> 1);
                    /* try { // try from 00913470 to 00a13483 has its CatchHandler @ 009134dc */
    if (((byte)local_70[0] & 1) != 0) {
      uVar3 = local_68;
    }
    sVar2 = 4;
    if (uVar3 < 5) {
      sVar2 = uVar3;
    }
    if (sVar2 == 0) {
LAB_009134ac:
      if (4 < uVar3 == 3 < uVar3) {
        if (sVar2 != 0) goto LAB_009134c8;
        goto LAB_009134f0;
      }
LAB_00913508:
      uVar12 = 1;
    }
    else {
                    /* try { // try from 00913488 to 00a1349b has its CatchHandler @ 009134e0 */
      pcVar11 = (char *)((ulong)local_70 | 1);
      if (((byte)local_70[0] & 1) != 0) {
        pcVar11 = local_60;
      }
                    /* try { // try from 0091349c to 00a134fb has its CatchHandler @ 00913334 */
      iVar9 = memcmp(pcVar11,"post",sVar2);
      if (iVar9 == 0) goto LAB_009134ac;
LAB_009134c8:
      pcVar11 = (char *)((ulong)local_70 | 1);
                    /* catch() { ... } // from try @ 00913388 with catch @ 009134dc
                       catch() { ... } // from try @ 00913470 with catch @ 009134dc */
      if (((byte)bVar7 & 1) != 0) {
        pcVar11 = local_60;
      }
                    /* catch() { ... } // from try @ 009133d8 with catch @ 009134e0
                       catch() { ... } // from try @ 00913488 with catch @ 009134e0 */
      iVar9 = memcmp(pcVar11,"POST",sVar2);
      if (iVar9 == 0) {
LAB_009134f0:
                    /* try { // try from 009134fc to 00a1354f has its CatchHandler @ 009134fc
                       catch() { ... } // from try @ 009134fc with catch @ 009134fc
                       catch() { ... } // from try @ 009135f4 with catch @ 009134fc
                       catch() { ... } // from try @ 00913654 with catch @ 009134fc */
        if (4 < uVar3 != 3 < uVar3) goto LAB_00913508;
      }
      sVar2 = 3;
      if (uVar3 < 4) {
        sVar2 = uVar3;
      }
      if (sVar2 == 0) {
LAB_00913548:
                    /* try { // try from 00913550 to 00a1358b has its CatchHandler @ 00913694 */
        if (3 < uVar3 == 2 < uVar3) {
          if (sVar2 != 0) goto LAB_00913564;
          goto LAB_0091358c;
        }
      }
      else {
        pcVar11 = (char *)((ulong)local_70 | 1);
        if (((byte)bVar7 & 1) != 0) {
          pcVar11 = local_60;
        }
        iVar9 = memcmp(pcVar11,&DAT_012a5cc7,sVar2);
        if (iVar9 == 0) goto LAB_00913548;
LAB_00913564:
        pcVar11 = (char *)((ulong)local_70 | 1);
        if (((byte)bVar7 & 1) != 0) {
          pcVar11 = local_60;
        }
        iVar9 = memcmp(pcVar11,&DAT_012b5216,sVar2);
        if (iVar9 != 0) {
LAB_009135bc:
          pcVar11 = (char *)((ulong)local_70 | 1);
          if (((byte)bVar7 & 1) != 0) {
            pcVar11 = local_60;
          }
          iVar9 = memcmp(pcVar11,"put",sVar2);
          if (iVar9 == 0) {
LAB_009135e4:
                    /* try { // try from 009135f4 to 00a13627 has its CatchHandler @ 009134fc */
            if (3 < uVar3 == 2 < uVar3) {
              if (sVar2 != 0) goto LAB_00913600;
              goto LAB_00913628;
            }
LAB_00913640:
                    /* try { // try from 00913640 to 00a13653 has its CatchHandler @ 00913698 */
            uVar12 = 2;
            goto LAB_009136e8;
          }
LAB_00913600:
          pcVar11 = (char *)((ulong)local_70 | 1);
          if (((byte)bVar7 & 1) != 0) {
            pcVar11 = local_60;
          }
          iVar9 = memcmp(pcVar11,"PUT",sVar2);
          if (iVar9 == 0) {
LAB_00913628:
                    /* try { // try from 00913628 to 00a1363b has its CatchHandler @ 00913694 */
            if (3 < uVar3 != 2 < uVar3) goto LAB_00913640;
          }
          sVar2 = 6;
          if (uVar3 < 7) {
            sVar2 = uVar3;
          }
                    /* try { // try from 00913654 to 00a136b3 has its CatchHandler @ 009134fc */
          if (sVar2 == 0) {
LAB_00913680:
                    /* catch() { ... } // from try @ 00913550 with catch @ 00913694
                       catch() { ... } // from try @ 00913628 with catch @ 00913694 */
            if (6 < uVar3 == 5 < uVar3) {
                    /* catch() { ... } // from try @ 00913598 with catch @ 00913698
                       catch() { ... } // from try @ 00913640 with catch @ 00913698 */
              if (sVar2 != 0) goto LAB_0091369c;
              goto LAB_009136c4;
            }
LAB_009136dc:
            uVar12 = 3;
          }
          else {
            pcVar11 = (char *)((ulong)local_70 | 1);
            if (((byte)bVar7 & 1) != 0) {
              pcVar11 = local_60;
            }
            iVar9 = memcmp(pcVar11,"delete",sVar2);
            if (iVar9 == 0) goto LAB_00913680;
LAB_0091369c:
            pcVar11 = (char *)((ulong)local_70 | 1);
            if (((byte)bVar7 & 1) != 0) {
              pcVar11 = local_60;
            }
                    /* try { // try from 009136b4 to 00a13713 has its CatchHandler @ 009136b4
                       catch() { ... } // from try @ 009136b4 with catch @ 009136b4
                       catch() { ... } // from try @ 00913814 with catch @ 009136b4
                       catch() { ... } // from try @ 00913984 with catch @ 009136b4
                       catch() { ... } // from try @ 009139f4 with catch @ 009136b4 */
            iVar9 = memcmp(pcVar11,"DELETE",sVar2);
            if (iVar9 == 0) {
LAB_009136c4:
              if (6 < uVar3 != 5 < uVar3) goto LAB_009136dc;
            }
            uVar12 = 4;
          }
          goto LAB_009136e8;
        }
LAB_0091358c:
                    /* try { // try from 00913598 to 00a135f3 has its CatchHandler @ 00913698 */
        if (3 < uVar3 == 2 < uVar3) {
          if (sVar2 != 0) goto LAB_009135bc;
          goto LAB_009135e4;
        }
      }
      uVar12 = 0;
    }
LAB_009136e8:
    *(undefined4 *)(lVar15 + 0x24) = uVar12;
    if ((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
        (lVar15 + 0x28) != local_88) {
      pcVar11 = (char *)((ulong)local_88 | 1);
      if (bVar6 != 0) {
        pcVar11 = local_78;
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             (lVar15 + 0x28),pcVar11,uVar1);
                    /* try { // try from 00913714 to 00a1372b has its CatchHandler @ 00913b34 */
      bVar14 = (byte)local_88[0] & 1;
    }
  }
  *(undefined1 *)(lVar10 + 200) = 1;
  *(undefined1 *)(lVar10 + 0x121) = 0;
  *(undefined8 *)(lVar10 + 0x90) = 1;
  if (bVar14 != 0) {
                    /* try { // try from 00913738 to 00a1374f has its CatchHandler @ 00913af0 */
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
LAB_00913750:
                    /* try { // try from 00913758 to 00a13763 has its CatchHandler @ 00913ab4 */
  if (*(long *)(lVar5 + 0x28) == local_58) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 00913780 to 00a13783 has its CatchHandler @ 00913a34 */
  __stack_chk_fail();
}

