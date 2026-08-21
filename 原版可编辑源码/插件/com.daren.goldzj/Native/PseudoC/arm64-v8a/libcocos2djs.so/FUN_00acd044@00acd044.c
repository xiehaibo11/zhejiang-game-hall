
undefined8
FUN_00acd044(undefined8 param_1,uint param_2,long *param_3,ulong *param_4,undefined4 *param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong local_40;
  undefined1 *puStack_38;
  
  local_40 = 0;
  puStack_38 = (undefined1 *)0x0;
  uVar2 = ssl_get_server_cert_serverinfo(param_1,&puStack_38,&local_40);
  if ((int)uVar2 != 0) {
    *param_3 = 0;
    *param_4 = 0;
    if ((puStack_38 == (undefined1 *)0x0) || (local_40 == 0)) {
LAB_00acd0f0:
      *param_5 = 0x32;
      uVar2 = 0xffffffff;
    }
    else {
      while (local_40 != 0) {
        if ((local_40 == 1) || ((local_40 & 0xfffffffffffffffe) == 2)) goto LAB_00acd0f0;
        uVar3 = local_40 - 4;
        uVar1 = (ulong)CONCAT11(puStack_38[2],puStack_38[3]);
        local_40 = uVar3 - uVar1;
        if (uVar3 < uVar1) goto LAB_00acd0f0;
        if (CONCAT11(*puStack_38,puStack_38[1]) == param_2) {
          *param_3 = (long)(puStack_38 + 4);
          *param_4 = uVar1;
          return 1;
        }
        puStack_38 = puStack_38 + 4 + uVar1;
      }
      uVar2 = 0;
    }
  }
  return uVar2;
}

