
void FUN_00a165ac(void)

{
  undefined2 uVar1;
  uint uVar2;
  undefined8 uVar3;
  char cVar4;
  int in_w8;
  ulong uVar5;
  uint uVar6;
  undefined *puVar7;
  char *unaff_x19;
  ulong unaff_x20;
  uint unaff_w21;
  long unaff_x22;
  long in_stack_00000008;
  
  if (unaff_w21 + in_w8 < 0x30) {
    uVar5 = (ulong)((unaff_w21 >> 4) - 0x210);
    puVar7 = &UNK_0130e872;
LAB_00a164c0:
    uVar2 = 1 << (ulong)(unaff_w21 & 0xf);
    uVar6 = (uint)*(ushort *)((long)(puVar7 + uVar5 * 4) + 2);
    if ((uVar2 & uVar6) == 0) goto LAB_00a16574;
    uVar6 = uVar6 & uVar2 - 1;
    uVar6 = (uVar6 >> 1 & 0x55555555) + (uVar6 & 0x55555555);
    uVar6 = (uVar6 >> 2 & 0x33333333) + (uVar6 & 0x33333333);
    uVar6 = (uVar6 >> 4 & 0xffffff0f) + (uVar6 & 0xf0f0f0f);
    uVar1 = *(undefined2 *)
             (&DAT_0130fd02 +
             ((ulong)*(ushort *)(puVar7 + uVar5 * 4) + (ulong)((uVar6 & 0xf) + (uVar6 >> 8))) * 2);
    if (2 < unaff_x20) {
      *unaff_x19 = -0x71;
      unaff_x19[2] = (byte)uVar1 ^ 0x80;
      unaff_x19[1] = (byte)((ushort)uVar1 >> 8) ^ 0x80;
LAB_00a165e8:
      uVar3 = 3;
      goto LAB_00a1665c;
    }
LAB_00a16540:
    uVar3 = 0xfffffffe;
  }
  else {
    if (unaff_w21 - 0x4e00 >> 4 < 0x51b) {
      uVar5 = (ulong)((unaff_w21 >> 4) - 0x4e0);
      puVar7 = &UNK_0130e87e;
      goto LAB_00a164c0;
    }
    if (unaff_w21 - 0xff00 < 0x60) {
      uVar5 = (ulong)((unaff_w21 >> 4) - 0xff0);
      puVar7 = &DAT_0130fcea;
      goto LAB_00a164c0;
    }
LAB_00a16574:
    if (unaff_w21 == 0x203e) {
      cVar4 = '~';
    }
    else {
      if (unaff_w21 != 0xa5) {
        uVar6 = unaff_w21 - 0xe000;
        if (0x757 < uVar6) {
          uVar3 = 0xffffffff;
          goto LAB_00a1665c;
        }
        if (unaff_w21 < 0xe3ac) {
          if (1 < unaff_x20) {
            cVar4 = (char)((uVar6 & 0xffff) / 0x5e);
            *unaff_x19 = cVar4 + -0xb;
            unaff_x19[1] = (char)uVar6 + cVar4 * -0x5e + -0x5f;
            uVar3 = 2;
            goto LAB_00a1665c;
          }
        }
        else if (2 < unaff_x20) {
          *unaff_x19 = -0x71;
          cVar4 = (char)((unaff_w21 + 0x1c54 & 0xffff) / 0x5e);
          unaff_x19[1] = cVar4 + -0xb;
          unaff_x19[2] = (char)(unaff_w21 + 0x1c54) + cVar4 * -0x5e + -0x5f;
          goto LAB_00a165e8;
        }
        goto LAB_00a16540;
      }
      cVar4 = '\\';
    }
    *unaff_x19 = cVar4;
    uVar3 = 1;
  }
LAB_00a1665c:
  if (*(long *)(unaff_x22 + 0x28) == in_stack_00000008) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(uVar3);
}

