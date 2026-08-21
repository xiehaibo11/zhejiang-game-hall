
/* v8::internal::compiler::CodeGenerator::AddProtectedInstructionLanding(unsigned int, unsigned int)
    */

void __thiscall
v8::internal::compiler::CodeGenerator::AddProtectedInstructionLanding
          (CodeGenerator *this,uint param_1,uint param_2)

{
  ulong uVar1;
  undefined8 *puVar2;
  Zone *this_00;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar2 = *(undefined8 **)(this + 0x440);
  if (puVar2 < *(undefined8 **)(this + 0x448)) {
    *puVar2 = CONCAT44(param_2,param_1);
    *(long *)(this + 0x440) = *(long *)(this + 0x440) + 8;
  }
  else {
    lVar8 = (long)puVar2 - *(long *)(this + 0x438) >> 3;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x1c != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    lVar3 = (long)*(undefined8 **)(this + 0x448) - *(long *)(this + 0x438);
    uVar5 = lVar3 >> 2;
    if (uVar1 <= uVar5) {
      uVar1 = uVar5;
    }
    if (0x7fffffe < (ulong)(lVar3 >> 3)) {
      uVar1 = 0xfffffff;
    }
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      this_00 = *(Zone **)(this + 0x450);
      uVar5 = uVar1 * 8;
      lVar3 = *(long *)(this_00 + 0x10);
      if (uVar5 < (ulong)(*(long *)(this_00 + 0x18) - lVar3) ||
          uVar5 - (*(long *)(this_00 + 0x18) - lVar3) == 0) {
        *(ulong *)(this_00 + 0x10) = lVar3 + uVar5;
      }
      else {
        lVar3 = Zone::NewExpand(this_00,uVar5);
      }
    }
    puVar2 = (undefined8 *)(lVar3 + lVar8 * 8);
    puVar4 = puVar2 + 1;
    *puVar2 = CONCAT44(param_2,param_1);
    puVar6 = *(undefined8 **)(this + 0x438);
    puVar7 = *(undefined8 **)(this + 0x440);
    while (puVar7 != puVar6) {
      puVar7 = puVar7 + -1;
      puVar2 = puVar2 + -1;
      *puVar2 = *puVar7;
    }
    *(undefined8 **)(this + 0x438) = puVar2;
    *(undefined8 **)(this + 0x440) = puVar4;
    *(ulong *)(this + 0x448) = lVar3 + uVar1 * 8;
  }
  return;
}

