
/* universe::core::Flags::dispatch(std::__ndk1::function<void ()> const&) */

void __thiscall universe::core::Flags::dispatch(Flags *this,function *param_1)

{
  mutex *this_00;
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  Flags *local_60;
  undefined1 *local_58;
  undefined8 local_50;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  plVar3 = (long *)__emutls_get_address
                             (__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
  for (puVar5 = (undefined8 *)*plVar3; puVar5 != (undefined8 *)0x0; puVar5 = (undefined8 *)puVar5[2]
      ) {
    if ((Flags *)*puVar5 == this) {
      if (puVar5[1] != 0) {
        if (*(long **)(param_1 + 0x20) == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_009d64e4();
        }
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
        goto LAB_009e22f8;
      }
      break;
    }
  }
  this_00 = (mutex *)(this + 0x68);
  std::__ndk1::mutex::lock(this_00);
  if (this[0x60] == (Flags)0x0) {
    this[0x60] = (Flags)0x1;
    *(undefined4 *)(this + 100) = 0;
    std::__ndk1::mutex::unlock(this_00);
    local_60 = this;
    puVar5 = (undefined8 *)
             __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
    local_50 = *puVar5;
    *puVar5 = &local_60;
    if (*(long **)(param_1 + 0x20) == (long *)0x0) {
      local_58 = (undefined1 *)&local_60;
                    /* WARNING: Subroutine does not return */
      FUN_009d64e4();
    }
    local_58 = (undefined1 *)&local_60;
    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    run(this);
    uVar4 = local_50;
    puVar5 = (undefined8 *)
             __emutls_get_address(__emutls_v__ZN8universe4core10SurroundedINS0_5FlagsEhE4_topE);
    *puVar5 = uVar4;
    goto LAB_009e22f8;
  }
  lVar8 = *(long *)(this + 8);
  lVar6 = *(long *)(this + 0x10);
  uVar1 = 0;
  if (lVar6 - lVar8 != 0) {
    uVar1 = (lVar6 - lVar8 >> 3) * 0x55 - 1;
  }
  uVar7 = *(long *)(this + 0x28) + *(long *)(this + 0x20);
  if (uVar1 == uVar7) {
    std::__ndk1::
    deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>::
    __add_back_capacity((deque<std::__ndk1::function<void()>,std::__ndk1::allocator<std::__ndk1::function<void()>>>
                         *)this);
    lVar8 = *(long *)(this + 8);
    lVar6 = *(long *)(this + 0x10);
    uVar7 = *(long *)(this + 0x20) + *(long *)(this + 0x28);
  }
  if (lVar6 == lVar8) {
    lVar8 = 0;
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 == (long *)0x0) goto LAB_009e22c4;
LAB_009e2234:
    if ((long *)param_1 == plVar3) {
      *(long *)(lVar8 + 0x20) = lVar8;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x18))(*(long **)(param_1 + 0x20),lVar8);
    }
    else {
      uVar4 = (**(code **)(*plVar3 + 0x10))();
      *(undefined8 *)(lVar8 + 0x20) = uVar4;
    }
  }
  else {
    lVar8 = *(long *)(lVar8 + (uVar7 / 0x55) * 8) + (uVar7 % 0x55) * 0x30;
    plVar3 = *(long **)(param_1 + 0x20);
    if (plVar3 != (long *)0x0) goto LAB_009e2234;
LAB_009e22c4:
    *(undefined8 *)(lVar8 + 0x20) = 0;
  }
  *(long *)(this + 0x28) = *(long *)(this + 0x28) + 1;
  std::__ndk1::mutex::unlock(this_00);
LAB_009e22f8:
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

