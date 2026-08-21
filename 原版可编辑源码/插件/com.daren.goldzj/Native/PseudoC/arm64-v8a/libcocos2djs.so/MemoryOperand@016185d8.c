
/* v8::internal::compiler::Arm64OperandConverter::MemoryOperand(unsigned long) */

void v8::internal::compiler::Arm64OperandConverter::MemoryOperand(ulong param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long in_x1;
  ulong *in_x8;
  long *plVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  int iVar9;
  long *plVar10;
  int local_40 [2];
  ulong uStack_38;
  
  puVar6 = *(uint **)(param_1 + 8);
  switch(*puVar6 >> 9 & 0x1f) {
  case 1:
    lVar1 = (ulong)(byte)puVar6[1] + in_x1;
    lVar2 = *(long *)(puVar6 + lVar1 * 2 + 10);
    uVar7 = *(ulong *)(puVar6 + lVar1 * 2 + 0xc);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)local_40,(int)(uVar7 >> 0x20));
      }
      else {
        uStack_38._0_4_ =
             (int)*(undefined8 *)
                   (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                    ((long)uVar7 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar10 = (long *)*plVar5;
      if (plVar10 == (long *)0x0) {
LAB_01618770:
        plVar8 = plVar5;
      }
      else {
        plVar8 = plVar5;
        do {
          iVar9 = (int)(uVar7 >> 3);
          if (iVar9 <= (int)plVar10[4]) {
            plVar8 = plVar10;
          }
          plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
        } while (plVar10 != (long *)0x0);
        if ((plVar8 == plVar5) || (iVar9 < (int)plVar8[4])) goto LAB_01618770;
      }
      uStack_38._0_4_ = (int)plVar8[6];
    }
    *in_x8 = lVar2 >> 0x23 & 0xffffffffU | 0x4000000000;
    *(undefined4 *)(in_x8 + 1) = 0;
    in_x8[3] = (long)(int)uStack_38;
    *(undefined4 *)((long)in_x8 + 0x14) = 2;
    break;
  case 2:
    uStack_38._0_4_ = 0;
    lVar1 = (ulong)(byte)puVar6[1] + in_x1;
    lVar2 = *(long *)(puVar6 + lVar1 * 2 + 10);
    lVar1 = *(long *)(puVar6 + lVar1 * 2 + 0xc);
    *(undefined4 *)(in_x8 + 1) = 0;
    *(undefined8 *)((long)in_x8 + 0x1c) = 0;
    *(undefined8 *)((long)in_x8 + 0x14) = 0;
    *in_x8 = lVar2 >> 0x23 & 0xffffffffU | 0x4000000000;
    *(ulong *)((long)in_x8 + 0xc) = lVar1 >> 0x23 & 0xffffffffU | 0x4000000000;
    goto LAB_016188d4;
  case 3:
    lVar1 = (ulong)(byte)puVar6[1] + in_x1;
    lVar2 = *(long *)(puVar6 + lVar1 * 2 + 10);
    lVar3 = *(long *)(puVar6 + lVar1 * 2 + 0xc);
    uVar7 = *(ulong *)(puVar6 + lVar1 * 2 + 0xe);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)local_40,(int)(uVar7 >> 0x20));
      }
      else {
        uStack_38._0_4_ =
             (int)*(undefined8 *)
                   (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                    ((long)uVar7 >> 0x20) * 0x10 + 8);
      }
    }
    else {
      plVar5 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar10 = (long *)*plVar5;
      if (plVar10 == (long *)0x0) {
LAB_01618800:
        plVar8 = plVar5;
      }
      else {
        plVar8 = plVar5;
        do {
          iVar9 = (int)(uVar7 >> 3);
          if (iVar9 <= (int)plVar10[4]) {
            plVar8 = plVar10;
          }
          plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
        } while (plVar10 != (long *)0x0);
        if ((plVar8 == plVar5) || (iVar9 < (int)plVar8[4])) goto LAB_01618800;
      }
      uStack_38._0_4_ = (int)plVar8[6];
    }
    *in_x8 = lVar2 >> 0x23 & 0xffffffffU | 0x4000000000;
    *(undefined4 *)(in_x8 + 1) = 0;
    *(ulong *)((long)in_x8 + 0xc) = lVar3 >> 0x23 & 0xffffffffU | 0x4000000000;
    *(undefined8 *)((long)in_x8 + 0x1c) = 0;
    *(undefined8 *)((long)in_x8 + 0x14) = 0;
LAB_016188d4:
    *(undefined4 *)((long)in_x8 + 0x24) = 0;
    goto LAB_016188d8;
  default:
                    /* WARNING: Subroutine does not return */
    V8_Fatal("unreachable code");
  case 0xc:
    uVar7 = *(ulong *)(puVar6 + ((ulong)(byte)puVar6[1] + in_x1) * 2 + 10);
    if ((uVar7 & 7) == 3) {
      if (((uint)uVar7 >> 3 & 1) == 0) {
        Constant::Constant((Constant *)local_40,(int)(uVar7 >> 0x20));
      }
      else {
        puVar4 = (undefined8 *)
                 (*(long *)(*(long *)(*(long *)param_1 + 0x28) + 0x60) +
                 ((long)uVar7 >> 0x20) * 0x10);
        uStack_38 = puVar4[1];
        local_40[0] = (int)*puVar4;
      }
    }
    else {
      plVar5 = (long *)(*(long *)(*(long *)param_1 + 0x28) + 0x48);
      plVar10 = (long *)*plVar5;
      if (plVar10 == (long *)0x0) {
LAB_016187b8:
        plVar8 = plVar5;
      }
      else {
        plVar8 = plVar5;
        do {
          iVar9 = (int)(uVar7 >> 3);
          if (iVar9 <= (int)plVar10[4]) {
            plVar8 = plVar10;
          }
          plVar10 = (long *)plVar10[(int)plVar10[4] < iVar9];
        } while (plVar10 != (long *)0x0);
        if ((plVar8 == plVar5) || (iVar9 < (int)plVar8[4])) goto LAB_016187b8;
      }
      uStack_38 = plVar8[6];
      local_40[0] = (int)plVar8[5];
    }
    uVar7 = (long)(int)uStack_38;
    if (local_40[0] != 0) {
      uVar7 = uStack_38;
    }
    *in_x8 = 0x400000001a;
    in_x8[3] = uVar7;
    *(undefined4 *)(in_x8 + 1) = 0;
    *(undefined4 *)((long)in_x8 + 0x14) = 2;
  }
  uStack_38._0_4_ = 0;
  *(undefined8 *)((long)in_x8 + 0xc) = 0xffffffff;
  in_x8[4] = 0xffffffff00000000;
LAB_016188d8:
  *(undefined4 *)(in_x8 + 5) = 0xffffffff;
  *(int *)((long)in_x8 + 0x2c) = (int)uStack_38;
  return;
}

