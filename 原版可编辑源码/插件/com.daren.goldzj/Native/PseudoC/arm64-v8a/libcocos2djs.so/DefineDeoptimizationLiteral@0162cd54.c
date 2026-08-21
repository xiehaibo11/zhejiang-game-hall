
/* v8::internal::compiler::CodeGenerator::DefineDeoptimizationLiteral(v8::internal::compiler::DeoptimizationLiteral)
    */

ulong __thiscall
v8::internal::compiler::CodeGenerator::DefineDeoptimizationLiteral(CodeGenerator *this,int *param_2)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar8 = *(ulong *)(this + 0x378);
  if (uVar8 == 0) {
    lVar3 = *(long *)(this + 0x348);
    lVar5 = *(long *)(this + 0x370);
  }
  else {
    lVar5 = *(long *)(this + 0x370);
    lVar3 = *(long *)(this + 0x348);
    uVar2 = 0;
    do {
      lVar6 = *(long *)(lVar3 + (lVar5 + uVar2 >> 4 & 0xffffffffffffff8));
      uVar7 = lVar5 + uVar2 & 0x7f;
      if ((((*(int *)(lVar6 + uVar7 * 0x20) == *param_2) &&
           (lVar1 = lVar6 + uVar7 * 0x20, *(long *)(lVar1 + 8) == *(long *)(param_2 + 2))) &&
          (*(long *)(lVar1 + 0x10) == *(long *)(param_2 + 4))) &&
         (*(long *)(lVar6 + uVar7 * 0x20 + 0x18) == *(long *)(param_2 + 6))) {
        return uVar2;
      }
      uVar2 = (ulong)((int)uVar2 + 1);
    } while (uVar2 < uVar8);
  }
  lVar6 = *(long *)(this + 0x350);
  uVar2 = lVar5 + uVar8;
  uVar7 = 0;
  if (lVar6 - lVar3 != 0) {
    uVar7 = (lVar6 - lVar3) * 0x10 - 1;
  }
  if (uVar7 == uVar2) {
    std::__ndk1::
    deque<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
                *)(this + 0x340));
    lVar3 = *(long *)(this + 0x348);
    lVar6 = *(long *)(this + 0x350);
    uVar2 = *(long *)(this + 0x370) + *(long *)(this + 0x378);
  }
  if (lVar6 == lVar3) {
    puVar4 = (undefined8 *)0x0;
  }
  else {
    puVar4 = (undefined8 *)
             (*(long *)(lVar3 + (uVar2 >> 4 & 0xffffffffffffff8)) + (uVar2 & 0x7f) * 0x20);
  }
  uVar9 = *(undefined8 *)param_2;
  uVar11 = *(undefined8 *)(param_2 + 6);
  uVar10 = *(undefined8 *)(param_2 + 4);
  puVar4[1] = *(undefined8 *)(param_2 + 2);
  *puVar4 = uVar9;
  puVar4[3] = uVar11;
  puVar4[2] = uVar10;
  *(long *)(this + 0x378) = *(long *)(this + 0x378) + 1;
  return uVar8 & 0xffffffff;
}

