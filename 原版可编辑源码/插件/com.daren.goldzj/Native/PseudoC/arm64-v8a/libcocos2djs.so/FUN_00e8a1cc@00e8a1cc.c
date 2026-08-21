
void FUN_00e8a1cc(long *param_1,undefined8 param_2,long param_3,long param_4,int param_5,
                 long param_6)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined4 uVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  void *pvVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uStack_88 = 0;
  local_90 = 0;
  local_78 = 0;
  uStack_80 = 0;
  lVar7 = param_4;
  lVar10 = param_4;
  lVar9 = param_4;
  if (param_3 < param_4) {
    do {
      lVar11 = param_3;
      if (0x3ff < lVar7 - param_3) {
        lVar11 = lVar7 + param_3;
        if (lVar11 < 0) {
          lVar11 = lVar11 + 1;
        }
        lVar11 = lVar11 >> 1;
      }
      if (*param_1 != 0) {
        (*(code *)param_1[0x1d])(*param_1,lVar11,0);
        param_1[2] = lVar11;
        ogg_sync_reset(param_1[4]);
      }
      lVar5 = FUN_00e88420(param_1,&local_90,0xffffffffffffffff);
      if (lVar5 == -0x80) goto LAB_00e8a3b8;
      if ((lVar5 < 0) || (iVar3 = ogg_page_serialno(&local_90), iVar3 != param_5)) {
        lVar10 = lVar5;
        if (lVar5 < 0) {
          lVar10 = lVar9;
        }
      }
      else {
        param_3 = lVar5 + (int)uStack_88 + local_78;
        lVar10 = lVar9;
        lVar11 = lVar7;
      }
      ogg_page_release(&local_90);
      lVar7 = lVar11;
      lVar9 = lVar10;
    } while (param_3 < lVar11);
  }
  if (*param_1 != 0) {
    (*(code *)param_1[0x1d])(*param_1,lVar10,0);
    param_1[2] = lVar10;
    ogg_sync_reset(param_1[4]);
  }
  lVar5 = FUN_00e88420(param_1,&local_90,0xffffffffffffffff);
  if (lVar5 != -0x80) {
    if ((param_3 < param_4) && (-1 < lVar5)) {
      lVar7 = param_1[2];
      uVar4 = ogg_page_serialno(&local_90);
      iVar3 = FUN_00e8a1cc(param_1,lVar10,lVar7,param_4,uVar4,param_6 + 1);
      ogg_page_release(&local_90);
      if (iVar3 == -0x80) {
        lVar5 = 0xffffff80;
        goto LAB_00e8a3b8;
      }
      pvVar8 = (void *)param_1[6];
      pvVar6 = (void *)param_1[8];
    }
    else {
      ogg_page_release(&local_90);
      uVar1 = param_6 + 1;
      *(int *)(param_1 + 5) = (int)uVar1;
      pvVar8 = malloc((long)((uVar1 << 0x20) + 0x100000000) >> 0x1d);
      param_1[6] = (long)pvVar8;
      pvVar6 = malloc(-(uVar1 >> 0x1f & 1) & 0xfffffffc00000000 | (uVar1 & 0xffffffff) << 2);
      param_1[8] = (long)pvVar6;
      *(long *)((long)pvVar8 + uVar1 * 8) = param_3;
    }
    lVar5 = 0;
    *(undefined8 *)((long)pvVar8 + param_6 * 8) = param_2;
    *(int *)((long)pvVar6 + param_6 * 4) = param_5;
  }
LAB_00e8a3b8:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(lVar5);
  }
  return;
}

