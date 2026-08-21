
/* v8::internal::CodeEventLogger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::wasm::WasmCode const*, v8::internal::Vector<char const>) */

void v8::internal::CodeEventLogger::CodeCreateEvent
               (long *param_1,ulong param_2,long param_3,char *param_4,long param_5)

{
  long lVar1;
  int iVar2;
  int iVar3;
  size_t sVar4;
  char *pcVar5;
  int *piVar6;
  
  piVar6 = (int *)param_1[2];
  pcVar5 = (&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff];
  *piVar6 = 0;
  sVar4 = strlen(pcVar5);
  iVar3 = (int)sVar4;
  if (0x1ff < iVar3) {
    iVar3 = 0x200;
  }
  MemCopy(piVar6 + 1,pcVar5,(long)iVar3);
  lVar1 = (long)iVar3 + (long)*piVar6;
  iVar3 = (int)lVar1;
  *piVar6 = iVar3;
  if (iVar3 < 0x200) {
    *piVar6 = iVar3 + 1;
    *(undefined1 *)((long)piVar6 + lVar1 + 4) = 0x3a;
  }
  piVar6 = (int *)param_1[2];
  if (param_5 == 0) {
    param_4 = "<wasm-unnamed>";
    iVar2 = __strlen_chk("<wasm-unnamed>",0xf);
    iVar3 = *piVar6;
    if (0x200 - iVar3 <= iVar2) {
      iVar2 = 0x200 - iVar3;
    }
  }
  else {
    iVar3 = *piVar6;
    iVar2 = (int)param_5;
    if (0x200 - iVar3 <= (int)param_5) {
      iVar2 = 0x200 - iVar3;
    }
  }
  MemCopy((void *)((long)piVar6 + (long)iVar3 + 4),param_4,(long)iVar2);
  *piVar6 = iVar2 + *piVar6;
  piVar6 = (int *)param_1[2];
  iVar3 = *piVar6;
  if (iVar3 < 0x200) {
    *piVar6 = iVar3 + 1;
    *(undefined1 *)((long)piVar6 + (long)iVar3 + 4) = 0x2d;
    piVar6 = (int *)param_1[2];
  }
  if (*(int *)(param_3 + 0x38) == -1) {
    iVar3 = __strlen_chk("<anonymous>",0xc);
    iVar2 = 0x200 - *piVar6;
    if (iVar2 <= iVar3) {
      iVar3 = iVar2;
    }
    MemCopy((void *)((long)piVar6 + (long)*piVar6 + 4),"<anonymous>",(long)iVar3);
    iVar3 = iVar3 + *piVar6;
  }
  else {
    iVar3 = *piVar6;
    if (((0x1ff < iVar3) ||
        (iVar3 = SNPrintF((long)piVar6 + (long)iVar3 + 4,(long)(0x200 - iVar3),"%d"), iVar3 < 1)) ||
       (iVar3 = *piVar6 + iVar3, 0x200 < iVar3)) goto LAB_01059ae0;
  }
  *piVar6 = iVar3;
LAB_01059ae0:
  piVar6 = (int *)param_1[2];
  iVar3 = *piVar6;
  if (iVar3 < 0x200) {
    *piVar6 = iVar3 + 1;
    *(undefined1 *)((long)piVar6 + (long)iVar3 + 4) = 0x2d;
    piVar6 = (int *)param_1[2];
  }
  pcVar5 = (&PTR_s_none_019fe977_0x14_01cb2438)[*(char *)(param_3 + 0x88)];
  sVar4 = strlen(pcVar5);
  iVar2 = 0x200 - *piVar6;
  iVar3 = (int)sVar4;
  if (iVar2 <= (int)sVar4) {
    iVar3 = iVar2;
  }
  MemCopy((void *)((long)piVar6 + (long)*piVar6 + 4),pcVar5,(long)iVar3);
  *piVar6 = iVar3 + *piVar6;
                    /* WARNING: Could not recover jumptable at 0x01059b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x98))
            (param_1,param_3,(undefined4 *)param_1[2] + 1,*(undefined4 *)param_1[2]);
  return;
}

