
/* v8::internal::compiler::GapResolver::PerformMove(v8::internal::compiler::ParallelMove*,
   v8::internal::compiler::MoveOperands*) */

void __thiscall
v8::internal::compiler::GapResolver::PerformMove
          (GapResolver *this,ParallelMove *param_1,MoveOperands *param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long lVar3;
  ulong *puVar4;
  uint uVar5;
  ulong uVar6;
  InstructionOperand *this_00;
  undefined8 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  ulong local_48;
  ulong local_28;
  
  local_28 = *(ulong *)param_2;
  local_48 = *(ulong *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  lVar3 = *(long *)param_1;
  if (*(long *)(param_1 + 8) != lVar3) {
    uVar9 = 0;
    do {
      this_00 = *(InstructionOperand **)(lVar3 + uVar9 * 8);
      if (((((byte)*this_00 & 7) != 0) && (((byte)this_00[8] & 7) != 0)) &&
         (uVar2 = InstructionOperand::InterferesWith(this_00,(InstructionOperand *)&local_48),
         (uVar2 & 1) != 0)) {
        PerformMove(this,param_1,(MoveOperands *)this_00);
      }
      lVar3 = *(long *)param_1;
      uVar9 = uVar9 + 1;
    } while (uVar9 < (ulong)(*(long *)(param_1 + 8) - lVar3 >> 3));
    local_28 = *(ulong *)param_2;
  }
  uVar9 = local_28;
  if (((uint)local_28 >> 2 & 1) != 0) {
    uVar9 = 0x180;
    if (((uint)local_28 >> 5 & 0xff) < 0xb || (local_28 & 0x1c) != 4) {
      uVar9 = 0;
    }
    uVar9 = local_28 & 0xffffffffffffe018 | uVar9 | 4;
  }
  uVar2 = local_48;
  if (((uint)local_48 >> 2 & 1) != 0) {
    uVar2 = 0x180;
    if (((uint)local_48 >> 5 & 0xff) < 0xb || (local_48 & 0x1c) != 4) {
      uVar2 = 0;
    }
    uVar2 = local_48 & 0xffffffffffffe018 | uVar2 | 4;
  }
  if (uVar9 == uVar2) {
LAB_01632360:
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
  }
  else {
    *(ulong *)(param_2 + 8) = local_48;
    puVar7 = *(undefined8 **)param_1;
    puVar1 = *(undefined8 **)(param_1 + 8);
    if (puVar1 == puVar7) {
      if (puVar1 == puVar7) {
LAB_01632348:
        (**(code **)(**(long **)this + 0x10))(*(long **)this,&local_28,&local_48);
        goto LAB_01632360;
      }
    }
    else {
      do {
        if ((((byte)*(InstructionOperand *)*puVar7 & 7) != 0) &&
           (uVar9 = InstructionOperand::InterferesWith
                              ((InstructionOperand *)*puVar7,(InstructionOperand *)&local_48),
           puVar8 = puVar7, (uVar9 & 1) != 0)) break;
        puVar7 = puVar7 + 1;
        puVar8 = puVar1;
      } while (puVar1 != puVar7);
      if (*(undefined8 **)(param_1 + 8) == puVar8) goto LAB_01632348;
    }
    uVar9 = local_48;
    if ((local_28 & 0x1c) == 0xc) {
      local_48 = local_28;
      local_28 = uVar9;
    }
    (**(code **)(**(long **)this + 0x18))(*(long **)this,&local_28,&local_48);
    *(undefined8 *)param_2 = 0;
    *(undefined8 *)(param_2 + 8) = 0;
    puVar1 = *(undefined8 **)(param_1 + 8);
    for (puVar7 = *(undefined8 **)param_1; puVar7 != puVar1; puVar7 = puVar7 + 1) {
      puVar4 = (ulong *)*puVar7;
      uVar9 = *puVar4;
      if ((uVar9 & 7) != 0) {
        uVar2 = local_28;
        if (((uint)local_28 >> 2 & 1) != 0) {
          uVar2 = 0x180;
          if (((uint)local_28 >> 5 & 0xff) < 0xb || (local_28 & 0x1c) != 4) {
            uVar2 = 0;
          }
          uVar2 = local_28 & 0xffffffffffffe018 | uVar2 | 4;
        }
        uVar5 = (uint)uVar9;
        uVar6 = uVar9;
        if ((uVar5 >> 2 & 1) != 0) {
          uVar6 = 0x180;
          if ((uVar5 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
            uVar6 = 0;
          }
          uVar6 = uVar9 & 0xffffffffffffe018 | uVar6 | 4;
        }
        if (uVar2 == uVar6) {
          *puVar4 = local_48;
        }
        else {
          if (((uint)local_48 >> 2 & 1) == 0) {
            uVar2 = local_48;
            if ((uVar5 >> 2 & 1) == 0) goto LAB_016322ac;
LAB_016322dc:
            uVar6 = 0x180;
            if ((uVar5 >> 5 & 0xff) < 0xb || (uVar9 & 0x1c) != 4) {
              uVar6 = 0;
            }
            if (uVar2 != (uVar9 & 0xffffffffffffe018 | uVar6 | 4)) goto LAB_01632220;
          }
          else {
            uVar2 = 0x180;
            if (((uint)local_48 >> 5 & 0xff) < 0xb || (local_48 & 0x1c) != 4) {
              uVar2 = 0;
            }
            uVar2 = local_48 & 0xffffffffffffe018 | uVar2 | 4;
            if ((uVar5 >> 2 & 1) != 0) goto LAB_016322dc;
LAB_016322ac:
            if (uVar2 != uVar9) goto LAB_01632220;
          }
          *puVar4 = local_28;
        }
      }
LAB_01632220:
    }
  }
  return;
}

