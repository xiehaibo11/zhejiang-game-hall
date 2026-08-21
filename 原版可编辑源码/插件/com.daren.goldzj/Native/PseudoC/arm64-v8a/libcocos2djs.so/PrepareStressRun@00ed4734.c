
/* v8::Testing::PrepareStressRun(int) */

void v8::Testing::PrepareStressRun(int param_1)

{
  int iVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *pcVar4;
  
  iVar1 = 4;
  if (internal::FLAG_stress_runs != 0) {
    iVar1 = internal::FLAG_stress_runs + -1;
  }
  if (iVar1 == param_1) {
    pcVar4 = "--always-opt";
    uVar3 = 0xd;
  }
  else {
    pcVar4 = 
    "--prepare-always-opt --max-inlined-bytecode-size=999999 --max-inlined-bytecode-size-cumulative=999999 --noalways-opt"
    ;
    uVar3 = 0x75;
  }
  uVar2 = __strlen_chk(pcVar4,uVar3);
  internal::FlagList::SetFlagsFromString(pcVar4,uVar2);
  internal::FlagList::EnforceFlagImplications();
  return;
}

