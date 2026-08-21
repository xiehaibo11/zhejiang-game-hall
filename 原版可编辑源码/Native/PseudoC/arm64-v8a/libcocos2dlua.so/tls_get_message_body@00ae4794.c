
undefined8 tls_get_message_body(undefined4 *param_1,long *param_2)

{
  undefined4 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int line;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  code *pcVar10;
  ulong uVar11;
  
  if (*(int *)(*(long *)(param_1 + 0x24) + 0x220) == 0x101) {
    iVar3 = param_1[0x22];
LAB_00ae4930:
    lVar8 = (long)iVar3;
    uVar5 = 1;
  }
  else {
    uVar9 = (ulong)(int)param_1[0x22];
    uVar11 = *(long *)(*(long *)(param_1 + 0x24) + 0x218) - uVar9;
    if (0 < (long)uVar11) {
      lVar8 = *(long *)(param_1 + 0x20);
      do {
        iVar3 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                          (param_1,0x16,0,lVar8 + (int)uVar9,uVar11 & 0xffffffff,0);
        if (iVar3 < 1) {
          lVar8 = 0;
          uVar5 = 0;
          param_1[10] = 3;
          goto LAB_00ae49a4;
        }
        uVar11 = uVar11 - (long)iVar3;
        uVar9 = (ulong)(uint)(param_1[0x22] + iVar3);
        param_1[0x22] = param_1[0x22] + iVar3;
      } while (0 < (long)uVar11);
    }
    if ((**(char **)(*(long *)(param_1 + 0x1e) + 8) == '\x14') &&
       (*(long *)(*(long *)(param_1 + 0x24) + 0x228) != 0)) {
      lVar8 = *(long *)(*(long *)(param_1 + 2) + 0xc0);
      puVar1 = (undefined4 *)(lVar8 + 0x50);
      puVar2 = (undefined8 *)(lVar8 + 0x48);
      if (param_1[0xe] != 0) {
        puVar1 = (undefined4 *)(lVar8 + 0x40);
        puVar2 = (undefined8 *)(lVar8 + 0x38);
      }
      uVar4 = (**(code **)(lVar8 + 0x28))(param_1,*puVar2,*puVar1,*(long *)(param_1 + 0x24) + 0x194)
      ;
      *(undefined4 *)(*(long *)(param_1 + 0x24) + 0x214) = uVar4;
    }
    iVar3 = RECORD_LAYER_is_sslv2_record(param_1 + 0xe8);
    if (iVar3 == 0) {
      iVar3 = ssl3_finish_mac(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1e) + 8),
                              param_1[0x22] + 4);
      if (iVar3 != 0) {
        pcVar10 = *(code **)(param_1 + 0x28);
        if (pcVar10 != (code *)0x0) {
          uVar4 = *param_1;
          uVar7 = *(undefined8 *)(param_1 + 0x2a);
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x1e) + 8);
          lVar8 = (long)(int)param_1[0x22] + 4;
          uVar5 = 0x16;
          goto LAB_00ae4920;
        }
        goto LAB_00ae4928;
      }
      iVar3 = 6;
      line = 0x1ec;
    }
    else {
      iVar3 = ssl3_finish_mac(param_1,*(undefined8 *)(*(long *)(param_1 + 0x1e) + 8),param_1[0x22]);
      if (iVar3 == 0) {
        iVar3 = 6;
        line = 0x1e1;
      }
      else {
        pcVar10 = *(code **)(param_1 + 0x28);
        if (pcVar10 != (code *)0x0) {
          lVar8 = (long)(int)param_1[0x22];
          uVar7 = *(undefined8 *)(param_1 + 0x2a);
          uVar4 = 2;
                    /* try { // try from 00ae48c4 to 00be48cb has its CatchHandler @ 00ae4994 */
          uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x1e) + 8);
                    /* try { // try from 00ae48cc to 00be49a7 has its CatchHandler @ 00ae4750 */
          uVar5 = 0;
LAB_00ae4920:
          (*pcVar10)(0,uVar4,uVar5,uVar6,lVar8,param_1,uVar7);
        }
LAB_00ae4928:
        iVar3 = param_1[0x22];
        if (-1 < iVar3) goto LAB_00ae4930;
        iVar3 = 0x44;
        line = 0x1fc;
      }
    }
    ERR_put_error(0x14,0x15f,iVar3,"ssl/statem/statem_lib.c",line);
                    /* catch() { ... } // from try @ 00ae48c4 with catch @ 00ae4994 */
    ssl3_send_alert(param_1,2,0x50);
    lVar8 = 0;
    uVar5 = 0;
  }
LAB_00ae49a4:
  *param_2 = lVar8;
  return uVar5;
}

