
/* cocos2d::Bundle3D::load(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) */

undefined4 __thiscall cocos2d::Bundle3D::load(Bundle3D *this,basic_string *param_1)

{
  size_t __n;
  size_t sVar1;
  int *piVar2;
  basic_string *pbVar3;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> bVar4;
  basic_string bVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  Bundle3D *pBVar10;
  Bundle3D *__s2;
  undefined4 uVar11;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *this_00;
  byte local_60 [8];
  ulong local_58;
  int *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  local_48 = *(long *)(lVar6 + 0x28);
  bVar5 = *param_1;
  __n = (ulong)((byte)bVar5 >> 1);
  if (((byte)bVar5 & 1) != 0) {
    __n = *(size_t *)(param_1 + 8);
  }
  if (__n == 0) {
    uVar11 = 0;
    goto LAB_00d1a38c;
  }
  this_00 = (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
            (this + 0x20);
  bVar4 = *this_00;
  uVar9 = (ulong)((byte)bVar4 >> 1);
  sVar1 = uVar9;
  if (((byte)bVar4 & 1) != 0) {
    sVar1 = *(size_t *)(this + 0x28);
  }
  if (sVar1 == __n) {
    __s2 = *(Bundle3D **)(param_1 + 0x10);
    if (((byte)bVar5 & 1) == 0) {
      __s2 = (Bundle3D *)(param_1 + 1);
    }
    if (((byte)bVar4 & 1) == 0) {
      pBVar10 = this + 0x21;
      do {
        if (*pBVar10 != *__s2) goto LAB_00d1a290;
        uVar9 = uVar9 - 1;
        pBVar10 = pBVar10 + 1;
        __s2 = __s2 + 1;
      } while (uVar9 != 0);
    }
    else {
      iVar7 = memcmp(*(void **)(this + 0x30),__s2,__n);
      if (iVar7 != 0) goto LAB_00d1a290;
    }
    uVar11 = 1;
    goto LAB_00d1a38c;
  }
LAB_00d1a290:
  getModelRelativePath(this,param_1);
  plVar8 = (long *)FileUtils::getInstance();
  (**(code **)(*plVar8 + 0x138))(local_60,plVar8,param_1);
  uVar9 = (ulong)(local_60[0] >> 1);
  if ((local_60[0] & 1) != 0) {
    uVar9 = local_58;
  }
  if (uVar9 == 4) {
    piVar2 = (int *)((ulong)local_60 | 1);
    if ((local_60[0] & 1) != 0) {
      piVar2 = local_50;
    }
    if (*piVar2 == 0x7433632e) {
      this[0x130] = (Bundle3D)0x0;
      uVar9 = loadJson(this,param_1);
    }
    else {
      if (*piVar2 != 0x6233632e) goto LAB_00d1a35c;
      this[0x130] = (Bundle3D)0x1;
      uVar9 = loadBinary(this,param_1);
    }
    if ((uVar9 & 1) == 0) goto LAB_00d1a35c;
    if (this_00 !=
        (basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)param_1) {
      uVar9 = *(ulong *)(param_1 + 8);
      pbVar3 = *(basic_string **)(param_1 + 0x10);
      if (((byte)*param_1 & 1) == 0) {
        pbVar3 = param_1 + 1;
        uVar9 = (ulong)((byte)*param_1 >> 1);
      }
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign(this_00,(char *)pbVar3,uVar9);
    }
    uVar11 = 1;
  }
  else {
LAB_00d1a35c:
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    assign(this_00,"",0);
    uVar11 = 0;
  }
  if ((local_60[0] & 1) != 0) {
    operator_delete(local_50);
  }
LAB_00d1a38c:
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar11;
}

