
void FUN_018120f0(long param_1,__shared_count *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 *local_70;
  code *local_68;
  undefined8 uStack_60;
  undefined1 **local_58;
  undefined1 *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  local_70 = &std::__ndk1::collate<char>::id;
  uStack_60 = 0;
  local_68 = std::__ndk1::locale::id::__init;
  if (std::__ndk1::collate<char>::id != -1) {
    local_58 = &local_50;
    local_50 = (undefined1 *)&local_70;
    std::__ndk1::__call_once((ulong *)&std::__ndk1::collate<char>::id,&local_58,FUN_01828620);
  }
  uVar2 = (ulong)DAT_01d52c88;
  uVar7 = uVar2 - 1;
  std::__ndk1::__shared_count::__add_shared(param_2);
  plVar6 = (long *)(param_1 + 0x10);
  lVar3 = *plVar6;
  uVar5 = *(long *)(param_1 + 0x18) - lVar3 >> 3;
  if (uVar5 <= uVar7) {
    if (uVar2 < uVar5 || uVar2 - uVar5 == 0) {
      if (uVar2 < uVar5) {
        *(ulong *)(param_1 + 0x18) = lVar3 + uVar2 * 8;
      }
    }
    else {
      FUN_018284d0(plVar6,uVar2 - uVar5);
      lVar3 = *plVar6;
    }
  }
  puVar4 = (undefined8 *)(lVar3 + uVar7 * 8);
  if ((__shared_count *)*puVar4 != (__shared_count *)0x0) {
    std::__ndk1::__shared_count::__release_shared((__shared_count *)*puVar4);
    puVar4 = (undefined8 *)(*plVar6 + uVar7 * 8);
  }
  *puVar4 = param_2;
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

