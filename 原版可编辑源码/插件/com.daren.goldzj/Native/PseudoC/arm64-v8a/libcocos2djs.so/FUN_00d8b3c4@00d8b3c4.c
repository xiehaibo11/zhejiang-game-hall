
void FUN_00d8b3c4(long *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t __n;
  long lVar4;
  
  lVar4 = param_1[5];
  __n = 0x1000 - *(long *)(lVar4 + 8);
  if ((__n != 0) &&
     (sVar2 = fwrite(*(void **)(lVar4 + 0x30),1,__n,*(FILE **)(lVar4 + 0x28)), sVar2 != __n)) {
    puVar3 = (undefined8 *)*param_1;
    *(undefined4 *)(puVar3 + 5) = 0x26;
    (*(code *)*puVar3)(param_1);
  }
  fflush(*(FILE **)(lVar4 + 0x28));
  iVar1 = ferror(*(FILE **)(lVar4 + 0x28));
  if (iVar1 == 0) {
    return;
  }
  puVar3 = (undefined8 *)*param_1;
  *(undefined4 *)(puVar3 + 5) = 0x26;
                    /* WARNING: Could not recover jumptable at 0x00d8b45c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}

