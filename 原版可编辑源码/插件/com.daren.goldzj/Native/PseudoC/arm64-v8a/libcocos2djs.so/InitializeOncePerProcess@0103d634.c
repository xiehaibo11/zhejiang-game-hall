
/* WARNING: Removing unreachable block (ram,0x0103d6a0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* v8::internal::V8::InitializeOncePerProcess() */

void v8::internal::V8::InitializeOncePerProcess(void)

{
  long lVar1;
  undefined ***pppuVar2;
  code *pcVar3;
  undefined **local_a0;
  code *pcStack_98;
  long *local_80;
  __base local_70 [32];
  __base *local_50;
  long local_38;
  
  local_80 = (long *)&local_a0;
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  local_a0 = &PTR_FUN_01caa5f0;
  pcStack_98 = InitializeOncePerProcessImpl;
  pppuVar2 = &local_a0;
  if (init_once != '\x02') {
    if (&stack0x00000000 == (undefined1 *)0xa0) {
      local_50 = (__base *)0x0;
      local_80 = (long *)0x0;
    }
    else {
      local_50 = local_70;
      std::__ndk1::__function::__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()>::__clone
                ((__func<void(*)(),std::__ndk1::allocator<void(*)()>,void()> *)&local_a0,local_70);
    }
    base::CallOnceImpl(&init_once,local_70);
    if (local_70 == local_50) {
      pcVar3 = *(code **)(*(long *)local_50 + 0x20);
    }
    else {
      pppuVar2 = (undefined ***)local_80;
      if (local_50 == (__base *)0x0) goto LAB_0103d710;
      pcVar3 = *(code **)(*(long *)local_50 + 0x28);
    }
    (*pcVar3)();
    pppuVar2 = (undefined ***)local_80;
  }
LAB_0103d710:
  local_80 = (long *)pppuVar2;
  if (&local_a0 == (undefined ***)local_80) {
    pcVar3 = *(code **)(*local_80 + 0x20);
  }
  else {
    if (local_80 == (long *)0x0) goto LAB_0103d738;
    pcVar3 = *(code **)(*local_80 + 0x28);
  }
  (*pcVar3)();
LAB_0103d738:
  if (*(long *)(lVar1 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

