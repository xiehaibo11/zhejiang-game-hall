
undefined8 FUN_009ceb40(undefined8 param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = FUN_009d01dc(param_1,1);
  iVar1 = *(int *)(lVar2 + 0x538);
  FUN_009d0260(param_1,lVar2 + 0x538,0);
  if (iVar1 != *(int *)(lVar2 + 0x538)) {
    if (*(int *)(lVar2 + 0x538) == 0) {
      strbuf_free(lVar2 + 0x500);
    }
    else {
      strbuf_init(lVar2 + 0x500,0);
    }
  }
  return 1;
}

