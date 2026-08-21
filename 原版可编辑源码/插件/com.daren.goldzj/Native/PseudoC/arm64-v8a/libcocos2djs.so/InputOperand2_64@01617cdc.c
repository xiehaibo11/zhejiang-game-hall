
/* v8::internal::compiler::Arm64OperandConverter::InputOperand2_64(unsigned long) */

void v8::internal::compiler::Arm64OperandConverter::InputOperand2_64(ulong param_1)

{
  long lVar1;
  long in_x1;
  undefined1 *in_x8;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  uint *puVar5;
  long *plVar6;
  int iVar7;
  long *plVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  Constant local_30 [8];
  uint uStack_28;
  
  puVar5 = *(uint **)(param_1 + 8);
  switch(*puVar5 >> 9 & 0x1f) {
  case 0:
    uVar2 = *(ulong *)(puVar5 + ((ulong)(byte)puVar5[1] + in_x1) * 2 + 10);
    if (((uVar2 & 0x1c) != 4) || (10 < ((uint)(uVar2 >> 5) & 0xff))) {
      ToImmediate((InstructionOperand *)param_1);
      return;
    }
    uVar10 = 0xffffffff;
    uVar9 = 0;
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = 0;
    in_x8[0x28] = 0x13;
    *(ulong *)(in_x8 + 0x30) = (long)uVar2 >> 0x23 & 0xffffffffU | 0x4000000000;
    goto LAB_01617f04;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 3:
    lVar3 = (ulong)(byte)puVar5[1] + in_x1;
    lVar1 = *(long *)(puVar5 + lVar3 * 2 + 10);
    uVar2 = *(ulong *)(puVar5 + lVar3 * 2 + 0xc);
    if ((uVar2 & 7) == 3) {
      if (((uint)uVar2 >> 3 & 1) == 0) {
        Constant::Constant(local_30,(int)(uVar2 >> 0x20));
      }
      else {
        uStack_28 = (uint)*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                            ((long)uVar2 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
LAB_01617f5c:
        plVar6 = plVar4;
      }
      else {
        plVar6 = plVar4;
        do {
          iVar7 = (int)(uVar2 >> 3);
          if (iVar7 <= (int)plVar8[4]) {
            plVar6 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar7];
        } while (plVar8 != (long *)0x0);
        if ((plVar6 == plVar4) || (iVar7 < (int)plVar6[4])) goto LAB_01617f5c;
      }
      uStack_28 = (uint)plVar6[6];
    }
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = 0;
    *(ulong *)(in_x8 + 0x30) = lVar1 >> 0x23 & 0xffffffffU | 0x4000000000;
    *(undefined8 *)(in_x8 + 0x38) = 0;
    in_x8[0x28] = 0x13;
    goto LAB_0161810c;
  case 4:
    lVar3 = (ulong)(byte)puVar5[1] + in_x1;
    lVar1 = *(long *)(puVar5 + lVar3 * 2 + 10);
    uVar2 = *(ulong *)(puVar5 + lVar3 * 2 + 0xc);
    if ((uVar2 & 7) == 3) {
      if (((uint)uVar2 >> 3 & 1) == 0) {
        Constant::Constant(local_30,(int)(uVar2 >> 0x20));
      }
      else {
        uStack_28 = (uint)*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                            ((long)uVar2 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
LAB_01617fa4:
        plVar6 = plVar4;
      }
      else {
        plVar6 = plVar4;
        do {
          iVar7 = (int)(uVar2 >> 3);
          if (iVar7 <= (int)plVar8[4]) {
            plVar6 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar7];
        } while (plVar8 != (long *)0x0);
        if ((plVar6 == plVar4) || (iVar7 < (int)plVar6[4])) goto LAB_01617fa4;
      }
      uStack_28 = (uint)plVar6[6];
    }
    uVar10 = 0x100000000;
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = 0;
    goto LAB_016180fc;
  case 5:
    lVar3 = (ulong)(byte)puVar5[1] + in_x1;
    lVar1 = *(long *)(puVar5 + lVar3 * 2 + 10);
    uVar2 = *(ulong *)(puVar5 + lVar3 * 2 + 0xc);
    if ((uVar2 & 7) == 3) {
      if (((uint)uVar2 >> 3 & 1) == 0) {
        Constant::Constant(local_30,(int)(uVar2 >> 0x20));
      }
      else {
        uStack_28 = (uint)*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                            ((long)uVar2 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
LAB_01617fec:
        plVar6 = plVar4;
      }
      else {
        plVar6 = plVar4;
        do {
          iVar7 = (int)(uVar2 >> 3);
          if (iVar7 <= (int)plVar8[4]) {
            plVar6 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar7];
        } while (plVar8 != (long *)0x0);
        if ((plVar6 == plVar4) || (iVar7 < (int)plVar6[4])) goto LAB_01617fec;
      }
      uStack_28 = (uint)plVar6[6];
    }
    uVar10 = 0x200000000;
    goto LAB_016180e8;
  case 6:
    lVar3 = (ulong)(byte)puVar5[1] + in_x1;
    lVar1 = *(long *)(puVar5 + lVar3 * 2 + 10);
    uVar2 = *(ulong *)(puVar5 + lVar3 * 2 + 0xc);
    if ((uVar2 & 7) == 3) {
      if (((uint)uVar2 >> 3 & 1) == 0) {
        Constant::Constant(local_30,(int)(uVar2 >> 0x20));
      }
      else {
        uStack_28 = (uint)*(undefined8 *)
                           (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                            ((long)uVar2 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar4 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar8 = (long *)*plVar4;
      if (plVar8 == (long *)0x0) {
LAB_01618034:
        plVar6 = plVar4;
      }
      else {
        plVar6 = plVar4;
        do {
          iVar7 = (int)(uVar2 >> 3);
          if (iVar7 <= (int)plVar8[4]) {
            plVar6 = plVar8;
          }
          plVar8 = (long *)plVar8[(int)plVar8[4] < iVar7];
        } while (plVar8 != (long *)0x0);
        if ((plVar6 == plVar4) || (iVar7 < (int)plVar6[4])) goto LAB_01618034;
      }
      uStack_28 = (uint)plVar6[6];
    }
    uVar10 = 0x300000000;
LAB_016180e8:
    *in_x8 = 0;
    in_x8[8] = 0;
    *(undefined8 *)(in_x8 + 0x20) = 0;
LAB_016180fc:
    *(ulong *)(in_x8 + 0x30) = lVar1 >> 0x23 & 0xffffffffU | 0x4000000000;
    in_x8[0x28] = 0x13;
    *(undefined8 *)(in_x8 + 0x38) = uVar10;
LAB_0161810c:
    *(undefined4 *)(in_x8 + 0x40) = 0xffffffff;
    *(uint *)(in_x8 + 0x44) = uStack_28 & 0x3f;
    return;
  case 7:
    uVar2 = (ulong)(byte)puVar5[1];
    uVar10 = 0;
    break;
  case 8:
    uVar2 = (ulong)(byte)puVar5[1];
    uVar10 = 1;
    break;
  case 9:
    uVar2 = (ulong)(byte)puVar5[1];
    uVar10 = 4;
    break;
  case 10:
    uVar2 = (ulong)(byte)puVar5[1];
    uVar10 = 5;
    break;
  case 0xb:
    uVar2 = (ulong)(byte)puVar5[1];
    uVar10 = 6;
  }
  uVar9 = 0xffffffff00000000;
  lVar3 = *(long *)(puVar5 + (uVar2 + in_x1) * 2 + 10);
  *in_x8 = 0;
  in_x8[8] = 0;
  *(undefined8 *)(in_x8 + 0x20) = 0;
  in_x8[0x28] = 0x13;
  *(ulong *)(in_x8 + 0x30) = lVar3 >> 0x23 & 0xffffffffU | 0x4000000000;
LAB_01617f04:
  *(undefined8 *)(in_x8 + 0x40) = uVar10;
  *(undefined8 *)(in_x8 + 0x38) = uVar9;
  return;
}

