
void FUN_00a16410(undefined8 param_1,byte *param_2,uint param_3,ulong param_4)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  undefined *puVar10;
  undefined2 local_3c;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  if (param_3 < 0x80) {
    *param_2 = (byte)param_3;
    uVar6 = 1;
    goto LAB_00a1665c;
  }
  iVar5 = FUN_00a153d0(param_1,&local_3c,param_3,2);
  if (iVar5 != -1) {
    if (iVar5 != 2) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    if (1 < param_4) {
      *param_2 = (byte)local_3c ^ 0x80;
      bVar7 = local_3c._1_1_ ^ 0x80;
LAB_00a1648c:
      param_2[1] = bVar7;
      uVar6 = 2;
      goto LAB_00a1665c;
    }
    goto LAB_00a16540;
  }
  if (param_3 == 0x203e) {
    local_3c = CONCAT11(local_3c._1_1_,0x7e);
LAB_00a16590:
    bVar7 = 0x7e;
  }
  else {
    if (param_3 == 0xa5) {
      local_3c = CONCAT11(local_3c._1_1_,0x5c);
LAB_00a164b4:
      uVar8 = param_3 >> 4;
      puVar10 = &DAT_0130e75a;
LAB_00a164c0:
      uVar2 = 1 << (ulong)(param_3 & 0xf);
      uVar9 = (uint)*(ushort *)((long)(puVar10 + (ulong)uVar8 * 4) + 2);
      if ((uVar2 & uVar9) == 0) goto LAB_00a16574;
      uVar9 = uVar9 & uVar2 - 1;
      uVar9 = (uVar9 >> 1 & 0x55555555) + (uVar9 & 0x55555555);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar9 = (uVar9 >> 4 & 0xffffff0f) + (uVar9 & 0xf0f0f0f);
      uVar1 = *(ushort *)
               (&DAT_0130fd02 +
               ((ulong)*(ushort *)(puVar10 + (ulong)uVar8 * 4) +
               (ulong)((uVar9 & 0xf) + (uVar9 >> 8))) * 2);
      local_3c = uVar1 >> 8 | uVar1 << 8;
      if (param_4 < 3) goto LAB_00a16540;
      *param_2 = 0x8f;
      param_2[2] = (byte)uVar1 ^ 0x80;
      param_2[1] = (byte)(uVar1 >> 8) ^ 0x80;
LAB_00a165e8:
      uVar6 = 3;
      goto LAB_00a1665c;
    }
    if (0x3e < param_3 - 0xff61) {
      if (param_3 < 0x460) goto LAB_00a164b4;
      if (param_3 - 0x2100 < 0x30) {
        uVar8 = (param_3 >> 4) - 0x210;
        puVar10 = &UNK_0130e872;
      }
      else if (param_3 - 0x4e00 >> 4 < 0x51b) {
        uVar8 = (param_3 >> 4) - 0x4e0;
        puVar10 = &UNK_0130e87e;
      }
      else {
        if (0x5f < param_3 - 0xff00) goto LAB_00a16574;
        uVar8 = (param_3 >> 4) - 0xff0;
        puVar10 = &DAT_0130fcea;
      }
      goto LAB_00a164c0;
    }
    bVar7 = (byte)param_3 + 0x40;
    local_3c = CONCAT11(local_3c._1_1_,bVar7);
    if ((char)bVar7 < '\0') {
      if (1 < param_4) {
        param_2[1] = bVar7;
        *param_2 = 0x8e;
        uVar6 = 2;
        goto LAB_00a1665c;
      }
      goto LAB_00a16540;
    }
LAB_00a16574:
    if (param_3 == 0x203e) goto LAB_00a16590;
    if (param_3 != 0xa5) {
      uVar8 = param_3 - 0xe000;
      if (0x757 < uVar8) {
        uVar6 = 0xffffffff;
        goto LAB_00a1665c;
      }
      if (param_3 < 0xe3ac) {
        if (1 < param_4) {
          cVar4 = (char)((uVar8 & 0xffff) / 0x5e);
          *param_2 = cVar4 - 0xb;
          bVar7 = (char)uVar8 + cVar4 * -0x5e + 0xa1;
          goto LAB_00a1648c;
        }
      }
      else if (2 < param_4) {
        *param_2 = 0x8f;
        cVar4 = (char)((param_3 + 0x1c54 & 0xffff) / 0x5e);
        param_2[1] = cVar4 - 0xb;
        param_2[2] = (char)(param_3 + 0x1c54) + cVar4 * -0x5e + 0xa1;
        goto LAB_00a165e8;
      }
LAB_00a16540:
      uVar6 = 0xfffffffe;
      goto LAB_00a1665c;
    }
    bVar7 = 0x5c;
  }
  *param_2 = bVar7;
  uVar6 = 1;
LAB_00a1665c:
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar6);
}

