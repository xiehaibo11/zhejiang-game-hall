
/* std::__ndk1::locale::has_facet(std::__ndk1::locale::id&) const */

void __thiscall std::__ndk1::locale::has_facet(locale *this,id *param_1)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  id *local_60;
  code *local_58;
  undefined8 uStack_50;
  undefined1 **local_48;
  undefined1 *local_40;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  lVar4 = *(long *)this;
  uStack_50 = 0;
  local_58 = id::__init;
  local_60 = param_1;
  if (*(long *)param_1 != -1) {
    local_48 = &local_40;
    local_40 = (undefined1 *)&local_60;
    __call_once((ulong *)param_1,&local_48,FUN_01208130);
  }
  lVar1 = *(long *)(lVar4 + 0x10);
  if ((long)*(int *)(param_1 + 8) - 1U < (ulong)(*(long *)(lVar4 + 0x18) - lVar1 >> 3)) {
    bVar3 = *(long *)(lVar1 + ((long)*(int *)(param_1 + 8) - 1U) * 8) != 0;
  }
  else {
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}

