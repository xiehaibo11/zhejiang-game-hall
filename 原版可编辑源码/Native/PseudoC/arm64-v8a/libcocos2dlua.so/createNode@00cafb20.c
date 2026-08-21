
/* cocos2d::CSLoader::createNode(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined8 cocos2d::CSLoader::createNode(basic_string *param_1)

{
  void *pvVar1;
  ulong __n;
  long lVar2;
  long lVar3;
  int iVar4;
  CSLoader *pCVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  int *piVar9;
  ulong local_88;
  ulong local_80;
  int *local_78;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string(local_70,param_1);
  pvVar1 = (void *)((ulong)local_70 | 1);
  uVar8 = (ulong)((byte)local_70[0] >> 1);
  if (((byte)local_70[0] & 1) != 0) {
    pvVar1 = local_60;
    uVar8 = local_68;
  }
  uVar7 = uVar8;
  if (uVar8 == 0) {
LAB_00cafb9c:
    uVar7 = 0xffffffffffffffff;
  }
  else {
    do {
      if (uVar7 == 0) goto LAB_00cafb9c;
      lVar3 = uVar7 - 1;
      uVar7 = uVar7 - 1;
    } while (*(char *)((long)pvVar1 + lVar3) != '.');
  }
  uVar7 = uVar7 + 1;
  local_80 = 0;
  local_78 = (int *)0x0;
  local_88 = 0;
  if (uVar8 < uVar7) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
  }
  __n = uVar8 - uVar7;
  if (uVar8 <= uVar8 - uVar7) {
    __n = uVar8;
  }
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    piVar9 = (int *)((ulong)&local_88 | 1);
    local_88 = (ulong)(byte)((int)__n << 1);
    if (__n != 0) goto LAB_00cafc04;
  }
  else {
    uVar8 = __n + 0x10 & 0xfffffffffffffff0;
    piVar9 = operator_new(uVar8);
    local_88 = uVar8 | 1;
    local_80 = __n;
    local_78 = piVar9;
LAB_00cafc04:
    memcpy(piVar9,(void *)((long)pvVar1 + uVar7),__n);
  }
  pCVar5 = DAT_01786980;
  *(undefined1 *)((long)piVar9 + __n) = 0;
  if (pCVar5 == (CSLoader *)0x0) {
    pCVar5 = operator_new(0xc0,(nothrow_t *)&std::nothrow);
    if (pCVar5 != (CSLoader *)0x0) {
      CSLoader(pCVar5);
    }
    DAT_01786980 = pCVar5;
    init(pCVar5);
    pCVar5 = DAT_01786980;
  }
  uVar8 = local_88 >> 1 & 0x7f;
  if ((local_88 & 1) != 0) {
    uVar8 = local_80;
  }
  if (uVar8 == 10) {
    piVar9 = (int *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      piVar9 = local_78;
    }
    iVar4 = memcmp(piVar9,"ExportJson",10);
    if (iVar4 == 0) {
LAB_00cafce0:
      uVar6 = createNodeFromJson(pCVar5,param_1);
      goto joined_r0x00cafcf4;
    }
  }
  else if (uVar8 == 4) {
    piVar9 = (int *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      piVar9 = local_78;
    }
    if (*piVar9 == 0x6e6f736a) goto LAB_00cafce0;
  }
  else if (uVar8 == 3) {
    piVar9 = (int *)((ulong)&local_88 | 1);
    if ((local_88 & 1) != 0) {
      piVar9 = local_78;
    }
    iVar4 = memcmp(piVar9,&DAT_01412b23,3);
    if (iVar4 == 0) {
      uVar6 = createNodeWithFlatBuffersFile(pCVar5,param_1);
      goto joined_r0x00cafcf4;
    }
  }
  uVar6 = 0;
joined_r0x00cafcf4:
  if ((local_88 & 1) != 0) {
    operator_delete(local_78);
  }
  if (((byte)local_70[0] & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

