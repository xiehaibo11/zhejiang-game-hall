
void FUN_00868720(long param_1,ushort param_2,int param_3)

{
  long lVar1;
  ushort uVar2;
  short sVar3;
  pair *ppVar4;
  ushort *puVar5;
  ushort local_44 [2];
  ushort local_40 [2];
  ushort local_3c [2];
  long local_38;
  
  lVar1 = tpidr_el0;
  local_38 = *(long *)(lVar1 + 0x28);
  if (*(char *)(param_1 + 0xa5) == '\0') {
    uVar2 = param_2 & 0xff | (ushort)(param_3 << 8);
    if (*(char *)(param_1 + 0xa6) == '\0') {
      puVar5 = *(ushort **)(param_1 + 0x78);
      local_44[0] = uVar2;
      if (puVar5 < *(ushort **)(param_1 + 0x80)) goto LAB_008687e0;
      ppVar4 = (pair *)local_44;
    }
    else {
      puVar5 = *(ushort **)(param_1 + 0x78);
      local_40[0] = uVar2;
      if (puVar5 < *(ushort **)(param_1 + 0x80)) {
LAB_008687e0:
        *puVar5 = uVar2;
        goto LAB_008687e4;
      }
      ppVar4 = (pair *)local_40;
    }
LAB_008687c8:
    std::__ndk1::
    vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>::
    __push_back_slow_path<std::__ndk1::pair<char,char>>
              ((vector<std::__ndk1::pair<char,char>,std::__ndk1::allocator<std::__ndk1::pair<char,char>>>
                *)(param_1 + 0x70),ppVar4);
  }
  else {
    uVar2 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))();
    sVar3 = (**(code **)(**(long **)(param_1 + 0x18) + 0x28))(*(long **)(param_1 + 0x18),param_3);
    local_3c[0] = uVar2 & 0xff | sVar3 << 8;
    if (*(ushort **)(param_1 + 0x80) <= *(ushort **)(param_1 + 0x78)) {
      ppVar4 = (pair *)local_3c;
      goto LAB_008687c8;
    }
    **(ushort **)(param_1 + 0x78) = local_3c[0];
LAB_008687e4:
    *(long *)(param_1 + 0x78) = *(long *)(param_1 + 0x78) + 2;
  }
  if (*(long *)(lVar1 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

