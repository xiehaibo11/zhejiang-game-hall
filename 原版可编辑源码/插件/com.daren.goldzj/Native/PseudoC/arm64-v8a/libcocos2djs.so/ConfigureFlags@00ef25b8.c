
/* v8::internal::OptimizedCompilationInfo::ConfigureFlags() */

void __thiscall
v8::internal::OptimizedCompilationInfo::ConfigureFlags(OptimizedCompilationInfo *this)

{
  uint uVar1;
  uint uVar2;
  
  if (FLAG_untrusted_code_mitigations != '\0') {
    *(uint *)this = *(uint *)this | 0x80;
  }
  switch(*(undefined4 *)(this + 8)) {
  case 0:
    uVar1 = *(uint *)this;
    uVar2 = uVar1 | 0x300;
    *(uint *)this = uVar2;
    if (FLAG_function_context_specialization != '\0') {
      uVar2 = uVar1 | 0x301;
      *(uint *)this = uVar2;
    }
    if (FLAG_turbo_splitting != '\0') {
      uVar2 = uVar2 | 8;
      *(uint *)this = uVar2;
    }
    if (FLAG_untrusted_code_mitigations != '\0') {
      uVar2 = uVar2 | 0x400;
      *(uint *)this = uVar2;
    }
    if (FLAG_analyze_environment_liveness == '\0') goto switchD_00ef25f4_caseD_4;
    uVar2 = uVar2 | 0x1000;
    break;
  case 1:
    uVar2 = *(uint *)this;
    *(uint *)this = uVar2 | 0x200;
    if (FLAG_turbo_splitting == '\0') goto switchD_00ef25f4_caseD_4;
    uVar2 = uVar2 | 0x208;
    break;
  case 2:
  case 3:
    if (FLAG_turbo_splitting == '\0') goto switchD_00ef25f4_caseD_4;
    uVar2 = *(uint *)this | 8;
    break;
  default:
    goto switchD_00ef25f4_caseD_4;
  case 5:
  case 6:
    uVar2 = *(uint *)this | 0x100;
  }
  *(uint *)this = uVar2;
switchD_00ef25f4_caseD_4:
  uVar2 = 0x100000;
  if (FLAG_turbo_control_flow_aware_allocation != '\0') {
    uVar2 = 0x80000;
  }
  *(uint *)this = *(uint *)this | uVar2;
  return;
}

