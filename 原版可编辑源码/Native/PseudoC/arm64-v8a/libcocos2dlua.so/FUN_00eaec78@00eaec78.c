
void FUN_00eaec78(long param_1,ushort param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  ushort *puVar4;
  ushort local_44 [2];
  ushort local_40 [2];
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa5) == '\0') {
    uVar2 = param_2 & 0xff | (ushort)(param_3 << 8);
    if (*(char *)(param_1 + 0xa6) == '\0') {
      puVar4 = *(ushort **)(param_1 + 0x78);
      local_44[0] = uVar2;
      if (puVar4 < *(ushort **)(param_1 + 0x80)) goto LAB_00eaed38;
      puVar4 = local_44;
    }
    else {
      puVar4 = *(ushort **)(param_1 + 0x78);
      local_40[0] = uVar2;
      if (puVar4 < *(ushort **)(param_1 + 0x80)) {
LAB_00eaed38:
        *puVar4 = uVar2;
        goto LAB_00eaed3c;
      }
      puVar4 = local_40;
    }
LAB_00eaed20:
    std::__ndk1::
    vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>::
    __push_back_slow_path<std::__ndk1::pair<char,char>>
              ((vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>
                *)(param_1 + 0x70),(pair *)puVar4);
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    sVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
    local_3c[0] = uVar2 & 0xff | sVar3 << 8;
    puVar4 = *(ushort **)(param_1 + 0x78);
    if (*(ushort **)(param_1 + 0x80) <= puVar4) {
      puVar4 = local_3c;
      goto LAB_00eaed20;
    }
    *puVar4 = local_3c[0];
LAB_00eaed3c:
    *(ushort **)(param_1 + 0x78) = puVar4 + 1;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

