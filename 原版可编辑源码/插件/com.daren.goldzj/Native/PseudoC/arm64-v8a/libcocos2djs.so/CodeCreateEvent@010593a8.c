
/* v8::internal::CodeEventLogger::CodeCreateEvent(v8::internal::CodeEventListener::LogEventsAndTags,
   v8::internal::AbstractCode, v8::internal::SharedFunctionInfo, v8::internal::Name) */

void __thiscall
v8::internal::CodeEventLogger::CodeCreateEvent
          (CodeEventLogger *this,ulong param_2,ulong param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t sVar5;
  NameBuffer *pNVar6;
  char *pcVar7;
  int *piVar8;
  
  piVar8 = *(int **)(this + 0x10);
  pcVar7 = (&PTR_s_code_creation_01cb2338)[param_2 & 0xffffffff];
  *piVar8 = 0;
  sVar5 = strlen(pcVar7);
  iVar4 = (int)sVar5;
  if (0x1ff < iVar4) {
    iVar4 = 0x200;
  }
  MemCopy(piVar8 + 1,pcVar7,(long)iVar4);
  lVar1 = (long)iVar4 + (long)*piVar8;
  iVar4 = (int)lVar1;
  *piVar8 = iVar4;
  if (iVar4 < 0x200) {
    *piVar8 = iVar4 + 1;
    *(undefined1 *)((long)piVar8 + lVar1 + 4) = 0x3a;
  }
  piVar8 = *(int **)(this + 0x10);
  if (*(short *)((param_3 & 0xffffffff00000000 | 7) + (ulong)*(uint *)(param_3 - 1)) == 0x9a) {
    uVar3 = *(uint *)(param_3 + 0x17) >> 1 & 0x1f;
    if (uVar3 == 0) {
      pcVar7 = "*";
      goto LAB_0105949c;
    }
    if (uVar3 != 0xc) {
      pcVar7 = "";
      goto LAB_0105949c;
    }
  }
  pcVar7 = "~";
  if ((*(uint *)(param_4 + 0x1b) & 0xf00000) != 0) {
    pcVar7 = "";
  }
LAB_0105949c:
  sVar5 = strlen(pcVar7);
  iVar2 = 0x200 - *piVar8;
  iVar4 = (int)sVar5;
  if (iVar2 <= (int)sVar5) {
    iVar4 = iVar2;
  }
  MemCopy((void *)((long)piVar8 + (long)*piVar8 + 4),pcVar7,(long)iVar4);
  *piVar8 = iVar4 + *piVar8;
  pNVar6 = *(NameBuffer **)(this + 0x10);
  iVar4 = *(int *)pNVar6;
  if (iVar4 < 0x200) {
    *(int *)pNVar6 = iVar4 + 1;
    pNVar6[(long)iVar4 + 4] = (NameBuffer)0x20;
    pNVar6 = *(NameBuffer **)(this + 0x10);
  }
  NameBuffer::AppendName(pNVar6,param_5);
                    /* WARNING: Could not recover jumptable at 0x01059538. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)this + 0x90))
            (this,param_3,param_4,*(undefined4 **)(this + 0x10) + 1,**(undefined4 **)(this + 0x10));
  return;
}

