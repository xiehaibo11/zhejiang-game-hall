
/* cocos2d::RandomHelper::getEngine() */

undefined8 * cocos2d::RandomHelper::getEngine(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_40 [16];
  void *local_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (((DAT_01791080 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01791080), iVar2 != 0)) {
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_40,"/dev/urandom");
    std::__ndk1::random_device::random_device
              ((random_device *)&DAT_01791078,(basic_string *)local_40);
    if (((byte)local_40[0] & 1) != 0) {
      operator_delete(local_30);
    }
    __cxa_atexit(std::__ndk1::random_device::~random_device,&DAT_01791078,&PTR_LOOP_016979c0);
    __cxa_guard_release(&DAT_01791080);
  }
  if (((DAT_01792410 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_01792410), iVar2 != 0)) {
    uVar3 = std::__ndk1::random_device::operator()((random_device *)&DAT_01791078);
    uVar3 = uVar3 & 0xffffffff;
    lVar4 = 1;
    DAT_01791088 = uVar3;
    do {
      uVar3 = (ulong)((int)lVar4 + ((uint)(uVar3 >> 0x1e) ^ (uint)uVar3) * 0x6c078965);
      (&DAT_01791088)[lVar4] = uVar3;
      lVar4 = lVar4 + 1;
    } while (lVar4 != 0x270);
    DAT_01792408 = 0;
    __cxa_guard_release(&DAT_01792410);
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return &DAT_01791088;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

