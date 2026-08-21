
/* void std::__ndk1::vector<v8::internal::compiler::PropertyAccessInfo,
   v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>
   >::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo>(v8::internal::compiler::PropertyAccessInfo&&)
    */

void __thiscall
std::__ndk1::
vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
::__push_back_slow_path<v8::internal::compiler::PropertyAccessInfo>
          (vector<v8::internal::compiler::PropertyAccessInfo,v8::internal::ZoneAllocator<v8::internal::compiler::PropertyAccessInfo>>
           *this,PropertyAccessInfo *param_1)

{
  ulong uVar1;
  undefined4 *puVar2;
  long lVar3;
  long lVar4;
  undefined4 uVar5;
  Zone *this_00;
  undefined4 *puVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar9 = *(long *)(this + 8) - *(long *)this >> 3;
  uVar1 = lVar9 * -0xf0f0f0f0f0f0f0f + 1;
  if (0xf0f0f0 < uVar1) {
                    /* WARNING: Subroutine does not return */
    abort();
  }
  lVar7 = *(long *)(this + 0x10) - *(long *)this >> 3;
  uVar8 = lVar7 * -0x1e1e1e1e1e1e1e1e;
  if (uVar1 <= uVar8) {
    uVar1 = uVar8;
  }
  if (0x787877 < (ulong)(lVar7 * -0xf0f0f0f0f0f0f0f)) {
    uVar1 = 0xf0f0f0;
  }
  if (uVar1 == 0) {
    lVar7 = 0;
  }
  else {
    this_00 = *(Zone **)(this + 0x18);
    uVar8 = uVar1 * 0x88;
    lVar7 = *(long *)(this_00 + 0x10);
    if (uVar8 < (ulong)(*(long *)(this_00 + 0x18) - lVar7) ||
        uVar8 - (*(long *)(this_00 + 0x18) - lVar7) == 0) {
      *(ulong *)(this_00 + 0x10) = lVar7 + uVar8;
    }
    else {
      lVar7 = v8::internal::Zone::NewExpand(this_00,uVar8);
    }
  }
  uVar5 = *(undefined4 *)param_1;
  puVar6 = (undefined4 *)(lVar7 + lVar9 * 8);
  *(undefined8 *)(puVar6 + 4) = 0;
  *(undefined8 *)(puVar6 + 6) = 0;
  *(undefined8 *)(puVar6 + 2) = 0;
  *puVar6 = uVar5;
  *(undefined8 *)(puVar6 + 8) = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(puVar6 + 2) = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(puVar6 + 4) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar6 + 6) = *(undefined8 *)(param_1 + 0x18);
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(puVar6 + 10) = 0;
  *(undefined8 *)(puVar6 + 0xc) = 0;
  *(undefined8 *)(puVar6 + 0xe) = 0;
  *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(puVar6 + 10) = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(puVar6 + 0xc) = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(puVar6 + 0xe) = *(undefined8 *)(param_1 + 0x38);
  uVar12 = *(undefined8 *)(param_1 + 0x78);
  uVar14 = *(undefined8 *)(param_1 + 0x70);
  uVar13 = *(undefined8 *)(param_1 + 0x68);
  uVar16 = *(undefined8 *)(param_1 + 0x60);
  uVar15 = *(undefined8 *)(param_1 + 0x58);
  uVar18 = *(undefined8 *)(param_1 + 0x50);
  uVar17 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(puVar6 + 0x20) = *(undefined8 *)(param_1 + 0x80);
  *(undefined8 *)(puVar6 + 0x1e) = uVar12;
  *(undefined8 *)(puVar6 + 0x1c) = uVar14;
  *(undefined8 *)(puVar6 + 0x1a) = uVar13;
  *(undefined8 *)(puVar6 + 0x18) = uVar16;
  *(undefined8 *)(puVar6 + 0x16) = uVar15;
  *(undefined8 *)(puVar6 + 0x14) = uVar18;
  *(undefined8 *)(puVar6 + 0x12) = uVar17;
  lVar9 = *(long *)this;
  lVar4 = *(long *)(this + 8);
  puVar2 = puVar6 + 0x22;
  lVar10 = lVar9;
  if (lVar4 != lVar9) {
    lVar10 = 0;
    do {
      lVar3 = lVar4 + lVar10;
      uVar5 = *(undefined4 *)(lVar3 + -0x88);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x78) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x70) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x80) = 0;
      *(undefined4 *)((long)puVar6 + lVar10 + -0x88) = uVar5;
      lVar11 = lVar10 + -0x88;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x68) = *(undefined8 *)(lVar3 + -0x68);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x80) = *(undefined8 *)(lVar3 + -0x80);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x78) = *(undefined8 *)(lVar3 + -0x78);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x70) = *(undefined8 *)(lVar3 + -0x70);
      *(undefined8 *)(lVar3 + -0x80) = 0;
      *(undefined8 *)(lVar3 + -0x78) = 0;
      *(undefined8 *)(lVar3 + -0x70) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x60) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x58) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x50) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x48) = *(undefined8 *)(lVar3 + -0x48);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x60) = *(undefined8 *)(lVar3 + -0x60);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x58) = *(undefined8 *)(lVar3 + -0x58);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x50) = *(undefined8 *)(lVar3 + -0x50);
      uVar12 = *(undefined8 *)(lVar3 + -0x20);
      uVar14 = *(undefined8 *)(lVar3 + -8);
      uVar13 = *(undefined8 *)(lVar3 + -0x10);
      uVar16 = *(undefined8 *)(lVar3 + -0x38);
      uVar15 = *(undefined8 *)(lVar3 + -0x40);
      uVar18 = *(undefined8 *)(lVar3 + -0x28);
      uVar17 = *(undefined8 *)(lVar3 + -0x30);
      *(undefined8 *)(lVar3 + -0x60) = 0;
      *(undefined8 *)(lVar3 + -0x58) = 0;
      *(undefined8 *)(lVar3 + -0x50) = 0;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x18) = *(undefined8 *)(lVar3 + -0x18);
      *(undefined8 *)((long)puVar6 + lVar10 + -0x20) = uVar12;
      *(undefined8 *)((long)puVar6 + lVar10 + -8) = uVar14;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x10) = uVar13;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x38) = uVar16;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x40) = uVar15;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x28) = uVar18;
      *(undefined8 *)((long)puVar6 + lVar10 + -0x30) = uVar17;
      lVar10 = lVar11;
    } while (lVar9 - lVar4 != lVar11);
    lVar9 = *(long *)this;
    puVar6 = (undefined4 *)((long)puVar6 + lVar11);
    lVar10 = *(long *)(this + 8);
  }
  *(undefined4 **)this = puVar6;
  *(undefined4 **)(this + 8) = puVar2;
  *(ulong *)(this + 0x10) = lVar7 + uVar1 * 0x88;
  while (lVar7 = lVar10, lVar7 != lVar9) {
    if (*(long *)(lVar7 + -0x60) != 0) {
      *(long *)(lVar7 + -0x58) = *(long *)(lVar7 + -0x60);
    }
    lVar10 = lVar7 + -0x88;
    if (*(long *)(lVar7 + -0x80) != 0) {
      *(long *)(lVar7 + -0x78) = *(long *)(lVar7 + -0x80);
    }
  }
  return;
}

