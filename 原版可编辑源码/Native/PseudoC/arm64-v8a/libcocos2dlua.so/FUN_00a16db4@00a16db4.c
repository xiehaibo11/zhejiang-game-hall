
void FUN_00a16db4(undefined8 param_1,ushort *param_2,uint param_3,ulong param_4)

{
  uint uVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  char cVar10;
  undefined2 local_3c;
  long local_38;
  
  lVar2 = tpidr_el0;
  local_38 = *(long *)(lVar2 + 0x28);
  if (param_3 < 0x80) {
    cVar10 = (char)param_3;
    local_3c = CONCAT11(local_3c._1_1_,cVar10);
    if (-1 < cVar10) {
      *(char *)param_2 = cVar10;
      uVar4 = 1;
      goto LAB_00a17194;
    }
    if ((param_3 != 0x5c) && (uVar7 = param_3, param_3 != 0x7e)) {
LAB_00a16f28:
      local_3c = CONCAT11(local_3c._1_1_,(char)uVar7);
      if ((uVar7 + 0x5f & 0xff) < 0x3f) {
        *(char *)param_2 = (char)uVar7;
        uVar4 = 1;
        goto LAB_00a17194;
      }
    }
  }
  else {
    if (param_3 == 0x203e) {
      uVar5 = 0x7e;
    }
    else {
      if (param_3 != 0xa5) {
        if (param_3 - 0xff61 < 0x3f) {
          uVar7 = param_3 + 0x40;
          goto LAB_00a16f28;
        }
        goto LAB_00a16e3c;
      }
      uVar5 = 0x5c;
    }
    local_3c = CONCAT11(local_3c._1_1_,uVar5);
  }
LAB_00a16e3c:
  iVar3 = FUN_00a153d0(param_1,&local_3c,param_3,2);
  if (iVar3 == -1) goto LAB_00a16ed0;
  if (iVar3 != 2) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  if (param_4 < 2) goto LAB_00a17190;
  uVar7 = (byte)local_3c - 0x21;
  if (uVar7 < 0x54) {
    if (0x5d < (local_3c._1_1_ - 0x21 & 0xff)) goto LAB_00a16ed0;
    uVar8 = (local_3c._1_1_ - 0x21) + (-(uVar7 & 1) & 0x5e);
    cVar10 = -0x7f;
    if (0x3d < (uVar7 & 0x1fe)) {
      cVar10 = -0x3f;
    }
    *(char *)param_2 = cVar10 + (char)(uVar7 >> 1);
    cVar10 = '@';
    if (0x3e < (uVar8 & 0xff)) {
      cVar10 = 'A';
    }
    *(char *)((long)param_2 + 1) = cVar10 + (char)uVar8;
  }
  else {
LAB_00a16ed0:
    if (param_3 - 0x2100 < 0x1c0) {
      uVar7 = (param_3 >> 4) - 0x210;
      puVar9 = &DAT_013288b8;
LAB_00a170f0:
      uVar1 = 1 << (ulong)(param_3 & 0xf);
      uVar8 = (uint)*(ushort *)((long)(puVar9 + (ulong)uVar7 * 4) + 2);
      if ((uVar1 & uVar8) == 0) goto LAB_00a1717c;
      uVar8 = uVar8 & uVar1 - 1;
      uVar8 = (uVar8 >> 1 & 0x55555555) + (uVar8 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar8 = (uVar8 >> 4 & 0xffffff0f) + (uVar8 & 0xf0f0f0f);
      local_3c = *(ushort *)
                  (&DAT_01329b60 +
                  ((ulong)*(ushort *)(puVar9 + (ulong)uVar7 * 4) +
                  (ulong)((uVar8 & 0xf) + (uVar8 >> 8))) * 2) >> 8 |
                 *(ushort *)
                  (&DAT_01329b60 +
                  ((ulong)*(ushort *)(puVar9 + (ulong)uVar7 * 4) +
                  (ulong)((uVar8 & 0xf) + (uVar8 >> 8))) * 2) << 8;
      uVar6 = local_3c;
      if (param_4 < 2) goto LAB_00a17190;
      goto LAB_00a17170;
    }
    if (param_3 >> 7 == 0x48) {
      uVar7 = (param_3 >> 4) - 0x240;
      puVar9 = &UNK_012fcc54;
      goto LAB_00a170f0;
    }
    if ((param_3 & 0xffffffe0) == 0x3000) {
      uVar7 = (param_3 >> 4) - 0x300;
      puVar9 = &UNK_012fd174;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x3200 < 0x1d0) {
      uVar7 = (param_3 >> 4) - 800;
      puVar9 = &UNK_01328928;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x4e00 < 0x790) {
      uVar7 = (param_3 >> 4) - 0x4e0;
      puVar9 = &UNK_0132899c;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x5700 < 0x2c0) {
      uVar7 = (param_3 >> 4) - 0x570;
      puVar9 = &UNK_01328b80;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x5b00 < 0x2e0) {
      uVar7 = (param_3 >> 4) - 0x5b0;
      puVar9 = &UNK_01328c30;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x5f00 >> 5 < 0xe5) {
      uVar7 = (param_3 >> 4) - 0x5f0;
      puVar9 = &UNK_01328ce8;
      goto LAB_00a170f0;
    }
    if (param_3 - 32000 < 0x2b0) {
      uVar7 = (param_3 >> 4) - 2000;
      puVar9 = &UNK_01329410;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x8300 < 0x2c0) {
      uVar7 = (param_3 >> 4) - 0x830;
      puVar9 = &UNK_013294bc;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x8800 < 0x6d0) {
      uVar7 = (param_3 >> 4) - 0x880;
      puVar9 = &UNK_0132956c;
      goto LAB_00a170f0;
    }
    if (param_3 - 0x9000 < 0xee0) {
      uVar7 = (param_3 >> 4) - 0x900;
      puVar9 = &UNK_01329720;
      goto LAB_00a170f0;
    }
    if (param_3 - 0xf900 < 0x130) {
      uVar7 = (param_3 >> 4) - 0xf90;
      puVar9 = &UNK_01329ad8;
      goto LAB_00a170f0;
    }
    if (param_3 - 0xff00 < 0xf0) {
      uVar7 = (param_3 >> 4) - 0xff0;
      puVar9 = &UNK_01329b24;
      goto LAB_00a170f0;
    }
LAB_00a1717c:
    uVar7 = param_3 - 0xe000;
    if (0x757 < uVar7) {
      uVar4 = 0xffffffff;
      if ((int)param_3 < 0xff5e) {
        if (param_3 == 0x2225) {
          if (1 < param_4) {
            uVar6 = 0x6181;
            goto LAB_00a17170;
          }
        }
        else {
          if (param_3 != 0xff0d) goto LAB_00a17194;
          if (1 < param_4) {
            uVar6 = 0x7c81;
            goto LAB_00a17170;
          }
        }
      }
      else if (param_3 == 0xffe1) {
        if (1 < param_4) {
          uVar6 = 0x9281;
LAB_00a17170:
          *param_2 = uVar6;
          goto LAB_00a17174;
        }
      }
      else if (param_3 == 0xffe0) {
        if (1 < param_4) {
          uVar6 = 0x9181;
          goto LAB_00a17170;
        }
      }
      else {
        if (param_3 != 0xff5e) goto LAB_00a17194;
        if (1 < param_4) {
          uVar6 = 0x6081;
          goto LAB_00a17170;
        }
      }
LAB_00a17190:
      uVar4 = 0xfffffffe;
      goto LAB_00a17194;
    }
    if (param_4 < 2) goto LAB_00a17190;
    uVar8 = (uVar7 & 0xffff) / 0xbc;
    uVar7 = uVar7 + uVar8 * -0xbc;
    *(char *)param_2 = (char)uVar8 + -0x10;
    cVar10 = '@';
    if (0x3e < (uVar7 & 0xffff)) {
      cVar10 = 'A';
    }
    *(char *)((long)param_2 + 1) = cVar10 + (char)uVar7;
  }
LAB_00a17174:
  uVar4 = 2;
LAB_00a17194:
  if (*(long *)(lVar2 + 0x28) != local_38) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar4);
  }
  return;
}

