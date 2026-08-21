
undefined8 tls_get_message_header(undefined4 *param_1,uint *param_2)

{
  int iVar1;
  int line;
  uint uVar2;
  undefined4 uVar3;
  long lVar4;
  byte *pbVar5;
  int local_34;
  
  pbVar5 = *(byte **)(*(long *)(param_1 + 0x1e) + 8);
  do {
    iVar1 = param_1[0x22];
    do {
      while (iVar1 < 4) {
        iVar1 = (**(code **)(*(long *)(param_1 + 2) + 0x68))
                          (param_1,0x16,&local_34,pbVar5 + iVar1,4 - iVar1,0);
        if (iVar1 < 1) {
          param_1[10] = 3;
          return 0;
        }
        if (local_34 != 0x16) {
          if (local_34 == 0x14) {
            if (((iVar1 == 1) && (param_1[0x22] == 0)) && (*pbVar5 == 1)) {
              *param_2 = 0x101;
              lVar4 = *(long *)(param_1 + 0x24);
              *(undefined4 *)(lVar4 + 0x220) = 0x101;
              param_1[0x22] = 0;
              *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x1e) + 8);
              *(undefined8 *)(lVar4 + 0x218) = 1;
              return 1;
            }
            iVar1 = 0x67;
            line = 0x170;
          }
          else {
            iVar1 = 0x85;
            line = 0x17a;
          }
          ERR_put_error(0x14,0x183,iVar1,"ssl/statem/statem_lib.c",line);
          ssl3_send_alert(param_1,2,10);
          return 0;
        }
        iVar1 = param_1[0x22] + iVar1;
        param_1[0x22] = iVar1;
        local_34 = 0x16;
      }
      uVar2 = (uint)*pbVar5;
      if ((param_1[0xe] != 0) || (*pbVar5 != 0)) {
LAB_00ae46fc:
        *param_2 = uVar2;
        *(uint *)(*(long *)(param_1 + 0x24) + 0x220) = (uint)*pbVar5;
        iVar1 = RECORD_LAYER_is_sslv2_record(param_1 + 0xe8);
        if (iVar1 == 0) {
                    /* try { // try from 00ae4750 to 00be48c3 has its CatchHandler @ 00ae4750
                       catch() { ... } // from try @ 00ae4750 with catch @ 00ae4750
                       catch() { ... } // from try @ 00ae48cc with catch @ 00ae4750 */
          *(ulong *)(*(long *)(param_1 + 0x24) + 0x218) =
               (ulong)pbVar5[1] << 0x10 | (ulong)pbVar5[2] << 8 | (ulong)pbVar5[3];
          uVar3 = 0;
          *(long *)(param_1 + 0x20) = *(long *)(*(long *)(param_1 + 0x1e) + 8) + 4;
        }
        else {
          iVar1 = RECORD_LAYER_get_rrec_length(param_1 + 0xe8);
          *(ulong *)(*(long *)(param_1 + 0x24) + 0x218) = (ulong)(iVar1 + 4);
          *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(*(long *)(param_1 + 0x1e) + 8);
          uVar3 = 4;
        }
        param_1[0x22] = uVar3;
        return 1;
      }
      if ((pbVar5[1] != 0) || ((pbVar5[2] != 0 || (pbVar5[3] != 0)))) {
        uVar2 = 0;
        goto LAB_00ae46fc;
      }
      param_1[0x22] = 0;
      iVar1 = 0;
    } while (*(code **)(param_1 + 0x28) == (code *)0x0);
    (**(code **)(param_1 + 0x28))(0,*param_1,0x16,pbVar5,4,param_1,*(undefined8 *)(param_1 + 0x2a));
  } while( true );
}

