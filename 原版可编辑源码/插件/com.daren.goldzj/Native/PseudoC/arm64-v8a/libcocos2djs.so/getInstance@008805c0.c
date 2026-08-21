
/* cocos2d::PoolManager::getInstance() */

undefined8 * cocos2d::PoolManager::getInstance(void)

{
  long lVar1;
  undefined8 *puVar2;
  void *pvVar3;
  AutoreleasePool *this;
  basic_string local_50;
  undefined7 uStack_4f;
  undefined1 uStack_48;
  undefined7 uStack_47;
  undefined1 uStack_40;
  undefined1 uStack_3f;
  undefined6 uStack_3e;
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  puVar2 = s_singleInstance;
  if (s_singleInstance == (undefined8 *)0x0) {
    puVar2 = operator_new(0x18,(nothrow_t *)&std::nothrow);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      pvVar3 = operator_new(0x50);
      *puVar2 = pvVar3;
      puVar2[1] = pvVar3;
      puVar2[2] = (long)pvVar3 + 0x50;
    }
    s_singleInstance = puVar2;
    this = operator_new(0x30,(nothrow_t *)&std::nothrow);
    if (this != (AutoreleasePool *)0x0) {
      uStack_3e = 0;
      local_50 = (basic_string)0x20;
      uStack_47 = 0x6f6f7020657361;
      uStack_40 = 0x6c;
      uStack_4f = 0x6c65726f747561;
      uStack_48 = 0x65;
      uStack_3f = 0;
      AutoreleasePool::AutoreleasePool(this,&local_50);
      puVar2 = s_singleInstance;
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

