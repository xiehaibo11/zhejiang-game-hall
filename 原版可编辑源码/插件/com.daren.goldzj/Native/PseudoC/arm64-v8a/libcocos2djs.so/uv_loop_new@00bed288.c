
long uv_loop_new(void)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar2 = uv__malloc(0x350);
  lVar3 = lVar2;
  if ((lVar2 != 0) && (iVar1 = uv_loop_init(), iVar1 != 0)) {
    lVar3 = 0;
    uv__free(lVar2);
  }
  return lVar3;
}

