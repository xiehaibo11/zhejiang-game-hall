
/* cocosbuilder::CCBAnimationManager::getSequenceId(char const*) */

undefined4 __thiscall
cocosbuilder::CCBAnimationManager::getSequenceId(CCBAnimationManager *this,char *param_1)

{
  ulong uVar1;
  size_t __n;
  void *__s1;
  undefined8 *puVar2;
  long lVar3;
  int iVar4;
  undefined4 uVar5;
  char *__s;
  size_t sVar6;
  undefined8 *puVar7;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_70 [8];
  ulong local_68;
  void *local_60;
  long local_58;
  
  lVar3 = tpidr_el0;
  local_58 = *(long *)(lVar3 + 0x28);
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  basic_string<decltype(nullptr)>(local_70,param_1);
  puVar7 = *(undefined8 **)(this + 0x30);
  puVar2 = *(undefined8 **)(this + 0x38);
  if (puVar7 != puVar2) {
    do {
      __s = (char *)CCBSequence::getName((CCBSequence *)*puVar7);
      sVar6 = strlen(__s);
      uVar1 = (ulong)((byte)local_70[0] >> 1);
      if (((byte)local_70[0] & 1) != 0) {
        uVar1 = local_68;
      }
      if (sVar6 == 0xffffffffffffffff) {
                    /* WARNING: Subroutine does not return */
        std::__ndk1::__basic_string_common<true>::__throw_out_of_range();
      }
      __n = sVar6;
      if (uVar1 <= sVar6) {
        __n = uVar1;
      }
      if (__n == 0) {
        if (uVar1 == sVar6) goto LAB_00cebc10;
      }
      else {
        __s1 = (void *)((ulong)local_70 | 1);
        if (((byte)local_70[0] & 1) != 0) {
          __s1 = local_60;
        }
        iVar4 = memcmp(__s1,__s,__n);
        if ((uVar1 == sVar6) && (iVar4 == 0)) {
LAB_00cebc10:
          uVar5 = CCBSequence::getSequenceId((CCBSequence *)*puVar7);
          if (((byte)local_70[0] & 1) == 0) goto LAB_00cebc3c;
          goto LAB_00cebc34;
        }
      }
      puVar7 = puVar7 + 1;
    } while (puVar2 != puVar7);
  }
  uVar5 = 0xffffffff;
  if (((byte)local_70[0] & 1) != 0) {
LAB_00cebc34:
    operator_delete(local_60);
  }
LAB_00cebc3c:
  if (*(long *)(lVar3 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar5;
}

