
/* v8::internal::Snapshot::VerifyChecksum(v8::StartupData const*) */

bool v8::internal::Snapshot::VerifyChecksum(StartupData *param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  long local_38;
  
  if (FLAG_profile_deserialization == '\0') {
    lVar3 = 0;
  }
  else {
    lVar3 = base::TimeTicks::HighResolutionNow();
  }
  iVar1 = *(int *)(*(long *)param_1 + 8);
  iVar2 = Checksum((internal *)(*(long *)param_1 + 0xc),*(int *)(param_1 + 8) + -0xc);
  if (FLAG_profile_deserialization != '\0') {
    local_38 = base::TimeTicks::HighResolutionNow();
    local_38 = local_38 - lVar3;
    base::TimeDelta::InMillisecondsF((TimeDelta *)&local_38);
    PrintF("[Verifying snapshot checksum took %0.3f ms]\n");
  }
  return iVar2 == iVar1;
}

