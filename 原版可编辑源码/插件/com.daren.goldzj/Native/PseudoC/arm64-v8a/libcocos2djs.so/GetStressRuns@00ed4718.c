
/* v8::Testing::GetStressRuns() */

int v8::Testing::GetStressRuns(void)

{
  int iVar1;
  
  iVar1 = 5;
  if (internal::FLAG_stress_runs != 0) {
    iVar1 = internal::FLAG_stress_runs;
  }
  return iVar1;
}

