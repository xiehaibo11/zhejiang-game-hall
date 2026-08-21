
void FUN_00e51094(long *param_1,byte *param_2,byte *param_3,long param_4)

{
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  byte bVar11;
  byte *pbVar12;
  ulong uVar13;
  int local_94;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  lVar8 = tpidr_el0;
  local_68 = *(long *)(lVar8 + 0x28);
  param_1[2] = 0;
  if (param_1[1] != 0) {
    *(undefined **)*param_1 = &DAT_01977bbe;
    *(undefined **)(*param_1 + 8) = &DAT_01977bbe;
    *(undefined **)(*param_1 + 0x10) = &DAT_01977bbe;
    *(undefined **)(*param_1 + 0x18) = &DAT_01977bbe;
    *(undefined **)(*param_1 + 0x20) = &DAT_01977bbe;
  }
  if (param_4 == 0) {
LAB_00e512c8:
    iVar5 = 0;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  else {
    bVar3 = *param_3;
    uVar7 = (ulong)bVar3;
    if (bVar3 == 0) goto LAB_00e512c8;
    if (param_2 != (byte *)0x0) {
      bVar11 = *param_2;
      uVar10 = (ulong)bVar11;
      if (bVar11 != 0) {
        bVar4 = false;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        uStack_80 = 0;
        if (bVar11 != 0x2b) goto LAB_00e51190;
        do {
          param_2 = param_2 + 1;
          if (*param_2 == 0) {
            uVar10 = 0;
            bVar4 = true;
            bVar11 = 0;
            goto LAB_00e51190;
          }
          while( true ) {
            *(byte *)((long)&local_90 + (uVar10 >> 3)) =
                 *(byte *)((long)&local_90 + (uVar10 >> 3)) | (byte)(1 << (ulong)((uint)uVar10 & 7))
            ;
            bVar11 = *param_2;
            uVar10 = (ulong)bVar11;
            if (bVar11 == 0x2b) break;
LAB_00e51190:
            if (bVar11 == 0) {
              if (param_4 < 1) {
                uVar13 = 0;
                uVar10 = param_1[1];
                uVar7 = param_1[2];
                if (uVar7 < uVar10) goto joined_r0x00e5136c;
                goto LAB_00e5130c;
              }
              pbVar1 = param_3 + param_4;
              if (!bVar4) {
                goto LAB_00e51388;
              }
              if (bVar3 == 0) {
                uVar13 = 0;
                goto LAB_00e51490;
              }
              pbVar12 = param_3;
              goto LAB_00e511c0;
            }
            param_2 = param_2 + 1;
          }
        } while( true );
      }
    }
    iVar5 = 6;
    lVar8 = *(long *)(lVar8 + 0x28);
  }
  if (lVar8 == local_68) {
    return;
  }
LAB_00e512dc:
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(iVar5);
LAB_00e51388:
  do {
    pbVar12 = param_3;
    if ((int)uVar7 != 0) {
      do {
        if ((1 << (ulong)((uint)uVar7 & 7) & (uint)*(byte *)((long)&local_90 + (uVar7 >> 3))) != 0)
        break;
        pbVar12 = pbVar12 + 1;
        uVar7 = (ulong)*pbVar12;
      } while (*pbVar12 != 0);
    }
    uVar7 = param_1[2];
    if ((uVar7 == param_1[1]) && (local_94 = 0, uVar7 != 0xffffffffffffffff)) {
      if (uVar7 == 0xfffffff) goto LAB_00e51470;
      uVar10 = uVar7 + (uVar7 >> 1) + 5;
      uVar13 = 0xfffffff;
      if (uVar10 >> 0x1c == 0 && uVar7 <= uVar10) {
        uVar13 = uVar10;
      }
      lVar6 = FUN_00e13bcc(param_1[3],8,uVar7,uVar13,*param_1,&local_94);
      *param_1 = lVar6;
      iVar5 = local_94;
      if (local_94 != 0) goto LAB_00e514d4;
      uVar7 = param_1[2];
      param_1[1] = uVar13;
    }
    if (pbVar12 <= param_3) {
      param_3 = &DAT_01977bbe;
    }
    param_1[2] = uVar7 + 1;
    *(byte **)(*param_1 + uVar7 * 8) = param_3;
    if (*pbVar12 == 0) {
      uVar13 = 0;
      bVar3 = 0;
      param_3 = pbVar12;
    }
    else {
      param_3 = pbVar12 + 1;
      bVar3 = *param_3;
      *pbVar12 = 0;
      uVar13 = (ulong)(bVar3 == 0);
    }
  } while ((param_3 < pbVar1) && (uVar7 = (ulong)bVar3, bVar3 != 0));
LAB_00e51490:
  uVar10 = param_1[1];
  uVar7 = param_1[2] + uVar13;
  if (uVar7 < uVar10) {
joined_r0x00e5136c:
    if (uVar13 == 0) {
      lVar6 = param_1[2];
    }
    else {
      lVar9 = param_1[2];
      lVar6 = lVar9 + 1;
      param_1[2] = lVar6;
      *(undefined **)(*param_1 + lVar9 * 8) = &DAT_01977bbe;
    }
    *(undefined8 *)(*param_1 + lVar6 * 8) = 0;
    iVar5 = 0;
  }
  else {
LAB_00e5130c:
    local_94 = 0;
    if (uVar7 + 1 <= uVar10) goto joined_r0x00e5136c;
    if (uVar10 == 0xfffffff) {
LAB_00e51470:
      iVar5 = 0x40;
      local_94 = 0x40;
      if (*(long *)(lVar8 + 0x28) == local_68) {
        return;
      }
      goto LAB_00e512dc;
    }
    uVar7 = uVar10 + (uVar10 >> 1) + 5;
    uVar2 = 0xfffffff;
    if (uVar7 >> 0x1c == 0 && uVar10 <= uVar7) {
      uVar2 = uVar7;
    }
    lVar6 = FUN_00e13bcc(param_1[3],8,uVar10,uVar2,*param_1,&local_94);
    *param_1 = lVar6;
    iVar5 = local_94;
    if (local_94 == 0) {
      param_1[1] = uVar2;
      goto joined_r0x00e5136c;
    }
  }
LAB_00e514d4:
  if (*(long *)(lVar8 + 0x28) == local_68) {
    return;
  }
  goto LAB_00e512dc;
LAB_00e511c0:
  if ((1 << (ulong)((uint)uVar7 & 7) & (uint)*(byte *)((long)&local_90 + (uVar7 >> 3))) == 0) {
    param_3 = param_3 + 1;
    uVar7 = (ulong)*param_3;
    if (*param_3 != 0) goto LAB_00e511c0;
  }
  uVar7 = param_1[2];
  if ((uVar7 == param_1[1]) && (local_94 = 0, uVar7 != 0xffffffffffffffff)) {
    if (uVar7 == 0xfffffff) goto LAB_00e51470;
    uVar10 = uVar7 + (uVar7 >> 1) + 5;
    uVar13 = 0xfffffff;
    if (uVar10 >> 0x1c == 0 && uVar7 <= uVar10) {
      uVar13 = uVar10;
    }
    lVar6 = FUN_00e13bcc(param_1[3],8,uVar7,uVar13,*param_1,&local_94);
    *param_1 = lVar6;
    iVar5 = local_94;
    if (local_94 != 0) goto LAB_00e514d4;
    uVar7 = param_1[2];
    param_1[1] = uVar13;
  }
  if (param_3 <= pbVar12) {
    pbVar12 = &DAT_01977bbe;
  }
  param_1[2] = uVar7 + 1;
  *(byte **)(*param_1 + uVar7 * 8) = pbVar12;
  uVar7 = (ulong)*param_3;
  pbVar12 = param_3;
  if (*param_3 == 0) {
    uVar13 = 0;
  }
  else {
    do {
      if ((1 << (ulong)((uint)uVar7 & 7) & (uint)*(byte *)((long)&local_90 + (uVar7 >> 3))) == 0)
      break;
      *pbVar12 = 0;
      pbVar12 = pbVar12 + 1;
      uVar7 = (ulong)*pbVar12;
    } while (*pbVar12 != 0);
    uVar13 = (ulong)(param_3 < pbVar12 && (int)uVar7 == 0);
    param_3 = pbVar12;
  }
  if ((pbVar1 <= param_3) || (pbVar12 = param_3, (int)uVar7 == 0)) goto LAB_00e51490;
  goto LAB_00e511c0;
}

