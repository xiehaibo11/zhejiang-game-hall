
void FUN_011a71f4(OutputStreamWriter *param_1,ulong param_2)

{
  char cVar1;
  int iVar2;
  ulong uVar3;
  
  uVar3 = param_2 & 0xffffffff;
  v8::internal::OutputStreamWriter::AddString(param_1,"\\u");
  iVar2 = *(int *)(param_1 + 0x20);
  cVar1 = "0123456789ABCDEF"[uVar3 >> 0xc & 0xf];
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (long)iVar2) = cVar1;
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 == *(int *)(param_1 + 8)) && (param_1[0x24] == (OutputStreamWriter)0x0)) {
    iVar2 = (**(code **)(**(long **)param_1 + 0x20))
                      (*(long **)param_1,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 1) {
      param_1[0x24] = (OutputStreamWriter)0x1;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  cVar1 = "0123456789ABCDEF"[uVar3 >> 8 & 0xf];
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (long)iVar2) = cVar1;
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 == *(int *)(param_1 + 8)) && (param_1[0x24] == (OutputStreamWriter)0x0)) {
    iVar2 = (**(code **)(**(long **)param_1 + 0x20))
                      (*(long **)param_1,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 1) {
      param_1[0x24] = (OutputStreamWriter)0x1;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  cVar1 = "0123456789ABCDEF"[uVar3 >> 4 & 0xf];
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (long)iVar2) = cVar1;
  iVar2 = *(int *)(param_1 + 0x20);
  if ((iVar2 == *(int *)(param_1 + 8)) && (param_1[0x24] == (OutputStreamWriter)0x0)) {
    iVar2 = (**(code **)(**(long **)param_1 + 0x20))
                      (*(long **)param_1,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 1) {
      param_1[0x24] = (OutputStreamWriter)0x1;
    }
    iVar2 = 0;
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  cVar1 = "0123456789ABCDEF"[param_2 & 0xf];
  *(int *)(param_1 + 0x20) = iVar2 + 1;
  *(char *)(*(long *)(param_1 + 0x10) + (long)iVar2) = cVar1;
  if ((*(int *)(param_1 + 0x20) == *(int *)(param_1 + 8)) &&
     (param_1[0x24] == (OutputStreamWriter)0x0)) {
    iVar2 = (**(code **)(**(long **)param_1 + 0x20))
                      (*(long **)param_1,*(undefined8 *)(param_1 + 0x10));
    if (iVar2 == 1) {
      param_1[0x24] = (OutputStreamWriter)0x1;
    }
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}

