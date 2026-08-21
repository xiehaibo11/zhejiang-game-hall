
/* v8::internal::compiler::CodeGenerator::~CodeGenerator() */

void __thiscall v8::internal::compiler::CodeGenerator::~CodeGenerator(CodeGenerator *this)

{
  long lVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  
  *(undefined ***)this = &PTR__CodeGenerator_01cca578;
  if (*(long *)(this + 0x4a0) != 0) {
    *(long *)(this + 0x4a8) = *(long *)(this + 0x4a0);
  }
  if (*(long *)(this + 0x460) != 0) {
    *(long *)(this + 0x468) = *(long *)(this + 0x460);
  }
  if (*(long *)(this + 0x438) != 0) {
    *(long *)(this + 0x440) = *(long *)(this + 0x438);
  }
  pvVar2 = *(void **)(this + 0x408);
  if (pvVar2 != (void *)0x0) {
    *(void **)(this + 0x410) = pvVar2;
    operator_delete(pvVar2);
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
  ::clear((__deque_base<v8::internal::compiler::DeoptimizationLiteral,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationLiteral>>
           *)(this + 0x340));
  puVar3 = *(undefined8 **)(this + 0x348);
  puVar4 = *(undefined8 **)(this + 0x350);
  if (puVar3 != puVar4) {
    puVar6 = *(undefined8 **)(this + 0x388);
    puVar7 = (undefined8 *)*puVar3;
    if (puVar6 != (undefined8 *)0x0) goto LAB_012aba40;
    do {
      puVar6 = puVar7;
      puVar6[1] = 0x80;
      *puVar6 = *(undefined8 *)(this + 0x388);
      *(undefined8 **)(this + 0x388) = puVar6;
      do {
        puVar3 = puVar3 + 1;
        if (puVar4 == puVar3) {
          lVar1 = *(long *)(this + 0x350) - *(long *)(this + 0x348);
          if (lVar1 != 0) {
            *(ulong *)(this + 0x350) =
                 *(long *)(this + 0x350) + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
          }
          goto LAB_012aba74;
        }
        puVar7 = (undefined8 *)*puVar3;
        if (puVar6 == (undefined8 *)0x0) break;
LAB_012aba40:
      } while (0x80 < (ulong)puVar6[1]);
    } while( true );
  }
LAB_012aba74:
  puVar3 = *(undefined8 **)(this + 0x340);
  if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x358) - (long)puVar3))) {
    uVar5 = *(long *)(this + 0x358) - (long)puVar3 >> 3;
    if ((*(long *)(this + 0x368) == 0) || (*(ulong *)(*(long *)(this + 0x368) + 8) <= uVar5)) {
      puVar3[1] = uVar5;
      *puVar3 = *(undefined8 *)(this + 0x368);
      *(undefined8 **)(this + 0x368) = puVar3;
    }
  }
  std::__ndk1::
  __deque_base<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
  ::clear((__deque_base<v8::internal::compiler::DeoptimizationExit*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::DeoptimizationExit*>>
           *)(this + 0x2f0));
  puVar3 = *(undefined8 **)(this + 0x2f8);
  puVar4 = *(undefined8 **)(this + 0x300);
  if (puVar3 == puVar4) {
LAB_012abb3c:
    puVar3 = *(undefined8 **)(this + 0x2f0);
    if ((puVar3 != (undefined8 *)0x0) && (0xf < (ulong)(*(long *)(this + 0x308) - (long)puVar3))) {
      uVar5 = *(long *)(this + 0x308) - (long)puVar3 >> 3;
      if ((*(long *)(this + 0x318) == 0) || (*(ulong *)(*(long *)(this + 0x318) + 8) <= uVar5)) {
        puVar3[1] = uVar5;
        *puVar3 = *(undefined8 *)(this + 0x318);
        *(undefined8 **)(this + 0x318) = puVar3;
      }
    }
    if (*(long *)(this + 0x2c8) != 0) {
      *(long *)(this + 0x2d0) = *(long *)(this + 0x2c8);
    }
    Assembler::~Assembler((Assembler *)(this + 0xd0));
    if (*(long *)(this + 0x80) != 0) {
      *(long *)(this + 0x88) = *(long *)(this + 0x80);
    }
    if (*(long *)(this + 0x58) != 0) {
      *(long *)(this + 0x60) = *(long *)(this + 0x58);
    }
    return;
  }
  puVar6 = *(undefined8 **)(this + 0x338);
  puVar7 = (undefined8 *)*puVar3;
  if (puVar6 != (undefined8 *)0x0) goto LAB_012abb08;
  do {
    puVar6 = puVar7;
    puVar6[1] = 0x200;
    *puVar6 = *(undefined8 *)(this + 0x338);
    *(undefined8 **)(this + 0x338) = puVar6;
    do {
      puVar3 = puVar3 + 1;
      if (puVar4 == puVar3) {
        lVar1 = *(long *)(this + 0x300) - *(long *)(this + 0x2f8);
        if (lVar1 != 0) {
          *(ulong *)(this + 0x300) =
               *(long *)(this + 0x300) + (lVar1 - 8U >> 3 ^ 0xffffffffffffffff) * 8;
        }
        goto LAB_012abb3c;
      }
      puVar7 = (undefined8 *)*puVar3;
      if (puVar6 == (undefined8 *)0x0) break;
LAB_012abb08:
    } while (0x200 < (ulong)puVar6[1]);
  } while( true );
}

