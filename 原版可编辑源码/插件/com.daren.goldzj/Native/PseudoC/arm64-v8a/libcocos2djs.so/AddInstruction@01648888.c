
/* v8::internal::compiler::InstructionSequence::AddInstruction(v8::internal::compiler::Instruction*)
    */

undefined4 __thiscall
v8::internal::compiler::InstructionSequence::AddInstruction
          (InstructionSequence *this,Instruction *param_1)

{
  ulong uVar1;
  undefined4 uVar2;
  Zone *pZVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  ulong uVar7;
  
  uVar2 = *(undefined4 *)(this + 0xb8);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(this + 0x170);
  lVar6 = *(long *)(this + 0x88);
  uVar1 = 0;
  if (*(long *)(this + 0x90) - lVar6 != 0) {
    uVar1 = (*(long *)(this + 0x90) - lVar6) * 0x40 - 1;
  }
  uVar7 = *(long *)(this + 0xb8) + *(long *)(this + 0xb0);
  if (uVar1 == uVar7) {
    std::__ndk1::
    deque<v8::internal::compiler::Instruction*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>>
    ::__add_back_capacity
              ((deque<v8::internal::compiler::Instruction*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::Instruction*>>
                *)(this + 0x80));
    lVar6 = *(long *)(this + 0x88);
    uVar7 = *(long *)(this + 0xb0) + *(long *)(this + 0xb8);
  }
  *(Instruction **)(*(long *)(lVar6 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
       param_1;
  *(long *)(this + 0xb8) = *(long *)(this + 0xb8) + 1;
  if (((byte)param_1[7] >> 6 & 1) != 0) {
    pZVar3 = *(Zone **)(this + 8);
    puVar4 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar4) < 0x28) {
      puVar4 = (undefined8 *)Zone::NewExpand(pZVar3,0x28);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar4 + 5;
    }
    pZVar3 = *(Zone **)(this + 8);
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = pZVar3;
    puVar5 = *(undefined8 **)(pZVar3 + 0x10);
    if ((ulong)(*(long *)(pZVar3 + 0x18) - (long)puVar5) < 0x40) {
      puVar5 = (undefined8 *)Zone::NewExpand(pZVar3,0x40);
    }
    else {
      *(undefined8 **)(pZVar3 + 0x10) = puVar5 + 8;
    }
    *puVar4 = puVar5;
    puVar4[1] = puVar5;
    puVar4[2] = puVar5 + 8;
    *puVar5 = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    lVar6 = puVar4[1];
    puVar4[1] = lVar6 + 8;
    *(undefined8 *)(lVar6 + 8) = 0;
    *(undefined4 *)(puVar4 + 4) = uVar2;
    puVar4[1] = puVar4[1] + 8;
    *(undefined8 **)(param_1 + 0x18) = puVar4;
    lVar6 = *(long *)(this + 0xe0);
    uVar1 = 0;
    if (*(long *)(this + 0xe8) - lVar6 != 0) {
      uVar1 = (*(long *)(this + 0xe8) - lVar6) * 0x40 - 1;
    }
    uVar7 = *(long *)(this + 0x110) + *(long *)(this + 0x108);
    if (uVar1 == uVar7) {
      std::__ndk1::
      deque<v8::internal::compiler::ReferenceMap*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ReferenceMap*>>
      ::__add_back_capacity
                ((deque<v8::internal::compiler::ReferenceMap*,v8::internal::RecyclingZoneAllocator<v8::internal::compiler::ReferenceMap*>>
                  *)(this + 0xd8));
      lVar6 = *(long *)(this + 0xe0);
      uVar7 = *(long *)(this + 0x108) + *(long *)(this + 0x110);
    }
    *(undefined8 **)(*(long *)(lVar6 + (uVar7 >> 6 & 0x3fffffffffffff8)) + (uVar7 & 0x1ff) * 8) =
         puVar4;
    *(long *)(this + 0x110) = *(long *)(this + 0x110) + 1;
  }
  return uVar2;
}

