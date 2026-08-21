
void uv_loop_delete(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  undefined4 *puVar3;
  long *plVar4;
  
  lVar2 = DAT_017932d0;
  if (*(int *)(param_1 + 0x20) == 0) {
    for (plVar4 = *(long **)(param_1 + 0x10); plVar4 != (long *)(param_1 + 0x10);
        plVar4 = (long *)*plVar4) {
      if ((*(byte *)(plVar4 + 7) >> 4 & 1) == 0) goto joined_r0x011a1f6c;
    }
    FUN_011a51d8(param_1);
    if (DAT_017932d0 == param_1) {
      DAT_017932d0 = 0;
    }
  }
joined_r0x011a1f6c:
  if (lVar2 != param_1) {
    puVar3 = (undefined4 *)__errno();
    uVar1 = *puVar3;
    (*(code *)PTR_free_01781868)(param_1);
    *puVar3 = uVar1;
  }
  return;
}

