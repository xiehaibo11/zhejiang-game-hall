
undefined8 ssl_parse_serverhello_use_srtp_ext(long param_1,long *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  long lVar11;
  
  uVar8 = param_2[1];
  if (uVar8 < 2) {
LAB_00af3704:
    iVar4 = 0x161;
    iVar5 = 0x11e;
  }
  else {
    puVar10 = (undefined1 *)*param_2;
    uVar1 = *puVar10;
    uVar2 = puVar10[1];
    *param_2 = (long)(puVar10 + 2);
    param_2[1] = uVar8 - 2;
    if ((CONCAT11(uVar1,uVar2) != 2) || (uVar8 - 2 < 2)) goto LAB_00af3704;
    uVar1 = puVar10[2];
    uVar2 = puVar10[3];
    *param_2 = (long)(puVar10 + 4);
    param_2[1] = uVar8 - 4;
    if (uVar8 - 4 == 0) goto LAB_00af3704;
    cVar3 = puVar10[4];
    *param_2 = (long)(puVar10 + 5);
    param_2[1] = uVar8 - 5;
    if (uVar8 - 5 != 0) goto LAB_00af3704;
    if (cVar3 != '\0') {
      ERR_put_error(0x14,0x137,0x160,"ssl/d1_srtp.c",0x126);
      uVar6 = 1;
      uVar9 = 0x2f;
      goto LAB_00af3728;
    }
    if ((param_1 == 0) ||
       ((lVar11 = *(long *)(param_1 + 0x2e8), lVar11 == 0 &&
        ((*(long *)(param_1 + 0x1b8) == 0 ||
         (lVar11 = *(long *)(*(long *)(param_1 + 0x1b8) + 0x328), lVar11 == 0)))))) {
      iVar4 = 0x167;
      iVar5 = 0x130;
    }
    else {
      iVar4 = OPENSSL_sk_num(lVar11);
      if (0 < iVar4) {
        iVar4 = 0;
        do {
          lVar7 = OPENSSL_sk_value(lVar11,iVar4);
          if (*(ulong *)(lVar7 + 8) == (ulong)CONCAT11(uVar1,uVar2)) {
            uVar9 = 0;
            uVar6 = 0;
            *(long *)(param_1 + 0x2f0) = lVar7;
            goto LAB_00af3728;
          }
          iVar4 = iVar4 + 1;
          iVar5 = OPENSSL_sk_num(lVar11);
        } while (iVar4 < iVar5);
      }
      iVar4 = 0x161;
      iVar5 = 0x144;
    }
  }
  ERR_put_error(0x14,0x137,iVar4,"ssl/d1_srtp.c",iVar5);
  uVar6 = 1;
  uVar9 = 0x32;
LAB_00af3728:
  *param_3 = uVar9;
  return uVar6;
}

