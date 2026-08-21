
void FUN_011f5658(long param_1,__shared_count *param_2)

{
  long lVar1;
  __shared_count *this;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = &std::__ndk1::numpunct<wchar_t>::id;
  uStack_60 = 0;
  local_68 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::numpunct<wchar_t>::id != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::numpunct<wchar_t>::id,&local_58,FUN_01208130);
  }
  uVar2 = (ulong)DAT_01794390;
  uVar6 = uVar2 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar5 = (long *)(param_1 + 0x10);
  lVar3 = *plVar5;
  uVar4 = *(long *)(param_1 + 0x18) - lVar3 >> 3;
  if (uVar4 <= uVar6) {
    if (uVar2 >= uVar4 && uVar2 - uVar4 != 0) {
      FUN_01207fec(plVar5,uVar2 - uVar4);
      lVar3 = *plVar5;
      this = *(__shared_count **)(lVar3 + uVar6 * 8);
      goto joined_r0x011f5734;
    }
    if (uVar2 < uVar4) {
      *(ulong *)(param_1 + 0x18) = lVar3 + uVar2 * 8;
    }
  }
  this = *(__shared_count **)(lVar3 + uVar6 * 8);
joined_r0x011f5734:
  if (this != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared(this);
    lVar3 = *plVar5;
  }
  *(__shared_count **)(lVar3 + uVar6 * 8) = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

