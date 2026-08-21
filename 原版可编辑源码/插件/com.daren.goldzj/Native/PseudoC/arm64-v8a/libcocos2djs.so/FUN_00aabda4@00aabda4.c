
long FUN_00aabda4(long param_1)

{
  int iVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 0x18);
  if (lVar2 != 0) {
    iVar1 = FUN_00aa58d4(param_1,0x55,lVar2);
    if (iVar1 == 0) {
      iVar1 = FUN_00aa58d4(param_1,0x56,lVar2 + 0x100);
      if (iVar1 != 0) {
        return 0;
      }
      iVar1 = FUN_00aa58d4(param_1,0x57,lVar2 + 0x1100);
      if (iVar1 != 0) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1200) != '\0') && (iVar1 = FUN_00aa58d4(param_1,0x58), iVar1 != 0)) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1300) != '\0') && (iVar1 = FUN_00aa58d4(param_1,0x54), iVar1 != 0)) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1400) != '\0') && (iVar1 = FUN_00aa58d4(param_1,0x59), iVar1 != 0)) {
        return 0;
      }
      if ((*(char *)(lVar2 + 0x1410) != '\0') && (iVar1 = FUN_00aa58d4(param_1,0x5a), iVar1 != 0)) {
        return 0;
      }
      iVar1 = FUN_00ab4058(*(undefined8 *)(param_1 + 0x220),param_1,0x11,lVar2,
                           *(undefined2 *)(param_1 + 0x2fa));
      if (0 < iVar1) {
        lws_set_timeout(param_1,7,0x14);
        *(undefined1 *)(param_1 + 0x2fe) = 0x29;
        return param_1;
      }
      *(int *)(*(long *)(param_1 + 0x220) + 0xc70) =
           *(int *)(*(long *)(param_1 + 0x220) + 0xc70) + 1;
      lVar2 = FUN_00aab134(param_1);
      return lVar2;
    }
    param_1 = 0;
  }
  return param_1;
}

