
/* universe::core::Computational::pop() */

void universe::core::Computational::pop(void)

{
  long lVar1;
  long lVar2;
  long in_x0;
  long *plVar3;
  undefined8 *in_x8;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  mutex *local_58;
  char local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  local_58 = (mutex *)(in_x0 + 0x18);
  local_50 = '\x01';
  std::__ndk1::mutex::lock(local_58);
  lVar4 = *(long *)(in_x0 + 0x10);
  if (lVar4 == 0) {
    do {
      std::__ndk1::condition_variable::wait
                ((condition_variable *)(in_x0 + 0x40),(unique_lock *)&local_58);
      lVar4 = *(long *)(in_x0 + 0x10);
    } while (lVar4 == 0);
  }
  uVar5 = *(undefined8 *)(*(long *)(in_x0 + 8) + 0x10);
  *(undefined8 *)(*(long *)(in_x0 + 8) + 0x10) = 0;
  *in_x8 = uVar5;
  plVar6 = *(long **)(in_x0 + 8);
  lVar1 = *plVar6;
  *(long *)(lVar1 + 8) = plVar6[1];
  *(long *)plVar6[1] = lVar1;
  *(long *)(in_x0 + 0x10) = lVar4 + -1;
  plVar3 = (long *)plVar6[2];
  plVar6[2] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 8))();
  }
  operator_delete(plVar6);
  if (local_50 != '\0') {
    std::__ndk1::mutex::unlock(local_58);
    if (*(long *)(lVar2 + 0x28) == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
                    /* WARNING: Subroutine does not return */
  std::__ndk1::__throw_system_error(1,"unique_lock::unlock: not locked");
}

