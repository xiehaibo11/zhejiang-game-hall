
/* cocos2d::BundleReader::readString() */

void cocos2d::BundleReader::readString(void)

{
  void *pvVar1;
  long lVar2;
  ulong uVar3;
  BundleReader *in_x0;
  long lVar4;
  ulong uVar5;
  ulong *in_x8;
  ulong local_58;
  ulong uStack_50;
  void *local_48;
  uint local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = read(in_x0,&local_3c,4,1);
  if (lVar4 == 1) {
    uStack_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    if ((local_3c != 0) &&
       ((long)(ulong)local_3c <= *(long *)(in_x0 + 0x30) - *(long *)(in_x0 + 0x28))) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      append((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)
             &local_58,(ulong)local_3c,'\0');
      pvVar1 = (void *)((ulong)&local_58 | 1);
      if ((local_58 & 1) != 0) {
        pvVar1 = local_48;
      }
      uVar5 = read(in_x0,pvVar1,1,(ulong)local_3c);
      if (uVar5 != local_3c) {
        *in_x8 = 0;
        in_x8[1] = 0;
        in_x8[2] = 0;
        if ((local_58 & 1) != 0) {
          operator_delete(local_48);
        }
        goto LAB_00d2dd84;
      }
    }
    pvVar1 = local_48;
    uVar3 = uStack_50;
    uVar5 = local_58;
    uStack_50 = 0;
    local_48 = (void *)0x0;
    local_58 = 0;
    in_x8[2] = (ulong)pvVar1;
    in_x8[1] = uVar3;
    *in_x8 = uVar5;
  }
  else {
    *in_x8 = 0;
    in_x8[1] = 0;
    in_x8[2] = 0;
  }
LAB_00d2dd84:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

