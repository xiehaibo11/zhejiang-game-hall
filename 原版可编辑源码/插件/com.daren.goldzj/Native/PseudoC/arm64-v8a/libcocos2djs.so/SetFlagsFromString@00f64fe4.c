
/* v8::internal::FlagList::SetFlagsFromString(char const*, unsigned long) */

undefined4 v8::internal::FlagList::SetFlagsFromString(char *param_1,ulong param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long *plVar5;
  char **ppcVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  ulong uVar10;
  byte *pbVar11;
  uint local_24;
  
  pbVar4 = operator_new__(param_2 + 1,(nothrow_t *)&std::nothrow);
  if (pbVar4 == (byte *)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    pbVar4 = operator_new__(param_2 + 1,(nothrow_t *)&std::nothrow);
    if (pbVar4 == (byte *)0x0) goto LAB_00f65208;
  }
  MemCopy(pbVar4,param_1,param_2);
  pbVar4[param_2] = 0;
  uVar7 = (uint)*pbVar4;
  pbVar11 = pbVar4;
  if (*pbVar4 != 0) {
    do {
      iVar2 = isspace(uVar7);
      if (iVar2 == 0) break;
      pbVar11 = pbVar11 + 1;
      uVar7 = (uint)*pbVar11;
    } while (uVar7 != 0);
  }
  uVar7 = (uint)*pbVar11;
  local_24 = 1;
  if (*pbVar11 == 0) {
    uVar10 = 8;
  }
  else {
    uVar8 = 1;
    pbVar9 = pbVar11;
LAB_00f650a8:
    do {
      iVar2 = isspace(uVar7);
      if (iVar2 == 0) {
        pbVar9 = pbVar9 + 1;
        uVar7 = (uint)*pbVar9;
        if (uVar7 != 0) goto LAB_00f650a8;
      }
      else {
        do {
          iVar2 = isspace(uVar7);
          if (iVar2 == 0) break;
          pbVar9 = pbVar9 + 1;
          uVar7 = (uint)*pbVar9;
        } while (uVar7 != 0);
      }
      uVar7 = (uint)*pbVar9;
      uVar8 = uVar8 + 1;
      local_24 = uVar8;
    } while (*pbVar9 != 0);
    uVar10 = (ulong)uVar8 << 3;
  }
  ppcVar6 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
  if (ppcVar6 == (char **)0x0) {
    plVar5 = (long *)V8::GetCurrentPlatform();
    (**(code **)(*plVar5 + 0x18))();
    ppcVar6 = operator_new__(uVar10,(nothrow_t *)&std::nothrow);
    if (ppcVar6 == (char **)0x0) {
LAB_00f65208:
                    /* WARNING: Subroutine does not return */
      FatalProcessOutOfMemory((Isolate *)0x0,"NewArray");
    }
  }
  local_24 = 1;
  if (*pbVar11 != 0) {
LAB_00f65154:
    bVar1 = *pbVar11;
    uVar7 = (uint)bVar1;
    ppcVar6[(int)local_24] = (char *)pbVar11;
    pbVar9 = pbVar11;
    if (bVar1 != 0) {
      do {
        pbVar11 = pbVar9 + 1;
        iVar2 = isspace(uVar7);
        if (iVar2 != 0) {
          uVar7 = (uint)*pbVar11;
          *pbVar9 = 0;
          if (*pbVar11 != 0) goto LAB_00f65190;
          break;
        }
        uVar7 = (uint)*pbVar11;
        pbVar9 = pbVar11;
      } while (uVar7 != 0);
    }
    goto LAB_00f65140;
  }
  uVar3 = SetFlagsFromCommandLine((int *)&local_24,ppcVar6,false);
  goto LAB_00f651f8;
  while( true ) {
    pbVar11 = pbVar11 + 1;
    uVar7 = (uint)*pbVar11;
    if (uVar7 == 0) break;
LAB_00f65190:
    iVar2 = isspace(uVar7);
    if (iVar2 == 0) break;
  }
LAB_00f65140:
  local_24 = local_24 + 1;
  if (*pbVar11 == 0) goto LAB_00f651a8;
  goto LAB_00f65154;
LAB_00f651a8:
  uVar3 = SetFlagsFromCommandLine((int *)&local_24,ppcVar6,false);
  if (ppcVar6 == (char **)0x0) goto joined_r0x00f651c0;
LAB_00f651f8:
  operator_delete__(ppcVar6);
joined_r0x00f651c0:
  if (pbVar4 != (byte *)0x0) {
    operator_delete__(pbVar4);
  }
  return uVar3;
}

