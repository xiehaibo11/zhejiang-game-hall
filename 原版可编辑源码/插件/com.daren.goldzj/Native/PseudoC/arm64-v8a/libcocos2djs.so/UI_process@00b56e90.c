
int UI_process(UI *ui)

{
  int iVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  
  if ((*(code **)(*(long *)ui + 8) != (code *)0x0) &&
     (iVar1 = (**(code **)(*(long *)ui + 8))(ui), iVar1 == 0)) {
    return -1;
  }
  if (((byte)ui[0x21] & 1) != 0) {
    ERR_print_errors_cb(FUN_00b56fe0,ui);
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
  lVar4 = *(long *)ui;
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pcVar5 = *(code **)(lVar4 + 0x10);
      if (pcVar5 != (code *)0x0) {
                    /* try { // try from 00b56ef8 to 00c56eff has its CatchHandler @ 00b5728c */
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(ui + 8),iVar1);
                    /* try { // try from 00b56f00 to 00c571a7 has its CatchHandler @ 00b56d60 */
        iVar2 = (*pcVar5)(ui,uVar3);
        if (iVar2 == 0) goto LAB_00b56fa4;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
      lVar4 = *(long *)ui;
    } while (iVar1 < iVar2);
  }
  if (*(code **)(lVar4 + 0x18) != (code *)0x0) {
    iVar1 = (**(code **)(lVar4 + 0x18))(ui);
    if (iVar1 == -1) {
LAB_00b56fac:
      iVar1 = -2;
      goto LAB_00b56fb0;
    }
    if (iVar1 == 0) {
LAB_00b56fa4:
      iVar1 = -1;
      goto LAB_00b56fb0;
    }
  }
  iVar1 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
  if (0 < iVar1) {
    iVar1 = 0;
    do {
      pcVar5 = *(code **)(*(long *)ui + 0x20);
      if (pcVar5 != (code *)0x0) {
        uVar3 = OPENSSL_sk_value(*(undefined8 *)(ui + 8),iVar1);
        iVar2 = (*pcVar5)(ui,uVar3);
        if (iVar2 == -1) goto LAB_00b56fac;
        if (iVar2 == 0) goto LAB_00b56fa4;
      }
      iVar1 = iVar1 + 1;
      iVar2 = OPENSSL_sk_num(*(undefined8 *)(ui + 8));
    } while (iVar1 < iVar2);
  }
  iVar1 = 0;
LAB_00b56fb0:
  if (*(code **)(*(long *)ui + 0x28) == (code *)0x0) {
    return iVar1;
  }
  iVar2 = (**(code **)(*(long *)ui + 0x28))(ui);
  if (iVar2 == 0) {
    return -1;
  }
  return iVar1;
}

