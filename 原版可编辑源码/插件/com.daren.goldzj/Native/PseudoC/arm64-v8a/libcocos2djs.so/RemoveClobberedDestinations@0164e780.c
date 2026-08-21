
/* v8::internal::compiler::MoveOptimizer::RemoveClobberedDestinations(v8::internal::compiler::Instruction*)
    */

void __thiscall
v8::internal::compiler::MoveOptimizer::RemoveClobberedDestinations
          (MoveOptimizer *this,Instruction *param_1)

{
  ulong uVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong *puVar7;
  vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
  *this_00;
  Instruction *pIVar8;
  undefined8 *puVar9;
  ulong uVar10;
  
  if ((((byte)param_1[7] >> 6 & 1) == 0) &&
     (puVar9 = *(undefined8 **)(param_1 + 8), puVar9 != (undefined8 *)0x0)) {
    this_00 = (vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
               *)(this + 0x30);
    puVar3 = *(undefined8 **)this_00;
    *(undefined8 **)(this + 0x38) = puVar3;
    *(undefined8 *)(this + 0x58) = *(undefined8 *)(this + 0x50);
    uVar2 = *(uint *)(param_1 + 4);
    if ((uVar2 & 0xff) != 0) {
      pIVar8 = param_1 + 0x28;
      uVar10 = 1;
      while( true ) {
        if (puVar3 == *(undefined8 **)(this + 0x40)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    (this_00,(InstructionOperand *)pIVar8);
        }
        else {
          *puVar3 = *(undefined8 *)pIVar8;
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
        }
        uVar2 = *(uint *)(param_1 + 4);
        if ((byte)uVar2 <= uVar10) break;
        puVar3 = *(undefined8 **)(this + 0x38);
        uVar10 = uVar10 + 1;
        pIVar8 = pIVar8 + 8;
      }
    }
    if ((uVar2 & 0x3f000000) != 0) {
      uVar10 = 0;
      do {
        if (*(undefined8 **)(this + 0x38) == *(undefined8 **)(this + 0x40)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    (this_00,(InstructionOperand *)
                             (param_1 +
                             (uVar10 + ((uVar2 >> 8 & 0xffff) + (uVar2 & 0xff))) * 8 + 0x28));
        }
        else {
          **(undefined8 **)(this + 0x38) =
               *(undefined8 *)
                (param_1 + (uVar10 + ((uVar2 >> 8 & 0xffff) + (uVar2 & 0xff))) * 8 + 0x28);
          *(long *)(this + 0x38) = *(long *)(this + 0x38) + 8;
        }
        uVar2 = *(uint *)(param_1 + 4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < ((ulong)(uVar2 >> 0x18) & 0x3f));
    }
    if ((uVar2 & 0xffff00) != 0) {
      uVar10 = 0;
      do {
        if (*(undefined8 **)(this + 0x58) == *(undefined8 **)(this + 0x60)) {
          std::__ndk1::
          vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
          ::__push_back_slow_path<v8::internal::compiler::InstructionOperand_const&>
                    ((vector<v8::internal::compiler::InstructionOperand,v8::internal::ZoneAllocator<v8::internal::compiler::InstructionOperand>>
                      *)(this + 0x50),
                     (InstructionOperand *)(param_1 + (uVar10 + (uVar2 & 0xff)) * 8 + 0x28));
        }
        else {
          **(undefined8 **)(this + 0x58) =
               *(undefined8 *)(param_1 + (uVar10 + (uVar2 & 0xff)) * 8 + 0x28);
          *(long *)(this + 0x58) = *(long *)(this + 0x58) + 8;
        }
        uVar2 = *(uint *)(param_1 + 4);
        uVar10 = uVar10 + 1;
      } while (uVar10 < (ushort)(uVar2 >> 8));
    }
    puVar3 = (undefined8 *)*puVar9;
    puVar5 = (undefined8 *)puVar9[1];
    if (puVar3 != puVar5) {
LAB_0164e914:
      puVar7 = *(ulong **)(this + 0x30);
      if (puVar7 != *(ulong **)(this + 0x38)) {
        puVar4 = (undefined8 *)*puVar3;
        uVar6 = puVar4[1];
        uVar10 = 0x180;
        if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
          uVar10 = 0;
        }
        if ((uVar6 & 4) != 0) {
          uVar6 = uVar6 & 0xffffffffffffe018 | uVar10 | 4;
        }
        do {
          uVar10 = *puVar7;
          if (((uint)uVar10 >> 2 & 1) != 0) {
            uVar1 = 0x180;
            if (((uint)uVar10 >> 5 & 0xff) < 0xb || (uVar10 & 0x1c) != 4) {
              uVar1 = 0;
            }
            uVar10 = uVar10 & 0xffffffffffffe018 | uVar1 | 4;
          }
          if (uVar10 == uVar6) {
            puVar7 = *(ulong **)(this + 0x50);
            goto joined_r0x0164e998;
          }
          puVar7 = puVar7 + 1;
        } while (*(ulong **)(this + 0x38) != puVar7);
      }
      goto LAB_0164e908;
    }
LAB_0164e9dc:
    if (((*(uint *)param_1 & 0x1ff) < 0x18) &&
       ((1 << (ulong)(*(uint *)param_1 & 0x1f) & 0x800816U) != 0)) {
      puVar3 = (undefined8 *)puVar9[1];
      for (puVar9 = (undefined8 *)*puVar9; puVar9 != puVar3; puVar9 = puVar9 + 1) {
        puVar7 = *(ulong **)(this + 0x50);
        puVar5 = (undefined8 *)*puVar9;
        if (puVar7 != *(ulong **)(this + 0x58)) {
          uVar6 = puVar5[1];
          uVar10 = 0x180;
          if (((uint)uVar6 >> 5 & 0xff) < 0xb || (uVar6 & 0x1c) != 4) {
            uVar10 = 0;
          }
          if ((uVar6 & 4) != 0) {
            uVar6 = uVar6 & 0xffffffffffffe018 | uVar10 | 4;
          }
          do {
            uVar10 = *puVar7;
            if (((uint)uVar10 >> 2 & 1) != 0) {
              uVar1 = 0x180;
              if (((uint)uVar10 >> 5 & 0xff) < 0xb || (uVar10 & 0x1c) != 4) {
                uVar1 = 0;
              }
              uVar10 = uVar10 & 0xffffffffffffe018 | uVar1 | 4;
            }
            if (uVar10 == uVar6) goto LAB_0164ea20;
            puVar7 = puVar7 + 1;
          } while (*(ulong **)(this + 0x58) != puVar7);
        }
        *puVar5 = 0;
        puVar5[1] = 0;
LAB_0164ea20:
      }
    }
  }
  return;
joined_r0x0164e998:
  if (puVar7 == *(ulong **)(this + 0x58)) goto LAB_0164e904;
  uVar10 = *puVar7;
  if (((uint)uVar10 >> 2 & 1) != 0) {
    uVar1 = 0x180;
    if (((uint)uVar10 >> 5 & 0xff) < 0xb || (uVar10 & 0x1c) != 4) {
      uVar1 = 0;
    }
    uVar10 = uVar10 & 0xffffffffffffe018 | uVar1 | 4;
  }
  if (uVar10 == uVar6) goto LAB_0164e908;
  puVar7 = puVar7 + 1;
  goto joined_r0x0164e998;
LAB_0164e904:
  *puVar4 = 0;
  puVar4[1] = 0;
LAB_0164e908:
  puVar3 = puVar3 + 1;
  if (puVar3 == puVar5) goto LAB_0164e9dc;
  goto LAB_0164e914;
}

