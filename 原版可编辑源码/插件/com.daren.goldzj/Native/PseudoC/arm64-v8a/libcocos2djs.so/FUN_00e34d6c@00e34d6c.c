
void FUN_00e34d6c(long *param_1,long param_2,ulong param_3,long param_4)

{
  int iVar1;
  long lVar2;
  
  iVar1 = *(int *)(*(long *)(*param_1 + 0xb0) + 0x78);
  if ((iVar1 == 0x23) || ((iVar1 == 0x28 && (*(char *)((long)param_1 + 0x42b) == '\0')))) {
    lVar2 = (param_3 & 0xffff) * 0x10;
    *(long *)(*(long *)(param_2 + 0x18) + lVar2) =
         *(long *)(*(long *)(param_2 + 0x18) + lVar2) + param_4;
  }
  *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) =
       *(byte *)(*(long *)(param_2 + 0x28) + (param_3 & 0xffff)) | 8;
  return;
}

