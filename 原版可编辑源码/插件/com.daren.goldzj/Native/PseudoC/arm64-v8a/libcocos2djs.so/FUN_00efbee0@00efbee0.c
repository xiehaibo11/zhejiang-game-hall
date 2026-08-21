
void FUN_00efbee0(long param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  int *piVar6;
  long lVar7;
  ulong uVar8;
  long local_68;
  void *local_60;
  void *local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  undefined8 local_44;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  local_60 = (void *)0x0;
  local_58 = (void *)0x0;
  uStack_50 = 0;
  local_48 = 0;
  local_44 = 0xffffffffffffffff;
  local_68 = param_1;
  uVar3 = FUN_00efc17c(&local_68);
  while ((uVar3 & 1) != 0) {
    lVar4 = (long)(int)local_44;
    lVar7 = *(long *)(local_68 + 0x18);
    lVar5 = lVar4 + 1;
    if ((int)lVar5 < (int)((ulong)(*(long *)(local_68 + 0x20) - lVar7) >> 2) * -0x55555555) {
      piVar6 = (int *)(lVar7 + lVar5 * 0xc);
      iVar1 = *piVar6;
      if (((iVar1 < *(int *)((long)local_58 + -8)) && (iVar1 == *(int *)(lVar7 + lVar4 * 0xc + 4)))
         && (*(int *)(lVar7 + lVar5 * 0xc + 8) == *(int *)(lVar7 + lVar4 * 0xc + 8))) {
        *piVar6 = *(int *)(lVar7 + lVar4 * 0xc);
        local_48 = CONCAT11(1,(undefined1)local_48);
      }
    }
    uVar3 = FUN_00efc17c(&local_68);
  }
  do {
    uVar3 = FUN_00efc17c(&local_68);
  } while ((uVar3 & 1) != 0);
  lVar5 = *(long *)(local_68 + 0x18);
  uVar3 = (ulong)local_44._4_4_;
  lVar7 = *(long *)(local_68 + 0x20) - lVar5 >> 2;
  uVar8 = lVar7 * -0x5555555555555555;
  if (uVar8 < uVar3) {
    std::__ndk1::
    vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>::
    __append((vector<v8::internal::CoverageBlock,std::__ndk1::allocator<v8::internal::CoverageBlock>>
              *)(local_68 + 0x18),uVar3 + lVar7 * 0x5555555555555555);
  }
  else if (uVar8 - uVar3 != 0) {
    *(ulong *)(local_68 + 0x20) = lVar5 + uVar3 * 0xc;
  }
  if (local_60 != (void *)0x0) {
    local_58 = local_60;
    operator_delete(local_60);
  }
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}

