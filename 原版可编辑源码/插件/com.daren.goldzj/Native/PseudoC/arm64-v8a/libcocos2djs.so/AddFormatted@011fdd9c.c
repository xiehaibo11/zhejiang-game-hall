
/* v8::internal::StringBuilder::AddFormatted(char const*, ...) */

void v8::internal::StringBuilder::AddFormatted(char *param_1,...)

{
  int iVar1;
  int iVar2;
  undefined8 in_x1;
  undefined8 in_x2;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar3;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined1 *local_40;
  undefined1 *puStack_38;
  undefined8 *puStack_30;
  undefined8 uStack_28;
  
  puStack_30 = &local_90;
  puStack_38 = &stack0xffffffffffffffa0;
  uStack_28 = 0xffffff80ffffffd0;
  local_90 = in_x2;
  uStack_88 = in_x3;
  local_80 = in_x4;
  uStack_78 = in_x5;
  local_70 = in_x6;
  uStack_68 = in_x7;
  local_40 = (undefined1 *)register0x00000008;
  iVar2 = base::OS::VSNPrintF(*(long *)param_1 + (long)*(int *)(param_1 + 0x10),
                              *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10),in_x1,&local_40);
  iVar1 = *(int *)(param_1 + 8);
  iVar3 = iVar1;
  if ((-1 < iVar2) &&
     (iVar3 = *(int *)(param_1 + 0x10) + iVar2, iVar1 - *(int *)(param_1 + 0x10) <= iVar2)) {
    iVar3 = iVar1;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  return;
}

