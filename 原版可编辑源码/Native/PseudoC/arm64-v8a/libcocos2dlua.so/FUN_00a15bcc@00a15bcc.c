
void FUN_00a15bcc(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  uint uVar6;
  undefined1 *puVar7;
  char local_3c;
  byte local_3b;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  iVar3 = FUN_00a158bc(param_1,&local_3c,param_3,2);
  if (iVar3 == -1) {
LAB_00a15c30:
    if (param_3 < 0x80) {
      if (((param_3 == 0x24) || (param_3 == 0x7e)) ||
         (local_3c = (char)param_3, 0x5d < (param_3 - 0x21 & 0xff))) {
LAB_00a15c90:
        if (param_4 < 2) goto LAB_00a15cd0;
        if (param_3 < 0x200) {
          uVar5 = param_3 >> 4;
          puVar7 = &LAB_0131c0e4;
LAB_00a15e14:
          uVar1 = 1 << (ulong)(param_3 & 0xf);
          uVar6 = (uint)*(ushort *)((long)(puVar7 + (ulong)uVar5 * 4) + 2);
          if ((uVar1 & uVar6) != 0) {
            uVar6 = uVar6 & uVar1 - 1;
            uVar6 = (uVar6 >> 1 & 0x55555555) + (uVar6 & 0x55555555);
            uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
            uVar6 = (uVar6 >> 4 & 0xffffff0f) + (uVar6 & 0xf0f0f0f);
            *param_2 = *(ushort *)
                        (&DAT_0131d62c +
                        ((ulong)*(ushort *)(puVar7 + (ulong)uVar5 * 4) +
                        (ulong)((uVar6 & 0xf) + (uVar6 >> 8))) * 2) >> 8 |
                       *(ushort *)
                        (&DAT_0131d62c +
                        ((ulong)*(ushort *)(puVar7 + (ulong)uVar5 * 4) +
                        (ulong)((uVar6 & 0xf) + (uVar6 >> 8))) * 2) << 8;
            goto LAB_00a15e90;
          }
        }
        else {
          if (param_3 - 0x300 < 0xc0) {
            uVar5 = (param_3 >> 4) - 0x30;
            puVar7 = &UNK_0131c164;
            goto LAB_00a15e14;
          }
          if (param_3 - 0x1e00 < 0x1c0) {
            uVar5 = (param_3 >> 4) - 0x1e0;
            puVar7 = &UNK_0131c194;
            goto LAB_00a15e14;
          }
          if ((param_3 & 0xffffffc0) == 0x3000) {
            uVar5 = (param_3 >> 4) - 0x300;
            puVar7 = &LAB_012fc624;
            goto LAB_00a15e14;
          }
          if (param_3 >> 9 == 0x19) {
            uVar5 = (param_3 >> 4) - 800;
            puVar7 = &UNK_0131c204;
            goto LAB_00a15e14;
          }
          if (param_3 - 0x4e00 >> 8 < 0x2f) {
            uVar5 = (param_3 >> 4) - 0x4e0;
            puVar7 = &UNK_0131c284;
            goto LAB_00a15e14;
          }
          if (param_3 - 0x7e00 >> 4 < 0x14d) {
            uVar5 = (param_3 >> 4) - 0x7e0;
            puVar7 = &UNK_0131ce44;
            goto LAB_00a15e14;
          }
          if (param_3 - 0x9400 < 0x8f0) {
            uVar5 = (param_3 >> 4) - 0x940;
            puVar7 = &UNK_0131d378;
            goto LAB_00a15e14;
          }
          if (param_3 - 0x9e00 < 400) {
            uVar5 = (param_3 >> 4) - 0x9e0;
            puVar7 = &UNK_0131d5b4;
            goto LAB_00a15e14;
          }
          if (param_3 - 0xff00 < 0x50) {
            uVar5 = (param_3 >> 4) - 0xff0;
            puVar7 = &UNK_0131d618;
            goto LAB_00a15e14;
          }
        }
        uVar4 = 0xffffffff;
        goto LAB_00a15e94;
      }
    }
    else {
      if (param_3 == 0xa5) {
        param_3 = 0x24;
      }
      else {
        if (param_3 != 0x203e) goto LAB_00a15c90;
        param_3 = 0x7e;
      }
      local_3c = (char)param_3;
    }
    if (param_4 < 2) {
LAB_00a15cd0:
      uVar4 = 0xfffffffe;
      goto LAB_00a15e94;
    }
    *(char *)((long)param_2 + 1) = (char)param_3;
    *(undefined1 *)param_2 = 0x2a;
  }
  else {
    if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if ((local_3c == '(') && (local_3b - 0x21 < 0x20)) goto LAB_00a15c30;
    if (param_4 < 2) goto LAB_00a15cd0;
    *(char *)param_2 = local_3c;
    *(byte *)((long)param_2 + 1) = local_3b;
  }
LAB_00a15e90:
  uVar4 = 2;
LAB_00a15e94:
  if (*(long *)(lVar2 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar4);
}

