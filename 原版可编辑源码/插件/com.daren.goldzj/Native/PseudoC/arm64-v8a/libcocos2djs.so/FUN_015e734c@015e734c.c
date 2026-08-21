
void FUN_015e734c(long param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  long local_8;
  
  if (*param_2 == '\x01') {
    local_8 = v8::base::TimeTicks::Now();
    local_8 = local_8 - *(long *)(param_1 + 8);
    iVar3 = (int)*(undefined8 *)(param_1 + 0x10) + 0x1240;
  }
  else {
    if (*param_2 != '\0') {
      return;
    }
    lVar2 = v8::base::TimeTicks::Now();
    local_8 = lVar2 - *(long *)(param_1 + 8);
    *(long *)(param_1 + 8) = lVar2;
    if (*(int *)(param_1 + 0x20) == 0) {
      return;
    }
    iVar1 = (int)*(undefined8 *)(param_1 + 0x10);
    iVar3 = iVar1 + 0x11b0;
    if (*(int *)(param_1 + 0x20) != 1) {
      iVar3 = iVar1 + 0x11e0;
    }
  }
  v8::base::TimeDelta::InMicroseconds((TimeDelta *)&local_8);
  v8::internal::Histogram::AddSample(iVar3);
  return;
}

