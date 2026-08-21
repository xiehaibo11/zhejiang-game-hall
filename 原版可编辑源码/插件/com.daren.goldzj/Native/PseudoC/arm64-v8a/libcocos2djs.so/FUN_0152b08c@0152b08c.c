
void FUN_0152b08c(ulong *param_1,long param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  
  *(int *)(param_1 + 3) = (int)param_1[3] + 1;
  if ((char)param_1[1] == '\0') {
    uVar2 = *(undefined8 *)(param_2 + 8);
    uVar1 = v8::internal::GetCurrentStackPosition();
    if (*param_1 <= uVar1) {
      FUN_0152a444(param_1,uVar2);
      uVar1 = param_1[3];
      *(int *)(param_1 + 3) = (int)uVar1 + -1;
      if ((char)param_1[1] != '\0') {
        return;
      }
      *(int *)(param_1 + 3) = (int)uVar1;
      uVar2 = *(undefined8 *)(param_2 + 0x10);
      uVar1 = v8::internal::GetCurrentStackPosition();
      if (*param_1 <= uVar1) {
        FUN_0152a444(param_1,uVar2);
        goto LAB_0152b0d4;
      }
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
LAB_0152b0d4:
  *(int *)(param_1 + 3) = (int)param_1[3] + -1;
  return;
}

