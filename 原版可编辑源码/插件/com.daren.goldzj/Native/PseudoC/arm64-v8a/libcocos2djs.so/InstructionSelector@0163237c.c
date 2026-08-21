
/* v8::internal::compiler::InstructionSelector::InstructionSelector(v8::internal::Zone*, unsigned
   long, v8::internal::compiler::Linkage*, v8::internal::compiler::InstructionSequence*,
   v8::internal::compiler::Schedule*, v8::internal::compiler::SourcePositionTable*,
   v8::internal::compiler::Frame*,
   v8::internal::compiler::InstructionSelector::EnableSwitchJumpTable, v8::internal::TickCounter*,
   unsigned long*, v8::internal::compiler::InstructionSelector::SourcePositionMode,
   v8::internal::compiler::InstructionSelector::Features,
   v8::internal::compiler::InstructionSelector::EnableScheduling,
   v8::internal::compiler::InstructionSelector::EnableRootsRelativeAddressing,
   v8::internal::PoisoningMitigationLevel,
   v8::internal::compiler::InstructionSelector::EnableTraceTurboJson) */

void __thiscall
v8::internal::compiler::InstructionSelector::InstructionSelector
          (InstructionSelector *this,Zone *param_1,ulong param_2,undefined8 param_3,long param_4,
          undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_9,
          undefined8 param_10,undefined8 param_11,undefined4 param_12,undefined4 param_13,
          undefined4 param_14,undefined4 param_15,undefined4 param_16,undefined4 param_17)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  Zone *pZVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  Zone *local_50;
  bool local_44 [4];
  
  *(Zone **)this = param_1;
  *(undefined8 *)(this + 8) = param_3;
  *(long *)(this + 0x10) = param_4;
  *(undefined8 *)(this + 0x18) = param_6;
  *(undefined8 *)(this + 0x28) = param_5;
  *(Zone **)(this + 0x50) = param_1;
  *(undefined8 *)(this + 0x38) = 0;
  *(undefined8 *)(this + 0x30) = 0;
  *(undefined8 *)(this + 0x48) = 0;
  *(undefined8 *)(this + 0x40) = 0;
  *(undefined4 *)(this + 0x20) = param_12;
  *(undefined4 *)(this + 0x24) = param_13;
  uVar5 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x58) = 0;
  *(undefined8 *)(this + 0x60) = 0;
  *(undefined8 *)(this + 0x68) = 0;
  *(undefined8 *)(this + 0x70) = uVar5;
  uVar5 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x78) = 0;
  *(undefined8 *)(this + 0x80) = 0;
  *(undefined8 *)(this + 0x88) = 0;
  *(undefined8 *)(this + 0x90) = uVar5;
  uVar5 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x98) = 0;
  *(undefined8 *)(this + 0xa0) = 0;
  *(undefined8 *)(this + 0xa8) = 0;
  *(undefined8 *)(this + 0xb0) = uVar5;
  local_44[0] = false;
  local_50 = param_1;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0xb8),param_2,local_44,
             (ZoneAllocator *)&local_50);
  local_44[0] = false;
  local_50 = param_1;
  std::__ndk1::vector<bool,v8::internal::ZoneAllocator<bool>>::vector
            ((vector<bool,v8::internal::ZoneAllocator<bool>> *)(this + 0xd8),param_2,local_44,
             (ZoneAllocator *)&local_50);
  *(undefined8 *)(this + 0xf8) = 0;
  *(undefined8 *)(this + 0x100) = 0;
  *(undefined8 *)(this + 0x108) = 0;
  *(Zone **)(this + 0x110) = param_1;
  if (param_2 == 0) {
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(Zone **)(this + 0x130) = param_1;
  }
  else {
    if (param_2 >> 0x1d != 0) {
                    /* WARNING: Subroutine does not return */
      abort();
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    uVar12 = param_2 * 4 + 7 & 0xfffffffffffffff8;
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < uVar12) {
      puVar3 = (undefined4 *)Zone::NewExpand(param_1,uVar12);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar12;
    }
    *(undefined4 **)(this + 0x108) = puVar3 + param_2;
    *(undefined4 **)(this + 0xf8) = puVar3;
    *(undefined4 **)(this + 0x100) = puVar3;
    uVar6 = param_2;
    do {
      *puVar3 = 0;
      uVar6 = uVar6 - 1;
      puVar3 = (undefined4 *)(*(long *)(this + 0x100) + 4);
      *(undefined4 **)(this + 0x100) = puVar3;
    } while (uVar6 != 0);
    *(undefined8 *)(this + 0x118) = 0;
    *(undefined8 *)(this + 0x120) = 0;
    *(undefined8 *)(this + 0x128) = 0;
    *(Zone **)(this + 0x130) = param_1;
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    if ((ulong)(*(long *)(param_1 + 0x18) - (long)puVar3) < uVar12) {
      puVar3 = (undefined4 *)Zone::NewExpand(param_1,uVar12);
    }
    else {
      *(ulong *)(param_1 + 0x10) = (long)puVar3 + uVar12;
    }
    *(undefined4 **)(this + 0x128) = puVar3 + param_2;
    *(undefined4 **)(this + 0x118) = puVar3;
    *(undefined4 **)(this + 0x120) = puVar3;
    uVar12 = param_2;
    do {
      *puVar3 = 0xffffffff;
      uVar12 = uVar12 - 1;
      puVar3 = (undefined4 *)(*(long *)(this + 0x120) + 4);
      *(undefined4 **)(this + 0x120) = puVar3;
    } while (uVar12 != 0);
  }
  lVar8 = *(long *)(this + 0x38);
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x140) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(Zone **)(this + 0x150) = param_1;
  *(undefined8 *)(this + 0x158) = 0;
  *(undefined8 *)(this + 0x170) = param_7;
  this[0x178] = (InstructionSelector)0x0;
  *(undefined4 *)(this + 0x160) = param_14;
  *(undefined4 *)(this + 0x164) = param_15;
  *(undefined4 *)(this + 0x168) = param_9;
  *(undefined4 *)(this + 0x16c) = param_16;
  uVar5 = *(undefined8 *)(param_4 + 8);
  *(undefined8 *)(this + 0x180) = 0;
  *(undefined8 *)(this + 0x188) = 0;
  *(undefined4 *)(this + 0x1a0) = param_17;
  *(undefined8 *)(this + 400) = 0;
  *(undefined8 *)(this + 0x198) = uVar5;
  *(undefined8 *)(this + 0x1a8) = param_10;
  *(undefined8 *)(this + 0x1b0) = param_11;
  if ((ulong)(*(long *)(this + 0x48) - lVar8 >> 3) < param_2) {
    pZVar7 = *(Zone **)(this + 0x50);
    lVar9 = *(long *)(this + 0x40);
    uVar12 = param_2 * 8;
    lVar4 = *(long *)(pZVar7 + 0x10);
    if (uVar12 < (ulong)(*(long *)(pZVar7 + 0x18) - lVar4) ||
        uVar12 - (*(long *)(pZVar7 + 0x18) - lVar4) == 0) {
      *(ulong *)(pZVar7 + 0x10) = lVar4 + uVar12;
    }
    else {
      lVar4 = Zone::NewExpand(pZVar7,uVar12);
    }
    puVar2 = *(undefined8 **)(this + 0x38);
    puVar11 = *(undefined8 **)(this + 0x40);
    puVar1 = (undefined8 *)(lVar4 + (lVar9 - lVar8 >> 3) * 8);
    puVar10 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar11;
    }
    *(undefined8 **)(this + 0x38) = puVar10;
    *(undefined8 **)(this + 0x40) = puVar1;
    *(ulong *)(this + 0x48) = lVar4 + param_2 * 8;
  }
  lVar8 = *(long *)(this + 0x58);
  if ((ulong)(*(long *)(this + 0x68) - lVar8 >> 3) < 5) {
    pZVar7 = *(Zone **)(this + 0x70);
    lVar9 = *(long *)(this + 0x60);
    lVar4 = *(long *)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar4) < 0x28) {
      lVar4 = Zone::NewExpand(pZVar7,0x28);
    }
    else {
      *(long *)(pZVar7 + 0x10) = lVar4 + 0x28;
    }
    puVar2 = *(undefined8 **)(this + 0x58);
    puVar11 = *(undefined8 **)(this + 0x60);
    puVar1 = (undefined8 *)(lVar4 + (lVar9 - lVar8 >> 3) * 8);
    puVar10 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar11;
    }
    *(undefined8 **)(this + 0x58) = puVar10;
    *(undefined8 **)(this + 0x60) = puVar1;
    *(long *)(this + 0x68) = lVar4 + 0x28;
  }
  lVar8 = *(long *)(this + 0x78);
  if ((ulong)(*(long *)(this + 0x88) - lVar8 >> 3) < 2) {
    pZVar7 = *(Zone **)(this + 0x90);
    lVar9 = *(long *)(this + 0x80);
    lVar4 = *(long *)(pZVar7 + 0x10);
    if ((ulong)(*(long *)(pZVar7 + 0x18) - lVar4) < 0x10) {
      lVar4 = Zone::NewExpand(pZVar7,0x10);
    }
    else {
      *(long *)(pZVar7 + 0x10) = lVar4 + 0x10;
    }
    puVar2 = *(undefined8 **)(this + 0x78);
    puVar11 = *(undefined8 **)(this + 0x80);
    puVar1 = (undefined8 *)(lVar4 + (lVar9 - lVar8 >> 3) * 8);
    puVar10 = puVar1;
    while (puVar11 != puVar2) {
      puVar11 = puVar11 + -1;
      puVar10 = puVar10 + -1;
      *puVar10 = *puVar11;
    }
    *(undefined8 **)(this + 0x78) = puVar10;
    *(undefined8 **)(this + 0x80) = puVar1;
    *(long *)(this + 0x88) = lVar4 + 0x10;
  }
  if (*(int *)(this + 0x1a0) == 1) {
    std::__ndk1::
    vector<std::__ndk1::pair<int,int>,v8::internal::ZoneAllocator<std::__ndk1::pair<int,int>>>::
    assign((vector<std::__ndk1::pair<int,int>,v8::internal::ZoneAllocator<std::__ndk1::pair<int,int>>>
            *)(this + 0x180),param_2,(pair *)&DAT_01a5734c);
  }
  return;
}

