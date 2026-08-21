
/* cocos2d::Node::getChildByName(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > const&) const */

long __thiscall cocos2d::Node::getChildByName(Node *this,basic_string *param_1)

{
  size_t __n;
  ulong uVar1;
  basic_string *pbVar2;
  long *plVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  void *__s1;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  __murmur2_or_cityhash<unsigned_long,64ul> a_Stack_60 [8];
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  uVar1 = *(ulong *)(param_1 + 8);
  pbVar2 = *(basic_string **)(param_1 + 0x10);
  if (((byte)*param_1 & 1) == 0) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
  }
  lVar6 = std::__ndk1::__murmur2_or_cityhash<unsigned_long,64ul>::operator()
                    (a_Stack_60,pbVar2,uVar1);
  plVar8 = *(long **)(this + 0x178);
  plVar3 = *(long **)(this + 0x180);
  if (plVar8 != plVar3) {
    pbVar2 = param_1 + 1;
    uVar1 = (ulong)((byte)*param_1 >> 1);
    if (((byte)*param_1 & 1) != 0) {
      pbVar2 = *(basic_string **)(param_1 + 0x10);
      uVar1 = *(ulong *)(param_1 + 8);
    }
    do {
      lVar7 = *plVar8;
      if (*(long *)(lVar7 + 0x1c0) == lVar6) {
        if ((*(byte *)(lVar7 + 0x1a8) & 1) == 0) {
          uVar9 = (ulong)(*(byte *)(lVar7 + 0x1a8) >> 1);
          __s1 = (void *)(lVar7 + 0x1a9);
        }
        else {
          uVar9 = *(ulong *)(lVar7 + 0x1b0);
          __s1 = *(void **)(lVar7 + 0x1b8);
        }
        __n = uVar1;
        if (uVar9 <= uVar1) {
          __n = uVar9;
        }
        if (__n == 0) {
          if (uVar9 == uVar1) goto LAB_00f24370;
        }
        else {
          iVar5 = memcmp(__s1,pbVar2,__n);
          if ((uVar9 == uVar1) && (iVar5 == 0)) goto LAB_00f24370;
        }
      }
      plVar8 = plVar8 + 1;
    } while (plVar3 != plVar8);
  }
  lVar7 = 0;
LAB_00f24370:
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return lVar7;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

