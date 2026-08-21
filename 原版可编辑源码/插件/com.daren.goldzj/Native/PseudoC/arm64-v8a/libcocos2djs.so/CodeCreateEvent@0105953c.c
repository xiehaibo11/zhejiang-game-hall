
/* v8::internal::CodeEventLogger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name, int, int) */

void v8::internal::CodeEventLogger::CodeCreateEvent
               (long *param_1,ulong param_2,ulong param_3,long param_4,ulong param_5,
               undefined4 param_6)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  char *pcVar7;
  int *piVar8;
  long local_70;
  void *local_68;
  int local_5c;
  ulong local_58;
  
  piVar8 = (int *)param_1[2];
  pcVar7 = (&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff];
  *piVar8 = 0;
  local_70 = param_4;
  sVar6 = strlen(pcVar7);
  iVar5 = (int)sVar6;
  if (0x1ff < iVar5) {
    iVar5 = 0x200;
  }
  MemCopy(piVar8 + 1,pcVar7,(long)iVar5);
  lVar1 = (long)iVar5 + (long)*piVar8;
  iVar5 = (int)lVar1;
  *piVar8 = iVar5;
  if (iVar5 < 0x200) {
    *piVar8 = iVar5 + 1;
    *(undefined1 *)((long)piVar8 + lVar1 + 4) = 0x3a;
  }
  piVar8 = (int *)param_1[2];
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x9a) {
    uVar4 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
    if (uVar4 == 0) {
      pcVar7 = "*";
      goto LAB_0105963c;
    }
    if (uVar4 != 0xc) {
      pcVar7 = "";
      goto LAB_0105963c;
    }
  }
  pcVar7 = "~";
  if ((*(uint *)(local_70 + 0x1b) & 0xf00000) != 0) {
    pcVar7 = "";
  }
LAB_0105963c:
  sVar6 = strlen(pcVar7);
  iVar2 = 0x200 - *piVar8;
  iVar5 = (int)sVar6;
  if (iVar2 <= (int)sVar6) {
    iVar5 = iVar2;
  }
  MemCopy((void *)((long)piVar8 + (long)*piVar8 + 4),pcVar7,(long)iVar5);
  *piVar8 = iVar5 + *piVar8;
  piVar8 = (int *)param_1[2];
  local_58 = SharedFunctionInfo::DebugName((SharedFunctionInfo *)&local_70);
  if ((int)local_58 != 0) {
    local_5c = 0;
    String::ToCString(&local_68,&local_58,1,0,&local_5c);
    iVar2 = 0x200 - *piVar8;
    iVar5 = local_5c;
    if (iVar2 <= local_5c) {
      iVar5 = iVar2;
    }
    MemCopy((void *)((long)piVar8 + (long)*piVar8 + 4),local_68,(long)iVar5);
    pvVar3 = local_68;
    *piVar8 = iVar5 + *piVar8;
    local_68 = (void *)0x0;
    if (pvVar3 != (void *)0x0) {
      operator_delete__(pvVar3);
    }
  }
  piVar8 = (int *)param_1[2];
  iVar5 = *piVar8;
  if (iVar5 < 0x200) {
    *piVar8 = iVar5 + 1;
    *(undefined1 *)((long)piVar8 + (long)iVar5 + 4) = 0x20;
    piVar8 = (int *)param_1[2];
  }
  if (*(ushort *)((param_5 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_5 - 1)) < 0x40) {
    local_58 = param_5;
    if ((int)param_5 != 0) {
      local_5c = 0;
      String::ToCString(&local_68,&local_58,1,0,&local_5c);
      iVar2 = 0x200 - *piVar8;
      iVar5 = local_5c;
      if (iVar2 <= local_5c) {
        iVar5 = iVar2;
      }
      MemCopy((void *)((long)piVar8 + (long)*piVar8 + 4),local_68,(long)iVar5);
      pvVar3 = local_68;
      *piVar8 = iVar5 + *piVar8;
      local_68 = (void *)0x0;
      if (pvVar3 != (void *)0x0) {
        operator_delete__(pvVar3);
      }
    }
  }
  else {
    iVar5 = __strlen_chk(&DAT_019d4de6,0xd);
    iVar2 = 0x200 - *piVar8;
    if (iVar2 <= iVar5) {
      iVar5 = iVar2;
    }
    MemCopy((void *)((long)piVar8 + (long)*piVar8 + 4),&DAT_019d4de6,(long)iVar5);
    *piVar8 = iVar5 + *piVar8;
    piVar8 = (int *)param_1[2];
    if ((*(uint *)(param_5 + 3) & 1) == 0) {
      uVar4 = *(uint *)(param_5 + 3) >> 3;
    }
    else {
      local_58 = param_5;
      uVar4 = String::ComputeAndSetHash((String *)&local_58);
    }
    iVar5 = *piVar8;
    if (((iVar5 < 0x200) &&
        (iVar5 = SNPrintF((long)piVar8 + (long)iVar5 + 4,(long)(0x200 - iVar5),&DAT_0188de11,uVar4),
        0 < iVar5)) && (*piVar8 + iVar5 < 0x201)) {
      *piVar8 = *piVar8 + iVar5;
    }
    piVar8 = (int *)param_1[2];
    iVar5 = *piVar8;
    if (iVar5 < 0x200) {
      *piVar8 = iVar5 + 1;
      *(undefined1 *)((long)piVar8 + (long)iVar5 + 4) = 0x29;
    }
  }
  piVar8 = (int *)param_1[2];
  iVar5 = *piVar8;
  if (iVar5 < 0x200) {
    *piVar8 = iVar5 + 1;
    *(undefined1 *)((long)piVar8 + (long)iVar5 + 4) = 0x3a;
    piVar8 = (int *)param_1[2];
    iVar5 = *piVar8;
    if (((iVar5 < 0x200) &&
        (iVar5 = SNPrintF((long)piVar8 + (long)iVar5 + 4,(long)(0x200 - iVar5),"%d",param_6),
        0 < iVar5)) && (*piVar8 + iVar5 < 0x201)) {
      *piVar8 = *piVar8 + iVar5;
    }
  }
  (**(code **)(*param_1 + 0x90))
            (param_1,param_3,local_70,(undefined4 *)param_1[2] + 1,*(undefined4 *)param_1[2]);
  return;
}

