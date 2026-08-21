
/* v8::internal::compiler::InstructionSequence::AddImmediate(v8::internal::compiler::Constant
   const&) */

ulong __thiscall
v8::internal::compiler::InstructionSequence::AddImmediate
          (InstructionSequence *this,Constant *param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  Zone *this_00;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  if ((*(int *)param_1 == 0) && (param_1[4] == (Constant)0x13)) {
    uVar5 = 3;
    uVar3 = *(long *)(param_1 + 8) << 0x20;
  }
  else {
    puVar1 = *(undefined8 **)(this + 0x68);
    lVar6 = (long)puVar1 - *(long *)(this + 0x60);
    if (*(undefined8 **)(this + 0x70) == puVar1) {
      lVar7 = lVar6 >> 4;
      uVar3 = lVar7 + 1;
      if (uVar3 >> 0x1b != 0) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      lVar4 = (long)*(undefined8 **)(this + 0x70) - *(long *)(this + 0x60);
      uVar5 = lVar4 >> 3;
      if (uVar3 <= uVar5) {
        uVar3 = uVar5;
      }
      if (0x3fffffe < (ulong)(lVar4 >> 4)) {
        uVar3 = 0x7ffffff;
      }
      if (uVar3 == 0) {
        lVar4 = 0;
      }
      else {
        this_00 = *(Zone **)(this + 0x78);
        uVar5 = uVar3 * 0x10;
        lVar4 = *(long *)(this_00 + 0x10);
        if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar4) ||
            uVar5 - (*(long *)(this_00 + 0x18) - lVar4) == 0) {
          *(ulong *)(this_00 + 0x10) = lVar4 + uVar5;
        }
        else {
          lVar4 = Zone::NewExpand(this_00,uVar5);
        }
      }
      uVar9 = *(undefined8 *)param_1;
      puVar1 = (undefined8 *)(lVar4 + lVar7 * 0x10);
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *puVar1 = uVar9;
      lVar7 = *(long *)(this + 0x60);
      puVar2 = puVar1;
      for (lVar8 = *(long *)(this + 0x68); lVar8 != lVar7; lVar8 = lVar8 + -0x10) {
        uVar9 = *(undefined8 *)(lVar8 + -0x10);
        puVar2[-1] = *(undefined8 *)(lVar8 + -8);
        puVar2[-2] = uVar9;
        puVar2 = puVar2 + -2;
      }
      *(undefined8 **)(this + 0x60) = puVar2;
      *(undefined8 **)(this + 0x68) = puVar1 + 2;
      *(ulong *)(this + 0x70) = lVar4 + uVar3 * 0x10;
    }
    else {
      uVar9 = *(undefined8 *)param_1;
      puVar1[1] = *(undefined8 *)(param_1 + 8);
      *puVar1 = uVar9;
      *(long *)(this + 0x68) = *(long *)(this + 0x68) + 0x10;
    }
    uVar3 = lVar6 * 0x10000000;
    uVar5 = 0xb;
  }
  return uVar3 | uVar5;
}

