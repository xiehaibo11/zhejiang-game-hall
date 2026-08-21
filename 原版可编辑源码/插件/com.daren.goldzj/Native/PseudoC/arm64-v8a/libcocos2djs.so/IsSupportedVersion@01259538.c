
/* v8::internal::wasm::IsSupportedVersion(v8::internal::Vector<unsigned char const>) */

void __thiscall v8::internal::wasm::IsSupportedVersion(wasm *this,ulong param_2)

{
  long lVar1;
  bool bVar2;
  long *local_50;
  long *plStack_48;
  long *local_40;
  long local_38;
  long lStack_30;
  long local_28;
  
  lVar1 = tpidr_el0;
  local_28 = *(long *)(lVar1 + 0x28);
  if (param_2 < 0x10) {
    bVar2 = false;
  }
  else {
    local_50 = &local_38;
    plStack_48 = &local_28;
    local_40 = local_50;
    FUN_01259414(&local_50);
    bVar2 = *(long *)this == local_38 && *(long *)(this + 8) == lStack_30;
  }
  if (*(long *)(lVar1 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar2);
}

