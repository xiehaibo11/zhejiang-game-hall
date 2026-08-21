
void lua_close(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  
  iVar5 = 10;
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = *(long *)(lVar4 + 200);
  luaJIT_profile_stop(lVar3);
  *(undefined8 *)(lVar4 + 0x158) = 0;
  FUN_00bfbd3c(lVar3,*(undefined8 *)(lVar3 + 0x38));
  FUN_00c1971c(lVar4,1);
  do {
    do {
      *(byte *)(lVar4 + 0xc1) = *(byte *)(lVar4 + 0xc1) | 0x10;
      *(undefined1 *)(lVar3 + 0xb) = 0;
      *(undefined8 *)(lVar3 + 0x50) = 0;
      lVar1 = *(long *)(lVar3 + 0x38) + 0x10;
      *(long *)(lVar3 + 0x28) = lVar1;
      *(long *)(lVar3 + 0x20) = lVar1;
      iVar2 = FUN_00c17684(lVar3,0,0,FUN_00bfe040);
    } while (iVar2 != 0);
    iVar5 = iVar5 + -1;
  } while ((iVar5 != 0) && (FUN_00c1971c(lVar4,1), *(long *)(lVar4 + 0x60) != 0));
  FUN_00bfdf4c(lVar3);
  return;
}

