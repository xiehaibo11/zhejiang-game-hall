
void FUN_00a1f4f0(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  byte local_3c;
  byte local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  bVar6 = (byte)param_3;
  if (param_3 < 0x80) {
    *(byte *)param_2 = bVar6;
    uVar4 = 1;
    goto LAB_00a1f654;
  }
  if (param_3 == 0x327e) goto LAB_00a1f538;
  iVar3 = FUN_00a15fac(param_1,&local_3c,param_3,2);
  if (iVar3 == -1) {
    if (param_3 - 0xac00 >> 2 < 0xae9) {
      if (param_3 < 0xc8a5) {
        if (param_4 < 2) goto LAB_00a1f56c;
        if (param_3 - 0xac00 >> 4 < 0x1cb) {
          uVar8 = (ulong)((param_3 >> 4) - 0xac0);
          uVar1 = 1 << (ulong)(param_3 & 0xf);
          if ((uVar1 & *(ushort *)(&DAT_013a2fb0 + uVar8 * 4)) != 0) {
            uVar1 = (uint)*(ushort *)(&DAT_013a2fb0 + uVar8 * 4) & uVar1 - 1;
            uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
            uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
            uVar1 = (uVar1 >> 4 & 0xffffff0f) + (uVar1 & 0xf0f0f0f);
            uVar1 = (uVar1 & 0xf) + (uVar1 >> 8) + (uint)*(ushort *)(&DAT_013a2fae + uVar8 * 4);
            puVar10 = &DAT_013a36da;
            puVar9 = &DAT_013a3734;
            uVar7 = uVar1 >> 7 & 0x1ff;
            goto LAB_00a1f738;
          }
        }
      }
      else {
        if (param_4 < 2) goto LAB_00a1f56c;
        uVar8 = (ulong)((param_3 >> 4) - 0xc80);
        uVar1 = 1 << (ulong)(param_3 & 0xf);
        if ((uVar1 & *(ushort *)(&DAT_013a4d76 + uVar8 * 4)) != 0) {
          uVar1 = (uint)*(ushort *)(&DAT_013a4d76 + uVar8 * 4) & uVar1 - 1;
          uVar1 = (uVar1 >> 1 & 0x55555555) + (uVar1 & 0x55555555);
          uVar1 = (uVar1 >> 2 & 0x33333333) + (uVar1 & 0x33333333);
          uVar1 = (uVar1 >> 4 & 0xffffff0f) + (uVar1 & 0xf0f0f0f);
          uVar1 = (uVar1 & 0xf) + (uVar1 >> 8) + (uint)*(ushort *)(&DAT_013a4d74 + uVar8 * 4);
          puVar10 = &DAT_013a5160;
          puVar9 = &DAT_013a51c2;
          uVar7 = uVar1 >> 6 & 0x3ff;
LAB_00a1f738:
          *param_2 = (ushort)((uint)*(ushort *)(puVar10 + (ulong)uVar7 * 2) +
                              (uint)(byte)puVar9[(ulong)uVar1 & 0xffff] >> 8) & 0xff |
                     (ushort)(((uint)*(ushort *)(puVar10 + (ulong)uVar7 * 2) +
                               (uint)(byte)puVar9[(ulong)uVar1 & 0xffff] & 0xff00ff) << 8);
          goto LAB_00a1f650;
        }
      }
LAB_00a1f538:
      uVar4 = 0xffffffff;
      goto LAB_00a1f654;
    }
    if (0xbb < param_3 - 0xe000) goto LAB_00a1f538;
    if (1 < param_4) {
      if (param_3 < 0xe05e) {
        bVar5 = 0xc9;
        bVar6 = bVar6 + 0xa1;
      }
      else {
        bVar5 = 0xfe;
        bVar6 = bVar6 + 0x43;
      }
      *(byte *)param_2 = bVar5;
      *(byte *)((long)param_2 + 1) = bVar6;
      goto LAB_00a1f650;
    }
  }
  else {
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (1 < param_4) {
      *(byte *)param_2 = local_3c ^ 0x80;
      *(byte *)((long)param_2 + 1) = local_3b ^ 0x80;
LAB_00a1f650:
      uVar4 = 2;
      goto LAB_00a1f654;
    }
  }
LAB_00a1f56c:
  uVar4 = 0xfffffffe;
LAB_00a1f654:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

