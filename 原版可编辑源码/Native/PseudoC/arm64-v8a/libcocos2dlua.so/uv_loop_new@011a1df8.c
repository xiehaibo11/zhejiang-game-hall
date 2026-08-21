
long uv_loop_new(void)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  undefined4 *puVar4;
  
  lVar3 = (*(code *)PTR_malloc_01781850)(0x350);
  if ((lVar3 != 0) && (iVar2 = uv_loop_init(lVar3), iVar2 != 0)) {
    puVar4 = (undefined4 *)__errno();
    uVar1 = *puVar4;
    (*(code *)PTR_free_01781868)(lVar3);
    lVar3 = 0;
    *puVar4 = uVar1;
  }
  return lVar3;
}

