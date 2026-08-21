
undefined8 FUN_00ae74bc(long param_1,char *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = *(undefined8 **)(param_1 + 0x18);
  if (puVar4 == (undefined8 *)0x0) {
    if (*(long *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x1b8);
  }
  uVar1 = *(undefined4 *)*puVar4;
  iVar2 = strcmp("None",param_2);
  if (iVar2 == 0) {
    lVar5 = 0;
  }
  else {
    iVar2 = strcmp("SSLv3",param_2);
    if (iVar2 == 0) {
      lVar5 = 1;
    }
    else {
      iVar2 = strcmp("TLSv1",param_2);
      if (iVar2 == 0) {
        lVar5 = 2;
      }
      else {
        iVar2 = strcmp("TLSv1.1",param_2);
        if (iVar2 == 0) {
          lVar5 = 3;
        }
        else {
          iVar2 = strcmp("TLSv1.2",param_2);
          if (iVar2 == 0) {
            lVar5 = 4;
          }
          else {
            iVar2 = strcmp("DTLSv1",param_2);
            if (iVar2 == 0) {
              lVar5 = 5;
            }
            else {
              iVar2 = strcmp("DTLSv1.2",param_2);
              if (iVar2 != 0) {
                return 0;
              }
              lVar5 = 6;
            }
          }
        }
      }
    }
  }
  uVar3 = ssl_set_version_bound(uVar1,(&DAT_01c732b8)[lVar5 * 4],param_3);
  return uVar3;
}

