
/* void std::__ndk1::vector<v8::internal::compiler::LoopTree::Loop,
   v8::internal::ZoneAllocator<v8::internal::compiler::LoopTree::Loop>
   >::__push_back_slow_path<v8::internal::compiler::LoopTree::Loop>(v8::internal::compiler::LoopTree::Loop&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::LoopTree::Loop,v8::internal::ZoneAllocator<v8::internal::compiler::LoopTree::Loop>>
::__push_back_slow_path<v8::internal::compiler::LoopTree::Loop>
          (vector<v8::internal::compiler::LoopTree::Loop,v8::internal::ZoneAllocator<v8::internal::compiler::LoopTree::Loop>>
           *this,Loop *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  long lVar6;
  Zone *this_00;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar12 = *(long *)(this + 8) - *(long *)this >> 6;
  uVar1 = lVar12 + 1;
  if (uVar1 >> 0x19 != 0) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar6 = *(long *)(this + 0x10) - *(long *)this;
  uVar8 = lVar6 >> 5;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0xfffffe < (ulong)(lVar6 >> 6)) {
    uVar1 = 0x1ffffff;
  }
  if (uVar1 == 0) {
    lVar6 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 0x40;
    lVar6 = *(long *)(this_00 + 0x10);
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar6) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar6) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar6 + uVar8;
    }
    else {
      lVar6 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
  }
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar9 = *(undefined8 *)param_1;
  puVar7 = (undefined8 *)(lVar6 + lVar12 * 0x40);
  puVar7[3] = 0;
  puVar7[4] = 0;
  *(undefined4 *)(puVar7 + 1) = uVar5;
  puVar7[2] = 0;
  *puVar7 = uVar9;
  puVar2 = puVar7 + 8;
  puVar7[5] = *(undefined8 *)(param_1 + 0x28);
  puVar7[2] = *(undefined8 *)(param_1 + 0x10);
  puVar7[3] = *(undefined8 *)(param_1 + 0x18);
  puVar7[4] = *(undefined8 *)(param_1 + 0x20);
  uVar9 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  puVar7[7] = *(undefined8 *)(param_1 + 0x38);
  puVar7[6] = uVar9;
  lVar12 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  lVar10 = lVar12;
  if (lVar4 != lVar12) {
    lVar10 = 0;
    do {
      lVar3 = lVar4 + lVar10;
      uVar9 = *(undefined8 *)(lVar3 + -0x40);
      uVar5 = *(undefined4 *)(lVar3 + -0x38);
      *(undefined8 *)((long)puVar7 + lVar10 + -0x28) = 0;
      *(undefined8 *)((long)puVar7 + lVar10 + -0x20) = 0;
      *(undefined8 *)((long)puVar7 + lVar10 + -0x30) = 0;
      *(undefined4 *)((long)puVar7 + lVar10 + -0x38) = uVar5;
      *(undefined8 *)((long)puVar7 + lVar10 + -0x40) = uVar9;
      lVar11 = lVar10 + -0x40;
      *(undefined8 *)((long)puVar7 + lVar10 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      *(undefined8 *)((long)puVar7 + lVar10 + -0x30) = *(undefined8 *)(lVar3 + -0x30);
      *(undefined8 *)((long)puVar7 + lVar10 + -0x28) = *(undefined8 *)(lVar3 + -0x28);
      *(undefined8 *)((long)puVar7 + lVar10 + -0x20) = *(undefined8 *)(lVar3 + -0x20);
      uVar9 = *(undefined8 *)(lVar3 + -0x10);
      *(undefined8 *)(lVar3 + -0x30) = 0;
      *(undefined8 *)(lVar3 + -0x28) = 0;
      *(undefined8 *)(lVar3 + -0x20) = 0;
      *(undefined8 *)((long)puVar7 + lVar10 + -8) = *(undefined8 *)(lVar3 + -8);
      *(undefined8 *)((long)puVar7 + lVar10 + -0x10) = uVar9;
      lVar10 = lVar11;
    } while (lVar12 - lVar4 != lVar11);
    lVar12 = *(long *)(this + 8);
    puVar7 = (undefined8 *)((long)puVar7 + lVar11);
    lVar10 = *(long *)this;
  }
  *(undefined8 **)this = puVar7;
  *(undefined8 **)(this + 8) = puVar2;
  *(ulong *)(this + 0x10) = lVar6 + uVar1 * 0x40;
  while (lVar6 = lVar12, lVar6 != lVar10) {
    lVar12 = lVar6 + -0x40;
    if (*(long *)(lVar6 + -0x30) != 0) {
      *(long *)(lVar6 + -0x28) = *(long *)(lVar6 + -0x30);
    }
  }
  return;
}

