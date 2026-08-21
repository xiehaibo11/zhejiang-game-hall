
void FUN_010e786c(long *param_1)

{
  int iVar1;
  size_t sVar2;
  undefined8 *puVar3;
  size_t __n;
  long lVar4;
  
  lVar4 = param_1[5];
                    /* catch() { ... } // from try @ 010e77f4 with catch @ 010e7884 */
  __n = 0x1000 - *(long *)(lVar4 + 8);
                    /* catch() { ... } // from try @ 010e77d8 with catch @ 010e7894 */
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
                    /* WARNING: Could not recover jumptable at 0x010e7904. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*puVar3)(param_1);
  return;
}

