
/* v8::internal::String::SlowAsIntegerIndex(unsigned long*) */

bool __thiscall v8::internal::String::SlowAsIntegerIndex(String *this,ulong *param_1)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  ulong uVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  int local_194;
  ulong local_190 [34];
  undefined4 local_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  uVar4 = *(ulong *)this;
  if (*(int *)(uVar4 + 7) < 8) {
    puVar5 = (uint *)(uVar4 + 3);
    if ((*(byte *)puVar5 & 1) != 0) {
      local_190[0] = uVar4;
      ComputeAndSetHash((String *)local_190);
      puVar5 = (uint *)(*(long *)this + 3);
    }
    if ((*puVar5 >> 1 & 1) == 0) {
      bVar3 = true;
      *param_1 = (ulong)(*puVar5 >> 3) & 0xffffff;
      goto LAB_01138c78;
    }
  }
  else if (*(int *)(uVar4 + 7) < 0x11) {
    local_194 = 0;
    local_190[0x20] = 0;
    local_190[0x1d] = 0;
    local_190[0x1c] = 0;
    local_190[0x1f] = 0;
    local_190[0x1e] = 0;
    local_190[0x19] = 0;
    local_190[0x18] = 0;
    local_190[0x1b] = 0;
    local_190[0x1a] = 0;
    local_190[0x15] = 0;
    local_190[0x14] = 0;
    local_190[0x17] = 0;
    local_190[0x16] = 0;
    local_190[0x11] = 0;
    local_190[0x10] = 0;
    local_190[0x13] = 0;
    local_190[0x12] = 0;
    local_190[0xd] = 0;
    local_190[0xc] = 0;
    local_190[0xf] = 0;
    local_190[0xe] = 0;
    local_190[9] = 0;
    local_190[8] = 0;
    local_190[0xb] = 0;
    local_190[10] = 0;
    local_190[5] = 0;
    local_190[4] = 0;
    local_190[7] = 0;
    local_190[6] = 0;
    local_190[1] = 0;
    local_190[0] = 0;
    local_190[3] = 0;
    local_190[2] = 0;
    local_78 = 0;
    local_70 = 0;
    lStack_68 = 0;
    iVar7 = *(int *)(uVar4 + 7);
    iVar6 = 0;
LAB_01138b44:
    switch(*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7) & 0xf) {
    case 0:
      goto switchD_01138b6c_caseD_0;
    case 1:
    case 9:
      local_190[0x21] = local_190[0x21] & 0xffffffff00000000;
      if ((int)uVar4 == 0) goto switchD_01138bf0_caseD_1;
      local_80 = 0;
      local_190[0x21] = 0x2100000001;
      local_194 = 0;
      local_190[0x20] = uVar4;
      uVar4 = ConsStringIterator::Search((ConsStringIterator *)local_190,&local_194);
      iVar6 = local_194;
      if ((int)uVar4 == 0) goto LAB_01138c68;
      iVar1 = *(int *)(uVar4 + 7);
      iVar7 = local_194;
      goto LAB_01138bc8;
    case 2:
      local_70 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
      local_70 = local_70 + (long)iVar6 * 2;
      goto LAB_01138c28;
    case 3:
    case 0xb:
      iVar6 = iVar6 + (*(int *)(uVar4 + 0xf) >> 1);
      goto switchD_01138b6c_caseD_5;
    default:
      goto switchD_01138b6c_caseD_4;
    case 5:
    case 0xd:
      goto switchD_01138b6c_caseD_5;
    case 8:
      local_70 = uVar4 + (long)iVar6 + 0xb;
      break;
    case 10:
      local_70 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
      local_70 = local_70 + iVar6;
    }
    local_78 = 1;
    lStack_68 = local_70 + iVar7;
    goto LAB_01138c68;
  }
  bVar3 = false;
  goto LAB_01138c78;
switchD_01138b6c_caseD_5:
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  goto LAB_01138b44;
LAB_01138bc8:
  switch(*(ushort *)((uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 - 1)) + 7) & 0xf) {
  case 0:
    goto switchD_01138bf0_caseD_0;
  case 1:
  case 9:
    goto switchD_01138bf0_caseD_1;
  case 2:
    local_70 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
    local_70 = local_70 + (long)iVar7 * 2;
    goto LAB_01138cd0;
  case 3:
  case 0xb:
    iVar7 = iVar7 + (*(int *)(uVar4 + 0xf) >> 1);
    goto switchD_01138bf0_caseD_5;
  default:
    goto switchD_01138b6c_caseD_4;
  case 5:
  case 0xd:
    goto switchD_01138bf0_caseD_5;
  case 8:
    local_70 = uVar4 + (long)iVar7 + 0xb;
    break;
  case 10:
    local_70 = (**(code **)(**(long **)(uVar4 + 0xb) + 0x30))();
    local_70 = local_70 + iVar7;
  }
  local_78 = 1;
  lStack_68 = local_70 + (iVar1 - iVar6);
  goto switchD_01138bf0_caseD_1;
switchD_01138bf0_caseD_5:
  uVar4 = uVar4 & 0xffffffff00000000 | (ulong)*(uint *)(uVar4 + 0xb);
  goto LAB_01138bc8;
switchD_01138b6c_caseD_0:
  local_70 = uVar4 + (long)iVar6 * 2 + 0xb;
LAB_01138c28:
  local_78 = 0;
  lStack_68 = local_70 + (long)iVar7 * 2;
LAB_01138c68:
  local_190[0x21] = local_190[0x21] & 0xffffffff00000000;
  goto switchD_01138bf0_caseD_1;
switchD_01138b6c_caseD_4:
                    /* WARNING: Subroutine does not return */
  V8_Fatal("unreachable code");
switchD_01138bf0_caseD_0:
  local_70 = uVar4 + (long)iVar7 * 2 + 0xb;
LAB_01138cd0:
  local_78 = 0;
  lStack_68 = local_70 + (long)(iVar1 - iVar6) * 2;
switchD_01138bf0_caseD_1:
  bVar3 = StringToIndex<v8::internal::StringCharacterStream,unsigned_long,(v8::internal::ToIndexMode)1>
                    ((StringCharacterStream *)local_190,param_1);
LAB_01138c78:
  if (*(long *)(lVar2 + 0x28) == local_58) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}

