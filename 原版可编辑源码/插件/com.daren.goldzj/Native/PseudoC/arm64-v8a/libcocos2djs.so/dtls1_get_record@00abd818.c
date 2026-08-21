
undefined8 dtls1_get_record(uint *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  byte *pbVar8;
  int local_54;
  
  iVar3 = dtls1_process_buffered_records();
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  do {
    iVar3 = dtls1_retrieve_buffered_record(param_1,*(long *)(param_1 + 0x44a) + 0x38);
    if (iVar3 != 0) {
      return 1;
    }
    if ((param_1[0xeb] == 0xf1) && (uVar4 = param_1[0x438], 0xc < uVar4)) {
      uVar7 = param_1[0x1f8];
LAB_00abd968:
      if ((uVar4 - 0xd < uVar7) && (uVar4 = ssl3_read_n(param_1,uVar7,uVar7,1,1), uVar4 != uVar7)) {
LAB_00abda14:
        param_1[0x1f8] = 0;
        goto LAB_00abda18;
      }
      param_1[0xeb] = 0xf0;
      lVar6 = dtls1_get_bitmap(param_1,param_1 + 0x1f6,&local_54);
      if ((lVar6 == 0) || (iVar3 = dtls1_record_replay_check(param_1,lVar6), iVar3 == 0))
      goto LAB_00abda14;
      if (param_1[0x1f8] != 0) {
        if (local_54 == 0) {
          iVar3 = dtls1_process_record(param_1,lVar6);
          if (iVar3 != 0) {
            return 1;
          }
        }
        else {
          iVar3 = SSL_in_init(param_1);
          if (((iVar3 != 0) || (iVar3 = ossl_statem_get_in_handshake(param_1), iVar3 != 0)) &&
             (iVar3 = dtls1_buffer_record(param_1,*(long *)(param_1 + 0x44a) + 0x28,param_1 + 0x206)
             , iVar3 < 0)) {
            return 0xffffffff;
          }
        }
        goto LAB_00abda14;
      }
    }
    else {
      uVar5 = ssl3_read_n(param_1,0xd,param_1[0xf2],0,1);
      if ((int)uVar5 < 1) {
        return uVar5;
      }
      if (param_1[0x438] == 0xd) {
        pbVar8 = *(byte **)(param_1 + 0x436);
        param_1[0xeb] = 0xf1;
        if (*(code **)(param_1 + 0x28) != (code *)0x0) {
          (**(code **)(param_1 + 0x28))
                    (0,0,0x100,pbVar8,0xd,param_1,*(undefined8 *)(param_1 + 0x2a));
        }
        param_1[0x1f7] = (uint)*pbVar8;
        bVar1 = pbVar8[1];
        bVar2 = pbVar8[2];
        *(ulong *)(param_1 + 0x204) = (ulong)CONCAT11(pbVar8[3],pbVar8[4]);
        *(undefined2 *)((long)param_1 + 0x1116) = *(undefined2 *)(pbVar8 + 9);
        *(undefined4 *)((long)param_1 + 0x1112) = *(undefined4 *)(pbVar8 + 5);
        uVar7 = (uint)CONCAT11(pbVar8[0xb],pbVar8[0xc]);
        param_1[0x1f8] = uVar7;
        if (param_1[0x80] == 0) {
          uVar4 = (uint)CONCAT11(bVar1,bVar2);
          if (uVar4 == *param_1) goto LAB_00abd950;
        }
        else {
          uVar4 = *param_1;
LAB_00abd950:
          if (((uint)bVar1 << 8 == (uVar4 & 0xff00)) && (uVar7 < 0x4541)) {
            uVar4 = param_1[0x438];
            goto LAB_00abd968;
          }
        }
        goto LAB_00abda14;
      }
LAB_00abda18:
      param_1[0x438] = 0;
    }
    iVar3 = dtls1_process_buffered_records(param_1);
    if (iVar3 == 0) {
      return 0xffffffff;
    }
  } while( true );
}

