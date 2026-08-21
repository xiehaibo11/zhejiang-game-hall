
/* cocos2d::PoolManager::getInstance() */

void cocos2d::PoolManager::getInstance(void)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  AutoreleasePool *this;
  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> local_50 [16];
  void *local_40;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (s_singleInstance == (undefined8 *)0x0) {
    puVar2 = operator_new(0x20,(nothrow_t *)&std::nothrow);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      *(undefined1 *)(puVar2 + 3) = 1;
      pvVar3 = operator_new(0x50);
      *puVar2 = pvVar3;
      puVar2[1] = pvVar3;
      puVar2[2] = (long)pvVar3 + 0x50;
    }
    s_singleInstance = puVar2;
    this = operator_new(0x30);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    basic_string<decltype(nullptr)>(local_50,"cocos2d autorelease pool");
    AutoreleasePool::AutoreleasePool(this,(basic_string *)local_50);
    if (((byte)local_50[0] & 1) != 0) {
      operator_delete(local_40);
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(s_singleInstance);
  }
  return;
}

