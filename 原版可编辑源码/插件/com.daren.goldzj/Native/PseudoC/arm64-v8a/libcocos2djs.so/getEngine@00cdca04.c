
/* cocos2d::RandomHelper::getEngine() */

undefined8 * cocos2d::RandomHelper::getEngine(void)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  basic_string local_30;
  undefined7 uStack_2f;
  undefined1 uStack_28;
  undefined4 local_27;
  undefined1 local_23;
  undefined2 uStack_22;
  void *local_20;
  long local_18;
  
  lVar1 = tpidr_el0;
  local_18 = *(long *)(lVar1 + 0x28);
  if ((getEngine()::seed_gen & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&getEngine()::seed_gen);
    if (iVar2 != 0) {
      uStack_22 = 0;
      local_20 = (void *)0x0;
      local_30 = (basic_string)0x18;
      local_27 = 0x6d6f646e;
      uStack_2f = 0x72752f7665642f;
      uStack_28 = 0x61;
      local_23 = 0;
      std::__ndk1::random_device::random_device((random_device *)&getEngine()::seed_gen,&local_30);
      if (((byte)local_30 & 1) != 0) {
        operator_delete(local_20);
      }
      __cxa_atexit(std::__ndk1::random_device::~random_device,&getEngine()::seed_gen,
                   &PTR_LOOP_01d1b000);
      __cxa_guard_release(&getEngine()::seed_gen);
    }
  }
  if ((getEngine()::engine & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&getEngine()::engine);
    if (iVar2 != 0) {
      uVar3 = std::__ndk1::random_device::operator()((random_device *)&getEngine()::seed_gen);
      uVar3 = uVar3 & 0xffffffff;
      lVar4 = 1;
      getEngine()::engine = uVar3;
      do {
        uVar3 = (ulong)((int)lVar4 + ((uint)(uVar3 >> 0x1e) ^ (uint)uVar3) * 0x6c078965);
        (&getEngine()::engine)[lVar4] = uVar3;
        lVar4 = lVar4 + 1;
      } while (lVar4 != 0x270);
      DAT_01d3d868 = 0;
      __cxa_guard_release(&getEngine()::engine);
    }
  }
  if (*(long *)(lVar1 + 0x28) == local_18) {
    return &getEngine()::engine;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

