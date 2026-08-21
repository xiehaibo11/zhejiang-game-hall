
long internal_init_socket(void)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  
  if (DAT_0011d1c8 == 0) {
    DAT_0011d1c8 = thunk_EXT_FUN_00002bb0(0x40);
    iVar2 = thunk_EXT_FUN_00002bb0(DAT_0011d1c8,0x100);
    if (iVar2 != 0) {
      thunk_EXT_FUN_00002bb0(DAT_0011d1c8);
      pcVar5 = "init socket aes lru cache failed";
      goto LAB_00104fe0;
    }
  }
  uVar3 = thunk_EXT_FUN_00002bb0(0x11,1);
  iVar2 = thunk_EXT_FUN_00002bb0(uVar3,0x10);
  if (iVar2 == 0) {
    iVar2 = DAT_0011d008 + 1;
    DAT_0011d008 = iVar2;
    lVar4 = thunk_EXT_FUN_00002bb0(10,1);
    thunk_EXT_FUN_00002bb0(lVar4,&DAT_0010ac5c,iVar2);
    lVar1 = DAT_0011d1c8;
    *(undefined1 *)(lVar4 + 8) = 0;
    iVar2 = thunk_EXT_FUN_00002bb0(lVar1,lVar4,uVar3);
    if (iVar2 == 0) {
      return lVar4;
    }
    thunk_EXT_FUN_00002bb0(uVar3);
    thunk_EXT_FUN_00002bb0(lVar4);
    pcVar5 = "socket put aes key to cache failed.";
  }
  else {
    thunk_EXT_FUN_00002bb0(uVar3);
    pcVar5 = "generate http aes key failed";
  }
LAB_00104fe0:
  thunk_EXT_FUN_00002bb0(3,"SECURITY_MODULE",pcVar5);
  return 0;
}

